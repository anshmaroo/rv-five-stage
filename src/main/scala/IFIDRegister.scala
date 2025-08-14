import chisel3._
class IFIDRegister(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val instructionIn = Input(UInt(32.W))
    val pcIn = Input(UInt(xlen.W))

    val instruction = Output(UInt(32.W))
    val pc = Output(UInt(xlen.W))

    val regWEn = Input(Bool())
    val flush = Input(Bool())
  })

  val instruction = RegInit(0.U(32.W))
  val pc = RegInit(0.U(xlen.W))
  when (io.flush) {
    instruction := 0x13.U;
  } .elsewhen(io.regWEn) {
    instruction := io.instructionIn
    pc := io.pcIn
  }

  io.instruction := instruction
  io.pc := pc

  def initSinks(): Unit = {
    io.instructionIn := 0.U
    io.pcIn := 0.U
    io.regWEn := 0.U
    io.flush := 0.U
  }
}
