import chisel3._

import scala.math.log
class CSRFile(size: Int, xlen: Int) extends Module {
  val io = IO(new Bundle {
    val addr = Input(UInt((log(size)/log(2)).toInt.W))
    val wdEn = Input(Bool())
    val wdData = Input(UInt(xlen.W))
    val debugAddr = Input(UInt((log(size)/log(2)).toInt.W))

    val rdOut =  Output(UInt(xlen.W))
    val debugCsr = Output(UInt(xlen.W))
  })
  val reg = RegInit(0.U(xlen.W))

  io.rdOut := reg
  io.debugCsr := reg

  when(io.wdEn) {
    reg := io.wdData
  }
}