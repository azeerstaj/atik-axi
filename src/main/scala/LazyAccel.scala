package toyrocc

import chisel3._
import chisel3.util._

import org.chipsalliance.cde.config.{Parameters, Field, Config}
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.tile._
import freechips.rocketchip.rocket._
import freechips.rocketchip.tilelink.{
  TLNode, TLIdentityNode, TLClientNode, TLMasterParameters, TLMasterPortParameters
}


// TODO : Since we are outputting a UQ32.32 we can
// implement computation with better precision.
// For now let's just output it as is,
class BFloat16Exp extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(16.W))
    val out = Output(UInt(16.W))
  })

  val sign = io.in(15)
  val exponent = io.in(14, 7)

  // If subnormal, fill with zeroes.
  // else append 1 to the mantissa
  val mantissa = Mux(exponent === 0.U, 0.U(8.W), Cat(1.U, io.in(6, 0)))

  // Convert log2e to a fixed-point
  // representation : UQ2.8
  // Unsigined fixed-point with 2 bits for integer and 8 for fraction.
  val log2e_scaled = 369.U(10.W)

  // Mantissa : UQ1.7
  // log2e    : UQ2.8
  // Mantissa * log2e : UQ3.15
  val scaled_mantissa = mantissa * log2e_scaled

  // Padded Mantissa : UQ9.16
  // We are adding more precision.
  val padded_mantissa = Cat(scaled_mantissa, 0.U(7.W))

  // Considering the biggest number representable
  // by BFloat16 we get : 3.39 x 10^38
  // So maximum exponentiation result is :
  // e^x = 3.39 x 10^38
  // Solving for x, we get x ~ 88.72
  // BFloat(x) = sign(0), exp(133), mantissa(??)
  // RESULT : the exp of our input can be 133 at maximum.
  val shift = 133.U - exponent

  // Shifted Mantissa : UQ9.16
  val shifted_mantissa = padded_mantissa >> shift
  val signed_mantissa = Mux(sign === 0.U(1.W), shifted_mantissa, ~shifted_mantissa)

  // 16 bits for fraction
  val x_frac = signed_mantissa(15, 0)
  // 9 bits for integer
  val x_int = signed_mantissa(24, 16)
  val biased_exp = x_int + 127.U

  // UQ8.0
  val final_exp = biased_exp(7, 0)

  // UQ0.7
  val mantissa_frac = x_frac(15, 9)
  val not_mantissa_frac = (~mantissa_frac).asUInt

  // alpha   * 2^7 = 0.21875  * 128  = 28
  // beta    * 2^7 = 0.4375   * 128  = 56
  // gamma_1 * 2^7 = 3.296875 * 128  = 422
  // gamma_2 * 2^7 = 2.171875 * 128  = 278

  // When mantissa belongs to [0, 0.5)
  val alpha = 28.U(7.W)      // UQ0.7
  val gamma_1 = 422.U(9.W)   // UQ2.7

  // UQ3.21
  // `+&` carry add operation to increase the
  // integer bitwidth.
  val p_1 = (mantissa_frac +& gamma_1) * alpha * mantissa_frac

  // When mantissa belongs to [0.5, 1)
  val beta = 56.U(7.W)      // UQ0.7
  val gamma_2 = 278.U(9.W)  // UQ2.7

  // UQ3.21
  val p_2 = (mantissa_frac +& gamma_2) * beta * not_mantissa_frac

  val isFirstPoly = mantissa_frac(6) === 1.U(1.W)

  // Extract the fraction parts from p_1 & p_2 (20, 0)
  val final_mantissa = Mux(isFirstPoly, p_1(20, 14), ~(p_2(20, 14)))
  io.out := Cat(0.U(1.W), final_exp, final_mantissa)
}


class BFloat16ExpAccumulator(opcodes: OpcodeSet)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new BFloat16ExpAccumulatorModuleImp(this)
  override val atlNode = TLClientNode(Seq(TLMasterPortParameters.v1(Seq(TLMasterParameters.v1("BFloat16ExpAccumulatorRoCC")))))
}

