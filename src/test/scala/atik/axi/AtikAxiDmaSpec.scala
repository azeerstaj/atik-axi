package atik.axi

import atik.AtikParams
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class AtikAxiDmaSpec extends AnyFlatSpec with ChiselScalatestTester {
  private val params = AtikParams(meshRows = 2, meshCols = 2)

  private def initialize(dut: AtikAxiDma): Unit = {
    dut.io.memReadReq.valid.poke(false.B)
    dut.io.memReadReq.bits.addr.poke(0.U)
    dut.io.memReadResp.ready.poke(false.B)
    dut.io.memWriteReq.valid.poke(false.B)
    dut.io.memWriteReq.bits.addr.poke(0.U)
    dut.io.memWriteData.poke(0.U)
    dut.io.memWriteMask.poke(0.U)
    dut.io.memWriteResp.ready.poke(false.B)
    dut.io.axi.awready.poke(false.B)
    dut.io.axi.wready.poke(false.B)
    dut.io.axi.bid.poke(0.U)
    dut.io.axi.bresp.poke(AxiResponse.okay)
    dut.io.axi.bvalid.poke(false.B)
    dut.io.axi.arready.poke(false.B)
    dut.io.axi.rid.poke(0.U)
    dut.io.axi.rdata.poke(0.U)
    dut.io.axi.rresp.poke(AxiResponse.okay)
    dut.io.axi.rlast.poke(false.B)
    dut.io.axi.rvalid.poke(false.B)
  }

  behavior of "AtikAxiDma"

  it should "hold a read address through backpressure and return read data" in {
    test(new AtikAxiDma(params)) { dut =>
      initialize(dut)
      dut.clock.step()
      dut.io.memReadReq.bits.addr.poke("h1000".U)
      dut.io.memReadReq.valid.poke(true.B)
      dut.clock.step()
      dut.io.memReadReq.valid.poke(false.B)
      dut.io.axi.arvalid.expect(true.B)
      dut.io.axi.araddr.expect("h1000".U)
      dut.clock.step(2)
      dut.io.axi.araddr.expect("h1000".U)
      dut.io.axi.arready.poke(true.B)
      dut.clock.step()
      dut.io.axi.arready.poke(false.B)

      dut.io.axi.rdata.poke("h00112233445566778899aabbccddeeff".U)
      dut.io.axi.rlast.poke(true.B)
      dut.io.axi.rvalid.poke(true.B)
      dut.clock.step()
      dut.io.axi.rvalid.poke(false.B)
      dut.io.memReadResp.valid.expect(true.B)
      dut.io.memReadResp.bits.data.expect("h00112233445566778899aabbccddeeff".U)
      dut.io.memReadResp.bits.error.expect(false.B)
      dut.io.memReadResp.ready.poke(true.B)
      dut.clock.step()
      dut.io.busy.expect(false.B)
    }
  }

  it should "handle independent write channels and propagate a bus error" in {
    test(new AtikAxiDma(params)) { dut =>
      initialize(dut)
      dut.clock.step()
      dut.io.memWriteReq.bits.addr.poke("h2000".U)
      dut.io.memWriteData.poke("hffeeddccbbaa99887766554433221100".U)
      dut.io.memWriteMask.poke("h0ff0".U)
      dut.io.memWriteReq.valid.poke(true.B)
      dut.clock.step()
      dut.io.memWriteReq.valid.poke(false.B)

      dut.io.axi.awready.poke(true.B)
      dut.clock.step()
      dut.io.axi.awready.poke(false.B)
      dut.io.axi.wvalid.expect(true.B)
      dut.io.axi.wdata.expect("hffeeddccbbaa99887766554433221100".U)
      dut.io.axi.wstrb.expect("h0ff0".U)
      dut.io.axi.wready.poke(true.B)
      dut.clock.step()
      dut.io.axi.wready.poke(false.B)

      dut.io.axi.bresp.poke(AxiResponse.slverr)
      dut.io.axi.bvalid.poke(true.B)
      dut.clock.step()
      dut.io.axi.bvalid.poke(false.B)
      dut.io.memWriteResp.valid.expect(true.B)
      dut.io.memWriteResp.bits.error.expect(true.B)
      dut.io.memWriteResp.ready.poke(true.B)
      dut.clock.step()
      dut.io.busy.expect(false.B)
    }
  }

  it should "prioritize a simultaneous read request" in {
    test(new AtikAxiDma(params)) { dut =>
      initialize(dut)
      dut.clock.step()
      dut.io.memReadReq.valid.poke(true.B)
      dut.io.memWriteReq.valid.poke(true.B)
      dut.io.memReadReq.ready.expect(true.B)
      dut.io.memWriteReq.ready.expect(false.B)
    }
  }
}
