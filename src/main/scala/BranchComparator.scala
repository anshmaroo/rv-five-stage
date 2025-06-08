import chisel3._
import chisel3.util._
class BranchComparator(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val in0 = Input(UInt(xlen.W))
    val in1 = Input(UInt(xlen.W))
    val cmpMode = Input(UInt(3.W)) // six branch modes, determined by funct3

    val branchTaken = Output(Bool())
  })

  io.branchTaken := false.B
  switch (io.cmpMode) {
    is (0b000.U) {
      io.branchTaken := io.in0 === io.in1
    }

    is (0b001.U) {
      io.branchTaken := io.in0 =/= io.in1
    }

    is (0b100.U) {
      io.branchTaken := io.in0.asSInt < io.in1.asSInt
    }

    is (0b110.U) {
      io.branchTaken := io.in0 < io.in1
    }

    is (0b101.U) {
      io.branchTaken := io.in0.asSInt >= io.in1.asSInt
    }

    is (0b111.U) {
      io.branchTaken := io.in0 >= io.in1
    }


  }

}