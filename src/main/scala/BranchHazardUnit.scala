import chisel3._

class BranchHazardUnit extends Module {
  val io = IO(new Bundle {
    val branchTaken = Input(Bool())
    val IDEXIsBranch = Input(Bool())
    val IDEXIsJump = Input(Bool())
    val branchStall = Output(Bool())
  })

  io.branchStall := (io.IDEXIsBranch & io.branchTaken) | io.IDEXIsJump
}
