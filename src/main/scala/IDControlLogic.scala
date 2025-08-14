import chisel3._
import chisel3.util._

import scala.math.log

class IDControlLogic (xlen: Int) extends Module {
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val instructionIn = Input(UInt(32.W));
    val pcIn = Input(UInt(xlen.W))

    val instruction = Output(UInt(32.W))
    val pc = Output(UInt(xlen.W))
    val rs1 = Output(UInt(regBits.W))
    val rs2 = Output(UInt(regBits.W))
    val rd = Output(UInt(regBits.W))
    val aluSel = Output(UInt(4.W))
    val aluSigned = Output(Bool())
    val isWide = Output(Bool())
    val aSel = Output(Bool())
    val bSel = Output(Bool())
    val isBranch = Output(Bool())
    val brCmpMode = Output(UInt(3.W))
    val isJump = Output(Bool())
    val regfileWEn = Output(Bool())
    val memRW = Output(Bool())
    val wbSel = Output(UInt(3.W))
    val memAccessLength = Output(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val memRdMode = Output(Bool())
    val csrOffset = Output(UInt(12.W))
    val csrWEn = Output(Bool())
    val csrImm = Output(Bool())

  })

  io.instruction := io.instructionIn
  io.pc := io.pcIn;
  io.rs1 := io.instructionIn(19, 15)
  io.rs2 := io.instructionIn(24, 20)
  io.rd := io.instructionIn(11, 7)
  io.aluSel := 0.U
  io.aluSigned := false.B
  io.isWide := false.B
  io.aSel := 0.U
  io.bSel := 0.U
  io.isBranch := 0.U
  io.brCmpMode := 0.U
  io.isJump := 0.U
  io.regfileWEn := 0.U
  io.memRW := 0.U
  io.wbSel := 0.U
  io.memAccessLength := 0.U
  io.memRdMode := 0.U
  io.csrOffset := 0.U
  io.csrWEn := 0.U
  io.csrImm := io.instructionIn(14)

  val opcode = Opcode(io.instructionIn(6, 0))
  val funct3 = io.instructionIn(14, 12)

  switch (opcode) {
    is (Opcode.ITypeArith) {
      io.aluSel := funct3
      io.aluSigned := io.instructionIn(30)
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 1.U
      io.regfileWEn := true.B
    }
    is (Opcode.ITypeWide) {
      io.aluSel := funct3
      io.aluSigned := io.instructionIn(30)
      io.isWide := true.B
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 1.U
      io.regfileWEn := true.B
    }
    is (Opcode.RType) {
      io.aluSel := funct3
      io.aluSigned := io.instructionIn(30)
      io.aSel := 0.U
      io.bSel := 0.U
      io.wbSel := 1.U
      io.regfileWEn := true.B
    }
    is (Opcode.ITypeLoad) {
      io.aluSel := ALUFunct3.add.asUInt
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 1.U
      io.regfileWEn := true.B
      io.memAccessLength := 1.U << funct3(1,0)
      io.memRdMode := funct3(2)
    }
    is (Opcode.SType) {
      io.aluSel := ALUFunct3.add.asUInt
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 0.U
      io.memAccessLength := 1.U << funct3(1,0)
      io.memRdMode := 0.U
    }
    is (Opcode.BType) {
      io.aluSel := ALUFunct3.add.asUInt;
      io.aSel := 1.U
      io.bSel := 1.U
      io.isBranch := true.B
      io.brCmpMode := BranchFunct3(funct3).asUInt
      io.wbSel := 2.U
    }
    is (Opcode.JType) {
      io.aluSel := ALUFunct3.add.asUInt;
      io.aSel := 1.U
      io.bSel := 1.U
      io.isJump := true.B
      io.wbSel := 2.U
      io.regfileWEn := true.B
    }
    is (Opcode.ITypeJump) {
      io.aluSel := ALUFunct3.add.asUInt;
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 2.U
      io.isJump := true.B
      io.regfileWEn := true.B
    }
    is (Opcode.UTypeLUI) {
      io.aluSel := ALUFunct3.selB.asUInt;
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 1.U
      io.regfileWEn := true.B
    }
    is (Opcode.UTypeAUIPC) {
      io.aluSel := ALUFunct3.add.asUInt;
      io.aSel := 1.U
      io.bSel := 1.U
      io.wbSel := 1.U
      io.regfileWEn := true.B
    }
    is (Opcode.CSRType) {
      io.aluSel := ALUFunct3.add.asUInt
      io.aSel := 0.U
      io.bSel := 1.U
      io.wbSel := 3.U
      io.csrOffset := io.instructionIn(31, 20)
      io.csrWEn := true.B
      io.regfileWEn := true.B
    }
  }



}