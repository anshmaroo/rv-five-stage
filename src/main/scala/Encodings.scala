import chisel3._

object Opcode extends ChiselEnum {
  val ITypeLoad   = Value(0b0000011.U)
  val ITypeArith  = Value(0b0010011.U)
  val UTypeAUIPC  = Value(0b0010111.U)
  val ITypeWide   = Value(0b0011011.U)
  val SType       = Value(0b0100011.U)
  val RType       = Value(0b0110011.U)
  val UTypeLUI    = Value(0b0110111.U)
  val BType       = Value(0b1100011.U)
  val ITypeJump   = Value(0b1100111.U)
  val JType       = Value(0b1101111.U)
  val CSRType     = Value(0b1110011.U)
}

object ALUFunct3 extends ChiselEnum {
  val add  = Value(0b000.U)
  val sll  = Value(0b001.U)
  val slt  = Value(0b010.U)
  val sltu = Value(0b011.U)
  val xor  = Value(0b100.U)
  val sr   = Value(0b101.U)
  val or   = Value(0b110.U)
  val and  = Value(0b111.U)
  val selB = Value
}

object BranchFunct3 extends ChiselEnum {
  val beq  = Value(0b000.U)
  val bne  = Value(0b001.U)
  val blt  = Value(0b100.U)
  val bge  = Value(0b101.U)
  val bltu = Value(0b110.U)
  val bgeu = Value(0b111.U)
}

