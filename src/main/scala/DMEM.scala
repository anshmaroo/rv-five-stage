import chisel3._
import chisel3.util._
import scala.math._

class DMEM (xlen:Int, w: Int) extends Module {
  val io = IO(new Bundle {
    val wdData = Input(UInt(xlen.W))
    val wdEn = Input(Bool())
    val addr = Input(UInt(xlen.W))
    val length = Input(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val rdMode = Input(Bool())
    val rdData = Output(UInt(xlen.W))
  })

  val dmem = Mem(w, UInt(8.W))

  when (io.wdEn) {
    dmem(io.addr) := io.wdData & 0xff.U;
    when (io.length >= 2.U) {
      dmem(io.addr + 1.U) := (io.wdData >> 8) & 0xff.U;
    }

    when (io.length >= 4.U) {
      dmem(io.addr + 2.U) := (io.wdData >> 16) & 0xff.U;
      dmem(io.addr + 3.U) := (io.wdData >> 24) & 0xff.U;
    }

    when (io.length === 8.U) {
      dmem(io.addr + 4.U) := (io.wdData >> 32) & 0xff.U;
      dmem(io.addr + 5.U) := (io.wdData >> 40) & 0xff.U;
      dmem(io.addr + 6.U) := (io.wdData >> 48) & 0xff.U
      dmem(io.addr + 7.U) := (io.wdData >> 56) & 0xff.U;
    }
  }


  // get the right number of bytes
  val bytes = Wire(Vec(xlen, UInt(8.W)))
  for (i <- 0 until xlen) {
    bytes(i) := dmem(io.addr + i.U)
  }
  val byte = bytes(0)
  val halfword = bytes(1) << 8 | bytes(0)
  val word = bytes(3) << 24 | bytes(2) << 16 | bytes(1) << 8 | bytes(0)
  val doubleword = bytes(7) << 56 | bytes(6) << 48 | bytes(5) << 40 | bytes(4) << 32| bytes(3) << 24 | bytes(2) << 16 | bytes(1) << 8 | bytes(0)
  io.rdData := MuxCase(0xDEADBEEFL.U, Array(
    (io.length === 1.U) -> Mux(io.rdMode, byte.asSInt.pad(xlen).asUInt, byte.pad(xlen)),
    (io.length === 2.U) -> Mux(io.rdMode, halfword.asSInt.pad(xlen).asUInt, halfword.pad(xlen)),
    (io.length === 4.U) -> Mux(io.rdMode, word.asSInt.pad(xlen).asUInt, word.pad(xlen)),
    (io.length === 8.U) -> doubleword
  )
  )

}