import chisel3._

class BranchHazardUnit extends Module {
  val io = IO(new Bundle {
    val branchTaken = Input(Bool)
    val exMemIsJump = Input(Bool)
    val branchStall = Output(Bool)
  })

  io.branchStall := io.branchTaken & io.exMemIsJump
}
