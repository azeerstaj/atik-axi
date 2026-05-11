module AddRawFN (
	io_a_isNaN,
	io_a_isInf,
	io_a_isZero,
	io_a_sign,
	io_a_sExp,
	io_a_sig,
	io_b_isNaN,
	io_b_isInf,
	io_b_isZero,
	io_b_sign,
	io_b_sExp,
	io_b_sig,
	io_invalidExc,
	io_rawOut_isNaN,
	io_rawOut_isInf,
	io_rawOut_isZero,
	io_rawOut_sign,
	io_rawOut_sExp,
	io_rawOut_sig
);
	input io_a_isNaN;
	input io_a_isInf;
	input io_a_isZero;
	input io_a_sign;
	input [9:0] io_a_sExp;
	input [9:0] io_a_sig;
	input io_b_isNaN;
	input io_b_isInf;
	input io_b_isZero;
	input io_b_sign;
	input [9:0] io_b_sExp;
	input [9:0] io_b_sig;
	output wire io_invalidExc;
	output wire io_rawOut_isNaN;
	output wire io_rawOut_isInf;
	output wire io_rawOut_isZero;
	output wire io_rawOut_sign;
	output wire [9:0] io_rawOut_sExp;
	output wire [11:0] io_rawOut_sig;
	wire eqSigns = io_a_sign == ~io_b_sign;
	wire [9:0] _sDiffExps_T = io_a_sExp - io_b_sExp;
	wire _common_sExpOut_T = $signed(_sDiffExps_T) < 10'sh000;
	wire [3:0] _modNatAlignDist_T_4 = (_common_sExpOut_T ? io_b_sExp[3:0] - io_a_sExp[3:0] : _sDiffExps_T[3:0]);
	wire isMaxAlign = |_sDiffExps_T[9:4] & ((_sDiffExps_T[9:4] != 6'h3f) | (_sDiffExps_T[3:0] == 4'h0));
	wire [3:0] alignDist = (isMaxAlign ? 4'hf : _modNatAlignDist_T_4);
	wire closeSubMags = (~eqSigns & ~isMaxAlign) & (_modNatAlignDist_T_4 < 4'h2);
	wire _close_alignedSigA_T_5 = $signed(_sDiffExps_T) > -10'sh001;
	wire [11:0] _close_alignedSigA_T_4 = (_close_alignedSigA_T_5 & _sDiffExps_T[0] ? {io_a_sig, 2'h0} : 12'h000);
	wire [10:0] _GEN = _close_alignedSigA_T_4[10:0] | (_close_alignedSigA_T_5 & ~_sDiffExps_T[0] ? {io_a_sig, 1'h0} : 11'h000);
	wire [11:0] _close_sSigSum_T_3 = {_close_alignedSigA_T_4[11], _GEN[10], _GEN[9:0] | (_common_sExpOut_T ? io_a_sig : 10'h000)} - {io_b_sig[9], io_b_sig, 1'h0};
	wire _close_notTotalCancellation_signOut_T = $signed(_close_sSigSum_T_3) < 12'sh000;
	wire [10:0] _close_sigSum_T_4 = (_close_notTotalCancellation_signOut_T ? 11'h000 - _close_sSigSum_T_3[10:0] : _close_sSigSum_T_3[10:0]);
	wire [2:0] close_normDistReduced2 = (|_close_sigSum_T_4[10:9] ? 3'h0 : (|_close_sigSum_T_4[8:7] ? 3'h1 : (|_close_sigSum_T_4[6:5] ? 3'h2 : (|_close_sigSum_T_4[4:3] ? 3'h3 : {2'h2, _close_sigSum_T_4[2:1] == 2'h0}))));
	wire [25:0] _close_sigOut_T = {15'h0000, _close_sigSum_T_4} << {22'h000000, close_normDistReduced2, 1'h0};
	wire [8:0] _far_sigSmaller_T_1 = (_common_sExpOut_T ? io_a_sig[8:0] : io_b_sig[8:0]);
	wire [13:0] far_mainAlignedSigSmaller = {_far_sigSmaller_T_1, 5'h00} >> alignDist;
	wire [4:0] far_roundExtraMask_shift = $signed(5'sh10 >>> alignDist[3:2]);
	wire _far_alignedSigSmaller_T_5 = |far_mainAlignedSigSmaller[2:0] | (|({|_far_sigSmaller_T_1[8:6], |_far_sigSmaller_T_1[5:2], |_far_sigSmaller_T_1[1:0]} & {far_roundExtraMask_shift[1], far_roundExtraMask_shift[2], far_roundExtraMask_shift[3]}));
	wire [12:0] _far_sigSum_T_3 = ({1'h0, (_common_sExpOut_T ? io_b_sig[8:0] : io_a_sig[8:0]), 3'h0} + (eqSigns ? {1'h0, far_mainAlignedSigSmaller[13:3], _far_alignedSigSmaller_T_5} : {1'h1, ~{far_mainAlignedSigSmaller[13:3], _far_alignedSigSmaller_T_5}})) + {12'h000, ~eqSigns};
	wire notNaN_isInfOut = io_a_isInf | io_b_isInf;
	wire addZeros = io_a_isZero & io_b_isZero;
	wire notNaN_specialCase = notNaN_isInfOut | addZeros;
	assign io_invalidExc = ((io_a_isNaN & ~io_a_sig[7]) | (io_b_isNaN & ~io_b_sig[7])) | ((io_a_isInf & io_b_isInf) & ~eqSigns);
	assign io_rawOut_isNaN = io_a_isNaN | io_b_isNaN;
	assign io_rawOut_isInf = notNaN_isInfOut;
	assign io_rawOut_isZero = addZeros | ((~notNaN_isInfOut & closeSubMags) & ~(|_close_sigOut_T[10:9]));
	assign io_rawOut_sign = ((((eqSigns & io_a_sign) | (io_a_isInf & io_a_sign)) | (io_b_isInf & ~io_b_sign)) | (((~notNaN_specialCase & closeSubMags) & |_close_sigOut_T[10:9]) & (io_a_sign ^ _close_notTotalCancellation_signOut_T))) | ((~notNaN_specialCase & ~closeSubMags) & (_common_sExpOut_T ? ~io_b_sign : io_a_sign));
	assign io_rawOut_sExp = (closeSubMags | _common_sExpOut_T ? io_b_sExp : io_a_sExp) - {6'h00, (closeSubMags ? {close_normDistReduced2, 1'h0} : {3'h0, ~eqSigns})};
	assign io_rawOut_sig = (closeSubMags ? {_close_sigOut_T[10:0], 1'h0} : (eqSigns ? {_far_sigSum_T_3[12:2], _far_sigSum_T_3[1] | _far_sigSum_T_3[0]} : _far_sigSum_T_3[11:0]));
endmodule
module RoundAnyRawFNToRecFN_ie8_is11_oe8_os9 (
	io_invalidExc,
	io_in_isNaN,
	io_in_isInf,
	io_in_isZero,
	io_in_sign,
	io_in_sExp,
	io_in_sig,
	io_out
);
	input io_invalidExc;
	input io_in_isNaN;
	input io_in_isInf;
	input io_in_isZero;
	input io_in_sign;
	input [9:0] io_in_sExp;
	input [11:0] io_in_sig;
	output wire [17:0] io_out;
	wire [8:0] _roundMask_T_1 = ~io_in_sExp[8:0];
	wire [64:0] _GEN = {59'h000000000000000, _roundMask_T_1[5:0]};
	wire [64:0] roundMask_shift = $signed(65'sh10000000000000000 >>> _GEN);
	wire [64:0] roundMask_shift_1 = $signed(65'sh10000000000000000 >>> _GEN);
	wire [9:0] _roundMask_T_34 = (_roundMask_T_1[8] ? (_roundMask_T_1[7] ? {~(_roundMask_T_1[6] ? 7'h00 : ~{roundMask_shift[57], roundMask_shift[58], roundMask_shift[59], roundMask_shift[60], roundMask_shift[61], roundMask_shift[62], roundMask_shift[63]}), 3'h7} : {7'h00, (_roundMask_T_1[6] ? {roundMask_shift_1[0], roundMask_shift_1[1], roundMask_shift_1[2]} : 3'h0)}) : 10'h000);
	wire _GEN_0 = _roundMask_T_34[0] | io_in_sig[11];
	wire [10:0] _GEN_1 = {_roundMask_T_34[9:1], _GEN_0, 1'h1};
	wire [10:0] _roundPosBit_T = (io_in_sig[11:1] & {1'h1, ~_roundMask_T_34[9:1], ~_GEN_0}) & _GEN_1;
	wire [10:0] roundedSig = (|_roundPosBit_T ? ({1'h0, io_in_sig[11:2] | {_roundMask_T_34[9:1], _GEN_0}} + 11'h001) & ~(|_roundPosBit_T & ((io_in_sig[10:0] & _GEN_1) == 11'h000) ? {_roundMask_T_34[9:1], _GEN_0, 1'h1} : 11'h000) : {1'h0, io_in_sig[11:2] & {~_roundMask_T_34[9:1], ~_GEN_0}});
	wire [10:0] sRoundedExp = {io_in_sExp[9], io_in_sExp} + {9'h000, roundedSig[10:9]};
	wire common_totalUnderflow = $signed(sRoundedExp) < 11'sh07a;
	wire isNaNOut = io_invalidExc | io_in_isNaN;
	wire notNaN_isInfOut = io_in_isInf | (((~isNaNOut & ~io_in_isInf) & ~io_in_isZero) & ($signed(sRoundedExp[10:7]) > 4'sh2));
	assign io_out = {~isNaNOut & io_in_sign, (((sRoundedExp[8:0] & ~(io_in_isZero | common_totalUnderflow ? 9'h1c0 : 9'h000)) & {2'h3, ~notNaN_isInfOut, 6'h3f}) | (notNaN_isInfOut ? 9'h180 : 9'h000)) | (isNaNOut ? 9'h1c0 : 9'h000), ((isNaNOut | io_in_isZero) | common_totalUnderflow ? {isNaNOut, 7'h00} : (io_in_sig[11] ? roundedSig[8:1] : roundedSig[7:0]))};
endmodule
module RoundRawFNToRecFN_e8_s9 (
	io_invalidExc,
	io_in_isNaN,
	io_in_isInf,
	io_in_isZero,
	io_in_sign,
	io_in_sExp,
	io_in_sig,
	io_out
);
	input io_invalidExc;
	input io_in_isNaN;
	input io_in_isInf;
	input io_in_isZero;
	input io_in_sign;
	input [9:0] io_in_sExp;
	input [11:0] io_in_sig;
	output wire [17:0] io_out;
	RoundAnyRawFNToRecFN_ie8_is11_oe8_os9 roundAnyRawFNToRecFN(
		.io_invalidExc(io_invalidExc),
		.io_in_isNaN(io_in_isNaN),
		.io_in_isInf(io_in_isInf),
		.io_in_isZero(io_in_isZero),
		.io_in_sign(io_in_sign),
		.io_in_sExp(io_in_sExp),
		.io_in_sig(io_in_sig),
		.io_out(io_out)
	);
endmodule
module AddRecFN (
	io_a,
	io_b,
	io_out
);
	input [17:0] io_a;
	input [17:0] io_b;
	output wire [17:0] io_out;
	wire _addRawFN_io_invalidExc;
	wire _addRawFN_io_rawOut_isNaN;
	wire _addRawFN_io_rawOut_isInf;
	wire _addRawFN_io_rawOut_isZero;
	wire _addRawFN_io_rawOut_sign;
	wire [9:0] _addRawFN_io_rawOut_sExp;
	wire [11:0] _addRawFN_io_rawOut_sig;
	AddRawFN addRawFN(
		.io_a_isNaN(&io_a[16:15] & io_a[14]),
		.io_a_isInf(&io_a[16:15] & ~io_a[14]),
		.io_a_isZero(~(|io_a[16:14])),
		.io_a_sign(io_a[17]),
		.io_a_sExp({1'h0, io_a[16:8]}),
		.io_a_sig({1'h0, |io_a[16:14], io_a[7:0]}),
		.io_b_isNaN(&io_b[16:15] & io_b[14]),
		.io_b_isInf(&io_b[16:15] & ~io_b[14]),
		.io_b_isZero(~(|io_b[16:14])),
		.io_b_sign(io_b[17]),
		.io_b_sExp({1'h0, io_b[16:8]}),
		.io_b_sig({1'h0, |io_b[16:14], io_b[7:0]}),
		.io_invalidExc(_addRawFN_io_invalidExc),
		.io_rawOut_isNaN(_addRawFN_io_rawOut_isNaN),
		.io_rawOut_isInf(_addRawFN_io_rawOut_isInf),
		.io_rawOut_isZero(_addRawFN_io_rawOut_isZero),
		.io_rawOut_sign(_addRawFN_io_rawOut_sign),
		.io_rawOut_sExp(_addRawFN_io_rawOut_sExp),
		.io_rawOut_sig(_addRawFN_io_rawOut_sig)
	);
	RoundRawFNToRecFN_e8_s9 roundRawFNToRecFN(
		.io_invalidExc(_addRawFN_io_invalidExc),
		.io_in_isNaN(_addRawFN_io_rawOut_isNaN),
		.io_in_isInf(_addRawFN_io_rawOut_isInf),
		.io_in_isZero(_addRawFN_io_rawOut_isZero),
		.io_in_sign(_addRawFN_io_rawOut_sign),
		.io_in_sExp(_addRawFN_io_rawOut_sExp),
		.io_in_sig(_addRawFN_io_rawOut_sig),
		.io_out(io_out)
	);
endmodule
module BFloat16Sub (
	io_in_1,
	io_in_2,
	io_out
);
	input [15:0] io_in_1;
	input [15:0] io_in_2;
	output wire [15:0] io_out;
	wire [17:0] _subFN_io_out;
	wire recA_rawIn_isZeroExpIn = io_in_1[14:7] == 8'h00;
	wire [2:0] recA_rawIn_normDist = (io_in_1[6] ? 3'h0 : (io_in_1[5] ? 3'h1 : (io_in_1[4] ? 3'h2 : (io_in_1[3] ? 3'h3 : (io_in_1[2] ? 3'h4 : (io_in_1[1] ? 3'h5 : {2'h3, ~io_in_1[0]}))))));
	wire [14:0] _recA_rawIn_subnormFract_T = {7'h00, io_in_1[6:0], 1'h0} << recA_rawIn_normDist;
	wire [8:0] _recA_rawIn_adjustedExp_T_4 = (recA_rawIn_isZeroExpIn ? {6'h3f, ~recA_rawIn_normDist} : {1'h0, io_in_1[14:7]}) + {7'h20, (recA_rawIn_isZeroExpIn ? 2'h2 : 2'h1)};
	wire [2:0] _recA_T_1 = (recA_rawIn_isZeroExpIn & ~(|io_in_1[6:0]) ? 3'h0 : _recA_rawIn_adjustedExp_T_4[8:6]);
	wire recB_rawIn_isZeroExpIn = io_in_2[14:7] == 8'h00;
	wire [2:0] recB_rawIn_normDist = (io_in_2[6] ? 3'h0 : (io_in_2[5] ? 3'h1 : (io_in_2[4] ? 3'h2 : (io_in_2[3] ? 3'h3 : (io_in_2[2] ? 3'h4 : (io_in_2[1] ? 3'h5 : {2'h3, ~io_in_2[0]}))))));
	wire [14:0] _recB_rawIn_subnormFract_T = {7'h00, io_in_2[6:0], 1'h0} << recB_rawIn_normDist;
	wire [8:0] _recB_rawIn_adjustedExp_T_4 = (recB_rawIn_isZeroExpIn ? {6'h3f, ~recB_rawIn_normDist} : {1'h0, io_in_2[14:7]}) + {7'h20, (recB_rawIn_isZeroExpIn ? 2'h2 : 2'h1)};
	wire [2:0] _recB_T_1 = (recB_rawIn_isZeroExpIn & ~(|io_in_2[6:0]) ? 3'h0 : _recB_rawIn_adjustedExp_T_4[8:6]);
	wire outPadded_rawIn_isInf = &_subFN_io_out[16:15] & ~_subFN_io_out[14];
	wire outPadded_isSubnormal = $signed({1'h0, _subFN_io_out[16:8]}) < 10'sh082;
	wire [8:0] _outPadded_denormFract_T_1 = {1'h0, |_subFN_io_out[16:14], _subFN_io_out[7:1]} >> (3'h1 - _subFN_io_out[10:8]);
	AddRecFN subFN(
		.io_a({io_in_1[15], _recA_T_1[2:1], _recA_T_1[0] | (&_recA_rawIn_adjustedExp_T_4[8:7] & |io_in_1[6:0]), _recA_rawIn_adjustedExp_T_4[5:0], (recA_rawIn_isZeroExpIn ? _recA_rawIn_subnormFract_T[6:0] : io_in_1[6:0]), 1'h0}),
		.io_b({io_in_2[15], _recB_T_1[2:1], _recB_T_1[0] | (&_recB_rawIn_adjustedExp_T_4[8:7] & |io_in_2[6:0]), _recB_rawIn_adjustedExp_T_4[5:0], (recB_rawIn_isZeroExpIn ? _recB_rawIn_subnormFract_T[6:0] : io_in_2[6:0]), 1'h0}),
		.io_out(_subFN_io_out)
	);
	assign io_out = {_subFN_io_out[17], (outPadded_isSubnormal ? 8'h00 : _subFN_io_out[15:8] + 8'h7f) | {8 {(&_subFN_io_out[16:15] & _subFN_io_out[14]) | outPadded_rawIn_isInf}}, (outPadded_isSubnormal ? _outPadded_denormFract_T_1[7:1] : (outPadded_rawIn_isInf ? 7'h00 : _subFN_io_out[7:1]))};
endmodule
module BFloat16Exp (
	io_in,
	io_out
);
	input [15:0] io_in;
	output wire [15:0] io_out;
	wire [24:0] shiftedMantissa = {{10'h000, (io_in[14:7] == 8'h00 ? 8'h00 : {1'h1, io_in[6:0]})} * 18'h00171, 7'h00} >> (8'h85 - io_in[14:7]);
	wire [14:0] signedMantissa = {15 {io_in[15]}} ^ shiftedMantissa[23:9];
	wire [9:0] _GEN = {3'h0, signedMantissa[6:0]};
	wire [20:0] p1 = {4'h0, {7'h00, _GEN + 10'h1a6} * 17'h0001c} * {14'h0000, signedMantissa[6:0]};
	wire [20:0] p2 = {4'h0, {7'h00, _GEN + 10'h116} * 17'h00038} * {14'h0000, ~signedMantissa[6:0]};
	assign io_out = ((&io_in[14:7] & (io_in[6:0] == 7'h00)) & io_in[15] ? 16'h0000 : (&io_in[14:7] ? 16'h7f7f : {1'h0, signedMantissa[14:7] + 8'h7f, (signedMantissa[6] ? p1[20:14] : ~p2[20:14])}));
endmodule
module BFloat16ToFixed (
	io_in,
	io_out
);
	input [15:0] io_in;
	output wire [31:0] io_out;
	wire [8:0] _shiftAmt_T_3 = (|io_in[14:7] ? {1'h0, io_in[14:7]} : 9'h001) - 9'h072;
	wire [518:0] _shiftedMag_T_1 = {511'h0, |io_in[14:7], io_in[6:0]} << _shiftAmt_T_3;
	wire [8:0] _shiftedMag_T_6 = {1'h0, |io_in[14:7], io_in[6:0]} >> (9'h000 - _shiftAmt_T_3);
	wire [31:0] shiftedMag = ($signed(_shiftAmt_T_3) > -9'sh001 ? _shiftedMag_T_1[31:0] : {24'h000000, _shiftedMag_T_6[7:0]});
	assign io_out = (io_in[15] ? 32'h00000000 - shiftedMag : shiftedMag);
endmodule
module UIntFixedToBFloat16 (
	io_in,
	io_out
);
	input [31:0] io_in;
	output wire [15:0] io_out;
	wire [7:0] _GEN = {{io_in[11:8], io_in[15:14]} & 6'h33, 2'h0} | ({io_in[15:12], io_in[19:16]} & 8'h33);
	wire [18:0] _GEN_0 = {io_in[5:4], io_in[7:6], io_in[9:8], _GEN, io_in[19:18], io_in[21:20], io_in[23]} & 19'h55555;
	wire [3:0] _GEN_1 = _GEN_0[18:15] | ({io_in[7:6], io_in[9:8]} & 4'h5);
	wire [7:0] _GEN_2 = _GEN_0[14:7] | (_GEN & 8'h55);
	wire [3:0] _GEN_3 = {_GEN_0[2:0], 1'h0} | ({io_in[23:22], io_in[25:24]} & 4'h5);
	wire [4:0] _msbIdx_T = 5'h1f - (io_in[31] ? 5'h00 : (io_in[30] ? 5'h01 : (io_in[29] ? 5'h02 : (io_in[28] ? 5'h03 : (io_in[27] ? 5'h04 : (io_in[26] ? 5'h05 : (io_in[25] ? 5'h06 : (_GEN_3[0] ? 5'h07 : (_GEN_3[1] ? 5'h08 : (_GEN_3[2] ? 5'h09 : (_GEN_3[3] ? 5'h0a : (io_in[20] ? 5'h0b : (io_in[19] ? 5'h0c : (_GEN_0[5] | io_in[18] ? 5'h0d : (_GEN[1] ? 5'h0e : (_GEN_2[0] ? 5'h0f : (_GEN_2[1] ? 5'h10 : (_GEN_2[2] ? 5'h11 : (_GEN_2[3] ? 5'h12 : (_GEN_2[4] ? 5'h13 : (_GEN_2[5] ? 5'h14 : (_GEN_2[6] ? 5'h15 : (_GEN_2[7] ? 5'h16 : (_GEN_1[0] ? 5'h17 : (_GEN_1[1] ? 5'h18 : (_GEN_1[2] ? 5'h19 : (_GEN_1[3] ? 5'h1a : (io_in[4] ? 5'h1b : (io_in[3] ? 5'h1c : (io_in[2] ? 5'h1d : {4'hf, ~io_in[1]}))))))))))))))))))))))))))))));
	wire [6:0] _unbiasedExp_T_1 = {2'h0, _msbIdx_T} - 7'h14;
	wire [7:0] _biasedExp_T = {_unbiasedExp_T_1[6], _unbiasedExp_T_1} + 8'h7f;
	wire shiftLeft = _msbIdx_T < 5'h07;
	wire [94:0] _normalizedSig_T = {63'h0000000000000000, io_in} << (shiftLeft ? {1'h0, 5'h07 - _msbIdx_T} : 6'h00);
	wire [31:0] _normalizedSig_T_2 = io_in >> (shiftLeft ? 6'h00 : {1'h0, _msbIdx_T - 5'h07});
	assign io_out = ((io_in == 32'h00000000) | ($signed(_biasedExp_T) < 8'sh01) ? 16'h0000 : {1'h0, _biasedExp_T, (shiftLeft ? _normalizedSig_T[6:0] : _normalizedSig_T_2[6:0])});
endmodule
module BFloat16Max (
	io_in_1,
	io_in_2,
	io_out
);
	input [15:0] io_in_1;
	input [15:0] io_in_2;
	output wire [15:0] io_out;
	assign io_out = ((io_in_1[15] == io_in_2[15] ? (io_in_1[15] ? io_in_2[14:0] > io_in_1[14:0] : io_in_1[14:0] > io_in_2[14:0]) : ~io_in_1[15]) ? io_in_1 : io_in_2);
endmodule
module BFloat16VectorMax (
	io_in,
	io_out
);
	input [63:0] io_in;
	output wire [15:0] io_out;
	wire [15:0] _io_out_T = ((io_in[15] == io_in[31] ? (io_in[15] ? io_in[30:16] > io_in[14:0] : io_in[14:0] > io_in[30:16]) : ~io_in[15]) ? io_in[15:0] : io_in[31:16]);
	wire [15:0] _io_out_T_1 = ((io_in[47] == io_in[63] ? (io_in[47] ? io_in[62:48] > io_in[46:32] : io_in[46:32] > io_in[62:48]) : ~io_in[47]) ? io_in[47:32] : io_in[63:48]);
	assign io_out = ((_io_out_T[15] == _io_out_T_1[15] ? (_io_out_T[15] ? _io_out_T_1[14:0] > _io_out_T[14:0] : _io_out_T[14:0] > _io_out_T_1[14:0]) : ~_io_out_T[15]) ? _io_out_T : _io_out_T_1);
endmodule
module OnlineSoftmaxFastStandalone (
	clock,
	reset,
	io_cmdValid,
	io_cmdReady,
	io_cmdFunct,
	io_cmdRs1,
	io_cmdRs2,
	io_cmdRd,
	io_respValid,
	io_respReady,
	io_respRd,
	io_respData,
	io_memReqValid,
	io_memReqReady,
	io_memReqWrite,
	io_memReqAddr,
	io_memReqWdata,
	io_memReqMask,
	io_memRespValid,
	io_memRespReady,
	io_memRespData,
	io_busy
);
	input clock;
	input reset;
	input io_cmdValid;
	output wire io_cmdReady;
	input [6:0] io_cmdFunct;
	input [63:0] io_cmdRs1;
	input [63:0] io_cmdRs2;
	input [4:0] io_cmdRd;
	output wire io_respValid;
	input io_respReady;
	output wire [4:0] io_respRd;
	output wire [63:0] io_respData;
	output wire io_memReqValid;
	input io_memReqReady;
	output wire io_memReqWrite;
	output wire [63:0] io_memReqAddr;
	output wire [63:0] io_memReqWdata;
	output wire [7:0] io_memReqMask;
	input io_memRespValid;
	output wire io_memRespReady;
	input [63:0] io_memRespData;
	output wire io_busy;
	wire [15:0] _vecMax_io_out;
	wire [15:0] _globalMax_io_out;
	wire [31:0] _maxFixed_io_out;
	wire [15:0] _maxExp_io_out;
	wire [15:0] _maxSub_io_out;
	wire [15:0] _vecNormOut_3_io_out;
	wire [15:0] _vecNormOut_2_io_out;
	wire [15:0] _vecNormOut_1_io_out;
	wire [15:0] _vecNormOut_0_io_out;
	wire [31:0] _vecFixed_3_io_out;
	wire [31:0] _vecFixed_2_io_out;
	wire [31:0] _vecFixed_1_io_out;
	wire [31:0] _vecFixed_0_io_out;
	wire [15:0] _vecExps_3_io_out;
	wire [15:0] _vecExps_2_io_out;
	wire [15:0] _vecExps_1_io_out;
	wire [15:0] _vecExps_0_io_out;
	wire [15:0] _vecSubs_3_io_out;
	wire [15:0] _vecSubs_2_io_out;
	wire [15:0] _vecSubs_1_io_out;
	wire [15:0] _vecSubs_0_io_out;
	reg [3:0] state;
	reg [31:0] accum;
	reg [15:0] maxCurr;
	reg [15:0] maxPrev;
	reg [63:0] arraySize;
	reg [63:0] inBase;
	reg [63:0] inAddr;
	reg [63:0] outAddr;
	reg [63:0] procElements;
	reg [63:0] latchedData;
	reg [31:0] invSum;
	reg doWrite;
	reg [4:0] respRd;
	reg [63:0] respData;
	wire [15:0] bfloatInputs_0 = (procElements >= arraySize ? 16'hff80 : latchedData[15:0]);
	wire [63:0] _validBytes_3_T = procElements + 64'h0000000000000001;
	wire [15:0] bfloatInputs_1 = (_validBytes_3_T >= arraySize ? 16'hff80 : latchedData[31:16]);
	wire [63:0] _validBytes_5_T = procElements + 64'h0000000000000002;
	wire [15:0] bfloatInputs_2 = (_validBytes_5_T >= arraySize ? 16'hff80 : latchedData[47:32]);
	wire [63:0] _validBytes_7_T = procElements + 64'h0000000000000003;
	wire [15:0] bfloatInputs_3 = (_validBytes_7_T >= arraySize ? 16'hff80 : latchedData[63:48]);
	wire [15:0] subBase = (doWrite ? maxPrev : _globalMax_io_out);
	wire [51:0] _GEN = {20'h00000, invSum};
	wire [51:0] normFull = {20'h00000, _vecFixed_0_io_out} * _GEN;
	wire [51:0] normFull_1 = {20'h00000, _vecFixed_1_io_out} * _GEN;
	wire [51:0] normFull_2 = {20'h00000, _vecFixed_2_io_out} * _GEN;
	wire [51:0] normFull_3 = {20'h00000, _vecFixed_3_io_out} * _GEN;
	wire io_cmdReady_0 = state == 4'h0;
	wire io_respValid_0 = state == 4'h8;
	wire _GEN_0 = state == 4'h1;
	wire _GEN_1 = state == 4'h2;
	wire io_memReqWrite_0 = state == 4'h6;
	wire _GEN_2 = state == 4'h7;
	wire [4095:0] _GEN_3 = 4096'h404040404040404040c246d47d78693c41465fdf5cd0105241cc98291fdf19b44254fce404254fce42df9bb096771e4d436c82a23d1a566343fbc043fbc043fc448d639d74c0cda845217c382b34eda345b81a2509cde3ad46514e02328a701246ed29011bb4a404478bbcecfee1d10c482d1c319f03621d48d159e26af37c05497889c2024bc44e4a22c04a22c04a234ad012b404ad012b4b8097012e025c054c346404c346404c4ceb916d5ef2c7834da637cf781d1e554e6470b061fd8cdc4f265691eeaf9d104fec04fec04fec0550b59897547e1bbe51832f1fd73e68705254e78ecb419ba9532ae21c96bdb9d4540540540540540554e42523d03fab1c55c7b4f141ace68956b015ac056b015b579d6ee340579d6f588fe9dc0588fe9e5987b1a9448be4065a84f3454dca41105b87ddad0cdf1b2c5c90a1fd1b7af0175d9f7390d2a6c4065eb4882383b30d515fd017f405fd017f60f25deacafb74a4621b97c2aec12653634c0634c0634c066483ed274388a35665c393e032e1c9f0670b453b92840671685b4fe5e92c068669b4069b4069b4076b15c06b15c06b166c80d901b20364076df5b0f768ce2cac6f74ae26501bdd2c70fe3c070fe3c0717292cc157b8644077432d63dbb01d0cb75ded952e0b0ce4677975b8fe21a291c795ceb240795ceb27b301ecc07b301ed7d1196792909c5607f01fc07f01fc07f;
	wire [7:0] _GEN_4 = {{accum[11:8], accum[15:14]} & 6'h33, 2'h0} | ({accum[15:12], accum[19:16]} & 8'h33);
	wire [18:0] _GEN_5 = {accum[5:4], accum[7:6], accum[9:8], _GEN_4, accum[19:18], accum[21:20], accum[23]} & 19'h55555;
	wire [3:0] _GEN_6 = _GEN_5[18:15] | ({accum[7:6], accum[9:8]} & 4'h5);
	wire [7:0] _GEN_7 = _GEN_5[14:7] | (_GEN_4 & 8'h55);
	wire [3:0] _GEN_8 = {_GEN_5[2:0], 1'h0} | ({accum[23:22], accum[25:24]} & 4'h5);
	wire [4:0] shift = (|accum ? (5'h1f + 5'h0c) - (accum[31] ? 5'h00 : (accum[30] ? 5'h01 : (accum[29] ? 5'h02 : (accum[28] ? 5'h03 : (accum[27] ? 5'h04 : (accum[26] ? 5'h05 : (accum[25] ? 5'h06 : (_GEN_8[0] ? 5'h07 : (_GEN_8[1] ? 5'h08 : (_GEN_8[2] ? 5'h09 : (_GEN_8[3] ? 5'h0a : (accum[20] ? 5'h0b : (accum[19] ? 5'h0c : (_GEN_5[5] | accum[18] ? 5'h0d : (_GEN_4[1] ? 5'h0e : (_GEN_7[0] ? 5'h0f : (_GEN_7[1] ? 5'h10 : (_GEN_7[2] ? 5'h11 : (_GEN_7[3] ? 5'h12 : (_GEN_7[4] ? 5'h13 : (_GEN_7[5] ? 5'h14 : (_GEN_7[6] ? 5'h15 : (_GEN_7[7] ? 5'h16 : (_GEN_6[0] ? 5'h17 : (_GEN_6[1] ? 5'h18 : (_GEN_6[2] ? 5'h19 : (_GEN_6[3] ? 5'h1a : (accum[4] ? 5'h1b : (accum[3] ? 5'h1c : (accum[2] ? 5'h1d : {4'hf, ~accum[1]})))))))))))))))))))))))))))))) : 5'h00);
	wire [31:0] mant = accum >> shift;
	wire _GEN_9 = io_cmdValid & io_cmdReady_0;
	wire _GEN_10 = _GEN_9 & ~(|io_cmdFunct);
	wire _GEN_11 = _GEN_9 & |io_cmdFunct;
	wire _GEN_12 = _GEN_1 & io_memRespValid;
	wire _GEN_13 = state == 4'h3;
	wire _GEN_14 = state == 4'h5;
	wire [51:0] prodAccumFull = {20'h00000, accum} * {20'h00000, (_maxFixed_io_out > 32'h00100000 ? 32'h00100000 : _maxFixed_io_out)};
	wire [31:0] _respData_T = (((_vecFixed_0_io_out + _vecFixed_1_io_out) + _vecFixed_2_io_out) + _vecFixed_3_io_out) + prodAccumFull[51:20];
	wire [63:0] _nextProcElements_T = procElements + 64'h0000000000000004;
	wire _GEN_15 = _nextProcElements_T >= arraySize;
	wire _GEN_16 = _GEN_2 & io_memRespValid;
	wire [63:0] _nextProcElements_T_1 = procElements + 64'h0000000000000004;
	always @(posedge clock)
		if (reset) begin
			state <= 4'h0;
			accum <= 32'h00000000;
			maxCurr <= 16'hff80;
			maxPrev <= 16'hff80;
			arraySize <= 64'h0000000000000000;
			inBase <= 64'h0000000000000000;
			inAddr <= 64'h0000000000000000;
			outAddr <= 64'h0000000000000000;
			procElements <= 64'h0000000000000000;
			latchedData <= 64'h0000000000000000;
			invSum <= 32'h00000000;
			doWrite <= 1'h0;
			respRd <= 5'h00;
			respData <= 64'h0000000000000000;
		end
		else begin
			if (io_respValid_0 & io_respReady)
				state <= 4'h0;
			else if (_GEN_16)
				state <= (_nextProcElements_T_1 >= arraySize ? 4'h8 : 4'h1);
			else if (io_memReqWrite_0 & io_memReqReady)
				state <= 4'h7;
			else if (_GEN_14)
				state <= (_GEN_15 ? 4'h8 : 4'h1);
			else if (state == 4'h4)
				state <= (doWrite ? 4'h6 : 4'h5);
			else if (_GEN_13)
				state <= 4'h4;
			else if (_GEN_12)
				state <= (doWrite ? 4'h4 : 4'h3);
			else if (_GEN_0 & io_memReqReady)
				state <= 4'h2;
			else if (_GEN_9)
				state <= ((|io_cmdFunct ? arraySize == 64'h0000000000000000 : io_cmdRs2 == 64'h0000000000000000) ? 4'h8 : 4'h1);
			if (_GEN_14) begin
				accum <= _respData_T;
				maxPrev <= maxCurr;
			end
			else if (_GEN_10) begin
				accum <= 32'h00000000;
				maxPrev <= 16'hff80;
			end
			if (_GEN_13)
				maxCurr <= _globalMax_io_out;
			if (_GEN_10) begin
				arraySize <= io_cmdRs2;
				inBase <= io_cmdRs1;
			end
			if (_GEN_16) begin
				inAddr <= inAddr + 64'h0000000000000008;
				outAddr <= outAddr + 64'h0000000000000008;
				procElements <= _nextProcElements_T_1;
			end
			else begin
				if (_GEN_14) begin
					inAddr <= inAddr + 64'h0000000000000008;
					procElements <= _nextProcElements_T;
				end
				else if (_GEN_9) begin
					inAddr <= (|io_cmdFunct ? inBase : io_cmdRs1);
					procElements <= 64'h0000000000000000;
				end
				if (_GEN_11)
					outAddr <= io_cmdRs1;
			end
			if (_GEN_12)
				latchedData <= io_memRespData;
			if (_GEN_11)
				invSum <= (|accum ? {11'h000, _GEN_3[(mant[20:15] * 64) + 63-:21] >> shift} : 32'h00000000);
			if (_GEN_9) begin
				doWrite <= |io_cmdFunct;
				respRd <= io_cmdRd;
			end
			if (_GEN_14 & _GEN_15)
				respData <= {32'h00000000, _respData_T};
			else if (_GEN_9)
				respData <= 64'h0000000000000000;
		end
	BFloat16Sub vecSubs_0(
		.io_in_1(bfloatInputs_0),
		.io_in_2(subBase),
		.io_out(_vecSubs_0_io_out)
	);
	BFloat16Sub vecSubs_1(
		.io_in_1(bfloatInputs_1),
		.io_in_2(subBase),
		.io_out(_vecSubs_1_io_out)
	);
	BFloat16Sub vecSubs_2(
		.io_in_1(bfloatInputs_2),
		.io_in_2(subBase),
		.io_out(_vecSubs_2_io_out)
	);
	BFloat16Sub vecSubs_3(
		.io_in_1(bfloatInputs_3),
		.io_in_2(subBase),
		.io_out(_vecSubs_3_io_out)
	);
	BFloat16Exp vecExps_0(
		.io_in(_vecSubs_0_io_out),
		.io_out(_vecExps_0_io_out)
	);
	BFloat16Exp vecExps_1(
		.io_in(_vecSubs_1_io_out),
		.io_out(_vecExps_1_io_out)
	);
	BFloat16Exp vecExps_2(
		.io_in(_vecSubs_2_io_out),
		.io_out(_vecExps_2_io_out)
	);
	BFloat16Exp vecExps_3(
		.io_in(_vecSubs_3_io_out),
		.io_out(_vecExps_3_io_out)
	);
	BFloat16ToFixed vecFixed_0(
		.io_in(_vecExps_0_io_out),
		.io_out(_vecFixed_0_io_out)
	);
	BFloat16ToFixed vecFixed_1(
		.io_in(_vecExps_1_io_out),
		.io_out(_vecFixed_1_io_out)
	);
	BFloat16ToFixed vecFixed_2(
		.io_in(_vecExps_2_io_out),
		.io_out(_vecFixed_2_io_out)
	);
	BFloat16ToFixed vecFixed_3(
		.io_in(_vecExps_3_io_out),
		.io_out(_vecFixed_3_io_out)
	);
	UIntFixedToBFloat16 vecNormOut_0(
		.io_in(normFull[51:20]),
		.io_out(_vecNormOut_0_io_out)
	);
	UIntFixedToBFloat16 vecNormOut_1(
		.io_in(normFull_1[51:20]),
		.io_out(_vecNormOut_1_io_out)
	);
	UIntFixedToBFloat16 vecNormOut_2(
		.io_in(normFull_2[51:20]),
		.io_out(_vecNormOut_2_io_out)
	);
	UIntFixedToBFloat16 vecNormOut_3(
		.io_in(normFull_3[51:20]),
		.io_out(_vecNormOut_3_io_out)
	);
	BFloat16Sub maxSub(
		.io_in_1(maxPrev),
		.io_in_2(_globalMax_io_out),
		.io_out(_maxSub_io_out)
	);
	BFloat16Exp maxExp(
		.io_in(_maxSub_io_out),
		.io_out(_maxExp_io_out)
	);
	BFloat16ToFixed maxFixed(
		.io_in(_maxExp_io_out),
		.io_out(_maxFixed_io_out)
	);
	BFloat16Max globalMax(
		.io_in_1(_vecMax_io_out),
		.io_in_2(maxPrev),
		.io_out(_globalMax_io_out)
	);
	BFloat16VectorMax vecMax(
		.io_in({bfloatInputs_3, bfloatInputs_2, bfloatInputs_1, bfloatInputs_0}),
		.io_out(_vecMax_io_out)
	);
	assign io_cmdReady = io_cmdReady_0;
	assign io_respValid = io_respValid_0;
	assign io_respRd = respRd;
	assign io_respData = respData;
	assign io_memReqValid = io_memReqWrite_0 | _GEN_0;
	assign io_memReqWrite = io_memReqWrite_0;
	assign io_memReqAddr = (io_memReqWrite_0 ? outAddr : (_GEN_0 ? inAddr : 64'h0000000000000000));
	assign io_memReqWdata = (io_memReqWrite_0 ? {(_validBytes_7_T < arraySize ? _vecNormOut_3_io_out : 16'h0000), (_validBytes_5_T < arraySize ? _vecNormOut_2_io_out : 16'h0000), (_validBytes_3_T < arraySize ? _vecNormOut_1_io_out : 16'h0000), (procElements < arraySize ? _vecNormOut_0_io_out : 16'h0000)} : 64'h0000000000000000);
	assign io_memReqMask = (io_memReqWrite_0 ? {_validBytes_7_T < arraySize, _validBytes_7_T < arraySize, _validBytes_5_T < arraySize, _validBytes_5_T < arraySize, _validBytes_3_T < arraySize, _validBytes_3_T < arraySize, procElements < arraySize, procElements < arraySize} : {8 {_GEN_0}});
	assign io_memRespReady = _GEN_2 | _GEN_1;
	assign io_busy = |state;
endmodule
module OnlineSoftmaxFastOpenLaneTop (
	clock,
	reset,
	io_cmdValid,
	io_cmdReady,
	io_cmdFunct,
	io_cmdRs1,
	io_cmdRs2,
	io_cmdRd,
	io_respValid,
	io_respReady,
	io_respRd,
	io_respData,
	io_memReqValid,
	io_memReqReady,
	io_memReqWrite,
	io_memReqAddr,
	io_memReqWdata,
	io_memReqMask,
	io_memRespValid,
	io_memRespReady,
	io_memRespData,
	io_memRespWriteAck,
	io_busy
);
	input clock;
	input reset;
	input io_cmdValid;
	output wire io_cmdReady;
	input [6:0] io_cmdFunct;
	input [63:0] io_cmdRs1;
	input [63:0] io_cmdRs2;
	input [4:0] io_cmdRd;
	output wire io_respValid;
	input io_respReady;
	output wire [4:0] io_respRd;
	output wire [63:0] io_respData;
	output wire io_memReqValid;
	input io_memReqReady;
	output wire io_memReqWrite;
	output wire [63:0] io_memReqAddr;
	output wire [63:0] io_memReqWdata;
	output wire [7:0] io_memReqMask;
	input io_memRespValid;
	output wire io_memRespReady;
	input [63:0] io_memRespData;
	input io_memRespWriteAck;
	output wire io_busy;
	OnlineSoftmaxFastStandalone dut(
		.clock(clock),
		.reset(reset),
		.io_cmdValid(io_cmdValid),
		.io_cmdReady(io_cmdReady),
		.io_cmdFunct(io_cmdFunct),
		.io_cmdRs1(io_cmdRs1),
		.io_cmdRs2(io_cmdRs2),
		.io_cmdRd(io_cmdRd),
		.io_respValid(io_respValid),
		.io_respReady(io_respReady),
		.io_respRd(io_respRd),
		.io_respData(io_respData),
		.io_memReqValid(io_memReqValid),
		.io_memReqReady(io_memReqReady),
		.io_memReqWrite(io_memReqWrite),
		.io_memReqAddr(io_memReqAddr),
		.io_memReqWdata(io_memReqWdata),
		.io_memReqMask(io_memReqMask),
		.io_memRespValid(io_memRespValid),
		.io_memRespReady(io_memRespReady),
		.io_memRespData(io_memRespData),
		.io_busy(io_busy)
	);
endmodule
