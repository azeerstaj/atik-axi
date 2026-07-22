package atik.axi

import atik.AtikParams
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

class AtikAxiControlSpec extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  private val params = AtikParams(meshRows = 2, meshCols = 2)

  private def initialize(dut: AtikAxiControl): Unit = {
    dut.io.axi.awaddr.poke(0.U)
    dut.io.axi.awprot.poke(0.U)
    dut.io.axi.awvalid.poke(false.B)
    dut.io.axi.wdata.poke(0.U)
    dut.io.axi.wstrb.poke(0.U)
    dut.io.axi.wvalid.poke(false.B)
    dut.io.axi.bready.poke(true.B)
    dut.io.axi.araddr.poke(0.U)
    dut.io.axi.arprot.poke(0.U)
    dut.io.axi.arvalid.poke(false.B)
    dut.io.axi.rready.poke(true.B)
    dut.io.statusWord.poke(0.U)
    dut.io.counterValue.poke(0.U)
    dut.io.coreBusy.poke(false.B)
    dut.io.dmaBusy.poke(false.B)
  }

  private def write(dut: AtikAxiControl, address: Int, data: BigInt, strobes: Int = 0xf): Unit = {
    dut.io.axi.awaddr.poke(address.U)
    dut.io.axi.awvalid.poke(true.B)
    dut.io.axi.wdata.poke(data.U)
    dut.io.axi.wstrb.poke(strobes.U)
    dut.io.axi.wvalid.poke(true.B)
    dut.clock.step()
    dut.io.axi.awvalid.poke(false.B)
    dut.io.axi.wvalid.poke(false.B)
    dut.io.axi.bvalid.expect(true.B)
    dut.io.axi.bresp.expect(AxiResponse.okay)
    dut.clock.step()
  }

  behavior of "AtikAxiControl"

  it should "store a byte-strobed descriptor address and sequence set-desc before run" in {
    test(new AtikAxiControl(params)) { dut =>
      initialize(dut)
      dut.clock.step()

      write(dut, AtikAxiRegisterMap.descAddrLo, 0x11223344L)
      write(dut, AtikAxiRegisterMap.descAddrLo, 0x0000aa00L, strobes = 0x2)
      write(dut, AtikAxiRegisterMap.descAddrHi, 0x55667788L)
      dut.io.descAddr.expect("h556677881122aa44".U)

      dut.io.axi.awaddr.poke(AtikAxiRegisterMap.control.U)
      dut.io.axi.awvalid.poke(true.B)
      dut.io.axi.wdata.poke(1.U)
      dut.io.axi.wstrb.poke(1.U)
      dut.io.axi.wvalid.poke(true.B)
      dut.io.setDesc.expect(true.B)
      dut.io.run.expect(false.B)
      dut.clock.step()
      dut.io.axi.awvalid.poke(false.B)
      dut.io.axi.wvalid.poke(false.B)
      dut.io.setDesc.expect(false.B)
      dut.io.run.expect(true.B)
      dut.clock.step()
      dut.io.run.expect(false.B)
    }
  }

  it should "accept AXI write address and data in either order" in {
    test(new AtikAxiControl(params)) { dut =>
      initialize(dut)
      dut.clock.step()

      dut.io.axi.awaddr.poke(AtikAxiRegisterMap.descAddrLo.U)
      dut.io.axi.awvalid.poke(true.B)
      dut.clock.step()
      dut.io.axi.awvalid.poke(false.B)
      dut.io.axi.wdata.poke("hdeadbeef".U)
      dut.io.axi.wstrb.poke("hf".U)
      dut.io.axi.wvalid.poke(true.B)
      dut.clock.step()
      dut.io.axi.wvalid.poke(false.B)
      dut.io.axi.bvalid.expect(true.B)
      dut.io.descAddr.expect("h00000000deadbeef".U)
    }
  }

  it should "return SLVERR for unmapped accesses and expose status and counters" in {
    test(new AtikAxiControl(params)) { dut =>
      initialize(dut)
      dut.io.statusWord.poke("h0000000000000507".U)
      dut.io.counterValue.poke("h1122334455667788".U)
      dut.clock.step()

      dut.io.axi.araddr.poke(AtikAxiRegisterMap.status.U)
      dut.io.axi.arvalid.poke(true.B)
      dut.clock.step()
      dut.io.axi.arvalid.poke(false.B)
      dut.io.axi.rdata.expect("h00000507".U)
      dut.io.axi.rresp.expect(AxiResponse.okay)
      dut.clock.step()

      dut.io.axi.araddr.poke("h100".U)
      dut.io.axi.arvalid.poke(true.B)
      dut.clock.step()
      dut.io.axi.arvalid.poke(false.B)
      dut.io.axi.rresp.expect(AxiResponse.slverr)
    }
  }
}
