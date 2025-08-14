import scala.math.log
import chisel3._

class MemWbRegister(xlen: Int) extends Module {
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val pcIn = Input(UInt(xlen.W))
    val aluResultIn = Input(UInt(xlen.W))
    val memRdDataIn = Input(UInt(xlen.W))
    val rdIn = Input(UInt(regBits.W))
    val regfileWEnIn = Input(Bool())
    val wbSelIn = Input(UInt(2.W))

    val pc = Output(UInt(xlen.W))
    val aluResult = Output(UInt(xlen.W))
    val memRdData = Output(UInt(xlen.W))
    val rd = Output(UInt(regBits.W))
    val regfileWEn = Output(Bool())
    val wbSel = Output(UInt(2.W))
  })

  val pc = RegInit(0.U(xlen.W))
  val aluResult = RegInit(0.U(xlen.W))
  val memRdData = RegInit(0.U(xlen.W))
  val rd = RegInit(0.U(regBits.W))
  val regfileWEn = RegInit(0.U(1.W))
  val wbSel = RegInit(0.U(2.W))

  pc := io.pcIn
  aluResult := io.aluResultIn
  memRdData := io.memRdDataIn
  rd := io.rdIn
  regfileWEn := io.regfileWEnIn
  wbSel := io.wbSelIn

  io.pc := pc
  io.aluResult := aluResult
  io.memRdData := memRdData
  io.rd := rd
  io.regfileWEn := regfileWEn
  io.wbSel := wbSel

  def initSinks(): Unit = {
    io.pcIn := 0.U
    io.aluResultIn := 0.U
    io.memRdDataIn := 0.U
    io.rdIn := 0.U
    io.regfileWEnIn := 0.U
    io.wbSelIn := 0.U
  }
}
