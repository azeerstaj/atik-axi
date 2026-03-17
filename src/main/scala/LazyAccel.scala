package toyrocc

import chisel3._
import chisel3.util._
import hardfloat._
import scala.math.BigDecimal.RoundingMode

import org.chipsalliance.cde.config.{Parameters, Field, Config}
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.tile._
import freechips.rocketchip.rocket._
import freechips.rocketchip.tilelink.{
  TLNode, TLIdentityNode, TLClientNode, TLMasterParameters, TLMasterPortParameters
}

class BFloat16ToFixed(intBits: Int, fracBits: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(16.W))
    val out = Output(UInt((intBits + fracBits).W))
  })
  val sign = io.in(15)
  val exp = io.in(14, 7)
  val mantissa = io.in(6, 0)

  // UQ1.7 representation
  val is_zero_or_denormal = exp === 0.U
  val ext_mantissa = Mux(is_zero_or_denormal, Cat(0.U(1.W), mantissa), Cat(1.U(1.W), mantissa))

  val totalBits = intBits + fracBits

  // 1. Calculate signed exponent to avoid unsigned wrap-around
  // Denormals (exp == 0) have an effective exponent of -126 in IEEE 754
  val eff_exp = Mux(is_zero_or_denormal, 1.S(9.W), exp.zext) - 127.S(9.W)

  // 2. Align to the Fixed-Point fractional width
  // BFloat16 value = ext_mantissa * 2^(-7) * 2^(eff_exp)
  // Target Fixed-point value = Int * 2^(-fracBits)
  // Shift required = eff_exp - 7 + fracBits
  val shift_amt = eff_exp - 7.S + fracBits.S

  val shifted_mag = Wire(UInt(totalBits.W))

  // 3. Shift left or right depending on the exponent and fracBits
  when(shift_amt >= 0.S) {
    shifted_mag := ext_mantissa << shift_amt.asUInt
  } .otherwise {
    shifted_mag := ext_mantissa >> (-shift_amt).asUInt
  }

  // 4. Apply Two's Complement if the sign bit is 1
  val out_sint = Wire(SInt(totalBits.W))
  when(sign === 1.U) {
    out_sint := -shifted_mag.zext
  } .otherwise {
    out_sint := shifted_mag.zext
  }

  io.out := out_sint.asUInt
}

class BFloat16Sub extends Module {
  val io = IO(new Bundle {
    val in_1 = Input(UInt(16.W))
    val in_2 = Input(UInt(16.W))
    val out = Output(UInt(16.W))
  })

  val expWidth = 8
  // Workaround: Bump precision from 8 to 9 to avoid HardFloat's bit-slice underflow bug
  val sigWidth = 9

  // Pad the 7-bit explicit fraction to 8 bits by appending a 0 at the LSB
  // This turns our 16-bit inputs into 17-bit standard floats
  val in_1_padded = Cat(io.in_1, 0.U(1.W))
  val in_2_padded = Cat(io.in_2, 0.U(1.W))

  val rec_a = recFNFromFN(expWidth, sigWidth, in_1_padded)
  val rec_b = recFNFromFN(expWidth, sigWidth, in_2_padded)

  val subFN = Module(new AddRecFN(expWidth, sigWidth))

  subFN.io.subOp := true.B
  subFN.io.a := rec_a
  subFN.io.b := rec_b
  subFN.io.roundingMode := "b000".U(3.W) // round_near_even
  subFN.io.detectTininess := 0.U(1.W)

  // Output is a 17-bit standard float (1 sign, 8 exp, 8 frac)
  val out_padded = fNFromRecFN(expWidth, sigWidth, subFN.io.out)

  // Truncate the padded fractional LSB to return to standard 16-bit BFloat16
  io.out := out_padded(16, 1)
}

class BFloat16Max extends Module {
  val io = IO(new Bundle {
    val in_1 = Input(UInt(16.W))
    val in_2 = Input(UInt(16.W))
    val out = Output(UInt(16.W))
  })

  def max(a: UInt, b: UInt): UInt = {
    val a_sign = a(15)
    val b_sign = b(15)
    val a_mag = a(14, 0)
    val b_mag = b(14, 0)

    val is_a_bigger = Mux(a_sign =/= b_sign,
      a_sign === 0.U,
      Mux(a_sign === 0.U, a_mag > b_mag, b_mag > a_mag)
    )

    Mux(is_a_bigger, a, b)
  }

  io.out := max(io.in_1, io.in_2)
}

