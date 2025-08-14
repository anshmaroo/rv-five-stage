import chisel3._

import scala.math.log
class ExMemRegister(xlen: Int) extends Module {
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val pcIn = Input(UInt(xlen.W))
    val rs1DataIn = Input(UInt(xlen.W))
    val rs2DataIn = Input(UInt(xlen.W))
    val immIn = Input(UInt(xlen.W))
    val aluResultIn = Input(UInt(xlen.W))
    val rdIn = Input(UInt(regBits.W))
    val regfileWEnIn = Input(Bool())
    val memRWIn = Input(Bool())
    val wbSelIn = Input(UInt(2.W))
    val memAccessLengthIn = Input(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val memRdModeIn = Input(Bool())
    val csrOffsetIn = Input(UInt(12.W))
    val csrWEnIn = Input(Bool())
    val csrImmIn = Input(Bool())

    val pc = Output(UInt(xlen.W))
    val rs1Data = Output(UInt(xlen.W))
    val rs2Data = Output(UInt(xlen.W))
    val imm = Output(UInt(xlen.W))
    val aluResult = Output(UInt(xlen.W))
    val rd = Output(UInt(regBits.W))
    val regfileWEn = Output(Bool())
    val memRW = Output(Bool())
    val wbSel = Output(UInt(2.W))
    val memAccessLength = Output(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val memRdMode = Output(Bool())
    val csrOffset = Output(UInt(12.W))
    val csrWEn = Output(Bool())
    val csrImm = Output(Bool())

    val regWEn = Input(Bool())
    val flush = Input(Bool())
  })

  val pc = RegInit(0.U(xlen.W))
  val rs1Data = RegInit(0.U(xlen.W))
  val rs2Data = RegInit(0.U(xlen.W))
  val imm = RegInit(0.U(xlen.W))
  val aluResult = RegInit(0.U(xlen.W))
  val rd = RegInit(0.U(regBits.W))
  val regfileWEn = RegInit(0.U(1.W))
  val memRW = RegInit(0.U(1.W))
  val wbSel = RegInit(0.U(2.W))
  val memAccessLength = RegInit(0.U((log(xlen / 8)/log(2) + 1).toInt.W))
  val memRdMode = RegInit(0.U(1.W))
  val csrOffset = RegInit(0.U(12.W))
  val csrWEn = RegInit(0.U(1.W))
  val csrImm = RegInit(0.U(1.W))


  when (io.flush) {
    regfileWEn := 0.U
    memRW := 0.U
    wbSel := 1.U
  } .elsewhen (io.regWEn) {
    pc := io.pcIn
    rs1Data := io.rs1DataIn
    rs2Data := io.rs2DataIn
    imm := io.immIn
    aluResult := io.aluResultIn
    rd := io.rdIn
    regfileWEn := io.regfileWEnIn
    memRW := io.memRWIn
    wbSel := io.wbSelIn
    memAccessLength := io.memAccessLengthIn
    memRdMode := io.memRdModeIn
    csrOffset := io.csrOffsetIn
    csrWEn := io.csrWEnIn
    csrImm := io.csrImmIn
  }

  io.pc := pc
  io.rs1Data := rs1Data
  io.rs2Data := rs2Data
  io.imm := imm
  io.aluResult := aluResult
  io.rd := rd
  io.regfileWEn := regfileWEn
  io.memRW := memRW
  io.wbSel := wbSel
  io.memAccessLength := memAccessLength
  io.memRdMode := memRdMode
  io.csrOffset := csrOffset
  io.csrWEn := csrWEn
  io.csrImm := csrImm

  def initSinks(): Unit = {
    io.flush := 0.U
    io.regWEn := 0.U

    io.pcIn := 0.U
    io.rs1DataIn := 0.U
    io.rs2DataIn := 0.U
    io.immIn := 0.U
    io.aluResultIn := 0.U
    io.rdIn := 0.U
    io.regfileWEnIn := 0.U
    io.memRWIn := 0.U
    io.wbSelIn := 0.U
    io.memAccessLengthIn := 0.U
    io.memRdModeIn := 0.U
    io.csrOffsetIn := 0.U
    io.csrWEnIn := 0.U
    io.csrImmIn := 0.U
  }
}
