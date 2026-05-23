package atik.control

import atik._
import chisel3._

class AttentionController(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val desc = Input(new AtikDescriptor(params))
    val causal = Input(Bool())
    val busy = Output(Bool())
    val done = Output(Bool())
    val error = Output(UInt(8.W))
    val events = Output(new AtikCounterEvent(params))
  })

  private val running = RegInit(false.B)
  private val doneReg = RegInit(false.B)
  private val errorReg = RegInit(AtikStatus.ok)
  private val remaining = RegInit(0.U(params.xLen.W))

  private def ceilDiv(value: UInt, divisor: Int): UInt = (value + (divisor - 1).U) / divisor.U

  private val qTiles = ceilDiv(io.desc.m, params.meshRows)
  private val kvTiles = ceilDiv(io.desc.kvLen, params.meshCols)
  private val dTiles = ceilDiv(io.desc.k, params.meshCols)
  private val vTiles = ceilDiv(io.desc.n, params.meshCols)
  private val qkCycles = (qTiles * kvTiles * dTiles)(params.xLen - 1, 0)
  private val pvCycles = (qTiles * kvTiles * vTiles)(params.xLen - 1, 0)
  private val softmaxCycles = (io.desc.m * io.desc.kvLen)(params.xLen - 1, 0)
  private val dmaCycles = (qTiles * dTiles + kvTiles * dTiles + kvTiles * vTiles + qTiles * vTiles)(params.xLen - 1, 0)
  private val launchCycles = qkCycles + pvCycles + softmaxCycles + dmaCycles + 8.U
  private val badDims = io.desc.m === 0.U || io.desc.n === 0.U || io.desc.k === 0.U || io.desc.kvLen === 0.U
  private val badAddr = io.desc.aAddr === 0.U || io.desc.bAddr === 0.U || io.desc.vAddr === 0.U || io.desc.outAddr === 0.U
  private val readBytes = ((io.desc.m * io.desc.k) + (io.desc.kvLen * io.desc.k) + (io.desc.kvLen * io.desc.n)) << 1
  private val writeBytes = (io.desc.m * io.desc.n) << 1

  private val event = WireDefault(0.U.asTypeOf(new AtikCounterEvent(params)))
  event.computeActive := running
  event.meshActive := running && remaining(0) === 0.U
  event.meshIdle := running && remaining(0) === 1.U
  event.dmaReadActive := running && remaining(1, 0) === 0.U
  event.dmaWriteActive := running && remaining(2, 0) === 0.U
  event.bytesRead := Mux(io.start && !badDims && !badAddr, readBytes(params.xLen - 1, 0), 0.U)
  event.bytesWritten := Mux(io.start && !badDims && !badAddr, writeBytes(params.xLen - 1, 0), 0.U)

  when(io.start && !running) {
    doneReg := false.B
    when(badDims) {
      errorReg := AtikStatus.badDims
    }.elsewhen(badAddr) {
      errorReg := AtikStatus.badAddr
    }.otherwise {
      errorReg := AtikStatus.ok
      remaining := Mux(launchCycles === 0.U, 1.U, launchCycles)
      running := true.B
    }
  }.elsewhen(running) {
    when(remaining <= 1.U) {
      running := false.B
      remaining := 0.U
      doneReg := true.B
    }.otherwise {
      remaining := remaining - 1.U
    }
  }

  io.busy := running
  io.done := doneReg
  io.error := errorReg
  io.events := event
}
