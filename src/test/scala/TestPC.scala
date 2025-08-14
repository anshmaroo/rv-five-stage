import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.flatspec.AnyFlatSpec

class PCTest extends AnyFlatSpec {
  behavior of "PC"
  it should "program counter" in {
    simulate(new PC(32)) { c =>
      c.io.reset.poke(1)
      c.clock.step(1)
      c.io.pc.expect(0)

      c.io.reset.poke(0)
      c.io.exALUResult.poke(20)
      c.io.branchStall.poke(0)
      c.io.loadStall.poke(0)

      c.clock.step(1)

      c.io.pc.expect(4)

    }

  }
}