import chisel3._
import scala.math.log

class LoadHazardUnit(xlen: Int) extends Module {
  // outputs a signal that can be used to select stage register instructions and PC select
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val exMemRd = Input(UInt(regBits.W))
    val exMemRegfileWEn = Input(Bool())
    val exMemWbSel = Input(UInt(2.W))
    val IDExRs1 = Input(UInt(regBits.W))
    val IDExRs2 = Input(UInt(regBits.W))

    val loadStall = Output(Bool())
  })

  when ((io.exMemRd === io.IDExRs1 | io.exMemRd === io.IDExRs2) & io.exMemRegfileWEn & io.exMemWbSel === 0.U) {
    io.loadStall := 1.U
  } .otherwise {
    io.loadStall := 0.U
  }

}
