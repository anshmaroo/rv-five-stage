import chisel3._
import scala.math.log

class IDExRegister(xlen: Int) extends Module {
  val regBits = (log(xlen)/log(2)).toInt;
  val io = IO(new Bundle {
    // register controls
    val flush = Input(Bool())
    val regWEn = Input(Bool())

    val pcIn = Input(UInt(xlen.W))
    val rs1In = Input(UInt(regBits.W))
    val rs2In = Input(UInt(regBits.W))
    val rs1DataIn = Input(UInt(xlen.W))
    val rs2DataIn = Input(UInt(xlen.W))
    val immIn = Input(UInt(xlen.W))
    val rdIn = Input(UInt(regBits.W))
    val regfileWEnIn = Input(Bool())
    val aluSelIn = Input(UInt(4.W))
    val aluSignedIn = Input(Bool())
    val isWideIn = Input(Bool())
    val aSelIn = Input(Bool())
    val bSelIn = Input(Bool())
    val isBranchIn = Input(Bool())
    val brCmpModeIn = Input(UInt(3.W))
    val isJumpIn = Input(Bool())
    val memRWIn = Input(Bool())
    val wbSelIn = Input(UInt(2.W))
    val csrOffsetIn = Input(UInt(12.W))
    val csrWEnIn = Input(Bool())
    val csrImmIn = Input(Bool())


    val pc = Output(UInt(xlen.W))
    val rs1 = Output(UInt(regBits.W))
    val rs2 = Output(UInt(regBits.W))
    val rs1Data = Output(UInt(xlen.W))
    val rs2Data = Output(UInt(xlen.W))
    val imm = Output(UInt(xlen.W))
    val rd = Output(UInt(regBits.W))
    val aluSel = Output(UInt(4.W))
    val aluSigned = Output(Bool())
    val isWide = Output(Bool())
    val aSel = Output(Bool())
    val bSel = Output(Bool())
    val isBranch = Output(Bool())
    val brCmpMode = Output(UInt(3.W))
    val isJump = Output(Bool())
    val memRW = Output(Bool())
    val wbSel = Output(UInt(2.W))
    val regfileWEn = Output(Bool())
    val csrOffset = Output(UInt(12.W))
    val csrWEn = Output(Bool())
    val csrImm = Output(Bool())

  })

  val pc = RegInit(0.U(xlen.W))
  val rs1 = RegInit(0.U(regBits.W))
  val rs2 = RegInit(0.U(regBits.W))
  val rs1Data = RegInit(0.U(xlen.W))
  val rs2Data = RegInit(0.U(xlen.W))
  val imm = RegInit(0.U(xlen.W))
  val rd = RegInit(0.U(regBits.W))
  val regfileWEn = RegInit(0.U(1.W))
  val aluSel = RegInit(0.U(4.W))
  val aluSigned = RegInit(0.U(1.W))
  val isWide = RegInit(0.U(1.W))
  val aSel = RegInit(0.U(1.W))
  val bSel = RegInit(0.U(1.W))
  val isBranch = RegInit(0.U(1.W))
  val brCmpMode = RegInit(0.U(3.W))
  val isJump = RegInit(0.U(1.W))
  val memRW = RegInit(0.U(1.W))
  val wbSel = RegInit(0.U(3.W))
  val csrOffset = RegInit(0.U(12.W))
  val csrWEn = RegInit(0.U(1.W))
  val csrImm = RegInit(0.U(1.W))


  when (io.flush) {
    regfileWEn := 0.U
    csrWEn := 0.U
    memRW := 0.U
    isBranch := 0.U
    isJump := 0.U
  } .elsewhen (io.regWEn) {
    pc := io.pcIn
    rs1 := io.rs1In
    rs2 := io.rs2In
    rs1Data := io.rs1DataIn
    rs2Data := io.rs2DataIn
    imm := io.immIn
    rd := io.rdIn
    regfileWEn := io.regfileWEnIn
    aluSel := io.aluSelIn
    aluSigned := io.aluSignedIn
    isWide := io.isWideIn
    aSel := io.aSelIn
    bSel := io.bSelIn
    isBranch := io.isBranchIn
    brCmpMode := io.brCmpModeIn
    isJump := io.isJumpIn
    memRW := io.memRWIn
    wbSel := io.wbSelIn
    csrOffset := io.csrOffsetIn
    csrWEn := io.csrWEnIn
    csrImm := io.csrImmIn
  }

  io.pc := pc
  io.rs1 := rs1
  io.rs2 := rs2
  io.rs1Data := rs1Data
  io.rs2Data := rs2Data
  io.imm := imm
  io.rd := rd
  io.regfileWEn := regfileWEn
  io.aluSel := aluSel
  io.aluSigned := aluSigned
  io.isWide := isWide
  io.aSel := aSel
  io.bSel := bSel
  io.isBranch := isBranch
  io.brCmpMode := brCmpMode
  io.isJump := isJump
  io.memRW := memRW
  io.wbSel := wbSel
  io.csrOffset := csrOffset
  io.csrWEn := csrWEn
  io.csrImm := csrImm


  def initSinks(): Unit = {
    io.flush := 0.U
    io.regWEn := 0.U

    io.pcIn := 0.U
    io.rs1In := 0.U
    io.rs2In := 0.U
    io.rs1DataIn := 0.U
    io.rs2DataIn := 0.U
    io.immIn := 0.U
    io.rdIn := 0.U
    io.regfileWEnIn := 0.U
    io.aluSelIn := 0.U
    io.aluSignedIn := 0.U
    io.isWideIn := 0.U
    io.aSelIn := 0.U
    io.bSelIn := 0.U
    io.isBranchIn := 0.U
    io.brCmpModeIn := 0.U
    io.isJumpIn := 0.U
    io.memRWIn := 0.U
    io.wbSelIn := 0.U
    io.csrOffsetIn := 0.U
    io.csrWEnIn := 0.U
    io.csrImmIn := 0.U
  }
}
