import chisel3._
import chisel3.util._

class ImmGen(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val instruction = Input(UInt(32.W));
    val out = Output(SInt(xlen.W));
  })

  val iTypeImmediate = Cat(Fill(20, io.instruction(31)), io.instruction(31, 20)).asSInt
  val sTypeImmediate = Cat(Fill(20, io.instruction(31)), io.instruction(31, 25), io.instruction(11, 7)).asSInt
  val bTypeImmediate = Cat(Fill(19, io.instruction(31)), io.instruction(7), io.instruction(30, 25), io.instruction(11, 8), "b0".U(1.W)).asSInt
  val uTypeImmediate = Cat(io.instruction(31, 12), 0.U(12.W)).asSInt
  val jTypeImmediate = Cat(Fill(11, io.instruction(31)), io.instruction(19, 12), io.instruction(20), io.instruction(30, 21), "b0".U(1.W)).asSInt
  val csrTypeImmediate = Cat(Fill(5, io.instruction(19, 15))).asSInt

  val immediate = Wire(SInt(xlen.W))
  val opcode = io.instruction(6, 0)

  immediate := 0.S
  switch (opcode) {
    is(Opcode.ITypeArith.asUInt) {
      // i-type (arithmetic)
      immediate := iTypeImmediate
    }
    is(Opcode.ITypeWide.asUInt) {
      // i-type (wide)
      immediate := iTypeImmediate
    }
    is(Opcode.ITypeLoad.asUInt) {
      // i-type (loads)
      immediate := iTypeImmediate
    }
    is(Opcode.SType.asUInt) {
      // s-type
      immediate := sTypeImmediate
    }
    is(Opcode.BType.asUInt) {
      // b-type
      immediate := bTypeImmediate
    }
    is(Opcode.UTypeLUI.asUInt) {
      // u-type (lui)
      immediate := uTypeImmediate
    }
    is(Opcode.UTypeAUIPC.asUInt) {
      // u-type (auipc)
      immediate := uTypeImmediate
    }
    is(Opcode.JType.asUInt) {
      // j-type
      immediate := jTypeImmediate
    }
    is(Opcode.ITypeJump.asUInt) {
      // i-type
      immediate := iTypeImmediate
    }
    is(Opcode.CSRType.asUInt) {
      // csr type
      immediate := csrTypeImmediate
    }
  }

  io.out := immediate
}