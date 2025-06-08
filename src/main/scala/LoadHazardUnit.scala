import chisel3._
import chisel3.util._
import scala.math.log

class LoadHazardUnit(xlen: Int) extends Module {
  // outputs a signal that can be used to select stage register instructions and PC select
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val exMemRd = Input(UInt(regBits.W))
    val exMemRegWEn = Input(Bool)
    val exMemWBSel = Input(UInt(2.W))
    val idExRs1 = Input(UInt(regBits.W))
    val idExRs2 = Input(UInt(regBits.W))

    val loadStall = Output(Bool)
  })

  when ((io.exMemRd === io.idExRs1 | io.exMemRd === io.idExRs2) & io.exMemRegWEn & io.exMemWBSel === 0.U) {
    io.loadStall := 1.U
  } .otherwise {
    io.loadStall := 0.U
  }

}
