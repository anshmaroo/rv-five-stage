import chisel3._
import chisel3.util._
import scala.math._

class ForwardingUnit(xlen: Int) extends Module {
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val exMemRd = Input(UInt(regBits.W))
    val exMemWbSel = Input(UInt(2.W))
    val exMemALUOut = Input(UInt(xlen.W))

    val memWbRd = Input(UInt(regBits.W))
    val memWbOut = Input(UInt(xlen.W))

    val idExRs1 = Input(UInt(regBits.W))
    val idExRs2 = Input(UInt(regBits.W))

    val idExRs1Out = Input(UInt(xlen.W))
    val idExRs2Out = Input(UInt(xlen.W))

    val rs1Out = Output(UInt(xlen.W))
    val rs2Out = Output(UInt(xlen.W))
  })

  when ((io.exMemRd === io.idExRs1) && (io.exMemWbSel === 1.U)) {
    io.rs1Out := io.exMemALUOut
  } .elsewhen (io.memWbRd === io.idExRs1) {
    io.rs1Out := io.memWbOut
  } .otherwise {
    io.rs1Out := io.idExRs1Out
  }

  when ((io.exMemRd === io.idExRs2) && (io.exMemWbSel === 1.U)) {
    io.rs2Out := io.exMemALUOut
  } .elsewhen (io.memWbRd === io.idExRs2) {
    io.rs2Out := io.memWbOut
  } .otherwise {
    io.rs2Out := io.idExRs2Out
  }
}
