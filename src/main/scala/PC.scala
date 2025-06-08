import chisel3._

class PC(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val exMemALUResult = Input(UInt(xlen.W))
    val branchStall = Input(Bool)
    val loadStall = Input(Bool)

    val pc = Output(UInt(xlen.W))
  })

  val pc = RegInit(0.U(xlen.W))

  when (io.branchStall) {
    pc := io.exMemALUResult
  } .elsewhen(io.loadStall) {
    pc := pc
  } .otherwise {
    pc := pc + 4
  }

  io.pc := pc
}
