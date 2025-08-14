import chisel3._
import scala.math._

class ForwardingUnit(xlen: Int) extends Module {
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    val exMemRd = Input(UInt(regBits.W))
    val exMemWbSel = Input(UInt(2.W))
    val exMemALUOut = Input(UInt(xlen.W))

    val memWbRd = Input(UInt(regBits.W))
    val memWbSel = Input(UInt(2.W))
    val memWbOut = Input(UInt(xlen.W))

    val idExRs1 = Input(UInt(regBits.W))
    val idExRs2 = Input(UInt(regBits.W))

    val idExRs1Data = Input(UInt(xlen.W))
    val idExRs2Data = Input(UInt(xlen.W))

    val rs1DataOut = Output(UInt(xlen.W))
    val rs2DataOut = Output(UInt(xlen.W))
  })

  when ((io.exMemRd === io.idExRs1) && (io.exMemWbSel === 1.U)) {
    io.rs1DataOut := io.exMemALUOut
  } .elsewhen ((io.memWbRd === io.idExRs1) && (io.memWbSel === 1.U)) {
    io.rs1DataOut := io.memWbOut
  } .otherwise {
    io.rs1DataOut := io.idExRs1Data
  }

  when ((io.exMemRd === io.idExRs2) && (io.exMemWbSel === 1.U)) {
    io.rs2DataOut := io.exMemALUOut
  } .elsewhen ((io.memWbRd === io.idExRs2) && (io.memWbSel === 1.U)) {
    io.rs2DataOut := io.memWbOut
  } .otherwise {
    io.rs2DataOut := io.idExRs2Data
  }
}
