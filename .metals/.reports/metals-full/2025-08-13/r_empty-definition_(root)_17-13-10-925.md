file://<WORKSPACE>/src/main/scala/Pipeline.scala
empty definition using pc, found symbol in pc: 
semanticdb not found
empty definition using fallback
non-local guesses:
	 -chisel3/pc/initSinks.
	 -chisel3/pc/initSinks#
	 -chisel3/pc/initSinks().
	 -chisel3/util/pc/initSinks.
	 -chisel3/util/pc/initSinks#
	 -chisel3/util/pc/initSinks().
	 -pc/initSinks.
	 -pc/initSinks#
	 -pc/initSinks().
	 -scala/Predef.pc.initSinks.
	 -scala/Predef.pc.initSinks#
	 -scala/Predef.pc.initSinks().
offset: 1044
uri: file://<WORKSPACE>/src/main/scala/Pipeline.scala
text:
```scala
import chisel3._
import chisel3.util._
import scala.math.log

class Pipeline (xlen: Int, memSize: Int, csrFileSize: Int) extends Module {
  val io = (new Bundle {
    val pcOut = Output(UInt(xlen.W))
    val debugRegs = Output(Vec(32, UInt(xlen.W)))
    val debugInstruction = Output(UInt(32.W))
    val debugImmediate = Output(SInt(xlen.W))
    val debugBranchTaken = Output(Bool())
    val debugLoad = Output(Bool())
    val debugStore = Output(Bool())
    val debugAddress = Output(UInt(xlen.W))
    val debugRegWEn = Output(Bool())
    val debugRD = Output(UInt(5.W))
    val debugAluResult = Output(UInt(xlen.W))
    val debugMemData = Output(UInt(xlen.W))
    val debugMemWriteData = Output(UInt(xlen.W))
    val debugMemAccessLength = Output(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val debugCsr = Output(UInt(xlen.W))
    val debugRS1Data = Output(UInt(xlen.W))
    val debugRS2Data = Output(UInt(xlen.W))
    val debugCsrWEn = Output(Bool())
    val debugCsrWdData = Output(UInt(xlen.W))
  })

  val pc = Module(new PC(xlen)); pc.@@initSinks()
  val regfile = Module(new Regfile(xlen)); regfile.initSinks()
  val immGen = Module(new ImmGen(xlen)); immGen.initSinks()
  val branchComparator = Module(new BranchComparator(xlen)); branchComparator.initSinks()
  val alu = Module(new ALU(xlen)); alu.initSinks()
  val IMEM = Module(new IMEM(memSize)); IMEM.initSinks()
  val DMEM = Module(new DMEM(xlen, memSize)); DMEM.initSinks()
  val CSRFile = Module(new CSRFile(csrFileSize, xlen)); CSRFile.initSinks()
  val idLogic = Module(new IDControlLogic(xlen)); idLogic.initSinks()
  val branchHazardUnit = Module(new BranchHazardUnit); branchHazardUnit.initSinks()
  val forwardingUnit = Module(new ForwardingUnit(xlen)); forwardingUnit.initSinks()
  val loadHazardUnit = Module(new LoadHazardUnit(xlen)); loadHazardUnit.initSinks()
  val IFIDRegister = Module(new IFIDRegister(xlen)); IFIDRegister.initSinks()
  val IDExRegister = Module(new IDExRegister(xlen)); IDExRegister.initSinks()
  val exMemRegister = Module(new ExMemRegister(xlen)); exMemRegister.initSinks()
  val memWbRegister = Module(new MemWbRegister(xlen)); memWbRegister.initSinks()
  val nop = 0x13.U


  /* INSTRUCTION FETCH */
  IMEM.io.addr := pc.io.pc
  val instruction = IMEM.io.instruction

  // handle pipeline register
  when (branchHazardUnit.io.branchStall) {
    // flush
    IFIDRegister.io.flush := true.B
  } .elsewhen (loadHazardUnit.io.loadStall) {
    // stall
    IFIDRegister.io.regWEn := false.B
  } .otherwise {
    // set regular values
    IFIDRegister.io.regWEn := true.B
    IFIDRegister.io.instructionIn := instruction
    IFIDRegister.io.pcIn := pc.io.pc
  }

  /* INSTRUCTION DECODE */
  // generate immediate
  immGen.io.instruction := IFIDRegister.io.instruction
  val immediate = immGen.io.out.asUInt

  // control logic
  idLogic.io.instructionIn := IFIDRegister.io.instruction
  idLogic.io.pcIn := IFIDRegister.io.pc

  // get regfile values
  regfile.io.rdIndex0 := idLogic.io.rs1
  regfile.io.rdIndex1 := idLogic.io.rs2

  // handle pipeline register
  when (branchHazardUnit.io.branchStall) {
    // flush
    IDExRegister.io.flush := true.B
  } .elsewhen (loadHazardUnit.io.loadStall) {
    // stall
    IDExRegister.io.regWEn := false.B
  } .otherwise {
    // set other values
    IDExRegister.io.regWEn := true.B
    IDExRegister.io.pcIn := idLogic.io.pc
    IDExRegister.io.rs1In := idLogic.io.rs1
    IDExRegister.io.rs2In := idLogic.io.rs2
    IDExRegister.io.rs1DataIn := regfile.io.rd0
    IDExRegister.io.rs2DataIn := regfile.io.rd1
    IDExRegister.io.immIn := immediate
    IDExRegister.io.rdIn := idLogic.io.rd
    IDExRegister.io.regfileWEnIn := idLogic.io.regfileWEn
    IDExRegister.io.aluSelIn := idLogic.io.aluSel
    IDExRegister.io.aluSignedIn := idLogic.io.aluSigned
    IDExRegister.io.isWideIn := idLogic.io.isWide
    IDExRegister.io.aSelIn := idLogic.io.aSel
    IDExRegister.io.bSelIn := idLogic.io.bSel
    IDExRegister.io.isBranchIn := idLogic.io.isBranch
    IDExRegister.io.brCmpModeIn := idLogic.io.brCmpMode
    IDExRegister.io.isJumpIn := idLogic.io.isJump
    IDExRegister.io.memRWIn := idLogic.io.memRW
    IDExRegister.io.wbSelIn := idLogic.io.wbSel
    IDExRegister.io.csrOffsetIn := idLogic.io.csrOffset
    IDExRegister.io.csrWEnIn := idLogic.io.csrWEn
    IDExRegister.io.csrImmIn := idLogic.io.csrImm
  }


  /* EXECUTE */
  // handle only the id/ex portions of forwarding in this code block, the rest will be
  // handled in the mem/wb stages
  forwardingUnit.io.idExRs1 := IDExRegister.io.rs1
  forwardingUnit.io.idExRs2 := IDExRegister.io.rs2
  forwardingUnit.io.idExRs1Data := IDExRegister.io.rs1Data
  forwardingUnit.io.idExRs2Data := IDExRegister.io.rs2Data

  val finalRs1Data = forwardingUnit.io.rs1DataOut
  val finalRs2Data = forwardingUnit.io.rs2DataOut

  // ALU inputs
  val in0 = MuxCase(IDExRegister.io.rs1Data,Array(
    (IDExRegister.io.aSel === 0.U) -> finalRs1Data,
    (IDExRegister.io.aSel === 1.U) -> IDExRegister.io.pc,
  ))

  val in1 = MuxCase(IDExRegister.io.rs2Data,Array(
    (IDExRegister.io.bSel === 0.U) -> finalRs2Data,
    (IDExRegister.io.bSel === 1.U) -> IDExRegister.io.imm,
  ))

  alu.io.in0 := in0
  alu.io.in1 := in1
  alu.io.aluSel := IDExRegister.io.aluSel
  alu.io.signed := IDExRegister.io.aluSigned
  alu.io.isWide := IDExRegister.io.isWide
  val aluResult = alu.io.out


  // branch comparator and hazard handling
  branchComparator.io.in0 := finalRs1Data
  branchComparator.io.in1 := finalRs2Data
  branchComparator.io.cmpMode := IDExRegister.io.brCmpMode
  val branchTaken = branchComparator.io.branchTaken

  branchHazardUnit.io.branchTaken := branchTaken
  branchHazardUnit.io.IDEXIsJump := IDExRegister.io.isJump


  // load hazard handling
  loadHazardUnit.io.IDExRs1 := IDExRegister.io.rs1
  loadHazardUnit.io.IDExRs2 := IDExRegister.io.rs2


  // handle pipeline register
  when (loadHazardUnit.io.loadStall) {
    // EX/MEM register only ever needs to be flushed when a load has occurred
    exMemRegister.io.flush := true.B
  } .otherwise {
    exMemRegister.io.regWEn := true.B
    exMemRegister.io.pcIn := IDExRegister.io.pc
    exMemRegister.io.rs1DataIn := finalRs1Data
    exMemRegister.io.rs2DataIn := finalRs2Data
    exMemRegister.io.immIn := IDExRegister.io.imm
    exMemRegister.io.aluResultIn := aluResult
    exMemRegister.io.rdIn := IDExRegister.io.rd
    exMemRegister.io.regfileWEnIn := IDExRegister.io.regfileWEn
    exMemRegister.io.memRWIn := IDExRegister.io.memRW
    exMemRegister.io.wbSelIn := IDExRegister.io.wbSel
    exMemRegister.io.csrOffsetIn := IDExRegister.io.csrOffset
    exMemRegister.io.csrWEnIn := IDExRegister.io.csrWEn
    exMemRegister.io.csrImmIn := IDExRegister.io.csrImm
  }


  /* MEMORY */
  // forwarding
  forwardingUnit.io.exMemRd := exMemRegister.io.rd
  forwardingUnit.io.exMemWbSel := exMemRegister.io.wbSel
  forwardingUnit.io.exMemALUOut := exMemRegister.io.aluResult

  // load hazard
  loadHazardUnit.io.exMemRd := exMemRegister.io.rd
  loadHazardUnit.io.exMemRegfileWEn := exMemRegister.io.regfileWEn
  loadHazardUnit.io.exMemWbSel := exMemRegister.io.wbSel

  // DMEM
  DMEM.io.wdData := exMemRegister.io.rs2Data
  DMEM.io.wdEn := exMemRegister.io.memRW
  DMEM.io.addr := exMemRegister.io.aluResult
  DMEM.io.length := exMemRegister.io.memAccessLength
  DMEM.io.rdMode :=exMemRegister.io.memRdMode
  val memRdData = DMEM.io.rdData

  // pipeline register update
  memWbRegister.io.aluResultIn := exMemRegister.io.aluResult
  memWbRegister.io.memRdDataIn := memRdData
  memWbRegister.io.rdIn := exMemRegister.io.rd
  memWbRegister.io.regfileWEnIn := exMemRegister.io.regfileWEnIn
  memWbRegister.io.wbSelIn := exMemRegister.io.wbSel


  /* WRITE BACK */
  // choose output
  val writeBackResult = MuxCase(memWbRegister.io.aluResult, Seq(
    (memWbRegister.io.wbSel === 0.U) -> memWbRegister.io.memRdData,
    (memWbRegister.io.wbSel === 1.U) -> memWbRegister.io.aluResult,
    (memWbRegister.io.wbSel === 2.U) -> (memWbRegister.io.pc + 4.U),
    (memWbRegister.io.wbSel === 3.U) -> CSRFile.io.rdOut,
  ))

  // forwarding
  forwardingUnit.io.memWbRd := memWbRegister.io.rd
  forwardingUnit.io.memWbSel := memWbRegister.io.wbSel
  forwardingUnit.io.memWbOut := writeBackResult


  /* REGFILE WRITE */
  regfile.io.wdIndex := memWbRegister.io.rd
  regfile.io.wdEn := memWbRegister.io.regfileWEn
  regfile.io.wdData := writeBackResult


  /* CSR */
  CSRFile.io.addr := exMemRegister.io.csrOffset
  CSRFile.io.debugAddr := 0x51E.U
  CSRFile.io.wdEn := exMemRegister.io.csrWEn
  CSRFile.io.wdData := MuxCase(exMemRegister.io.rs1Data,
    Array((exMemRegister.io.csrImm === 1.U) -> exMemRegister.io.imm)
  )

  pc.io.exALUResult := aluResult
  pc.io.loadStall := loadHazardUnit.io.loadStall
  pc.io.branchStall := branchHazardUnit.io.branchStall

  // debug stuff
//  io.debugRegs := regfile.io.debugRegs

}

object VerilogGen extends App {
  emitVerilog(new Pipeline(32, 0x1000, 4096), Array("--target-dir", "generated"))
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: 