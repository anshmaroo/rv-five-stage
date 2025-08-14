import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.flatspec.AnyFlatSpec

class BranchHazardUnitTest extends AnyFlatSpec {
  behavior of "BranchHazardUnit"
  it should "detect branch hazards" in {
    simulate(new BranchHazardUnit()) { c =>
      c.io.branchTaken.poke(0);
      c.io.IDEXIsJump.poke(0);
      c.io.branchStall.expect(0)

    }

  }
}