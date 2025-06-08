import chisel3._
import chisel3.util.experimental.loadMemoryFromFile

class IMEM(w: Int) extends Module{
  val io = IO(new Bundle {
    val addr = Input(UInt(32.W));
    val instruction = Output(UInt(32.W));
  })

  val imem = Mem(w, UInt(32.W))
  loadMemoryFromFile(imem, "test.hex")
  io.instruction := imem(io.addr >> 2.U)
  //  println(io.instruction.litValue)
}