class BFloat16ExpAccumulatorModuleImp(outer: BFloat16ExpAccumulator)(implicit p: Parameters) extends LazyRoCCModuleImp(outer)
  with HasCoreParameters
  with HasL1CacheParameters {

  val cacheParams = tileParams.dcache.get

  // 64-bit cache bus / 16-bit BFloat16  = 4 elements per beat
  // 256-bit cache bus / 16-bit BFloat16 = 16 elements per beat
  val wordsPerBeat = cacheDataBits / 16

  val addr = Reg(UInt(coreMaxAddrBits.W))
  val elements_left = Reg(UInt(xLen.W))
  val accumulator_fixedp = Reg(UInt(xLen.W))
  val resp_rd = Reg(chiselTypeOf(io.resp.bits.rd))

  val s_idle :: s_acq :: s_gnt :: s_resp :: Nil = Enum(4)
  val state = RegInit(s_idle)

  val (tl_out, edgesOut) = outer.atlNode.out(0)

  io.cmd.ready := (state === s_idle)
  io.resp.valid := (state === s_resp)
  io.resp.bits.rd := resp_rd
  io.resp.bits.data := accumulator_fixedp

  tl_out.a.valid := (state === s_acq)
  tl_out.a.bits := edgesOut.Get(
    fromSource = 0.U,
    toAddress = addr,
    lgSize = lgCacheBlockBytes.U)._2
  tl_out.d.ready := (state === s_gnt)

  when (io.cmd.fire) {
    addr := io.cmd.bits.rs1
    elements_left := io.cmd.bits.rs2
    resp_rd := io.cmd.bits.inst.rd
    accumulator_fixedp := 0.U
    state := Mux(io.cmd.bits.rs2 === 0.U, s_resp, s_acq)
    printf(p"[ACCUM EXP HW] CMD FIRE! Received rd: ${resp_rd} || addr: ${addr} ... \n")
  }

  when (tl_out.a.fire) { state := s_gnt }


  // Tuple4 from edgesOut.count
  val (first, last, done, beat_count) = edgesOut.count(tl_out.d)

  when (tl_out.d.fire) {
    // Slice beat into chunks
    val bfloat_inputs = VecInit(Seq.tabulate(wordsPerBeat) { i =>
      tl_out.d.bits.data(16 * (i + 1) - 1, 16 * i)
    })

    val exp_outputs = Wire(Vec(wordsPerBeat, UInt(16.W)))
    val expModules = Seq.fill(wordsPerBeat)(Module(new BFloat16Exp))
    for(i <- 0 until wordsPerBeat){
      expModules(i).io.in := bfloat_inputs(i)
      exp_outputs(i) := expModules(i).io.out
    }

    // Convert BFloat16 outputs to 64-bit Integers for hardware accumulation
    val fixed_vals = exp_outputs.map { bf16 =>
      val exp = bf16(14, 7)
      val mantissa = bf16(6, 0)

      val implied_bit = Mux(exp === 0.U, 0.U(1.W), 1.U(1.W))
      // UQ1.7
      val fraction = Cat(implied_bit, mantissa).pad(64)

      // Ones digit must be shifted by (32 - 7 = 25) times.
      // Exponent is biased, exp - 127 + 25 = exp - 102
      val is_shift_left = exp > 102.U

      // We will make sure that we shift
      // maximum of 64 bits.
      val left_shift_amt = exp - 102.U
      val right_shift_amt = 102.U - exp

      Mux(exp === 0.U, 0.U(64.W),
        Mux(is_shift_left, fraction << left_shift_amt(5, 0), fraction >> right_shift_amt(5, 0))
      )
    }

    // Mask out invalid elements
    val masked_vals = fixed_vals.zipWithIndex.map { case (int_val, i) =>
      Mux(i.U < elements_left, int_val, 0.U(64.W))
    }

    val beat_sum = masked_vals.reduce(_ + _)
    accumulator_fixedp := accumulator_fixedp + beat_sum
    addr := addr + (wordsPerBeat * 2).U // Advance by 8 bytes (4 elements * 2 bytes)

    val elements_processed = Mux(elements_left > wordsPerBeat.U, wordsPerBeat.U, elements_left)
    val next_elements = elements_left - elements_processed
    elements_left := next_elements
    printf(p"[ACCUM EXP HW] Got the data!")

    when (done) {
      state := Mux(next_elements === 0.U, s_resp, s_acq)
    }
  }

  when (io.resp.fire) {
    state := s_idle
    printf(p"[ACCUM EXP HW] Back to idle.")
  }
}

class WithToyRoCC extends Config((site, here, up) => {
  case BuildRoCC => List(
    (p: Parameters) => {
      val expAccum = LazyModule(new BFloat16ExpAccumulator(OpcodeSet.custom0)(p))
      expAccum
    })
})
