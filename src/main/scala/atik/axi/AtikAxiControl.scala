package atik.axi

import atik._
import chisel3._
import chisel3.util._

object AtikAxiRegisterMap {
  val control = 0x00
  val status = 0x04
  val descAddrLo = 0x08
  val descAddrHi = 0x0c
  val counterIndex = 0x10
  val counterLo = 0x14
  val counterHi = 0x18
}

/** AXI4-Lite register bank and command-pulse generator for AtikTop. */
class AtikAxiControl(params: AtikParams, addressBits: Int = 12) extends Module {
  require(params.xLen == 64)
  require(params.addrBits == 64)

  val io = IO(new Bundle {
    val axi = new AxiLiteSlaveIO(addressBits, 32)

    val statusWord = Input(UInt(params.xLen.W))
    val counterValue = Input(UInt(params.xLen.W))
    val coreBusy = Input(Bool())
    val dmaBusy = Input(Bool())

    val setDesc = Output(Bool())
    val descAddr = Output(UInt(params.addrBits.W))
    val run = Output(Bool())
    val resetCore = Output(Bool())
    val clearCounters = Output(Bool())
    val counterIndex = Output(UInt(params.counterIdxBits.W))
  })

  private def mergeBytes(oldValue: UInt, newValue: UInt, strobes: UInt): UInt =
    Cat((0 until 4).reverse.map { byte =>
      Mux(strobes(byte), newValue(8 * byte + 7, 8 * byte), oldValue(8 * byte + 7, 8 * byte))
    })

  private val descAddrLoReg = RegInit(0.U(32.W))
  private val descAddrHiReg = RegInit(0.U(32.W))
  private val counterIndexReg = RegInit(0.U(params.counterIdxBits.W))
  private val startPending = RegInit(false.B)

  io.descAddr := Cat(descAddrHiReg, descAddrLoReg)
  io.counterIndex := counterIndexReg
  io.setDesc := false.B
  io.run := false.B
  io.resetCore := false.B
  io.clearCounters := false.B

  when(startPending) {
    io.run := true.B
    startPending := false.B
  }

  private val awHeld = RegInit(false.B)
  private val awAddr = Reg(UInt(addressBits.W))
  private val wHeld = RegInit(false.B)
  private val wData = Reg(UInt(32.W))
  private val wStrb = Reg(UInt(4.W))
  private val bValid = RegInit(false.B)
  private val bResp = RegInit(AxiResponse.okay)

  io.axi.awready := !awHeld && !bValid
  io.axi.wready := !wHeld && !bValid
  io.axi.bvalid := bValid
  io.axi.bresp := bResp

  private val awFire = io.axi.awvalid && io.axi.awready
  private val wFire = io.axi.wvalid && io.axi.wready
  private val selectedAwAddr = Mux(awFire, io.axi.awaddr, awAddr)
  private val selectedWData = Mux(wFire, io.axi.wdata, wData)
  private val selectedWStrb = Mux(wFire, io.axi.wstrb, wStrb)
  private val commitWrite = !bValid && (awHeld || awFire) && (wHeld || wFire)

  when(awFire) {
    awHeld := true.B
    awAddr := io.axi.awaddr
  }
  when(wFire) {
    wHeld := true.B
    wData := io.axi.wdata
    wStrb := io.axi.wstrb
  }
  when(bValid && io.axi.bready) {
    bValid := false.B
  }

  when(commitWrite) {
    awHeld := false.B
    wHeld := false.B
    bValid := true.B
    bResp := AxiResponse.slverr

    switch(selectedAwAddr) {
      is(AtikAxiRegisterMap.control.U) {
        bResp := AxiResponse.okay
        when(selectedWStrb(0)) {
          when(selectedWData(0) && !io.coreBusy && !startPending) {
            io.setDesc := true.B
            startPending := true.B
          }.elsewhen(selectedWData(1) && !io.coreBusy && !io.dmaBusy && !startPending) {
            io.resetCore := true.B
            startPending := false.B
          }
          when(selectedWData(2)) {
            io.clearCounters := true.B
          }
        }
      }
      is(AtikAxiRegisterMap.descAddrLo.U) {
        bResp := AxiResponse.okay
        descAddrLoReg := mergeBytes(descAddrLoReg, selectedWData, selectedWStrb)
      }
      is(AtikAxiRegisterMap.descAddrHi.U) {
        bResp := AxiResponse.okay
        descAddrHiReg := mergeBytes(descAddrHiReg, selectedWData, selectedWStrb)
      }
      is(AtikAxiRegisterMap.counterIndex.U) {
        bResp := AxiResponse.okay
        counterIndexReg := mergeBytes(counterIndexReg.pad(32), selectedWData, selectedWStrb)(params.counterIdxBits - 1, 0)
      }
    }
  }

  private val rValid = RegInit(false.B)
  private val rData = RegInit(0.U(32.W))
  private val rResp = RegInit(AxiResponse.okay)
  io.axi.arready := !rValid
  io.axi.rvalid := rValid
  io.axi.rdata := rData
  io.axi.rresp := rResp

  when(rValid && io.axi.rready) {
    rValid := false.B
  }

  when(io.axi.arvalid && io.axi.arready) {
    rValid := true.B
    rData := 0.U
    rResp := AxiResponse.slverr
    switch(io.axi.araddr) {
      is(AtikAxiRegisterMap.status.U) { rData := io.statusWord(31, 0); rResp := AxiResponse.okay }
      is(AtikAxiRegisterMap.descAddrLo.U) { rData := descAddrLoReg; rResp := AxiResponse.okay }
      is(AtikAxiRegisterMap.descAddrHi.U) { rData := descAddrHiReg; rResp := AxiResponse.okay }
      is(AtikAxiRegisterMap.counterIndex.U) { rData := counterIndexReg.pad(32); rResp := AxiResponse.okay }
      is(AtikAxiRegisterMap.counterLo.U) { rData := io.counterValue(31, 0); rResp := AxiResponse.okay }
      is(AtikAxiRegisterMap.counterHi.U) { rData := io.counterValue(63, 32); rResp := AxiResponse.okay }
    }
  }
}
