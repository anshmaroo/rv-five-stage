import chisel3._

class PC(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val reset = Input(Bool())
    val exALUResult = Input(UInt(xlen.W))
    val branchStall = Input(Bool())
    val loadStall = Input(Bool())

    val pc = Output(UInt(xlen.W))
  })

  val pc = RegInit(0.U(xlen.W))

  when (io.reset) {
    pc := 0.U
  } .elsewhen (io.branchStall) {
    pc := io.exALUResult
  } .elsewhen(!io.loadStall) {
    pc := pc + 4.U
  }

  io.pc := pc


}