class BFloat16VectorMax(wordsPerBeat: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt((wordsPerBeat * 16).W))
    val out = Output(UInt(16.W))
  })

  def max(a: UInt, b: UInt): UInt = {
    val a_sign = a(15)
    val b_sign = b(15)
    val a_mag = a(14, 0)
    val b_mag = b(14, 0)

    val is_a_bigger = Mux(a_sign =/= b_sign,
      a_sign === 0.U,
      Mux(a_sign === 0.U, a_mag > b_mag, b_mag > a_mag)
    )

    Mux(is_a_bigger, a, b)
  }

  val bfloats = VecInit(Seq.tabulate(wordsPerBeat) { i =>
    io.in(16 * (i + 1) - 1, 16 * i)
  })

  // neat chisel
  io.out := bfloats.reduceTree((a, b) => max(a, b))
}

class BFloat16Exp extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(16.W))
    val out = Output(UInt(16.W))
  })

  val sign = io.in(15)
  val exponent = io.in(14, 7)
  val mantissa_raw = io.in(6, 0)

  val is_inf_nan = exponent === "hFF".U
  val is_zero_mantissa = mantissa_raw === 0.U
  val is_neg_inf = is_inf_nan && is_zero_mantissa && (sign === 1.U)

  // If subnormal, fill with zeroes.
  // else append 1 to the mantissa
  val mantissa = Mux(exponent === 0.U, 0.U(8.W), Cat(1.U, mantissa_raw))

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
  val out_normal = Cat(0.U(1.W), final_exp, final_mantissa)
  val out_saturated = "h7F7F".U(16.W) // max finite BF16

  io.out := Mux(is_neg_inf, 0.U, Mux(is_inf_nan, out_saturated, out_normal))
}

