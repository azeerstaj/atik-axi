package atik.axi

import atik._
import atik.top.AtikTop
import chisel3._

/** Standalone, Vivado-friendly Atik top for Zynq UltraScale+ programmable logic. */
class AtikAxiTop(params: AtikParams = AtikParams(meshRows = 2, meshCols = 2)) extends RawModule {
  require(params.xLen == 64)
  require(params.addrBits == 64)
  require(params.memDataBits == 128)

  val aclk = IO(Input(Clock()))
  val aresetn = IO(Input(Bool()))
  val s_axi_ctrl = IO(new AxiLiteSlaveIO(12, 32))
  val m_axi_mem = IO(new Axi4MasterIO(params.addrBits, params.memDataBits, 1))

  withClockAndReset(aclk, (!aresetn).asAsyncReset) {
    val core = Module(new AtikTop(params))
    val control = Module(new AtikAxiControl(params))
    val dma = Module(new AtikAxiDma(params))

    control.io.axi <> s_axi_ctrl
    m_axi_mem <> dma.io.axi

    core.io.setDesc := control.io.setDesc
    core.io.descAddr := control.io.descAddr
    core.io.run := control.io.run
    core.io.resetCore := control.io.resetCore
    core.io.clearCounters := control.io.clearCounters
    core.io.counterIndex := control.io.counterIndex
    control.io.statusWord := core.io.statusWord
    control.io.counterValue := core.io.counterValue
    control.io.coreBusy := core.io.busy
    control.io.dmaBusy := dma.io.busy

    dma.io.memReadReq <> core.io.memReadReq
    core.io.memReadResp <> dma.io.memReadResp
    dma.io.memWriteReq <> core.io.memWriteReq
    dma.io.memWriteData := core.io.memWriteData
    dma.io.memWriteMask := core.io.memWriteMask
    core.io.memWriteResp <> dma.io.memWriteResp
  }
}
