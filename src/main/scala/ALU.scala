import chisel3._
import chisel3.util._

import scala.math._

class ALU(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val in0 = Input(UInt(xlen.W));
    val in1 = Input(UInt(xlen.W));
    val aluSel = Input(UInt(ALUFunct3.getWidth.W));
    val signed = Input(Bool())
    val isWide = Input(Bool())
    val out = Output(UInt(xlen.W));
  })

  io.out := 0.U

  var numShiftBits = (log(xlen) / log(2)).toInt - 1;

  val add = MuxCase(io.in0 + io.in1, Array(
    (io.isWide) -> (io.in0 + io.in1)(31, 0).asSInt.pad(xlen).asUInt
  )
  )
  val sub = MuxCase(io.in0 - io.in1, Array(
    (io.isWide) -> (io.in0 - io.in1)(31, 0).asSInt.pad(xlen).asUInt
  )
  )

  val sll = MuxCase(io.in0 << io.in1(numShiftBits, 0), Array(
    (io.isWide) -> (io.in0 << io.in1(4, 0))(31, 0).asSInt.pad(xlen).asUInt
  )
  )
  val srl = MuxCase(io.in0 >> io.in1(numShiftBits, 0), Array(
    (io.isWide) -> (io.in0 >> io.in1(4, 0))(31, 0).asSInt.pad(xlen).asUInt
  )
  )
  val sra = MuxCase((io.in0.asSInt >> io.in1(numShiftBits, 0)).asUInt, Array(
    (io.isWide) -> (io.in0.asSInt >> io.in1(4, 0))(31, 0).asSInt.pad(xlen).asUInt
  )
  )

  val slt = (io.in0.asSInt < io.in1.asSInt).asUInt;
  val sltu = io.in0 < io.in1;
  val or = io.in0 | io.in1;
  val and = io.in0 & io.in1;
  val xor = io.in0 ^ io.in1;


  switch(io.aluSel.asUInt) {
    is (ALUFunct3.add.asUInt) {
      when (io.signed) {
        io.out := sub
      } .otherwise {
        io.out := add
      }
    }

    is (ALUFunct3.sll.asUInt) {
      io.out := sll
    }

    is (ALUFunct3.slt.asUInt) {
      io.out := slt
    }

    is (ALUFunct3.sltu.asUInt) {
      io.out := sltu
    }

    is (ALUFunct3.xor.asUInt) {
      io.out := xor
    }

    is (ALUFunct3.sr.asUInt) {
      when (io.signed) {
        io.out := sra
      } .otherwise {
        io.out := srl
      }
    }

    is (ALUFunct3.or.asUInt) {
      io.out := or
    }

    is (ALUFunct3.and.asUInt) {
      io.out := and
    }

    is (ALUFunct3.selB.asUInt) {
      io.out := io.in1
    }
  }

}