class OnlineSoftmaxImpl(
  intPrecision:Int = 12,
  fracPrecision: Int = 20,
  lutEntries: Int = 256,
  lutBits: Int = 64,
  outer: OnlineSoftmax
)(implicit p: Parameters) extends LazyRoCCModuleImp(outer)
  with HasCoreParameters
  with HasL1CacheParameters {

  // required for tilelink
  val cacheParams = tileParams.dcache.get
  // n_elements we get per request from tilelink (in)
  val wordsPerBeat = cacheDataBits / 16
  // n_elements we write per request (UQ32.32 => 64-bit per element)
  val outWordsPerBeat = cacheDataBits / 64
  val outBeatsPerInBeat = wordsPerBeat / outWordsPerBeat
  // -inf
  val minBf16 = "hFF80".U(16.W)
  val bitWidth = intPrecision + fracPrecision
  val lutIndexBits = log2Ceil(lutEntries)

  require(isPow2(lutEntries) && lutEntries >= 2, "lutEntries must be a power of 2 and >= 2")
  require(wordsPerBeat % outWordsPerBeat == 0, "output beat ratio must be integral")
  require(fracPrecision >= lutIndexBits - 1, "fracPrecision too small for LUT index bits")

  // States
  // s_idle -> Fetch the next instruction.
  // s_acq  -> Ask for the next element.
  // s_findmax -> Find the current new maximum from latched elements & prev max
  // s_exp -> Exponentiate the thing
  // s_resp -> Update the accumulation register, increase the total processed elements,
  //           if we consumed all the data finish.
  val s_idle :: s_acq :: s_gnt :: s_findmax :: s_exp :: s_reduce :: s_put :: s_put_ack :: s_resp :: Nil = Enum(9)
  val state = RegInit(s_idle)

  // Operational Registers
  // UQintPrecision.fracPrecision, i.e UQ12.20
  val accum = RegInit(0.U(bitWidth.W))

  // Corresponds for m_i and m_i-1 in Online Softmax paper.
  val maxCurr = RegInit(minBf16) // currMax = max(maxVec(input), prevMax)
                                 // Updated when finding the maximum
  val maxPrev = RegInit(minBf16) // Updated when reducing

  // Vec Operation Modules
  val vecSubs = Seq.fill(wordsPerBeat)(Module(new BFloat16Sub))
  val vecExps = Seq.fill(wordsPerBeat)(Module(new BFloat16Exp))
  val vecFixedPs = Seq.fill(wordsPerBeat)(Module(
    new BFloat16ToFixed(intBits = intPrecision, fracBits = fracPrecision)
  ))
  val vecFixedWires = Wire(Vec(wordsPerBeat, UInt((intPrecision + fracPrecision).W)))

  // Reduction Modules
  val maxSub = Module(new BFloat16Sub)
  val maxExp = Module(new BFloat16Exp)
  val maxFixedP = Module(
    new BFloat16ToFixed(intBits = intPrecision, fracBits = fracPrecision)
  )

  // Reciprocal LUT: index into [1.0, 2.0) range
  val lut = VecInit(Seq.tabulate(lutEntries) { i =>
    val mant = BigDecimal(1) + (BigDecimal(i) + BigDecimal(0.5)) / BigDecimal(lutEntries)
    val recip = BigDecimal(1) / mant
    val scaled = (recip * BigDecimal(2).pow(lutBits - 1)).setScale(0, RoundingMode.HALF_UP).toBigInt
    scaled.U(lutBits.W)
  })

  // Input Command Registers
  val arraySize = RegInit(0.U(xLen.W)) // rs2, init once
  val inBase = RegInit(0.U(xLen.W))    // init once @ phase1
  val inAddr = RegInit(0.U(xLen.W))    // init & increment @ phase1 & phase2
  val outAddr = RegInit(0.U(xLen.W))   // init & increment @ phase2
  val resp_rd = RegInit(0.U(5.W))      // rd
  val invSum = RegInit(0.U(bitWidth.W))
  val doWrite = RegInit(false.B)
  val writeBeatIdx = RegInit(0.U(log2Ceil(outBeatsPerInBeat).W))
  val outBuf = Reg(Vec(wordsPerBeat, UInt(bitWidth.W)))

  val bytesPerBeat = (cacheDataBits / 8).U // typically 8-bytes
  val outBeatBytes = (outWordsPerBeat * 8).U
  val procElements = RegInit(0.U(xLen.W)) // starts from 0 ends at arraySize
  val latchedData  = RegInit(0.U(cacheDataBits.W)) // updated at cmd.fire

  val bfloat_inputs = VecInit(Seq.tabulate(wordsPerBeat) { i =>
    val raw_data = latchedData(16 * (i + 1) - 1, 16 * i)

    // Handle out-of-bound
    val is_garbage = procElements + i.U >= arraySize
    Mux(is_garbage, minBf16, raw_data)
  })

  // Max Modules
  val globalMax = Module(new BFloat16Max)
  val vecMax = Module(new BFloat16VectorMax(wordsPerBeat))
  vecMax.io.in := bfloat_inputs.asUInt
  globalMax.io.in_1 := vecMax.io.out
  globalMax.io.in_2 := maxPrev

  maxSub.io.in_1 := maxPrev
  maxSub.io.in_2 := globalMax.io.out
  maxExp.io.in := maxSub.io.out
  maxFixedP.io.in := maxExp.io.out

  // safe clamping because the exp approximation
  // doesnt return exactly 1.0 (1.02 i.e) Slight errors and
  // deviations will eventually lead to big errors.
  val one = (1.U(bitWidth.W) << fracPrecision)(bitWidth - 1, 0) // UQ1.0 in bitWidth
  val maxFixedPClamped = Mux(maxFixedP.io.out > one, one, maxFixedP.io.out)

  // UQ32.32 * UQ32.32
  val prodAccumFull = accum * maxFixedPClamped
  val prodAccum = (prodAccumFull >> fracPrecision)(bitWidth - 1, 0)

  val subBase = Mux(doWrite, maxPrev, globalMax.io.out)
  for(i <- 0 until wordsPerBeat){
    vecSubs(i).io.in_1 := bfloat_inputs(i)
    vecSubs(i).io.in_2 := subBase
    vecExps(i).io.in := vecSubs(i).io.out
    vecFixedPs(i).io.in := vecExps(i).io.out
    vecFixedWires(i) := vecFixedPs(i).io.out
  }
  val vecSum = vecFixedWires.reduceTree(_ + _)

  // Reciprocal estimate for normalization (UQ1.(lutBits-1) -> UQint.frac)
  val sumNonZero = accum.orR
  val msb = (bitWidth - 1).U - PriorityEncoder(Reverse(accum))
  val shift = Mux(sumNonZero, msb - fracPrecision.U, 0.U)
  val mant = accum >> shift
  val lutIndex = mant(fracPrecision, fracPrecision - lutIndexBits + 1)
  val lutVal = lut(lutIndex)
  val scaleDown = lutBits - 1 - fracPrecision
  val lutScaled = if (scaleDown >= 0) (lutVal >> scaleDown) else (lutVal << (-scaleDown))
  val invRaw = lutScaled >> shift
  val invSumCalc = Mux(sumNonZero, invRaw.pad(bitWidth)(bitWidth - 1, 0), 0.U)

  val remainingElems = Mux(arraySize >= procElements, arraySize - procElements, 0.U)
  val validPerBeat = Wire(Vec(outBeatsPerInBeat, UInt(log2Ceil(outWordsPerBeat + 1).W)))
  for (b <- 0 until outBeatsPerInBeat) {
    val base = (b * outWordsPerBeat).U
    val rem = Mux(remainingElems > base, remainingElems - base, 0.U)
    validPerBeat(b) := Mux(rem > outWordsPerBeat.U, outWordsPerBeat.U, rem)
  }

  val outBeatVec = VecInit(Seq.tabulate(outBeatsPerInBeat) { b =>
    VecInit(Seq.tabulate(outWordsPerBeat) { j =>
      outBuf(b * outWordsPerBeat + j)
    }).asUInt
  })

  val outMaskVec = VecInit(Seq.tabulate(outBeatsPerInBeat) { b =>
    val valid = validPerBeat(b)
    VecInit(Seq.tabulate(outWordsPerBeat) { j =>
      Fill(8, j.U < valid)
    }).asUInt
  })

  val outBeat = outBeatVec(writeBeatIdx)
  val outMask = outMaskVec(writeBeatIdx)

  // TileLink Stuff
  val (tl_out, edgesOut) = outer.atlNode.out(0)

  io.cmd.ready := (state === s_idle)
  io.resp.valid := (state === s_resp)
  io.resp.bits.data := accum
  io.resp.bits.rd := resp_rd

  val doRead = (state === s_acq)
  val doPut = (state === s_put)
  val getBits = edgesOut.Get(
    fromSource = 0.U,
    toAddress = inAddr,
    lgSize = log2Ceil(cacheDataBits / 8).U
  )._2
  val putBits = edgesOut.Put(
    fromSource = 0.U,
    toAddress = outAddr,
    lgSize = log2Ceil(cacheDataBits / 8).U,
    data = outBeat,
    mask = outMask
  )._2

  tl_out.a.valid := doRead || doPut
  tl_out.a.bits := Mux(doPut, putBits, getBits)
  tl_out.d.ready := (state === s_gnt) || (state === s_put_ack)

  when(io.cmd.fire){
    resp_rd := io.cmd.bits.inst.rd
    val funct = io.cmd.bits.inst.funct

    when(funct === 0.U) {
      doWrite := false.B
      arraySize := io.cmd.bits.rs2
      inBase := io.cmd.bits.rs1
      inAddr := io.cmd.bits.rs1
      procElements := 0.U
      accum := 0.U
      maxPrev := minBf16
      state := s_acq
    }.otherwise {
      doWrite := true.B
      outAddr := io.cmd.bits.rs1
      inAddr := inBase
      procElements := 0.U
      writeBeatIdx := 0.U
      invSum := invSumCalc
      state := s_acq
    }
  }

  when(state === s_acq && tl_out.a.fire){
    state := s_gnt
  }

  when(state === s_put && tl_out.a.fire){
    state := s_put_ack
  }

  when(state === s_gnt && tl_out.d.fire){
    latchedData := tl_out.d.bits.data
    state := Mux(doWrite, s_exp, s_findmax)
  }

  when(state === s_findmax && !doWrite){
    maxCurr := globalMax.io.out
    state := s_exp
  }

  when(state === s_exp){
    when(doWrite) {
      for (i <- 0 until wordsPerBeat) {
        val normFull = vecFixedWires(i) * invSum
        val norm = (normFull >> fracPrecision)(bitWidth - 1, 0)
        val is_valid = procElements + i.U < arraySize
        outBuf(i) := Mux(is_valid, norm, 0.U)
      }
      writeBeatIdx := 0.U
      state := s_put
    }.otherwise {
      state := s_reduce
    }
  }

  when(state === s_reduce && !doWrite){
    maxPrev := maxCurr
    accum := vecSum + prodAccum
    inAddr := inAddr + bytesPerBeat
    val nextProcElements = procElements + wordsPerBeat.U
    procElements := nextProcElements

    when(nextProcElements >= arraySize){
      state := s_resp
    }.otherwise{
      state := s_acq
    }
  }

  when(state === s_put_ack && tl_out.d.fire){
    outAddr := outAddr + outBeatBytes

    val lastBeat = writeBeatIdx === (outBeatsPerInBeat - 1).U
    when(lastBeat){
      inAddr := inAddr + bytesPerBeat
      val nextProcElements = procElements + wordsPerBeat.U
      procElements := nextProcElements
      writeBeatIdx := 0.U

      when(nextProcElements >= arraySize){
        state := s_resp
      }.otherwise{
        state := s_acq
      }
    }.otherwise{
      writeBeatIdx := writeBeatIdx + 1.U
      state := s_put
    }
  }

  when(io.resp.fire){
    state := s_idle
  }
}

class OnlineSoftmax(
  intPrecision:Int = 12,
  fracPrecision:Int = 20,
  lutEntries: Int = 256,
  lutBits: Int = 64,
  opcodes: OpcodeSet
)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new OnlineSoftmaxImpl(
    intPrecision = intPrecision,
    fracPrecision = fracPrecision,
    lutEntries = lutEntries,
    lutBits = lutBits,
    this
  )
  override val atlNode = TLClientNode(Seq(TLMasterPortParameters.v1(Seq(TLMasterParameters.v1("OnlineSoftmaxRoCC")))))
}

class WithToyRoCC extends Config((site, here, up) => {
  case BuildRoCC => List(
    (p: Parameters) => {
      val expAccum = LazyModule(new OnlineSoftmax(
        intPrecision = 32,
        fracPrecision = 32,
        opcodes = OpcodeSet.custom0
      )(p))
      expAccum
    })
})
