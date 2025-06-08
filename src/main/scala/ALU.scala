import chisel3._
import chisel3.util.MuxCase

import scala.math._

class ALU(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val in0 = Input(UInt(xlen.W));
    val in1 = Input(UInt(xlen.W));
    val aluSel = Input(UInt(4.W));
    val isWide = Input(Bool())
    val out = Output(UInt(xlen.W));
  })

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


  val v = Wire(Vec(10, UInt(xlen.W)));

  v(0) := add;
  v(1) := sub;
  v(2) := sll;
  v(3) := srl;
  v(4) := sra;
  v(5) := slt;
  v(6) := sltu;
  v(7) := or;
  v(8) := and;
  v(9) := xor;

  io.out := v(io.aluSel);

}