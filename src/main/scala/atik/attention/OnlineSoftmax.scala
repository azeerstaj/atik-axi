package atik.attention

import atik._
import chisel3._

class OnlineSoftmax(params: AtikParams) extends Module {
  val io = IO(new Bundle {
    val validIn = Input(Bool())
    val score = Input(SInt(params.accumBits.W))
    val rowMax = Input(SInt(params.accumBits.W))
    val rowSum = Input(UInt(params.softmaxBits.W))
    val nextMax = Output(SInt(params.accumBits.W))
    val nextSum = Output(UInt(params.softmaxBits.W))
    val expScore = Output(UInt(params.softmaxBits.W))
  })

  private val newMax = Mux(io.score > io.rowMax, io.score, io.rowMax)
  private val oldDelta = io.rowMax - newMax
  private val scoreDelta = io.score - newMax
  private val oldExp = Module(new ExpLut(params, params.accumFracBits))
  private val scoreExp = Module(new ExpLut(params, params.accumFracBits))
  oldExp.io.in := oldDelta
  scoreExp.io.in := scoreDelta

  private val scaledOldSum = (io.rowSum * oldExp.io.out) >> params.softmaxFracBits
  private val updatedSum = scaledOldSum + scoreExp.io.out

  io.nextMax := Mux(io.validIn, newMax, io.rowMax)
  io.nextSum := Mux(io.validIn, updatedSum(params.softmaxBits - 1, 0), io.rowSum)
  io.expScore := scoreExp.io.out
}
