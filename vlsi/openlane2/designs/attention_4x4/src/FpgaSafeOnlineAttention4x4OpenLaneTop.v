module BFloat16ToSIntFixed (
	io_in,
	io_out
);
	input [15:0] io_in;
	output wire [15:0] io_out;
	wire [9:0] _shiftAmt_T_3 = (|io_in[14:7] ? {2'h0, io_in[14:7]} : 10'h001) - 10'h07e;
	wire [1031:0] _shiftedMag_T_3 = {1024'h0, |io_in[14:7], io_in[6:0]} << _shiftAmt_T_3;
	wire [9:0] _shiftedMag_T_11 = {2'h0, |io_in[14:7], io_in[6:0]} >> (10'h000 - _shiftAmt_T_3);
	wire [23:0] shiftedMag = (io_in[14:0] == 15'h0000 ? 24'h000000 : ($signed(_shiftAmt_T_3) > -10'sh001 ? _shiftedMag_T_3[23:0] : {15'h0000, _shiftedMag_T_11[8:0]}));
	wire [23:0] satMag = (~io_in[15] & |shiftedMag[23:15] ? 24'h007fff : (io_in[15] & (shiftedMag > 24'h008000) ? 24'h008000 : shiftedMag));
	assign io_out = (io_in[15] & |satMag ? 16'h0000 - satMag[15:0] : satMag[15:0]);
endmodule
module BFloat16ToSIntFixed_8 (
	io_in,
	io_out
);
	input [15:0] io_in;
	output wire [23:0] io_out;
	wire [9:0] _shiftAmt_T_3 = (|io_in[14:7] ? {2'h0, io_in[14:7]} : 10'h001) - 10'h076;
	wire [1031:0] _shiftedMag_T_3 = {1024'h0, |io_in[14:7], io_in[6:0]} << _shiftAmt_T_3;
	wire [9:0] _shiftedMag_T_11 = {2'h0, |io_in[14:7], io_in[6:0]} >> (10'h000 - _shiftAmt_T_3);
	wire [31:0] shiftedMag = (io_in[14:0] == 15'h0000 ? 32'h00000000 : ($signed(_shiftAmt_T_3) > -10'sh001 ? _shiftedMag_T_3[31:0] : {23'h000000, _shiftedMag_T_11[8:0]}));
	wire [31:0] satMag = (~io_in[15] & |shiftedMag[31:23] ? 32'h007fffff : (io_in[15] & (shiftedMag > 32'h00800000) ? 32'h00800000 : shiftedMag));
	assign io_out = (io_in[15] & |satMag ? 24'h000000 - satMag[23:0] : satMag[23:0]);
endmodule
module SIntFixedToBFloat16 (
	io_in,
	io_out
);
	input [63:0] io_in;
	output wire [15:0] io_out;
	wire [63:0] mag = (io_in[63] ? ~io_in + 64'h0000000000000001 : io_in);
	wire [15:0] _GEN = {{mag[23:16], mag[31:28]} & 12'hf0f, 4'h0} | ({mag[31:24], mag[39:32]} & 16'h0f0f);
	wire [37:0] _GEN_0 = {mag[11:8], mag[15:12], mag[19:16], _GEN, mag[39:36], mag[43:40], mag[47:46]} & 38'h3333333333;
	wire [7:0] _GEN_1 = _GEN_0[37:30] | ({mag[15:12], mag[19:16]} & 8'h33);
	wire [15:0] _GEN_2 = _GEN_0[29:14] | (_GEN & 16'h3333);
	wire [1:0] _GEN_3 = _GEN_0[11:10] | mag[37:36];
	wire [7:0] _GEN_4 = {_GEN_0[5:0], 2'h0} | ({mag[47:44], mag[51:48]} & 8'h33);
	wire [50:0] _GEN_5 = {mag[5:4], mag[7:6], mag[9:8], _GEN_1, _GEN_2, _GEN[3:2], _GEN_3, mag[39:38], mag[41:40], _GEN_4, mag[51:50], mag[53:52], mag[55]} & 51'h5555555555555;
	wire [3:0] _GEN_6 = _GEN_5[50:47] | ({mag[7:6], mag[9:8]} & 4'h5);
	wire [7:0] _GEN_7 = _GEN_5[46:39] | (_GEN_1 & 8'h55);
	wire [15:0] _GEN_8 = _GEN_5[38:23] | (_GEN_2 & 16'h5555);
	wire [1:0] _GEN_9 = {_GEN[3], 1'h0} | (_GEN_3 & 2'h1);
	wire [3:0] _GEN_10 = _GEN_5[18:15] | ({mag[39:38], mag[41:40]} & 4'h5);
	wire [7:0] _GEN_11 = _GEN_5[14:7] | (_GEN_4 & 8'h55);
	wire [3:0] _GEN_12 = {_GEN_5[2:0], 1'h0} | ({mag[55:54], mag[57:56]} & 4'h5);
	wire [5:0] _msbIdx_T = 6'h3f - (mag[63] ? 6'h00 : (mag[62] ? 6'h01 : (mag[61] ? 6'h02 : (mag[60] ? 6'h03 : (mag[59] ? 6'h04 : (mag[58] ? 6'h05 : (mag[57] ? 6'h06 : (_GEN_12[0] ? 6'h07 : (_GEN_12[1] ? 6'h08 : (_GEN_12[2] ? 6'h09 : (_GEN_12[3] ? 6'h0a : (mag[52] ? 6'h0b : (mag[51] ? 6'h0c : (_GEN_5[5] | mag[50] ? 6'h0d : (_GEN_4[1] ? 6'h0e : (_GEN_11[0] ? 6'h0f : (_GEN_11[1] ? 6'h10 : (_GEN_11[2] ? 6'h11 : (_GEN_11[3] ? 6'h12 : (_GEN_11[4] ? 6'h13 : (_GEN_11[5] ? 6'h14 : (_GEN_11[6] ? 6'h15 : (_GEN_11[7] ? 6'h16 : (_GEN_10[0] ? 6'h17 : (_GEN_10[1] ? 6'h18 : (_GEN_10[2] ? 6'h19 : (_GEN_10[3] ? 6'h1a : (_GEN_9[0] ? 6'h1b : (_GEN_9[1] ? 6'h1c : (_GEN_5[21] | _GEN[2] ? 6'h1d : (_GEN_2[1] ? 6'h1e : (_GEN_8[0] ? 6'h1f : (_GEN_8[1] ? 6'h20 : (_GEN_8[2] ? 6'h21 : (_GEN_8[3] ? 6'h22 : (_GEN_8[4] ? 6'h23 : (_GEN_8[5] ? 6'h24 : (_GEN_8[6] ? 6'h25 : (_GEN_8[7] ? 6'h26 : (_GEN_8[8] ? 6'h27 : (_GEN_8[9] ? 6'h28 : (_GEN_8[10] ? 6'h29 : (_GEN_8[11] ? 6'h2a : (_GEN_8[12] ? 6'h2b : (_GEN_8[13] ? 6'h2c : (_GEN_8[14] ? 6'h2d : (_GEN_8[15] ? 6'h2e : (_GEN_7[0] ? 6'h2f : (_GEN_7[1] ? 6'h30 : (_GEN_7[2] ? 6'h31 : (_GEN_7[3] ? 6'h32 : (_GEN_7[4] ? 6'h33 : (_GEN_7[5] ? 6'h34 : (_GEN_7[6] ? 6'h35 : (_GEN_7[7] ? 6'h36 : (_GEN_6[0] ? 6'h37 : (_GEN_6[1] ? 6'h38 : (_GEN_6[2] ? 6'h39 : (_GEN_6[3] ? 6'h3a : (mag[4] ? 6'h3b : (mag[3] ? 6'h3c : (mag[2] ? 6'h3d : {5'h1f, ~mag[1]}))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	wire [7:0] _unbiasedExp_T_1 = {2'h0, _msbIdx_T} - 8'h10;
	wire [8:0] _biasedExp_T = {_unbiasedExp_T_1[7], _unbiasedExp_T_1} + 9'h07f;
	wire shiftLeft = _msbIdx_T < 6'h07;
	wire [190:0] _normalizedSig_T = {127'h00000000000000000000000000000000, mag} << (shiftLeft ? {1'h0, 6'h07 - _msbIdx_T} : 7'h00);
	wire [63:0] _normalizedSig_T_2 = mag >> (shiftLeft ? 7'h00 : {1'h0, _msbIdx_T - 6'h07});
	assign io_out = ((mag == 64'h0000000000000000) | ($signed(_biasedExp_T) < 9'sh001) ? 16'h0000 : {io_in[63], (_biasedExp_T == 9'h0ff ? 15'h7f7f : {_biasedExp_T[7:0], (shiftLeft ? _normalizedSig_T[6:0] : _normalizedSig_T_2[6:0])})});
endmodule
module scoreBanks_128x64 (
	R0_addr,
	R0_en,
	R0_clk,
	R0_data,
	W0_addr,
	W0_en,
	W0_clk,
	W0_data
);
	input [6:0] R0_addr;
	input R0_en;
	input R0_clk;
	output wire [63:0] R0_data;
	input [6:0] W0_addr;
	input W0_en;
	input W0_clk;
	input [63:0] W0_data;
	reg [63:0] Memory [0:127];
	reg _R0_en_d0;
	reg [6:0] _R0_addr_d0;
	always @(posedge R0_clk) begin
		_R0_en_d0 <= R0_en;
		_R0_addr_d0 <= R0_addr;
	end
	always @(posedge W0_clk)
		if (W0_en & 1'h1)
			Memory[W0_addr] <= W0_data;
	assign R0_data = (_R0_en_d0 ? Memory[_R0_addr_d0] : 64'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx);
endmodule
module FpgaSafeOnlineAttention4x4Standalone (
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
	output wire [127:0] io_memReqWdata;
	output wire [15:0] io_memReqMask;
	input io_memRespValid;
	output wire io_memRespReady;
	input [127:0] io_memRespData;
	output wire io_busy;
	wire [15:0] _conv_15_io_out;
	wire [15:0] _conv_14_io_out;
	wire [15:0] _conv_13_io_out;
	wire [15:0] _conv_12_io_out;
	wire [15:0] _conv_11_io_out;
	wire [15:0] _conv_10_io_out;
	wire [15:0] _conv_9_io_out;
	wire [15:0] _conv_8_io_out;
	wire [15:0] _conv_7_io_out;
	wire [15:0] _conv_6_io_out;
	wire [15:0] _conv_5_io_out;
	wire [15:0] _conv_4_io_out;
	wire [15:0] _conv_3_io_out;
	wire [15:0] _conv_2_io_out;
	wire [15:0] _conv_1_io_out;
	wire [15:0] _conv_io_out;
	wire [15:0] _vFixed_3_3_io_out;
	wire [15:0] _vFixed_3_2_io_out;
	wire [15:0] _vFixed_3_1_io_out;
	wire [15:0] _vFixed_3_0_io_out;
	wire [15:0] _vFixed_2_3_io_out;
	wire [15:0] _vFixed_2_2_io_out;
	wire [15:0] _vFixed_2_1_io_out;
	wire [15:0] _vFixed_2_0_io_out;
	wire [15:0] _vFixed_1_3_io_out;
	wire [15:0] _vFixed_1_2_io_out;
	wire [15:0] _vFixed_1_1_io_out;
	wire [15:0] _vFixed_1_0_io_out;
	wire [15:0] _vFixed_0_3_io_out;
	wire [15:0] _vFixed_0_2_io_out;
	wire [15:0] _vFixed_0_1_io_out;
	wire [15:0] _vFixed_0_0_io_out;
	wire [23:0] _scaleConv_io_out;
	wire [15:0] _kFixed_3_io_out;
	wire [15:0] _kFixed_2_io_out;
	wire [15:0] _kFixed_1_io_out;
	wire [15:0] _kFixed_0_io_out;
	wire [15:0] _qFixed_3_io_out;
	wire [15:0] _qFixed_2_io_out;
	wire [15:0] _qFixed_1_io_out;
	wire [15:0] _qFixed_0_io_out;
	wire [63:0] _scoreBanks_3_ext_R0_data;
	wire [63:0] _scoreBanks_2_ext_R0_data;
	wire [63:0] _scoreBanks_1_ext_R0_data;
	wire [63:0] _scoreBanks_0_ext_R0_data;
	reg [127:0] qBuf_0;
	reg [127:0] qBuf_1;
	reg [127:0] qBuf_2;
	reg [127:0] qBuf_3;
	reg [127:0] qBuf_4;
	reg [127:0] qBuf_5;
	reg [127:0] qBuf_6;
	reg [127:0] qBuf_7;
	reg [127:0] qBuf_8;
	reg [127:0] qBuf_9;
	reg [127:0] qBuf_10;
	reg [127:0] qBuf_11;
	reg [127:0] qBuf_12;
	reg [127:0] qBuf_13;
	reg [127:0] qBuf_14;
	reg [127:0] qBuf_15;
	reg [127:0] qBuf_16;
	reg [127:0] qBuf_17;
	reg [127:0] qBuf_18;
	reg [127:0] qBuf_19;
	reg [127:0] qBuf_20;
	reg [127:0] qBuf_21;
	reg [127:0] qBuf_22;
	reg [127:0] qBuf_23;
	reg [127:0] qBuf_24;
	reg [127:0] qBuf_25;
	reg [127:0] qBuf_26;
	reg [127:0] qBuf_27;
	reg [127:0] qBuf_28;
	reg [127:0] qBuf_29;
	reg [127:0] qBuf_30;
	reg [127:0] qBuf_31;
	reg [127:0] qBuf_32;
	reg [127:0] qBuf_33;
	reg [127:0] qBuf_34;
	reg [127:0] qBuf_35;
	reg [127:0] qBuf_36;
	reg [127:0] qBuf_37;
	reg [127:0] qBuf_38;
	reg [127:0] qBuf_39;
	reg [127:0] qBuf_40;
	reg [127:0] qBuf_41;
	reg [127:0] qBuf_42;
	reg [127:0] qBuf_43;
	reg [127:0] qBuf_44;
	reg [127:0] qBuf_45;
	reg [127:0] qBuf_46;
	reg [127:0] qBuf_47;
	reg [127:0] qBuf_48;
	reg [127:0] qBuf_49;
	reg [127:0] qBuf_50;
	reg [127:0] qBuf_51;
	reg [127:0] qBuf_52;
	reg [127:0] qBuf_53;
	reg [127:0] qBuf_54;
	reg [127:0] qBuf_55;
	reg [127:0] qBuf_56;
	reg [127:0] qBuf_57;
	reg [127:0] qBuf_58;
	reg [127:0] qBuf_59;
	reg [127:0] qBuf_60;
	reg [127:0] qBuf_61;
	reg [127:0] qBuf_62;
	reg [127:0] qBuf_63;
	reg [127:0] qBuf_64;
	reg [127:0] qBuf_65;
	reg [127:0] qBuf_66;
	reg [127:0] qBuf_67;
	reg [127:0] qBuf_68;
	reg [127:0] qBuf_69;
	reg [127:0] qBuf_70;
	reg [127:0] qBuf_71;
	reg [127:0] qBuf_72;
	reg [127:0] qBuf_73;
	reg [127:0] qBuf_74;
	reg [127:0] qBuf_75;
	reg [127:0] qBuf_76;
	reg [127:0] qBuf_77;
	reg [127:0] qBuf_78;
	reg [127:0] qBuf_79;
	reg [127:0] qBuf_80;
	reg [127:0] qBuf_81;
	reg [127:0] qBuf_82;
	reg [127:0] qBuf_83;
	reg [127:0] qBuf_84;
	reg [127:0] qBuf_85;
	reg [127:0] qBuf_86;
	reg [127:0] qBuf_87;
	reg [127:0] qBuf_88;
	reg [127:0] qBuf_89;
	reg [127:0] qBuf_90;
	reg [127:0] qBuf_91;
	reg [127:0] qBuf_92;
	reg [127:0] qBuf_93;
	reg [127:0] qBuf_94;
	reg [127:0] qBuf_95;
	reg [127:0] qBuf_96;
	reg [127:0] qBuf_97;
	reg [127:0] qBuf_98;
	reg [127:0] qBuf_99;
	reg [127:0] qBuf_100;
	reg [127:0] qBuf_101;
	reg [127:0] qBuf_102;
	reg [127:0] qBuf_103;
	reg [127:0] qBuf_104;
	reg [127:0] qBuf_105;
	reg [127:0] qBuf_106;
	reg [127:0] qBuf_107;
	reg [127:0] qBuf_108;
	reg [127:0] qBuf_109;
	reg [127:0] qBuf_110;
	reg [127:0] qBuf_111;
	reg [127:0] qBuf_112;
	reg [127:0] qBuf_113;
	reg [127:0] qBuf_114;
	reg [127:0] qBuf_115;
	reg [127:0] qBuf_116;
	reg [127:0] qBuf_117;
	reg [127:0] qBuf_118;
	reg [127:0] qBuf_119;
	reg [127:0] qBuf_120;
	reg [127:0] qBuf_121;
	reg [127:0] qBuf_122;
	reg [127:0] qBuf_123;
	reg [127:0] qBuf_124;
	reg [127:0] qBuf_125;
	reg [127:0] qBuf_126;
	reg [127:0] qBuf_127;
	reg [127:0] kBuf_0;
	reg [127:0] kBuf_1;
	reg [127:0] kBuf_2;
	reg [127:0] kBuf_3;
	reg [127:0] kBuf_4;
	reg [127:0] kBuf_5;
	reg [127:0] kBuf_6;
	reg [127:0] kBuf_7;
	reg [127:0] kBuf_8;
	reg [127:0] kBuf_9;
	reg [127:0] kBuf_10;
	reg [127:0] kBuf_11;
	reg [127:0] kBuf_12;
	reg [127:0] kBuf_13;
	reg [127:0] kBuf_14;
	reg [127:0] kBuf_15;
	reg [127:0] kBuf_16;
	reg [127:0] kBuf_17;
	reg [127:0] kBuf_18;
	reg [127:0] kBuf_19;
	reg [127:0] kBuf_20;
	reg [127:0] kBuf_21;
	reg [127:0] kBuf_22;
	reg [127:0] kBuf_23;
	reg [127:0] kBuf_24;
	reg [127:0] kBuf_25;
	reg [127:0] kBuf_26;
	reg [127:0] kBuf_27;
	reg [127:0] kBuf_28;
	reg [127:0] kBuf_29;
	reg [127:0] kBuf_30;
	reg [127:0] kBuf_31;
	reg [127:0] kBuf_32;
	reg [127:0] kBuf_33;
	reg [127:0] kBuf_34;
	reg [127:0] kBuf_35;
	reg [127:0] kBuf_36;
	reg [127:0] kBuf_37;
	reg [127:0] kBuf_38;
	reg [127:0] kBuf_39;
	reg [127:0] kBuf_40;
	reg [127:0] kBuf_41;
	reg [127:0] kBuf_42;
	reg [127:0] kBuf_43;
	reg [127:0] kBuf_44;
	reg [127:0] kBuf_45;
	reg [127:0] kBuf_46;
	reg [127:0] kBuf_47;
	reg [127:0] kBuf_48;
	reg [127:0] kBuf_49;
	reg [127:0] kBuf_50;
	reg [127:0] kBuf_51;
	reg [127:0] kBuf_52;
	reg [127:0] kBuf_53;
	reg [127:0] kBuf_54;
	reg [127:0] kBuf_55;
	reg [127:0] kBuf_56;
	reg [127:0] kBuf_57;
	reg [127:0] kBuf_58;
	reg [127:0] kBuf_59;
	reg [127:0] kBuf_60;
	reg [127:0] kBuf_61;
	reg [127:0] kBuf_62;
	reg [127:0] kBuf_63;
	reg [127:0] kBuf_64;
	reg [127:0] kBuf_65;
	reg [127:0] kBuf_66;
	reg [127:0] kBuf_67;
	reg [127:0] kBuf_68;
	reg [127:0] kBuf_69;
	reg [127:0] kBuf_70;
	reg [127:0] kBuf_71;
	reg [127:0] kBuf_72;
	reg [127:0] kBuf_73;
	reg [127:0] kBuf_74;
	reg [127:0] kBuf_75;
	reg [127:0] kBuf_76;
	reg [127:0] kBuf_77;
	reg [127:0] kBuf_78;
	reg [127:0] kBuf_79;
	reg [127:0] kBuf_80;
	reg [127:0] kBuf_81;
	reg [127:0] kBuf_82;
	reg [127:0] kBuf_83;
	reg [127:0] kBuf_84;
	reg [127:0] kBuf_85;
	reg [127:0] kBuf_86;
	reg [127:0] kBuf_87;
	reg [127:0] kBuf_88;
	reg [127:0] kBuf_89;
	reg [127:0] kBuf_90;
	reg [127:0] kBuf_91;
	reg [127:0] kBuf_92;
	reg [127:0] kBuf_93;
	reg [127:0] kBuf_94;
	reg [127:0] kBuf_95;
	reg [127:0] kBuf_96;
	reg [127:0] kBuf_97;
	reg [127:0] kBuf_98;
	reg [127:0] kBuf_99;
	reg [127:0] kBuf_100;
	reg [127:0] kBuf_101;
	reg [127:0] kBuf_102;
	reg [127:0] kBuf_103;
	reg [127:0] kBuf_104;
	reg [127:0] kBuf_105;
	reg [127:0] kBuf_106;
	reg [127:0] kBuf_107;
	reg [127:0] kBuf_108;
	reg [127:0] kBuf_109;
	reg [127:0] kBuf_110;
	reg [127:0] kBuf_111;
	reg [127:0] kBuf_112;
	reg [127:0] kBuf_113;
	reg [127:0] kBuf_114;
	reg [127:0] kBuf_115;
	reg [127:0] kBuf_116;
	reg [127:0] kBuf_117;
	reg [127:0] kBuf_118;
	reg [127:0] kBuf_119;
	reg [127:0] kBuf_120;
	reg [127:0] kBuf_121;
	reg [127:0] kBuf_122;
	reg [127:0] kBuf_123;
	reg [127:0] kBuf_124;
	reg [127:0] kBuf_125;
	reg [127:0] kBuf_126;
	reg [127:0] kBuf_127;
	reg [127:0] vBuf_0;
	reg [127:0] vBuf_1;
	reg [127:0] vBuf_2;
	reg [127:0] vBuf_3;
	reg [63:0] scoreAccum_0_0;
	reg [63:0] scoreAccum_0_1;
	reg [63:0] scoreAccum_0_2;
	reg [63:0] scoreAccum_0_3;
	reg [63:0] scoreAccum_1_0;
	reg [63:0] scoreAccum_1_1;
	reg [63:0] scoreAccum_1_2;
	reg [63:0] scoreAccum_1_3;
	reg [63:0] scoreAccum_2_0;
	reg [63:0] scoreAccum_2_1;
	reg [63:0] scoreAccum_2_2;
	reg [63:0] scoreAccum_2_3;
	reg [63:0] scoreAccum_3_0;
	reg [63:0] scoreAccum_3_1;
	reg [63:0] scoreAccum_3_2;
	reg [63:0] scoreAccum_3_3;
	reg [63:0] outAccum_0_0;
	reg [63:0] outAccum_0_1;
	reg [63:0] outAccum_0_2;
	reg [63:0] outAccum_0_3;
	reg [63:0] outAccum_1_0;
	reg [63:0] outAccum_1_1;
	reg [63:0] outAccum_1_2;
	reg [63:0] outAccum_1_3;
	reg [63:0] outAccum_2_0;
	reg [63:0] outAccum_2_1;
	reg [63:0] outAccum_2_2;
	reg [63:0] outAccum_2_3;
	reg [63:0] outAccum_3_0;
	reg [63:0] outAccum_3_1;
	reg [63:0] outAccum_3_2;
	reg [63:0] outAccum_3_3;
	reg [63:0] rowMax_0;
	reg [63:0] rowMax_1;
	reg [63:0] rowMax_2;
	reg [63:0] rowMax_3;
	reg [63:0] rowDenom_0;
	reg [63:0] rowDenom_1;
	reg [63:0] rowDenom_2;
	reg [63:0] rowDenom_3;
	reg [63:0] packedStoreWords_0;
	reg [63:0] packedStoreWords_1;
	reg [63:0] packedStoreWords_2;
	reg [63:0] packedStoreWords_3;
	reg [63:0] qBase;
	reg [63:0] kBase;
	reg [63:0] vBase;
	reg [63:0] outBase;
	reg [2:0] qRows;
	reg [7:0] kvRows;
	reg [7:0] dK;
	reg [2:0] valueCols;
	reg [15:0] scaleBf16;
	reg qkConfigured;
	reg voutConfigured;
	reg dimsConfigured;
	reg scoresReady;
	reg applyAfterScores;
	reg [7:0] fillIdx;
	reg [7:0] computeIdx;
	reg [7:0] scoreIdx;
	reg [2:0] activeKvCols;
	reg [2:0] softRowIdx;
	reg [2:0] outIdx;
	reg [4:0] respRd;
	reg [63:0] respData;
	reg [4:0] state;
	wire [6:0] scoreReadAddr = {softRowIdx[1:0], scoreIdx[6:2]};
	wire _scoreReadData_3_T = state == 5'h0e;
	wire [16383:0] _GEN = {qBuf_127, qBuf_126, qBuf_125, qBuf_124, qBuf_123, qBuf_122, qBuf_121, qBuf_120, qBuf_119, qBuf_118, qBuf_117, qBuf_116, qBuf_115, qBuf_114, qBuf_113, qBuf_112, qBuf_111, qBuf_110, qBuf_109, qBuf_108, qBuf_107, qBuf_106, qBuf_105, qBuf_104, qBuf_103, qBuf_102, qBuf_101, qBuf_100, qBuf_99, qBuf_98, qBuf_97, qBuf_96, qBuf_95, qBuf_94, qBuf_93, qBuf_92, qBuf_91, qBuf_90, qBuf_89, qBuf_88, qBuf_87, qBuf_86, qBuf_85, qBuf_84, qBuf_83, qBuf_82, qBuf_81, qBuf_80, qBuf_79, qBuf_78, qBuf_77, qBuf_76, qBuf_75, qBuf_74, qBuf_73, qBuf_72, qBuf_71, qBuf_70, qBuf_69, qBuf_68, qBuf_67, qBuf_66, qBuf_65, qBuf_64, qBuf_63, qBuf_62, qBuf_61, qBuf_60, qBuf_59, qBuf_58, qBuf_57, qBuf_56, qBuf_55, qBuf_54, qBuf_53, qBuf_52, qBuf_51, qBuf_50, qBuf_49, qBuf_48, qBuf_47, qBuf_46, qBuf_45, qBuf_44, qBuf_43, qBuf_42, qBuf_41, qBuf_40, qBuf_39, qBuf_38, qBuf_37, qBuf_36, qBuf_35, qBuf_34, qBuf_33, qBuf_32, qBuf_31, qBuf_30, qBuf_29, qBuf_28, qBuf_27, qBuf_26, qBuf_25, qBuf_24, qBuf_23, qBuf_22, qBuf_21, qBuf_20, qBuf_19, qBuf_18, qBuf_17, qBuf_16, qBuf_15, qBuf_14, qBuf_13, qBuf_12, qBuf_11, qBuf_10, qBuf_9, qBuf_8, qBuf_7, qBuf_6, qBuf_5, qBuf_4, qBuf_3, qBuf_2, qBuf_1, qBuf_0};
	wire [127:0] _GEN_0 = _GEN[computeIdx[6:0] * 128+:128];
	wire [16383:0] _GEN_1 = {kBuf_127, kBuf_126, kBuf_125, kBuf_124, kBuf_123, kBuf_122, kBuf_121, kBuf_120, kBuf_119, kBuf_118, kBuf_117, kBuf_116, kBuf_115, kBuf_114, kBuf_113, kBuf_112, kBuf_111, kBuf_110, kBuf_109, kBuf_108, kBuf_107, kBuf_106, kBuf_105, kBuf_104, kBuf_103, kBuf_102, kBuf_101, kBuf_100, kBuf_99, kBuf_98, kBuf_97, kBuf_96, kBuf_95, kBuf_94, kBuf_93, kBuf_92, kBuf_91, kBuf_90, kBuf_89, kBuf_88, kBuf_87, kBuf_86, kBuf_85, kBuf_84, kBuf_83, kBuf_82, kBuf_81, kBuf_80, kBuf_79, kBuf_78, kBuf_77, kBuf_76, kBuf_75, kBuf_74, kBuf_73, kBuf_72, kBuf_71, kBuf_70, kBuf_69, kBuf_68, kBuf_67, kBuf_66, kBuf_65, kBuf_64, kBuf_63, kBuf_62, kBuf_61, kBuf_60, kBuf_59, kBuf_58, kBuf_57, kBuf_56, kBuf_55, kBuf_54, kBuf_53, kBuf_52, kBuf_51, kBuf_50, kBuf_49, kBuf_48, kBuf_47, kBuf_46, kBuf_45, kBuf_44, kBuf_43, kBuf_42, kBuf_41, kBuf_40, kBuf_39, kBuf_38, kBuf_37, kBuf_36, kBuf_35, kBuf_34, kBuf_33, kBuf_32, kBuf_31, kBuf_30, kBuf_29, kBuf_28, kBuf_27, kBuf_26, kBuf_25, kBuf_24, kBuf_23, kBuf_22, kBuf_21, kBuf_20, kBuf_19, kBuf_18, kBuf_17, kBuf_16, kBuf_15, kBuf_14, kBuf_13, kBuf_12, kBuf_11, kBuf_10, kBuf_9, kBuf_8, kBuf_7, kBuf_6, kBuf_5, kBuf_4, kBuf_3, kBuf_2, kBuf_1, kBuf_0};
	wire [127:0] _GEN_2 = _GEN_1[computeIdx[6:0] * 128+:128];
	wire _terms_T_56 = activeKvCols > 3'h2;
	reg [63:0] softLatchedScores_0;
	reg [63:0] softLatchedScores_1;
	reg [63:0] softLatchedScores_2;
	reg [63:0] softLatchedScores_3;
	wire [63:0] _writeAddr_T_2 = outBase + {58'h000000000000000, outIdx, 3'h0};
	wire [2:0] _writeLaneWordIdxs_0_T = outIdx + {2'h0, ~_writeAddr_T_2[3] & (1'h0 - _writeAddr_T_2[3])};
	wire putMaskBytes_7 = ~_writeAddr_T_2[3] & ~_writeLaneWordIdxs_0_T[2];
	wire [2:0] _writeLaneWordIdxs_1_T = outIdx + {2'h0, 1'h1 - _writeAddr_T_2[3]};
	wire [255:0] _GEN_3 = {packedStoreWords_3, packedStoreWords_2, packedStoreWords_1, packedStoreWords_0};
	wire io_cmdReady_0 = state == 5'h00;
	wire io_respValid_0 = state == 5'h13;
	wire _GEN_4 = state == 5'h01;
	wire _GEN_5 = state == 5'h02;
	wire _GEN_6 = (state == 5'h04) | (state == 5'h14);
	wire _GEN_7 = state == 5'h05;
	wire _GEN_8 = state == 5'h0b;
	wire [7:0] _GEN_9 = {5'h00, activeKvCols};
	wire _GEN_10 = state == 5'h0c;
	wire _GEN_11 = state == 5'h09;
	wire _GEN_12 = softRowIdx < qRows;
	wire [6:0] writeScoreAddr = {softRowIdx[1:0], scoreIdx[6:2]};
	wire _GEN_13 = _GEN_11 & _GEN_12;
	wire io_memReqWrite_0 = state == 5'h11;
	wire io_memReqValid_0 = (io_memReqWrite_0 ? ~outIdx[2] : (_GEN_8 ? fillIdx < _GEN_9 : (_GEN_6 ? fillIdx < dK : _GEN_4 & (fillIdx < dK))));
	wire _GEN_14 = state == 5'h12;
	wire _outBf16_11_T = qRows > 3'h2;
	wire [255:0] _GEN_15 = 256'h8000000000000000800000000000000080000000000000008000000000000000;
	wire [79:0] _GEN_16 = {{56 {_scaleConv_io_out[23]}}, _scaleConv_io_out};
	wire [79:0] scaledWide_12 = {{16 {scoreAccum_3_0[63]}}, scoreAccum_3_0} * _GEN_16;
	wire [79:0] scaledWide_8 = {{16 {scoreAccum_2_0[63]}}, scoreAccum_2_0} * _GEN_16;
	wire [79:0] scaledWide_4 = {{16 {scoreAccum_1_0[63]}}, scoreAccum_1_0} * _GEN_16;
	wire [79:0] scaledWide = {{16 {scoreAccum_0_0[63]}}, scoreAccum_0_0} * _GEN_16;
	wire [255:0] _GEN_17 = (|activeKvCols ? {scaledWide_12[79:16], scaledWide_8[79:16], scaledWide_4[79:16], scaledWide[79:16]} : _GEN_15);
	wire [79:0] scaledWide_13 = {{16 {scoreAccum_3_1[63]}}, scoreAccum_3_1} * _GEN_16;
	wire [79:0] scaledWide_9 = {{16 {scoreAccum_2_1[63]}}, scoreAccum_2_1} * _GEN_16;
	wire [79:0] scaledWide_5 = {{16 {scoreAccum_1_1[63]}}, scoreAccum_1_1} * _GEN_16;
	wire [79:0] scaledWide_1 = {{16 {scoreAccum_0_1[63]}}, scoreAccum_0_1} * _GEN_16;
	wire [255:0] _GEN_18 = (|activeKvCols[2:1] ? {scaledWide_13[79:16], scaledWide_9[79:16], scaledWide_5[79:16], scaledWide_1[79:16]} : _GEN_15);
	wire [79:0] scaledWide_14 = {{16 {scoreAccum_3_2[63]}}, scoreAccum_3_2} * _GEN_16;
	wire [79:0] scaledWide_10 = {{16 {scoreAccum_2_2[63]}}, scoreAccum_2_2} * _GEN_16;
	wire [79:0] scaledWide_6 = {{16 {scoreAccum_1_2[63]}}, scoreAccum_1_2} * _GEN_16;
	wire [79:0] scaledWide_2 = {{16 {scoreAccum_0_2[63]}}, scoreAccum_0_2} * _GEN_16;
	wire [255:0] _GEN_19 = (_terms_T_56 ? {scaledWide_14[79:16], scaledWide_10[79:16], scaledWide_6[79:16], scaledWide_2[79:16]} : _GEN_15);
	wire [79:0] scaledWide_15 = {{16 {scoreAccum_3_3[63]}}, scoreAccum_3_3} * _GEN_16;
	wire [79:0] scaledWide_11 = {{16 {scoreAccum_2_3[63]}}, scoreAccum_2_3} * _GEN_16;
	wire [79:0] scaledWide_7 = {{16 {scoreAccum_1_3[63]}}, scoreAccum_1_3} * _GEN_16;
	wire [79:0] scaledWide_3 = {{16 {scoreAccum_0_3[63]}}, scoreAccum_0_3} * _GEN_16;
	wire [255:0] _GEN_20 = (activeKvCols[2] ? {scaledWide_15[79:16], scaledWide_11[79:16], scaledWide_7[79:16], scaledWide_3[79:16]} : _GEN_15);
	wire [31:0] _GEN_21 = {{16 {_qFixed_0_io_out[15]}}, _qFixed_0_io_out};
	wire [31:0] _GEN_22 = {{16 {_kFixed_0_io_out[15]}}, _kFixed_0_io_out};
	wire [31:0] product = _GEN_21 * _GEN_22;
	wire [31:0] _GEN_23 = {{16 {_kFixed_1_io_out[15]}}, _kFixed_1_io_out};
	wire [31:0] product_1 = _GEN_21 * _GEN_23;
	wire [31:0] _GEN_24 = {{16 {_kFixed_2_io_out[15]}}, _kFixed_2_io_out};
	wire [31:0] product_2 = _GEN_21 * _GEN_24;
	wire [31:0] _GEN_25 = {{16 {_kFixed_3_io_out[15]}}, _kFixed_3_io_out};
	wire [31:0] product_3 = _GEN_21 * _GEN_25;
	wire [31:0] _GEN_26 = {{16 {_qFixed_1_io_out[15]}}, _qFixed_1_io_out};
	wire [31:0] product_4 = _GEN_26 * _GEN_22;
	wire [31:0] product_5 = _GEN_26 * _GEN_23;
	wire [31:0] product_6 = _GEN_26 * _GEN_24;
	wire [31:0] product_7 = _GEN_26 * _GEN_25;
	wire [31:0] _GEN_27 = {{16 {_qFixed_2_io_out[15]}}, _qFixed_2_io_out};
	wire [31:0] product_8 = _GEN_27 * _GEN_22;
	wire [31:0] product_9 = _GEN_27 * _GEN_23;
	wire [31:0] product_10 = _GEN_27 * _GEN_24;
	wire [31:0] product_11 = _GEN_27 * _GEN_25;
	wire [31:0] _GEN_28 = {{16 {_qFixed_3_io_out[15]}}, _qFixed_3_io_out};
	wire [31:0] product_12 = _GEN_28 * _GEN_22;
	wire [31:0] product_13 = _GEN_28 * _GEN_23;
	wire [31:0] product_14 = _GEN_28 * _GEN_24;
	wire [31:0] product_15 = _GEN_28 * _GEN_25;
	wire [7:0] _remaining_T = kvRows - scoreIdx;
	wire _GEN_29 = io_memReqValid_0 & io_memReqReady;
	wire [4095:0] _GEN_30 = 4096'h404040404040404040c246d47d78693c41465fdf5cd0105241cc98291fdf19b44254fce404254fce42df9bb096771e4d436c82a23d1a566343fbc043fbc043fc448d639d74c0cda845217c382b34eda345b81a2509cde3ad46514e02328a701246ed29011bb4a404478bbcecfee1d10c482d1c319f03621d48d159e26af37c05497889c2024bc44e4a22c04a22c04a234ad012b404ad012b4b8097012e025c054c346404c346404c4ceb916d5ef2c7834da637cf781d1e554e6470b061fd8cdc4f265691eeaf9d104fec04fec04fec0550b59897547e1bbe51832f1fd73e68705254e78ecb419ba9532ae21c96bdb9d4540540540540540554e42523d03fab1c55c7b4f141ace68956b015ac056b015b579d6ee340579d6f588fe9dc0588fe9e5987b1a9448be4065a84f3454dca41105b87ddad0cdf1b2c5c90a1fd1b7af0175d9f7390d2a6c4065eb4882383b30d515fd017f405fd017f60f25deacafb74a4621b97c2aec12653634c0634c0634c066483ed274388a35665c393e032e1c9f0670b453b92840671685b4fe5e92c068669b4069b4069b4076b15c06b15c06b166c80d901b20364076df5b0f768ce2cac6f74ae26501bdd2c70fe3c070fe3c0717292cc157b8644077432d63dbb01d0cb75ded952e0b0ce4677975b8fe21a291c795ceb240795ceb27b301ecc07b301ed7d1196792909c5607f01fc07f01fc07f;
	wire [8191:0] _GEN_31 = 8192'h1e30000000000000224000000000000026e00000000000002c10000000000000320000000000000038b0000000000000405000000000000048f000000000000052c00000000000005de00000000000006a8000000000000078c000000000000089000000000000009b60000000000000b040000000000000c7f0000000000000e2c0000000000001013000000000000123c00000000000014ae00000000000017750000000000001a9c0000000000001e2e000000000000223b00000000000026d40000000000002c0b00000000000031f400000000000038aa000000000000404500000000000048e600000000000052b00000000000005dca0000000000006a6200000000000078aa00000000000088de0000000000009b3e000000000000b016000000000000c7ba000000000000e28b00000000000100f600000000000123760000000000014a9800000000000176fb000000000001a953000000000001e26f00000000000223350000000000026cad000000000002c0020000000000031e8800000000000389bf000000000004035b0000000000048d4b00000000000529c1000000000005db37000000000006a48200000000000788d30000000000088bcc000000000009b18a00000000000afeb900000000000c78a400000000000e254c0000000000100b820000000000123300000000000014a4890000000000176a1000000000001a8eda00000000001e1fb10000000000222b19000000000026c18500000000002bf5a0000000000031dc960000000000388e6a000000000040265a000000000048c349000000000052884400000000005d9d0900000000006a2eaf000000000078705a0000000000889c0900000000009af3880000000000afc1770000000000c75a7b0000000000e21e970000000001007ab1000000000122ea4f000000000149f98d00000000017647550000000001a887e90000000001e187bf0000000002222ebe00000000026b83f20000000002beb1b800000000031d0a7c0000000003880e1c0000000004016ffc00000000048b1dfa000000000527483e0000000005d86a2a0000000006a1546d0000000007853879000000000887b5810000000009ace736000000000af9767e000000000c72ac66000000000e1e87aa000000001003d51100000000122a4b1e00000000149aa96e00000000175edc53000000001a822531000000001e11484900000000221ac0ad0000000026aefb28000000002be099130000000031c4bc240000000038735c60000000004007a9ac0000000048a07a5e000000005260c8be000000005d70414f0000000069fbe43d000000007836bc7400000000885aaf4a000000009aa9681100000000af6d634300000000c6fb1d9200000000e1b26ba50000000100000000;
	wire [63:0] _softVecMaxFixed_T_1 = ($signed(softLatchedScores_0) > $signed(softLatchedScores_1) ? softLatchedScores_0 : softLatchedScores_1);
	wire [63:0] _softVecMaxFixed_T_3 = ($signed(softLatchedScores_2) > $signed(softLatchedScores_3) ? softLatchedScores_2 : softLatchedScores_3);
	wire [63:0] softVecMaxFixed = ($signed(_softVecMaxFixed_T_1) > $signed(_softVecMaxFixed_T_3) ? _softVecMaxFixed_T_1 : _softVecMaxFixed_T_3);
	wire [255:0] _GEN_32 = {rowMax_3, rowMax_2, rowMax_1, rowMax_0};
	wire [63:0] _GEN_33 = _GEN_32[softRowIdx[1:0] * 64+:64];
	wire _softGlobalMaxFixed_T = $signed(softVecMaxFixed) > $signed(_GEN_33);
	wire [63:0] _softMaxDiffFixed_T = _GEN_33 - (_softGlobalMaxFixed_T ? softVecMaxFixed : _GEN_33);
	wire [64:0] _GEN_34 = {_softMaxDiffFixed_T[63], _softMaxDiffFixed_T};
	wire [64:0] _softMaxFixed_mag_T_1 = 65'h00000000000000000 - _GEN_34;
	wire [51:0] softMaxFixed_mag = ($signed(_GEN_34) > -65'sh00000000000000001 ? 52'h0000000000000 : _softMaxFixed_mag_T_1[64:13]);
	wire [63:0] softMaxFixed = (|softMaxFixed_mag[51:7] ? 64'h0000000000000000 : _GEN_31[softMaxFixed_mag[6:0] * 64+:64]);
	wire [255:0] _GEN_35 = {rowDenom_3, rowDenom_2, rowDenom_1, rowDenom_0};
	wire [63:0] _GEN_36 = _GEN_35[softRowIdx[1:0] * 64+:64];
	wire _softSubBase_T = state == 5'h0f;
	wire [63:0] softSubBase = (_softSubBase_T | ~_softGlobalMaxFixed_T ? _GEN_33 : softVecMaxFixed);
	wire [15:0] _GEN_37 = {{_GEN_36[23:16], _GEN_36[31:28]} & 12'hf0f, 4'h0} | ({_GEN_36[31:24], _GEN_36[39:32]} & 16'h0f0f);
	wire [37:0] _GEN_38 = {_GEN_36[11:8], _GEN_36[15:12], _GEN_36[19:16], _GEN_37, _GEN_36[39:36], _GEN_36[43:40], _GEN_36[47:46]} & 38'h3333333333;
	wire [7:0] _GEN_39 = _GEN_38[37:30] | ({_GEN_36[15:12], _GEN_36[19:16]} & 8'h33);
	wire [15:0] _GEN_40 = _GEN_38[29:14] | (_GEN_37 & 16'h3333);
	wire [1:0] _GEN_41 = _GEN_38[11:10] | _GEN_36[37:36];
	wire [7:0] _GEN_42 = {_GEN_38[5:0], 2'h0} | ({_GEN_36[47:44], _GEN_36[51:48]} & 8'h33);
	wire [50:0] _GEN_43 = {_GEN_36[5:4], _GEN_36[7:6], _GEN_36[9:8], _GEN_39, _GEN_40, _GEN_37[3:2], _GEN_41, _GEN_36[39:38], _GEN_36[41:40], _GEN_42, _GEN_36[51:50], _GEN_36[53:52], _GEN_36[55]} & 51'h5555555555555;
	wire [3:0] _GEN_44 = _GEN_43[50:47] | ({_GEN_36[7:6], _GEN_36[9:8]} & 4'h5);
	wire [7:0] _GEN_45 = _GEN_43[46:39] | (_GEN_39 & 8'h55);
	wire [15:0] _GEN_46 = _GEN_43[38:23] | (_GEN_40 & 16'h5555);
	wire [1:0] _GEN_47 = {_GEN_37[3], 1'h0} | (_GEN_41 & 2'h1);
	wire [3:0] _GEN_48 = _GEN_43[18:15] | ({_GEN_36[39:38], _GEN_36[41:40]} & 4'h5);
	wire [7:0] _GEN_49 = _GEN_43[14:7] | (_GEN_42 & 8'h55);
	wire [3:0] _GEN_50 = {_GEN_43[2:0], 1'h0} | ({_GEN_36[55:54], _GEN_36[57:56]} & 4'h5);
	wire [5:0] softInvSum_shift = (|_GEN_36 ? (6'h3f - (_GEN_36[63] ? 6'h00 : (_GEN_36[62] ? 6'h01 : (_GEN_36[61] ? 6'h02 : (_GEN_36[60] ? 6'h03 : (_GEN_36[59] ? 6'h04 : (_GEN_36[58] ? 6'h05 : (_GEN_36[57] ? 6'h06 : (_GEN_50[0] ? 6'h07 : (_GEN_50[1] ? 6'h08 : (_GEN_50[2] ? 6'h09 : (_GEN_50[3] ? 6'h0a : (_GEN_36[52] ? 6'h0b : (_GEN_36[51] ? 6'h0c : (_GEN_43[5] | _GEN_36[50] ? 6'h0d : (_GEN_42[1] ? 6'h0e : (_GEN_49[0] ? 6'h0f : (_GEN_49[1] ? 6'h10 : (_GEN_49[2] ? 6'h11 : (_GEN_49[3] ? 6'h12 : (_GEN_49[4] ? 6'h13 : (_GEN_49[5] ? 6'h14 : (_GEN_49[6] ? 6'h15 : (_GEN_49[7] ? 6'h16 : (_GEN_48[0] ? 6'h17 : (_GEN_48[1] ? 6'h18 : (_GEN_48[2] ? 6'h19 : (_GEN_48[3] ? 6'h1a : (_GEN_47[0] ? 6'h1b : (_GEN_47[1] ? 6'h1c : (_GEN_43[21] | _GEN_37[2] ? 6'h1d : (_GEN_40[1] ? 6'h1e : (_GEN_46[0] ? 6'h1f : (_GEN_46[1] ? 6'h20 : (_GEN_46[2] ? 6'h21 : (_GEN_46[3] ? 6'h22 : (_GEN_46[4] ? 6'h23 : (_GEN_46[5] ? 6'h24 : (_GEN_46[6] ? 6'h25 : (_GEN_46[7] ? 6'h26 : (_GEN_46[8] ? 6'h27 : (_GEN_46[9] ? 6'h28 : (_GEN_46[10] ? 6'h29 : (_GEN_46[11] ? 6'h2a : (_GEN_46[12] ? 6'h2b : (_GEN_46[13] ? 6'h2c : (_GEN_46[14] ? 6'h2d : (_GEN_46[15] ? 6'h2e : (_GEN_45[0] ? 6'h2f : (_GEN_45[1] ? 6'h30 : (_GEN_45[2] ? 6'h31 : (_GEN_45[3] ? 6'h32 : (_GEN_45[4] ? 6'h33 : (_GEN_45[5] ? 6'h34 : (_GEN_45[6] ? 6'h35 : (_GEN_45[7] ? 6'h36 : (_GEN_44[0] ? 6'h37 : (_GEN_44[1] ? 6'h38 : (_GEN_44[2] ? 6'h39 : (_GEN_44[3] ? 6'h3a : (_GEN_36[4] ? 6'h3b : (_GEN_36[3] ? 6'h3c : (_GEN_36[2] ? 6'h3d : {5'h1f, ~_GEN_36[1]}))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) - 6'h20 : 6'h00);
	wire [63:0] _diff_T = softLatchedScores_0 - softSubBase;
	wire [64:0] _GEN_51 = {_diff_T[63], _diff_T};
	wire [64:0] _softVecFixed_0_mag_T_1 = 65'h00000000000000000 - _GEN_51;
	wire [51:0] softVecFixed_0_mag = ($signed(_GEN_51) > -65'sh00000000000000001 ? 52'h0000000000000 : _softVecFixed_0_mag_T_1[64:13]);
	wire [63:0] softVecFixed_0 = (|softVecFixed_0_mag[51:7] ? 64'h0000000000000000 : _GEN_31[softVecFixed_0_mag[6:0] * 64+:64]);
	wire [63:0] softInvSum_mant = _GEN_36 >> softInvSum_shift;
	wire [95:0] _GEN_52 = {32'h00000000, (|_GEN_36 ? {31'h00000000, _GEN_30[(softInvSum_mant[31:26] * 64) + 63-:33] >> softInvSum_shift} : 64'h0000000000000000)};
	wire [95:0] normFull = {32'h00000000, softVecFixed_0} * _GEN_52;
	wire [63:0] _diff_T_2 = softLatchedScores_1 - softSubBase;
	wire [64:0] _GEN_53 = {_diff_T_2[63], _diff_T_2};
	wire [64:0] _softVecFixed_1_mag_T_1 = 65'h00000000000000000 - _GEN_53;
	wire [51:0] softVecFixed_1_mag = ($signed(_GEN_53) > -65'sh00000000000000001 ? 52'h0000000000000 : _softVecFixed_1_mag_T_1[64:13]);
	wire [63:0] softVecFixed_1 = (|softVecFixed_1_mag[51:7] ? 64'h0000000000000000 : _GEN_31[softVecFixed_1_mag[6:0] * 64+:64]);
	wire [95:0] normFull_1 = {32'h00000000, softVecFixed_1} * _GEN_52;
	wire [63:0] _diff_T_4 = softLatchedScores_2 - softSubBase;
	wire [64:0] _GEN_54 = {_diff_T_4[63], _diff_T_4};
	wire [64:0] _softVecFixed_2_mag_T_1 = 65'h00000000000000000 - _GEN_54;
	wire [51:0] softVecFixed_2_mag = ($signed(_GEN_54) > -65'sh00000000000000001 ? 52'h0000000000000 : _softVecFixed_2_mag_T_1[64:13]);
	wire [63:0] softVecFixed_2 = (|softVecFixed_2_mag[51:7] ? 64'h0000000000000000 : _GEN_31[softVecFixed_2_mag[6:0] * 64+:64]);
	wire [95:0] normFull_2 = {32'h00000000, softVecFixed_2} * _GEN_52;
	wire [63:0] _diff_T_6 = softLatchedScores_3 - softSubBase;
	wire [64:0] _GEN_55 = {_diff_T_6[63], _diff_T_6};
	wire [64:0] _softVecFixed_3_mag_T_1 = 65'h00000000000000000 - _GEN_55;
	wire [51:0] softVecFixed_3_mag = ($signed(_GEN_55) > -65'sh00000000000000001 ? 52'h0000000000000 : _softVecFixed_3_mag_T_1[64:13]);
	wire [63:0] softVecFixed_3 = (|softVecFixed_3_mag[51:7] ? 64'h0000000000000000 : _GEN_31[softVecFixed_3_mag[6:0] * 64+:64]);
	wire [95:0] normFull_3 = {32'h00000000, softVecFixed_3} * _GEN_52;
	wire [95:0] softProdDenomFull = {32'h00000000, _GEN_36} * {32'h00000000, (softMaxFixed > 64'h0000000100000000 ? 64'h0000000100000000 : softMaxFixed)};
	wire [63:0] _softDenomNext_T = (((softVecFixed_0 + softVecFixed_1) + softVecFixed_2) + softVecFixed_3) + softProdDenomFull[95:32];
	wire _GEN_56 = io_cmdValid & io_cmdReady_0;
	wire _GEN_57 = io_cmdFunct == 7'h08;
	wire _GEN_58 = _GEN_56 & _GEN_57;
	wire _GEN_59 = io_cmdFunct == 7'h09;
	wire _GEN_60 = io_cmdFunct == 7'h0a;
	wire _GEN_61 = _GEN_57 | _GEN_59;
	wire _GEN_62 = io_cmdFunct == 7'h0b;
	wire _GEN_63 = (io_cmdFunct == 7'h0c) | (io_cmdFunct == 7'h0d);
	wire dimsValid = (((((((qkConfigured & dimsConfigured) & |qRows) & (qRows < 3'h5)) & |kvRows) & (kvRows < 8'h81)) & |dK) & (dK < 8'h81)) & ((io_cmdFunct == 7'h0d) | ((voutConfigured & |valueCols) & (valueCols < 3'h5)));
	wire _GEN_64 = _GEN_63 & dimsValid;
	wire _GEN_65 = ((_GEN_57 | _GEN_59) | _GEN_60) | _GEN_62;
	wire _GEN_66 = (~_GEN_56 | _GEN_65) | ~_GEN_64;
	wire _GEN_67 = io_cmdFunct == 7'h0e;
	wire dimsValid_1 = (((((((((voutConfigured & dimsConfigured) & scoresReady) & |qRows) & (qRows < 3'h5)) & |kvRows) & (kvRows < 8'h81)) & |dK) & (dK < 8'h81)) & |valueCols) & (valueCols < 3'h5);
	wire _GEN_68 = (~_GEN_56 | _GEN_65) | ~(_GEN_63 ? dimsValid : _GEN_67 & dimsValid_1);
	wire _GEN_69 = io_cmdFunct == 7'h02;
	wire _GEN_70 = io_cmdFunct == 7'h06;
	wire [7:0] _nextIdx_T = fillIdx + 8'h01;
	wire _GEN_71 = _nextIdx_T >= dK;
	wire _GEN_72 = _GEN_5 & io_memRespValid;
	wire _GEN_73 = state == 5'h0a;
	wire _GEN_74 = (state == 5'h03) | _GEN_73;
	wire [7:0] _nextIdx_T_1 = fillIdx + 8'h01;
	wire _GEN_75 = _nextIdx_T_1 >= dK;
	wire _GEN_76 = _GEN_7 & io_memRespValid;
	wire [7:0] _nextIdx_T_2 = fillIdx + 8'h01;
	wire _GEN_77 = _nextIdx_T_2 >= _GEN_9;
	wire _GEN_78 = _GEN_10 & io_memRespValid;
	wire _GEN_79 = state == 5'h06;
	wire _GEN_80 = state == 5'h07;
	wire [7:0] _computeIdx_T = computeIdx + 8'h01;
	wire _GEN_81 = _computeIdx_T >= dK;
	wire _GEN_82 = _GEN_12 & (softRowIdx[1:0] == 2'h0);
	wire _GEN_83 = _GEN_12 & (softRowIdx[1:0] == 2'h1);
	wire _GEN_84 = _GEN_12 & (softRowIdx[1:0] == 2'h2);
	wire _GEN_85 = _GEN_12 & (&softRowIdx[1:0]);
	wire [2:0] _softRowIdx_T = softRowIdx + 3'h1;
	wire _GEN_86 = _softRowIdx_T >= qRows;
	wire [7:0] _nextTile_T = scoreIdx + 8'h04;
	wire _GEN_87 = _nextTile_T >= kvRows;
	wire _GEN_88 = (_GEN_11 & _GEN_86) & _GEN_87;
	wire [79:0] _GEN_89 = {{16 {normFull[95]}}, normFull[95:32]};
	wire [79:0] terms_product = _GEN_89 * {{64 {_vFixed_0_0_io_out[15]}}, _vFixed_0_0_io_out};
	wire [79:0] _GEN_90 = {{16 {normFull_1[95]}}, normFull_1[95:32]};
	wire [79:0] terms_product_1 = _GEN_90 * {{64 {_vFixed_1_0_io_out[15]}}, _vFixed_1_0_io_out};
	wire [79:0] _GEN_91 = {{16 {normFull_2[95]}}, normFull_2[95:32]};
	wire [79:0] terms_product_2 = _GEN_91 * {{64 {_vFixed_2_0_io_out[15]}}, _vFixed_2_0_io_out};
	wire [79:0] _GEN_92 = {{16 {normFull_3[95]}}, normFull_3[95:32]};
	wire [79:0] terms_product_3 = _GEN_92 * {{64 {_vFixed_3_0_io_out[15]}}, _vFixed_3_0_io_out};
	wire [255:0] _GEN_93 = {outAccum_3_0, outAccum_2_0, outAccum_1_0, outAccum_0_0};
	wire [63:0] _sum_T_42 = (((_GEN_93[softRowIdx[1:0] * 64+:64] + (|activeKvCols & |valueCols ? {{8 {terms_product[79]}}, terms_product[79:24]} : 64'h0000000000000000)) + (|activeKvCols[2:1] & |valueCols ? {{8 {terms_product_1[79]}}, terms_product_1[79:24]} : 64'h0000000000000000)) + (_terms_T_56 & |valueCols ? {{8 {terms_product_2[79]}}, terms_product_2[79:24]} : 64'h0000000000000000)) + (activeKvCols[2] & |valueCols ? {{8 {terms_product_3[79]}}, terms_product_3[79:24]} : 64'h0000000000000000);
	wire [79:0] terms_product_4 = _GEN_89 * {{64 {_vFixed_0_1_io_out[15]}}, _vFixed_0_1_io_out};
	wire [79:0] terms_product_5 = _GEN_90 * {{64 {_vFixed_1_1_io_out[15]}}, _vFixed_1_1_io_out};
	wire [79:0] terms_product_6 = _GEN_91 * {{64 {_vFixed_2_1_io_out[15]}}, _vFixed_2_1_io_out};
	wire [79:0] terms_product_7 = _GEN_92 * {{64 {_vFixed_3_1_io_out[15]}}, _vFixed_3_1_io_out};
	wire [255:0] _GEN_94 = {outAccum_3_1, outAccum_2_1, outAccum_1_1, outAccum_0_1};
	wire [79:0] terms_product_8 = _GEN_89 * {{64 {_vFixed_0_2_io_out[15]}}, _vFixed_0_2_io_out};
	wire [79:0] terms_product_9 = _GEN_90 * {{64 {_vFixed_1_2_io_out[15]}}, _vFixed_1_2_io_out};
	wire [79:0] terms_product_10 = _GEN_91 * {{64 {_vFixed_2_2_io_out[15]}}, _vFixed_2_2_io_out};
	wire [79:0] terms_product_11 = _GEN_92 * {{64 {_vFixed_3_2_io_out[15]}}, _vFixed_3_2_io_out};
	wire [255:0] _GEN_95 = {outAccum_3_2, outAccum_2_2, outAccum_1_2, outAccum_0_2};
	wire [79:0] terms_product_12 = _GEN_89 * {{64 {_vFixed_0_3_io_out[15]}}, _vFixed_0_3_io_out};
	wire [79:0] terms_product_13 = _GEN_90 * {{64 {_vFixed_1_3_io_out[15]}}, _vFixed_1_3_io_out};
	wire [79:0] terms_product_14 = _GEN_91 * {{64 {_vFixed_2_3_io_out[15]}}, _vFixed_2_3_io_out};
	wire [79:0] terms_product_15 = _GEN_92 * {{64 {_vFixed_3_3_io_out[15]}}, _vFixed_3_3_io_out};
	wire [255:0] _GEN_96 = {outAccum_3_3, outAccum_2_3, outAccum_1_3, outAccum_0_3};
	wire [2:0] _softRowIdx_T_2 = softRowIdx + 3'h1;
	wire _GEN_97 = _softRowIdx_T_2 >= qRows;
	wire [7:0] _nextTile_T_1 = scoreIdx + 8'h04;
	wire _GEN_98 = _nextTile_T_1 >= kvRows;
	wire [2:0] _nextOutIdx_T = outIdx + {1'h0, {1'h0, putMaskBytes_7} + {1'h0, ~_writeLaneWordIdxs_1_T[2]}};
	wire _GEN_99 = _GEN_14 & io_memRespValid;
	wire _GEN_100 = (_GEN_7 & io_memRespValid) & _GEN_75;
	wire _GEN_101 = _GEN_74 & _GEN_73;
	wire _terms_T_45 = valueCols > 3'h2;
	wire _GEN_102 = io_memRespValid & (fillIdx[6:0] == 7'h00);
	wire _GEN_103 = io_memRespValid & (fillIdx[6:0] == 7'h01);
	wire _GEN_104 = io_memRespValid & (fillIdx[6:0] == 7'h02);
	wire _GEN_105 = io_memRespValid & (fillIdx[6:0] == 7'h03);
	wire _GEN_106 = io_memRespValid & (fillIdx[6:0] == 7'h04);
	wire _GEN_107 = io_memRespValid & (fillIdx[6:0] == 7'h05);
	wire _GEN_108 = io_memRespValid & (fillIdx[6:0] == 7'h06);
	wire _GEN_109 = io_memRespValid & (fillIdx[6:0] == 7'h07);
	wire _GEN_110 = io_memRespValid & (fillIdx[6:0] == 7'h08);
	wire _GEN_111 = io_memRespValid & (fillIdx[6:0] == 7'h09);
	wire _GEN_112 = io_memRespValid & (fillIdx[6:0] == 7'h0a);
	wire _GEN_113 = io_memRespValid & (fillIdx[6:0] == 7'h0b);
	wire _GEN_114 = io_memRespValid & (fillIdx[6:0] == 7'h0c);
	wire _GEN_115 = io_memRespValid & (fillIdx[6:0] == 7'h0d);
	wire _GEN_116 = io_memRespValid & (fillIdx[6:0] == 7'h0e);
	wire _GEN_117 = io_memRespValid & (fillIdx[6:0] == 7'h0f);
	wire _GEN_118 = io_memRespValid & (fillIdx[6:0] == 7'h10);
	wire _GEN_119 = io_memRespValid & (fillIdx[6:0] == 7'h11);
	wire _GEN_120 = io_memRespValid & (fillIdx[6:0] == 7'h12);
	wire _GEN_121 = io_memRespValid & (fillIdx[6:0] == 7'h13);
	wire _GEN_122 = io_memRespValid & (fillIdx[6:0] == 7'h14);
	wire _GEN_123 = io_memRespValid & (fillIdx[6:0] == 7'h15);
	wire _GEN_124 = io_memRespValid & (fillIdx[6:0] == 7'h16);
	wire _GEN_125 = io_memRespValid & (fillIdx[6:0] == 7'h17);
	wire _GEN_126 = io_memRespValid & (fillIdx[6:0] == 7'h18);
	wire _GEN_127 = io_memRespValid & (fillIdx[6:0] == 7'h19);
	wire _GEN_128 = io_memRespValid & (fillIdx[6:0] == 7'h1a);
	wire _GEN_129 = io_memRespValid & (fillIdx[6:0] == 7'h1b);
	wire _GEN_130 = io_memRespValid & (fillIdx[6:0] == 7'h1c);
	wire _GEN_131 = io_memRespValid & (fillIdx[6:0] == 7'h1d);
	wire _GEN_132 = io_memRespValid & (fillIdx[6:0] == 7'h1e);
	wire _GEN_133 = io_memRespValid & (fillIdx[6:0] == 7'h1f);
	wire _GEN_134 = io_memRespValid & (fillIdx[6:0] == 7'h20);
	wire _GEN_135 = io_memRespValid & (fillIdx[6:0] == 7'h21);
	wire _GEN_136 = io_memRespValid & (fillIdx[6:0] == 7'h22);
	wire _GEN_137 = io_memRespValid & (fillIdx[6:0] == 7'h23);
	wire _GEN_138 = io_memRespValid & (fillIdx[6:0] == 7'h24);
	wire _GEN_139 = io_memRespValid & (fillIdx[6:0] == 7'h25);
	wire _GEN_140 = io_memRespValid & (fillIdx[6:0] == 7'h26);
	wire _GEN_141 = io_memRespValid & (fillIdx[6:0] == 7'h27);
	wire _GEN_142 = io_memRespValid & (fillIdx[6:0] == 7'h28);
	wire _GEN_143 = io_memRespValid & (fillIdx[6:0] == 7'h29);
	wire _GEN_144 = io_memRespValid & (fillIdx[6:0] == 7'h2a);
	wire _GEN_145 = io_memRespValid & (fillIdx[6:0] == 7'h2b);
	wire _GEN_146 = io_memRespValid & (fillIdx[6:0] == 7'h2c);
	wire _GEN_147 = io_memRespValid & (fillIdx[6:0] == 7'h2d);
	wire _GEN_148 = io_memRespValid & (fillIdx[6:0] == 7'h2e);
	wire _GEN_149 = io_memRespValid & (fillIdx[6:0] == 7'h2f);
	wire _GEN_150 = io_memRespValid & (fillIdx[6:0] == 7'h30);
	wire _GEN_151 = io_memRespValid & (fillIdx[6:0] == 7'h31);
	wire _GEN_152 = io_memRespValid & (fillIdx[6:0] == 7'h32);
	wire _GEN_153 = io_memRespValid & (fillIdx[6:0] == 7'h33);
	wire _GEN_154 = io_memRespValid & (fillIdx[6:0] == 7'h34);
	wire _GEN_155 = io_memRespValid & (fillIdx[6:0] == 7'h35);
	wire _GEN_156 = io_memRespValid & (fillIdx[6:0] == 7'h36);
	wire _GEN_157 = io_memRespValid & (fillIdx[6:0] == 7'h37);
	wire _GEN_158 = io_memRespValid & (fillIdx[6:0] == 7'h38);
	wire _GEN_159 = io_memRespValid & (fillIdx[6:0] == 7'h39);
	wire _GEN_160 = io_memRespValid & (fillIdx[6:0] == 7'h3a);
	wire _GEN_161 = io_memRespValid & (fillIdx[6:0] == 7'h3b);
	wire _GEN_162 = io_memRespValid & (fillIdx[6:0] == 7'h3c);
	wire _GEN_163 = io_memRespValid & (fillIdx[6:0] == 7'h3d);
	wire _GEN_164 = io_memRespValid & (fillIdx[6:0] == 7'h3e);
	wire _GEN_165 = io_memRespValid & (fillIdx[6:0] == 7'h3f);
	wire _GEN_166 = io_memRespValid & (fillIdx[6:0] == 7'h40);
	wire _GEN_167 = io_memRespValid & (fillIdx[6:0] == 7'h41);
	wire _GEN_168 = io_memRespValid & (fillIdx[6:0] == 7'h42);
	wire _GEN_169 = io_memRespValid & (fillIdx[6:0] == 7'h43);
	wire _GEN_170 = io_memRespValid & (fillIdx[6:0] == 7'h44);
	wire _GEN_171 = io_memRespValid & (fillIdx[6:0] == 7'h45);
	wire _GEN_172 = io_memRespValid & (fillIdx[6:0] == 7'h46);
	wire _GEN_173 = io_memRespValid & (fillIdx[6:0] == 7'h47);
	wire _GEN_174 = io_memRespValid & (fillIdx[6:0] == 7'h48);
	wire _GEN_175 = io_memRespValid & (fillIdx[6:0] == 7'h49);
	wire _GEN_176 = io_memRespValid & (fillIdx[6:0] == 7'h4a);
	wire _GEN_177 = io_memRespValid & (fillIdx[6:0] == 7'h4b);
	wire _GEN_178 = io_memRespValid & (fillIdx[6:0] == 7'h4c);
	wire _GEN_179 = io_memRespValid & (fillIdx[6:0] == 7'h4d);
	wire _GEN_180 = io_memRespValid & (fillIdx[6:0] == 7'h4e);
	wire _GEN_181 = io_memRespValid & (fillIdx[6:0] == 7'h4f);
	wire _GEN_182 = io_memRespValid & (fillIdx[6:0] == 7'h50);
	wire _GEN_183 = io_memRespValid & (fillIdx[6:0] == 7'h51);
	wire _GEN_184 = io_memRespValid & (fillIdx[6:0] == 7'h52);
	wire _GEN_185 = io_memRespValid & (fillIdx[6:0] == 7'h53);
	wire _GEN_186 = io_memRespValid & (fillIdx[6:0] == 7'h54);
	wire _GEN_187 = io_memRespValid & (fillIdx[6:0] == 7'h55);
	wire _GEN_188 = io_memRespValid & (fillIdx[6:0] == 7'h56);
	wire _GEN_189 = io_memRespValid & (fillIdx[6:0] == 7'h57);
	wire _GEN_190 = io_memRespValid & (fillIdx[6:0] == 7'h58);
	wire _GEN_191 = io_memRespValid & (fillIdx[6:0] == 7'h59);
	wire _GEN_192 = io_memRespValid & (fillIdx[6:0] == 7'h5a);
	wire _GEN_193 = io_memRespValid & (fillIdx[6:0] == 7'h5b);
	wire _GEN_194 = io_memRespValid & (fillIdx[6:0] == 7'h5c);
	wire _GEN_195 = io_memRespValid & (fillIdx[6:0] == 7'h5d);
	wire _GEN_196 = io_memRespValid & (fillIdx[6:0] == 7'h5e);
	wire _GEN_197 = io_memRespValid & (fillIdx[6:0] == 7'h5f);
	wire _GEN_198 = io_memRespValid & (fillIdx[6:0] == 7'h60);
	wire _GEN_199 = io_memRespValid & (fillIdx[6:0] == 7'h61);
	wire _GEN_200 = io_memRespValid & (fillIdx[6:0] == 7'h62);
	wire _GEN_201 = io_memRespValid & (fillIdx[6:0] == 7'h63);
	wire _GEN_202 = io_memRespValid & (fillIdx[6:0] == 7'h64);
	wire _GEN_203 = io_memRespValid & (fillIdx[6:0] == 7'h65);
	wire _GEN_204 = io_memRespValid & (fillIdx[6:0] == 7'h66);
	wire _GEN_205 = io_memRespValid & (fillIdx[6:0] == 7'h67);
	wire _GEN_206 = io_memRespValid & (fillIdx[6:0] == 7'h68);
	wire _GEN_207 = io_memRespValid & (fillIdx[6:0] == 7'h69);
	wire _GEN_208 = io_memRespValid & (fillIdx[6:0] == 7'h6a);
	wire _GEN_209 = io_memRespValid & (fillIdx[6:0] == 7'h6b);
	wire _GEN_210 = io_memRespValid & (fillIdx[6:0] == 7'h6c);
	wire _GEN_211 = io_memRespValid & (fillIdx[6:0] == 7'h6d);
	wire _GEN_212 = io_memRespValid & (fillIdx[6:0] == 7'h6e);
	wire _GEN_213 = io_memRespValid & (fillIdx[6:0] == 7'h6f);
	wire _GEN_214 = io_memRespValid & (fillIdx[6:0] == 7'h70);
	wire _GEN_215 = io_memRespValid & (fillIdx[6:0] == 7'h71);
	wire _GEN_216 = io_memRespValid & (fillIdx[6:0] == 7'h72);
	wire _GEN_217 = io_memRespValid & (fillIdx[6:0] == 7'h73);
	wire _GEN_218 = io_memRespValid & (fillIdx[6:0] == 7'h74);
	wire _GEN_219 = io_memRespValid & (fillIdx[6:0] == 7'h75);
	wire _GEN_220 = io_memRespValid & (fillIdx[6:0] == 7'h76);
	wire _GEN_221 = io_memRespValid & (fillIdx[6:0] == 7'h77);
	wire _GEN_222 = io_memRespValid & (fillIdx[6:0] == 7'h78);
	wire _GEN_223 = io_memRespValid & (fillIdx[6:0] == 7'h79);
	wire _GEN_224 = io_memRespValid & (fillIdx[6:0] == 7'h7a);
	wire _GEN_225 = io_memRespValid & (fillIdx[6:0] == 7'h7b);
	wire _GEN_226 = io_memRespValid & (fillIdx[6:0] == 7'h7c);
	wire _GEN_227 = io_memRespValid & (fillIdx[6:0] == 7'h7d);
	wire _GEN_228 = io_memRespValid & (fillIdx[6:0] == 7'h7e);
	wire _GEN_229 = io_memRespValid & (&fillIdx[6:0]);
	wire _GEN_230 = state == 5'h08;
	wire _GEN_231 = state == 5'h0d;
	wire _GEN_232 = state == 5'h10;
	wire [63:0] _sum_T_54 = (((_GEN_94[softRowIdx[1:0] * 64+:64] + (|activeKvCols & |valueCols[2:1] ? {{8 {terms_product_4[79]}}, terms_product_4[79:24]} : 64'h0000000000000000)) + (|activeKvCols[2:1] & |valueCols[2:1] ? {{8 {terms_product_5[79]}}, terms_product_5[79:24]} : 64'h0000000000000000)) + (_terms_T_56 & |valueCols[2:1] ? {{8 {terms_product_6[79]}}, terms_product_6[79:24]} : 64'h0000000000000000)) + (activeKvCols[2] & |valueCols[2:1] ? {{8 {terms_product_7[79]}}, terms_product_7[79:24]} : 64'h0000000000000000);
	wire [63:0] _sum_T_66 = (((_GEN_95[softRowIdx[1:0] * 64+:64] + (|activeKvCols & _terms_T_45 ? {{8 {terms_product_8[79]}}, terms_product_8[79:24]} : 64'h0000000000000000)) + (|activeKvCols[2:1] & _terms_T_45 ? {{8 {terms_product_9[79]}}, terms_product_9[79:24]} : 64'h0000000000000000)) + (_terms_T_56 & _terms_T_45 ? {{8 {terms_product_10[79]}}, terms_product_10[79:24]} : 64'h0000000000000000)) + (activeKvCols[2] & _terms_T_45 ? {{8 {terms_product_11[79]}}, terms_product_11[79:24]} : 64'h0000000000000000);
	wire [63:0] _sum_T_78 = (((_GEN_96[softRowIdx[1:0] * 64+:64] + (|activeKvCols & valueCols[2] ? {{8 {terms_product_12[79]}}, terms_product_12[79:24]} : 64'h0000000000000000)) + (|activeKvCols[2:1] & valueCols[2] ? {{8 {terms_product_13[79]}}, terms_product_13[79:24]} : 64'h0000000000000000)) + (_terms_T_56 & valueCols[2] ? {{8 {terms_product_14[79]}}, terms_product_14[79:24]} : 64'h0000000000000000)) + (activeKvCols[2] & valueCols[2] ? {{8 {terms_product_15[79]}}, terms_product_15[79:24]} : 64'h0000000000000000);
	always @(posedge clock) begin
		if (_GEN_5 & _GEN_102)
			qBuf_0 <= io_memRespData;
		if (_GEN_5 & _GEN_103)
			qBuf_1 <= io_memRespData;
		if (_GEN_5 & _GEN_104)
			qBuf_2 <= io_memRespData;
		if (_GEN_5 & _GEN_105)
			qBuf_3 <= io_memRespData;
		if (_GEN_5 & _GEN_106)
			qBuf_4 <= io_memRespData;
		if (_GEN_5 & _GEN_107)
			qBuf_5 <= io_memRespData;
		if (_GEN_5 & _GEN_108)
			qBuf_6 <= io_memRespData;
		if (_GEN_5 & _GEN_109)
			qBuf_7 <= io_memRespData;
		if (_GEN_5 & _GEN_110)
			qBuf_8 <= io_memRespData;
		if (_GEN_5 & _GEN_111)
			qBuf_9 <= io_memRespData;
		if (_GEN_5 & _GEN_112)
			qBuf_10 <= io_memRespData;
		if (_GEN_5 & _GEN_113)
			qBuf_11 <= io_memRespData;
		if (_GEN_5 & _GEN_114)
			qBuf_12 <= io_memRespData;
		if (_GEN_5 & _GEN_115)
			qBuf_13 <= io_memRespData;
		if (_GEN_5 & _GEN_116)
			qBuf_14 <= io_memRespData;
		if (_GEN_5 & _GEN_117)
			qBuf_15 <= io_memRespData;
		if (_GEN_5 & _GEN_118)
			qBuf_16 <= io_memRespData;
		if (_GEN_5 & _GEN_119)
			qBuf_17 <= io_memRespData;
		if (_GEN_5 & _GEN_120)
			qBuf_18 <= io_memRespData;
		if (_GEN_5 & _GEN_121)
			qBuf_19 <= io_memRespData;
		if (_GEN_5 & _GEN_122)
			qBuf_20 <= io_memRespData;
		if (_GEN_5 & _GEN_123)
			qBuf_21 <= io_memRespData;
		if (_GEN_5 & _GEN_124)
			qBuf_22 <= io_memRespData;
		if (_GEN_5 & _GEN_125)
			qBuf_23 <= io_memRespData;
		if (_GEN_5 & _GEN_126)
			qBuf_24 <= io_memRespData;
		if (_GEN_5 & _GEN_127)
			qBuf_25 <= io_memRespData;
		if (_GEN_5 & _GEN_128)
			qBuf_26 <= io_memRespData;
		if (_GEN_5 & _GEN_129)
			qBuf_27 <= io_memRespData;
		if (_GEN_5 & _GEN_130)
			qBuf_28 <= io_memRespData;
		if (_GEN_5 & _GEN_131)
			qBuf_29 <= io_memRespData;
		if (_GEN_5 & _GEN_132)
			qBuf_30 <= io_memRespData;
		if (_GEN_5 & _GEN_133)
			qBuf_31 <= io_memRespData;
		if (_GEN_5 & _GEN_134)
			qBuf_32 <= io_memRespData;
		if (_GEN_5 & _GEN_135)
			qBuf_33 <= io_memRespData;
		if (_GEN_5 & _GEN_136)
			qBuf_34 <= io_memRespData;
		if (_GEN_5 & _GEN_137)
			qBuf_35 <= io_memRespData;
		if (_GEN_5 & _GEN_138)
			qBuf_36 <= io_memRespData;
		if (_GEN_5 & _GEN_139)
			qBuf_37 <= io_memRespData;
		if (_GEN_5 & _GEN_140)
			qBuf_38 <= io_memRespData;
		if (_GEN_5 & _GEN_141)
			qBuf_39 <= io_memRespData;
		if (_GEN_5 & _GEN_142)
			qBuf_40 <= io_memRespData;
		if (_GEN_5 & _GEN_143)
			qBuf_41 <= io_memRespData;
		if (_GEN_5 & _GEN_144)
			qBuf_42 <= io_memRespData;
		if (_GEN_5 & _GEN_145)
			qBuf_43 <= io_memRespData;
		if (_GEN_5 & _GEN_146)
			qBuf_44 <= io_memRespData;
		if (_GEN_5 & _GEN_147)
			qBuf_45 <= io_memRespData;
		if (_GEN_5 & _GEN_148)
			qBuf_46 <= io_memRespData;
		if (_GEN_5 & _GEN_149)
			qBuf_47 <= io_memRespData;
		if (_GEN_5 & _GEN_150)
			qBuf_48 <= io_memRespData;
		if (_GEN_5 & _GEN_151)
			qBuf_49 <= io_memRespData;
		if (_GEN_5 & _GEN_152)
			qBuf_50 <= io_memRespData;
		if (_GEN_5 & _GEN_153)
			qBuf_51 <= io_memRespData;
		if (_GEN_5 & _GEN_154)
			qBuf_52 <= io_memRespData;
		if (_GEN_5 & _GEN_155)
			qBuf_53 <= io_memRespData;
		if (_GEN_5 & _GEN_156)
			qBuf_54 <= io_memRespData;
		if (_GEN_5 & _GEN_157)
			qBuf_55 <= io_memRespData;
		if (_GEN_5 & _GEN_158)
			qBuf_56 <= io_memRespData;
		if (_GEN_5 & _GEN_159)
			qBuf_57 <= io_memRespData;
		if (_GEN_5 & _GEN_160)
			qBuf_58 <= io_memRespData;
		if (_GEN_5 & _GEN_161)
			qBuf_59 <= io_memRespData;
		if (_GEN_5 & _GEN_162)
			qBuf_60 <= io_memRespData;
		if (_GEN_5 & _GEN_163)
			qBuf_61 <= io_memRespData;
		if (_GEN_5 & _GEN_164)
			qBuf_62 <= io_memRespData;
		if (_GEN_5 & _GEN_165)
			qBuf_63 <= io_memRespData;
		if (_GEN_5 & _GEN_166)
			qBuf_64 <= io_memRespData;
		if (_GEN_5 & _GEN_167)
			qBuf_65 <= io_memRespData;
		if (_GEN_5 & _GEN_168)
			qBuf_66 <= io_memRespData;
		if (_GEN_5 & _GEN_169)
			qBuf_67 <= io_memRespData;
		if (_GEN_5 & _GEN_170)
			qBuf_68 <= io_memRespData;
		if (_GEN_5 & _GEN_171)
			qBuf_69 <= io_memRespData;
		if (_GEN_5 & _GEN_172)
			qBuf_70 <= io_memRespData;
		if (_GEN_5 & _GEN_173)
			qBuf_71 <= io_memRespData;
		if (_GEN_5 & _GEN_174)
			qBuf_72 <= io_memRespData;
		if (_GEN_5 & _GEN_175)
			qBuf_73 <= io_memRespData;
		if (_GEN_5 & _GEN_176)
			qBuf_74 <= io_memRespData;
		if (_GEN_5 & _GEN_177)
			qBuf_75 <= io_memRespData;
		if (_GEN_5 & _GEN_178)
			qBuf_76 <= io_memRespData;
		if (_GEN_5 & _GEN_179)
			qBuf_77 <= io_memRespData;
		if (_GEN_5 & _GEN_180)
			qBuf_78 <= io_memRespData;
		if (_GEN_5 & _GEN_181)
			qBuf_79 <= io_memRespData;
		if (_GEN_5 & _GEN_182)
			qBuf_80 <= io_memRespData;
		if (_GEN_5 & _GEN_183)
			qBuf_81 <= io_memRespData;
		if (_GEN_5 & _GEN_184)
			qBuf_82 <= io_memRespData;
		if (_GEN_5 & _GEN_185)
			qBuf_83 <= io_memRespData;
		if (_GEN_5 & _GEN_186)
			qBuf_84 <= io_memRespData;
		if (_GEN_5 & _GEN_187)
			qBuf_85 <= io_memRespData;
		if (_GEN_5 & _GEN_188)
			qBuf_86 <= io_memRespData;
		if (_GEN_5 & _GEN_189)
			qBuf_87 <= io_memRespData;
		if (_GEN_5 & _GEN_190)
			qBuf_88 <= io_memRespData;
		if (_GEN_5 & _GEN_191)
			qBuf_89 <= io_memRespData;
		if (_GEN_5 & _GEN_192)
			qBuf_90 <= io_memRespData;
		if (_GEN_5 & _GEN_193)
			qBuf_91 <= io_memRespData;
		if (_GEN_5 & _GEN_194)
			qBuf_92 <= io_memRespData;
		if (_GEN_5 & _GEN_195)
			qBuf_93 <= io_memRespData;
		if (_GEN_5 & _GEN_196)
			qBuf_94 <= io_memRespData;
		if (_GEN_5 & _GEN_197)
			qBuf_95 <= io_memRespData;
		if (_GEN_5 & _GEN_198)
			qBuf_96 <= io_memRespData;
		if (_GEN_5 & _GEN_199)
			qBuf_97 <= io_memRespData;
		if (_GEN_5 & _GEN_200)
			qBuf_98 <= io_memRespData;
		if (_GEN_5 & _GEN_201)
			qBuf_99 <= io_memRespData;
		if (_GEN_5 & _GEN_202)
			qBuf_100 <= io_memRespData;
		if (_GEN_5 & _GEN_203)
			qBuf_101 <= io_memRespData;
		if (_GEN_5 & _GEN_204)
			qBuf_102 <= io_memRespData;
		if (_GEN_5 & _GEN_205)
			qBuf_103 <= io_memRespData;
		if (_GEN_5 & _GEN_206)
			qBuf_104 <= io_memRespData;
		if (_GEN_5 & _GEN_207)
			qBuf_105 <= io_memRespData;
		if (_GEN_5 & _GEN_208)
			qBuf_106 <= io_memRespData;
		if (_GEN_5 & _GEN_209)
			qBuf_107 <= io_memRespData;
		if (_GEN_5 & _GEN_210)
			qBuf_108 <= io_memRespData;
		if (_GEN_5 & _GEN_211)
			qBuf_109 <= io_memRespData;
		if (_GEN_5 & _GEN_212)
			qBuf_110 <= io_memRespData;
		if (_GEN_5 & _GEN_213)
			qBuf_111 <= io_memRespData;
		if (_GEN_5 & _GEN_214)
			qBuf_112 <= io_memRespData;
		if (_GEN_5 & _GEN_215)
			qBuf_113 <= io_memRespData;
		if (_GEN_5 & _GEN_216)
			qBuf_114 <= io_memRespData;
		if (_GEN_5 & _GEN_217)
			qBuf_115 <= io_memRespData;
		if (_GEN_5 & _GEN_218)
			qBuf_116 <= io_memRespData;
		if (_GEN_5 & _GEN_219)
			qBuf_117 <= io_memRespData;
		if (_GEN_5 & _GEN_220)
			qBuf_118 <= io_memRespData;
		if (_GEN_5 & _GEN_221)
			qBuf_119 <= io_memRespData;
		if (_GEN_5 & _GEN_222)
			qBuf_120 <= io_memRespData;
		if (_GEN_5 & _GEN_223)
			qBuf_121 <= io_memRespData;
		if (_GEN_5 & _GEN_224)
			qBuf_122 <= io_memRespData;
		if (_GEN_5 & _GEN_225)
			qBuf_123 <= io_memRespData;
		if (_GEN_5 & _GEN_226)
			qBuf_124 <= io_memRespData;
		if (_GEN_5 & _GEN_227)
			qBuf_125 <= io_memRespData;
		if (_GEN_5 & _GEN_228)
			qBuf_126 <= io_memRespData;
		if (_GEN_5 & _GEN_229)
			qBuf_127 <= io_memRespData;
		if (_GEN_7 & _GEN_102)
			kBuf_0 <= io_memRespData;
		if (_GEN_7 & _GEN_103)
			kBuf_1 <= io_memRespData;
		if (_GEN_7 & _GEN_104)
			kBuf_2 <= io_memRespData;
		if (_GEN_7 & _GEN_105)
			kBuf_3 <= io_memRespData;
		if (_GEN_7 & _GEN_106)
			kBuf_4 <= io_memRespData;
		if (_GEN_7 & _GEN_107)
			kBuf_5 <= io_memRespData;
		if (_GEN_7 & _GEN_108)
			kBuf_6 <= io_memRespData;
		if (_GEN_7 & _GEN_109)
			kBuf_7 <= io_memRespData;
		if (_GEN_7 & _GEN_110)
			kBuf_8 <= io_memRespData;
		if (_GEN_7 & _GEN_111)
			kBuf_9 <= io_memRespData;
		if (_GEN_7 & _GEN_112)
			kBuf_10 <= io_memRespData;
		if (_GEN_7 & _GEN_113)
			kBuf_11 <= io_memRespData;
		if (_GEN_7 & _GEN_114)
			kBuf_12 <= io_memRespData;
		if (_GEN_7 & _GEN_115)
			kBuf_13 <= io_memRespData;
		if (_GEN_7 & _GEN_116)
			kBuf_14 <= io_memRespData;
		if (_GEN_7 & _GEN_117)
			kBuf_15 <= io_memRespData;
		if (_GEN_7 & _GEN_118)
			kBuf_16 <= io_memRespData;
		if (_GEN_7 & _GEN_119)
			kBuf_17 <= io_memRespData;
		if (_GEN_7 & _GEN_120)
			kBuf_18 <= io_memRespData;
		if (_GEN_7 & _GEN_121)
			kBuf_19 <= io_memRespData;
		if (_GEN_7 & _GEN_122)
			kBuf_20 <= io_memRespData;
		if (_GEN_7 & _GEN_123)
			kBuf_21 <= io_memRespData;
		if (_GEN_7 & _GEN_124)
			kBuf_22 <= io_memRespData;
		if (_GEN_7 & _GEN_125)
			kBuf_23 <= io_memRespData;
		if (_GEN_7 & _GEN_126)
			kBuf_24 <= io_memRespData;
		if (_GEN_7 & _GEN_127)
			kBuf_25 <= io_memRespData;
		if (_GEN_7 & _GEN_128)
			kBuf_26 <= io_memRespData;
		if (_GEN_7 & _GEN_129)
			kBuf_27 <= io_memRespData;
		if (_GEN_7 & _GEN_130)
			kBuf_28 <= io_memRespData;
		if (_GEN_7 & _GEN_131)
			kBuf_29 <= io_memRespData;
		if (_GEN_7 & _GEN_132)
			kBuf_30 <= io_memRespData;
		if (_GEN_7 & _GEN_133)
			kBuf_31 <= io_memRespData;
		if (_GEN_7 & _GEN_134)
			kBuf_32 <= io_memRespData;
		if (_GEN_7 & _GEN_135)
			kBuf_33 <= io_memRespData;
		if (_GEN_7 & _GEN_136)
			kBuf_34 <= io_memRespData;
		if (_GEN_7 & _GEN_137)
			kBuf_35 <= io_memRespData;
		if (_GEN_7 & _GEN_138)
			kBuf_36 <= io_memRespData;
		if (_GEN_7 & _GEN_139)
			kBuf_37 <= io_memRespData;
		if (_GEN_7 & _GEN_140)
			kBuf_38 <= io_memRespData;
		if (_GEN_7 & _GEN_141)
			kBuf_39 <= io_memRespData;
		if (_GEN_7 & _GEN_142)
			kBuf_40 <= io_memRespData;
		if (_GEN_7 & _GEN_143)
			kBuf_41 <= io_memRespData;
		if (_GEN_7 & _GEN_144)
			kBuf_42 <= io_memRespData;
		if (_GEN_7 & _GEN_145)
			kBuf_43 <= io_memRespData;
		if (_GEN_7 & _GEN_146)
			kBuf_44 <= io_memRespData;
		if (_GEN_7 & _GEN_147)
			kBuf_45 <= io_memRespData;
		if (_GEN_7 & _GEN_148)
			kBuf_46 <= io_memRespData;
		if (_GEN_7 & _GEN_149)
			kBuf_47 <= io_memRespData;
		if (_GEN_7 & _GEN_150)
			kBuf_48 <= io_memRespData;
		if (_GEN_7 & _GEN_151)
			kBuf_49 <= io_memRespData;
		if (_GEN_7 & _GEN_152)
			kBuf_50 <= io_memRespData;
		if (_GEN_7 & _GEN_153)
			kBuf_51 <= io_memRespData;
		if (_GEN_7 & _GEN_154)
			kBuf_52 <= io_memRespData;
		if (_GEN_7 & _GEN_155)
			kBuf_53 <= io_memRespData;
		if (_GEN_7 & _GEN_156)
			kBuf_54 <= io_memRespData;
		if (_GEN_7 & _GEN_157)
			kBuf_55 <= io_memRespData;
		if (_GEN_7 & _GEN_158)
			kBuf_56 <= io_memRespData;
		if (_GEN_7 & _GEN_159)
			kBuf_57 <= io_memRespData;
		if (_GEN_7 & _GEN_160)
			kBuf_58 <= io_memRespData;
		if (_GEN_7 & _GEN_161)
			kBuf_59 <= io_memRespData;
		if (_GEN_7 & _GEN_162)
			kBuf_60 <= io_memRespData;
		if (_GEN_7 & _GEN_163)
			kBuf_61 <= io_memRespData;
		if (_GEN_7 & _GEN_164)
			kBuf_62 <= io_memRespData;
		if (_GEN_7 & _GEN_165)
			kBuf_63 <= io_memRespData;
		if (_GEN_7 & _GEN_166)
			kBuf_64 <= io_memRespData;
		if (_GEN_7 & _GEN_167)
			kBuf_65 <= io_memRespData;
		if (_GEN_7 & _GEN_168)
			kBuf_66 <= io_memRespData;
		if (_GEN_7 & _GEN_169)
			kBuf_67 <= io_memRespData;
		if (_GEN_7 & _GEN_170)
			kBuf_68 <= io_memRespData;
		if (_GEN_7 & _GEN_171)
			kBuf_69 <= io_memRespData;
		if (_GEN_7 & _GEN_172)
			kBuf_70 <= io_memRespData;
		if (_GEN_7 & _GEN_173)
			kBuf_71 <= io_memRespData;
		if (_GEN_7 & _GEN_174)
			kBuf_72 <= io_memRespData;
		if (_GEN_7 & _GEN_175)
			kBuf_73 <= io_memRespData;
		if (_GEN_7 & _GEN_176)
			kBuf_74 <= io_memRespData;
		if (_GEN_7 & _GEN_177)
			kBuf_75 <= io_memRespData;
		if (_GEN_7 & _GEN_178)
			kBuf_76 <= io_memRespData;
		if (_GEN_7 & _GEN_179)
			kBuf_77 <= io_memRespData;
		if (_GEN_7 & _GEN_180)
			kBuf_78 <= io_memRespData;
		if (_GEN_7 & _GEN_181)
			kBuf_79 <= io_memRespData;
		if (_GEN_7 & _GEN_182)
			kBuf_80 <= io_memRespData;
		if (_GEN_7 & _GEN_183)
			kBuf_81 <= io_memRespData;
		if (_GEN_7 & _GEN_184)
			kBuf_82 <= io_memRespData;
		if (_GEN_7 & _GEN_185)
			kBuf_83 <= io_memRespData;
		if (_GEN_7 & _GEN_186)
			kBuf_84 <= io_memRespData;
		if (_GEN_7 & _GEN_187)
			kBuf_85 <= io_memRespData;
		if (_GEN_7 & _GEN_188)
			kBuf_86 <= io_memRespData;
		if (_GEN_7 & _GEN_189)
			kBuf_87 <= io_memRespData;
		if (_GEN_7 & _GEN_190)
			kBuf_88 <= io_memRespData;
		if (_GEN_7 & _GEN_191)
			kBuf_89 <= io_memRespData;
		if (_GEN_7 & _GEN_192)
			kBuf_90 <= io_memRespData;
		if (_GEN_7 & _GEN_193)
			kBuf_91 <= io_memRespData;
		if (_GEN_7 & _GEN_194)
			kBuf_92 <= io_memRespData;
		if (_GEN_7 & _GEN_195)
			kBuf_93 <= io_memRespData;
		if (_GEN_7 & _GEN_196)
			kBuf_94 <= io_memRespData;
		if (_GEN_7 & _GEN_197)
			kBuf_95 <= io_memRespData;
		if (_GEN_7 & _GEN_198)
			kBuf_96 <= io_memRespData;
		if (_GEN_7 & _GEN_199)
			kBuf_97 <= io_memRespData;
		if (_GEN_7 & _GEN_200)
			kBuf_98 <= io_memRespData;
		if (_GEN_7 & _GEN_201)
			kBuf_99 <= io_memRespData;
		if (_GEN_7 & _GEN_202)
			kBuf_100 <= io_memRespData;
		if (_GEN_7 & _GEN_203)
			kBuf_101 <= io_memRespData;
		if (_GEN_7 & _GEN_204)
			kBuf_102 <= io_memRespData;
		if (_GEN_7 & _GEN_205)
			kBuf_103 <= io_memRespData;
		if (_GEN_7 & _GEN_206)
			kBuf_104 <= io_memRespData;
		if (_GEN_7 & _GEN_207)
			kBuf_105 <= io_memRespData;
		if (_GEN_7 & _GEN_208)
			kBuf_106 <= io_memRespData;
		if (_GEN_7 & _GEN_209)
			kBuf_107 <= io_memRespData;
		if (_GEN_7 & _GEN_210)
			kBuf_108 <= io_memRespData;
		if (_GEN_7 & _GEN_211)
			kBuf_109 <= io_memRespData;
		if (_GEN_7 & _GEN_212)
			kBuf_110 <= io_memRespData;
		if (_GEN_7 & _GEN_213)
			kBuf_111 <= io_memRespData;
		if (_GEN_7 & _GEN_214)
			kBuf_112 <= io_memRespData;
		if (_GEN_7 & _GEN_215)
			kBuf_113 <= io_memRespData;
		if (_GEN_7 & _GEN_216)
			kBuf_114 <= io_memRespData;
		if (_GEN_7 & _GEN_217)
			kBuf_115 <= io_memRespData;
		if (_GEN_7 & _GEN_218)
			kBuf_116 <= io_memRespData;
		if (_GEN_7 & _GEN_219)
			kBuf_117 <= io_memRespData;
		if (_GEN_7 & _GEN_220)
			kBuf_118 <= io_memRespData;
		if (_GEN_7 & _GEN_221)
			kBuf_119 <= io_memRespData;
		if (_GEN_7 & _GEN_222)
			kBuf_120 <= io_memRespData;
		if (_GEN_7 & _GEN_223)
			kBuf_121 <= io_memRespData;
		if (_GEN_7 & _GEN_224)
			kBuf_122 <= io_memRespData;
		if (_GEN_7 & _GEN_225)
			kBuf_123 <= io_memRespData;
		if (_GEN_7 & _GEN_226)
			kBuf_124 <= io_memRespData;
		if (_GEN_7 & _GEN_227)
			kBuf_125 <= io_memRespData;
		if (_GEN_7 & _GEN_228)
			kBuf_126 <= io_memRespData;
		if (_GEN_7 & _GEN_229)
			kBuf_127 <= io_memRespData;
		if ((_GEN_10 & io_memRespValid) & (fillIdx[1:0] == 2'h0))
			vBuf_0 <= io_memRespData;
		if ((_GEN_10 & io_memRespValid) & (fillIdx[1:0] == 2'h1))
			vBuf_1 <= io_memRespData;
		if ((_GEN_10 & io_memRespValid) & (fillIdx[1:0] == 2'h2))
			vBuf_2 <= io_memRespData;
		if ((_GEN_10 & io_memRespValid) & (&fillIdx[1:0]))
			vBuf_3 <= io_memRespData;
		if (_GEN_232) begin
			packedStoreWords_0 <= {(|qRows & valueCols[2] ? _conv_3_io_out : 16'h0000), (|qRows & _terms_T_45 ? _conv_2_io_out : 16'h0000), (|qRows & |valueCols[2:1] ? _conv_1_io_out : 16'h0000), (|qRows & |valueCols ? _conv_io_out : 16'h0000)};
			packedStoreWords_1 <= {(|qRows[2:1] & valueCols[2] ? _conv_7_io_out : 16'h0000), (|qRows[2:1] & _terms_T_45 ? _conv_6_io_out : 16'h0000), (|qRows[2:1] & |valueCols[2:1] ? _conv_5_io_out : 16'h0000), (|qRows[2:1] & |valueCols ? _conv_4_io_out : 16'h0000)};
			packedStoreWords_2 <= {(_outBf16_11_T & valueCols[2] ? _conv_11_io_out : 16'h0000), (_outBf16_11_T & _terms_T_45 ? _conv_10_io_out : 16'h0000), (_outBf16_11_T & |valueCols[2:1] ? _conv_9_io_out : 16'h0000), (_outBf16_11_T & |valueCols ? _conv_8_io_out : 16'h0000)};
			packedStoreWords_3 <= {(qRows[2] & valueCols[2] ? _conv_15_io_out : 16'h0000), (qRows[2] & _terms_T_45 ? _conv_14_io_out : 16'h0000), (qRows[2] & |valueCols[2:1] ? _conv_13_io_out : 16'h0000), (qRows[2] & |valueCols ? _conv_12_io_out : 16'h0000)};
		end
		if (_GEN_231) begin
			softLatchedScores_0 <= (|activeKvCols ? _scoreBanks_0_ext_R0_data : 64'h8000000000000000);
			softLatchedScores_1 <= (|activeKvCols[2:1] ? _scoreBanks_1_ext_R0_data : 64'h8000000000000000);
			softLatchedScores_2 <= (_terms_T_56 ? _scoreBanks_2_ext_R0_data : 64'h8000000000000000);
			softLatchedScores_3 <= (activeKvCols[2] ? _scoreBanks_3_ext_R0_data : 64'h8000000000000000);
		end
		else if (_GEN_230) begin
			softLatchedScores_0 <= _GEN_17[softRowIdx[1:0] * 64+:64];
			softLatchedScores_1 <= _GEN_18[softRowIdx[1:0] * 64+:64];
			softLatchedScores_2 <= _GEN_19[softRowIdx[1:0] * 64+:64];
			softLatchedScores_3 <= _GEN_20[softRowIdx[1:0] * 64+:64];
		end
		if (reset) begin
			scoreAccum_0_0 <= 64'h0000000000000000;
			scoreAccum_0_1 <= 64'h0000000000000000;
			scoreAccum_0_2 <= 64'h0000000000000000;
			scoreAccum_0_3 <= 64'h0000000000000000;
			scoreAccum_1_0 <= 64'h0000000000000000;
			scoreAccum_1_1 <= 64'h0000000000000000;
			scoreAccum_1_2 <= 64'h0000000000000000;
			scoreAccum_1_3 <= 64'h0000000000000000;
			scoreAccum_2_0 <= 64'h0000000000000000;
			scoreAccum_2_1 <= 64'h0000000000000000;
			scoreAccum_2_2 <= 64'h0000000000000000;
			scoreAccum_2_3 <= 64'h0000000000000000;
			scoreAccum_3_0 <= 64'h0000000000000000;
			scoreAccum_3_1 <= 64'h0000000000000000;
			scoreAccum_3_2 <= 64'h0000000000000000;
			scoreAccum_3_3 <= 64'h0000000000000000;
			outAccum_0_0 <= 64'h0000000000000000;
			outAccum_0_1 <= 64'h0000000000000000;
			outAccum_0_2 <= 64'h0000000000000000;
			outAccum_0_3 <= 64'h0000000000000000;
			outAccum_1_0 <= 64'h0000000000000000;
			outAccum_1_1 <= 64'h0000000000000000;
			outAccum_1_2 <= 64'h0000000000000000;
			outAccum_1_3 <= 64'h0000000000000000;
			outAccum_2_0 <= 64'h0000000000000000;
			outAccum_2_1 <= 64'h0000000000000000;
			outAccum_2_2 <= 64'h0000000000000000;
			outAccum_2_3 <= 64'h0000000000000000;
			outAccum_3_0 <= 64'h0000000000000000;
			outAccum_3_1 <= 64'h0000000000000000;
			outAccum_3_2 <= 64'h0000000000000000;
			outAccum_3_3 <= 64'h0000000000000000;
			rowMax_0 <= 64'h8000000000000000;
			rowMax_1 <= 64'h8000000000000000;
			rowMax_2 <= 64'h8000000000000000;
			rowMax_3 <= 64'h8000000000000000;
			rowDenom_0 <= 64'h0000000000000000;
			rowDenom_1 <= 64'h0000000000000000;
			rowDenom_2 <= 64'h0000000000000000;
			rowDenom_3 <= 64'h0000000000000000;
			qBase <= 64'h0000000000000000;
			kBase <= 64'h0000000000000000;
			vBase <= 64'h0000000000000000;
			outBase <= 64'h0000000000000000;
			qRows <= 3'h0;
			kvRows <= 8'h00;
			dK <= 8'h00;
			valueCols <= 3'h0;
			scaleBf16 <= 16'h3f80;
			qkConfigured <= 1'h0;
			voutConfigured <= 1'h0;
			dimsConfigured <= 1'h0;
			scoresReady <= 1'h0;
			applyAfterScores <= 1'h1;
			fillIdx <= 8'h00;
			computeIdx <= 8'h00;
			scoreIdx <= 8'h00;
			activeKvCols <= 3'h0;
			softRowIdx <= 3'h0;
			outIdx <= 3'h0;
			respRd <= 5'h00;
			respData <= 64'h0000000000000000;
			state <= 5'h00;
		end
		else begin
			if (_GEN_80) begin
				scoreAccum_0_0 <= scoreAccum_0_0 + {{32 {product[31]}}, product};
				scoreAccum_0_1 <= scoreAccum_0_1 + {{32 {product_1[31]}}, product_1};
				scoreAccum_0_2 <= scoreAccum_0_2 + {{32 {product_2[31]}}, product_2};
				scoreAccum_0_3 <= scoreAccum_0_3 + {{32 {product_3[31]}}, product_3};
				scoreAccum_1_0 <= scoreAccum_1_0 + {{32 {product_4[31]}}, product_4};
				scoreAccum_1_1 <= scoreAccum_1_1 + {{32 {product_5[31]}}, product_5};
				scoreAccum_1_2 <= scoreAccum_1_2 + {{32 {product_6[31]}}, product_6};
				scoreAccum_1_3 <= scoreAccum_1_3 + {{32 {product_7[31]}}, product_7};
				scoreAccum_2_0 <= scoreAccum_2_0 + {{32 {product_8[31]}}, product_8};
				scoreAccum_2_1 <= scoreAccum_2_1 + {{32 {product_9[31]}}, product_9};
				scoreAccum_2_2 <= scoreAccum_2_2 + {{32 {product_10[31]}}, product_10};
				scoreAccum_2_3 <= scoreAccum_2_3 + {{32 {product_11[31]}}, product_11};
				scoreAccum_3_0 <= scoreAccum_3_0 + {{32 {product_12[31]}}, product_12};
				scoreAccum_3_1 <= scoreAccum_3_1 + {{32 {product_13[31]}}, product_13};
				scoreAccum_3_2 <= scoreAccum_3_2 + {{32 {product_14[31]}}, product_14};
				scoreAccum_3_3 <= scoreAccum_3_3 + {{32 {product_15[31]}}, product_15};
			end
			else if (_GEN_79 | ~_GEN_66) begin
				scoreAccum_0_0 <= 64'h0000000000000000;
				scoreAccum_0_1 <= 64'h0000000000000000;
				scoreAccum_0_2 <= 64'h0000000000000000;
				scoreAccum_0_3 <= 64'h0000000000000000;
				scoreAccum_1_0 <= 64'h0000000000000000;
				scoreAccum_1_1 <= 64'h0000000000000000;
				scoreAccum_1_2 <= 64'h0000000000000000;
				scoreAccum_1_3 <= 64'h0000000000000000;
				scoreAccum_2_0 <= 64'h0000000000000000;
				scoreAccum_2_1 <= 64'h0000000000000000;
				scoreAccum_2_2 <= 64'h0000000000000000;
				scoreAccum_2_3 <= 64'h0000000000000000;
				scoreAccum_3_0 <= 64'h0000000000000000;
				scoreAccum_3_1 <= 64'h0000000000000000;
				scoreAccum_3_2 <= 64'h0000000000000000;
				scoreAccum_3_3 <= 64'h0000000000000000;
			end
			if (_softSubBase_T & _GEN_82) begin
				outAccum_0_0 <= _sum_T_42;
				outAccum_0_1 <= _sum_T_54;
				outAccum_0_2 <= _sum_T_66;
				outAccum_0_3 <= _sum_T_78;
			end
			else if (_GEN_68)
				;
			else begin
				outAccum_0_0 <= 64'h0000000000000000;
				outAccum_0_1 <= 64'h0000000000000000;
				outAccum_0_2 <= 64'h0000000000000000;
				outAccum_0_3 <= 64'h0000000000000000;
			end
			if (_softSubBase_T & _GEN_83) begin
				outAccum_1_0 <= _sum_T_42;
				outAccum_1_1 <= _sum_T_54;
				outAccum_1_2 <= _sum_T_66;
				outAccum_1_3 <= _sum_T_78;
			end
			else if (_GEN_68)
				;
			else begin
				outAccum_1_0 <= 64'h0000000000000000;
				outAccum_1_1 <= 64'h0000000000000000;
				outAccum_1_2 <= 64'h0000000000000000;
				outAccum_1_3 <= 64'h0000000000000000;
			end
			if (_softSubBase_T & _GEN_84) begin
				outAccum_2_0 <= _sum_T_42;
				outAccum_2_1 <= _sum_T_54;
				outAccum_2_2 <= _sum_T_66;
				outAccum_2_3 <= _sum_T_78;
			end
			else if (_GEN_68)
				;
			else begin
				outAccum_2_0 <= 64'h0000000000000000;
				outAccum_2_1 <= 64'h0000000000000000;
				outAccum_2_2 <= 64'h0000000000000000;
				outAccum_2_3 <= 64'h0000000000000000;
			end
			if (_softSubBase_T & _GEN_85) begin
				outAccum_3_0 <= _sum_T_42;
				outAccum_3_1 <= _sum_T_54;
				outAccum_3_2 <= _sum_T_66;
				outAccum_3_3 <= _sum_T_78;
			end
			else if (_GEN_68)
				;
			else begin
				outAccum_3_0 <= 64'h0000000000000000;
				outAccum_3_1 <= 64'h0000000000000000;
				outAccum_3_2 <= 64'h0000000000000000;
				outAccum_3_3 <= 64'h0000000000000000;
			end
			if (_GEN_11 & _GEN_82) begin
				if (_softGlobalMaxFixed_T)
					rowMax_0 <= softVecMaxFixed;
				else
					rowMax_0 <= _GEN_33;
				rowDenom_0 <= _softDenomNext_T;
			end
			else if (_GEN_66)
				;
			else begin
				rowMax_0 <= 64'h8000000000000000;
				rowDenom_0 <= 64'h0000000000000000;
			end
			if (_GEN_11 & _GEN_83) begin
				if (_softGlobalMaxFixed_T)
					rowMax_1 <= softVecMaxFixed;
				else
					rowMax_1 <= _GEN_33;
				rowDenom_1 <= _softDenomNext_T;
			end
			else if (_GEN_66)
				;
			else begin
				rowMax_1 <= 64'h8000000000000000;
				rowDenom_1 <= 64'h0000000000000000;
			end
			if (_GEN_11 & _GEN_84) begin
				if (_softGlobalMaxFixed_T)
					rowMax_2 <= softVecMaxFixed;
				else
					rowMax_2 <= _GEN_33;
				rowDenom_2 <= _softDenomNext_T;
			end
			else if (_GEN_66)
				;
			else begin
				rowMax_2 <= 64'h8000000000000000;
				rowDenom_2 <= 64'h0000000000000000;
			end
			if (_GEN_11 & _GEN_85) begin
				if (_softGlobalMaxFixed_T)
					rowMax_3 <= softVecMaxFixed;
				else
					rowMax_3 <= _GEN_33;
				rowDenom_3 <= _softDenomNext_T;
			end
			else if (_GEN_66)
				;
			else begin
				rowMax_3 <= 64'h8000000000000000;
				rowDenom_3 <= 64'h0000000000000000;
			end
			if (_GEN_58) begin
				qBase <= io_cmdRs1;
				kBase <= io_cmdRs2;
			end
			if ((~_GEN_56 | _GEN_57) | ~_GEN_59)
				;
			else begin
				vBase <= io_cmdRs1;
				outBase <= io_cmdRs2;
			end
			if ((~_GEN_56 | _GEN_61) | ~_GEN_60)
				;
			else begin
				qRows <= io_cmdRs1[2:0];
				kvRows <= io_cmdRs1[23:16];
				dK <= io_cmdRs1[39:32];
				valueCols <= io_cmdRs1[50:48];
			end
			if ((((~_GEN_56 | _GEN_57) | _GEN_59) | _GEN_60) | ~_GEN_62)
				;
			else
				scaleBf16 <= io_cmdRs1[15:0];
			qkConfigured <= _GEN_58 | qkConfigured;
			voutConfigured <= ((_GEN_56 & ~_GEN_57) & _GEN_59) | voutConfigured;
			dimsConfigured <= ((_GEN_56 & ~_GEN_61) & _GEN_60) | dimsConfigured;
			scoresReady <= _GEN_88 | (_GEN_56 ? ~_GEN_57 & (_GEN_59 ? scoresReady : (_GEN_60 ? ~(((io_cmdRs1[2:0] != qRows) | (io_cmdRs1[23:16] != kvRows)) | (io_cmdRs1[39:32] != dK)) & scoresReady : ~(_GEN_62 | _GEN_64) & scoresReady)) : scoresReady);
			if (_GEN_66)
				;
			else
				applyAfterScores <= io_cmdFunct == 7'h0c;
			if (_GEN_78) begin
				if (_GEN_77)
					fillIdx <= 8'h00;
				else
					fillIdx <= _nextIdx_T_2;
			end
			else if (_GEN_76) begin
				if (_GEN_75)
					fillIdx <= 8'h00;
				else
					fillIdx <= _nextIdx_T_1;
			end
			else if (_GEN_74)
				fillIdx <= 8'h00;
			else if (_GEN_72) begin
				if (_GEN_71)
					fillIdx <= 8'h00;
				else
					fillIdx <= _nextIdx_T;
			end
			else if (_GEN_68)
				;
			else
				fillIdx <= 8'h00;
			if (~_GEN_80 | _GEN_81) begin
				if (_GEN_79 | (_GEN_78 ? (_GEN_77 | _GEN_100) | ~_GEN_68 : _GEN_100 | ~_GEN_68))
					computeIdx <= 8'h00;
			end
			else
				computeIdx <= _computeIdx_T;
			if (~(_softSubBase_T & _GEN_97) | _GEN_98) begin
				if (_GEN_11 & _GEN_86) begin
					if (_GEN_87)
						scoreIdx <= 8'h00;
					else
						scoreIdx <= _nextTile_T;
				end
				else if (((_GEN_5 & io_memRespValid) & _GEN_71) | ~_GEN_68)
					scoreIdx <= 8'h00;
			end
			else
				scoreIdx <= _nextTile_T_1;
			if (_GEN_74)
				activeKvCols <= (_remaining_T > 8'h04 ? 3'h4 : _remaining_T[2:0]);
			else if (_GEN_68)
				;
			else
				activeKvCols <= 3'h0;
			if (~_softSubBase_T | _GEN_97) begin
				if (~_GEN_11 | _GEN_86) begin
					if ((_GEN_80 ? (_GEN_81 | _GEN_101) | ~_GEN_68 : _GEN_101 | ~_GEN_68))
						softRowIdx <= 3'h0;
				end
				else
					softRowIdx <= _softRowIdx_T;
			end
			else
				softRowIdx <= _softRowIdx_T_2;
			if (~_GEN_99 | _nextOutIdx_T[2]) begin
				if ((_GEN_232 | ((_softSubBase_T & _GEN_97) & _GEN_98)) | ~_GEN_68)
					outIdx <= 3'h0;
			end
			else
				outIdx <= _nextOutIdx_T;
			if (_GEN_56)
				respRd <= io_cmdRd;
			if (((_GEN_14 & io_memRespValid) & _nextOutIdx_T[2]) | ~(~_GEN_88 | applyAfterScores))
				respData <= 64'h0000000000000000;
			else if (_GEN_56) begin
				if (_GEN_65)
					respData <= 64'h0000000000000000;
				else if (_GEN_63)
					respData <= {62'h0000000000000000, (qkConfigured & dimsConfigured ? {~dimsValid, 1'h0} : 2'h1)};
				else if (_GEN_67)
					respData <= {62'h0000000000000000, (voutConfigured & dimsConfigured ? (scoresReady ? {~dimsValid_1, 1'h0} : 2'h3) : 2'h1)};
				else if (_GEN_69)
					respData <= {62'h0000000000000000, |state, io_respValid_0};
				else if (_GEN_70)
					respData <= 64'h0000000000000000;
			end
			if (io_respValid_0 & io_respReady)
				state <= 5'h00;
			else if (_GEN_99)
				state <= {3'h4, _nextOutIdx_T[2], 1'h1};
			else if (io_memReqWrite_0 & _GEN_29)
				state <= 5'h12;
			else if (_GEN_232)
				state <= 5'h11;
			else if (_softSubBase_T)
				state <= (_GEN_97 ? (_GEN_98 ? 5'h10 : 5'h0a) : 5'h0e);
			else if (_GEN_231)
				state <= 5'h0f;
			else if (_scoreReadData_3_T)
				state <= 5'h0d;
			else if (_GEN_11)
				state <= (_GEN_86 ? (_GEN_87 ? (applyAfterScores ? 5'h0a : 5'h13) : 5'h03) : 5'h08);
			else if (_GEN_230)
				state <= 5'h09;
			else if (_GEN_80 & _GEN_81)
				state <= 5'h08;
			else if (_GEN_79)
				state <= 5'h07;
			else if (_GEN_78)
				state <= (_GEN_77 ? 5'h0e : 5'h0b);
			else if (_GEN_8 & _GEN_29)
				state <= 5'h0c;
			else if (_GEN_76)
				state <= {3'h1, _GEN_75, 1'h0};
			else if (_GEN_6 & _GEN_29)
				state <= 5'h05;
			else if (_GEN_74) begin
				if (_GEN_73)
					state <= 5'h0b;
				else
					state <= 5'h04;
			end
			else if (_GEN_72)
				state <= {3'h0, _GEN_71, 1'h1};
			else if (_GEN_4 & _GEN_29)
				state <= 5'h02;
			else if (_GEN_56) begin
				if (_GEN_65)
					state <= 5'h13;
				else if (_GEN_63)
					state <= (dimsValid ? 5'h01 : 5'h13);
				else if (_GEN_67)
					state <= (dimsValid_1 ? 5'h0a : 5'h13);
				else if (_GEN_69 | _GEN_70)
					state <= 5'h13;
			end
		end
	end
	scoreBanks_128x64 scoreBanks_0_ext(
		.R0_addr(scoreReadAddr),
		.R0_en(_scoreReadData_3_T),
		.R0_clk(clock),
		.R0_data(_scoreBanks_0_ext_R0_data),
		.W0_addr(writeScoreAddr),
		.W0_en((_GEN_13 & |activeKvCols) & (scoreIdx < kvRows)),
		.W0_clk(clock),
		.W0_data(softLatchedScores_0)
	);
	scoreBanks_128x64 scoreBanks_1_ext(
		.R0_addr(scoreReadAddr),
		.R0_en(_scoreReadData_3_T),
		.R0_clk(clock),
		.R0_data(_scoreBanks_1_ext_R0_data),
		.W0_addr(writeScoreAddr),
		.W0_en((_GEN_13 & |activeKvCols[2:1]) & ((scoreIdx + 8'h01) < kvRows)),
		.W0_clk(clock),
		.W0_data(softLatchedScores_1)
	);
	scoreBanks_128x64 scoreBanks_2_ext(
		.R0_addr(scoreReadAddr),
		.R0_en(_scoreReadData_3_T),
		.R0_clk(clock),
		.R0_data(_scoreBanks_2_ext_R0_data),
		.W0_addr(writeScoreAddr),
		.W0_en((_GEN_13 & _terms_T_56) & ((scoreIdx + 8'h02) < kvRows)),
		.W0_clk(clock),
		.W0_data(softLatchedScores_2)
	);
	scoreBanks_128x64 scoreBanks_3_ext(
		.R0_addr(scoreReadAddr),
		.R0_en(_scoreReadData_3_T),
		.R0_clk(clock),
		.R0_data(_scoreBanks_3_ext_R0_data),
		.W0_addr(writeScoreAddr),
		.W0_en((_GEN_13 & activeKvCols[2]) & ((scoreIdx + 8'h03) < kvRows)),
		.W0_clk(clock),
		.W0_data(softLatchedScores_3)
	);
	BFloat16ToSIntFixed qFixed_0(
		.io_in(_GEN_0[15:0]),
		.io_out(_qFixed_0_io_out)
	);
	BFloat16ToSIntFixed qFixed_1(
		.io_in(_GEN_0[31:16]),
		.io_out(_qFixed_1_io_out)
	);
	BFloat16ToSIntFixed qFixed_2(
		.io_in(_GEN_0[47:32]),
		.io_out(_qFixed_2_io_out)
	);
	BFloat16ToSIntFixed qFixed_3(
		.io_in(_GEN_0[63:48]),
		.io_out(_qFixed_3_io_out)
	);
	BFloat16ToSIntFixed kFixed_0(
		.io_in(_GEN_2[15:0]),
		.io_out(_kFixed_0_io_out)
	);
	BFloat16ToSIntFixed kFixed_1(
		.io_in(_GEN_2[31:16]),
		.io_out(_kFixed_1_io_out)
	);
	BFloat16ToSIntFixed kFixed_2(
		.io_in(_GEN_2[47:32]),
		.io_out(_kFixed_2_io_out)
	);
	BFloat16ToSIntFixed kFixed_3(
		.io_in(_GEN_2[63:48]),
		.io_out(_kFixed_3_io_out)
	);
	BFloat16ToSIntFixed_8 scaleConv(
		.io_in(scaleBf16),
		.io_out(_scaleConv_io_out)
	);
	BFloat16ToSIntFixed vFixed_0_0(
		.io_in(vBuf_0[15:0]),
		.io_out(_vFixed_0_0_io_out)
	);
	BFloat16ToSIntFixed vFixed_0_1(
		.io_in(vBuf_0[31:16]),
		.io_out(_vFixed_0_1_io_out)
	);
	BFloat16ToSIntFixed vFixed_0_2(
		.io_in(vBuf_0[47:32]),
		.io_out(_vFixed_0_2_io_out)
	);
	BFloat16ToSIntFixed vFixed_0_3(
		.io_in(vBuf_0[63:48]),
		.io_out(_vFixed_0_3_io_out)
	);
	BFloat16ToSIntFixed vFixed_1_0(
		.io_in(vBuf_1[15:0]),
		.io_out(_vFixed_1_0_io_out)
	);
	BFloat16ToSIntFixed vFixed_1_1(
		.io_in(vBuf_1[31:16]),
		.io_out(_vFixed_1_1_io_out)
	);
	BFloat16ToSIntFixed vFixed_1_2(
		.io_in(vBuf_1[47:32]),
		.io_out(_vFixed_1_2_io_out)
	);
	BFloat16ToSIntFixed vFixed_1_3(
		.io_in(vBuf_1[63:48]),
		.io_out(_vFixed_1_3_io_out)
	);
	BFloat16ToSIntFixed vFixed_2_0(
		.io_in(vBuf_2[15:0]),
		.io_out(_vFixed_2_0_io_out)
	);
	BFloat16ToSIntFixed vFixed_2_1(
		.io_in(vBuf_2[31:16]),
		.io_out(_vFixed_2_1_io_out)
	);
	BFloat16ToSIntFixed vFixed_2_2(
		.io_in(vBuf_2[47:32]),
		.io_out(_vFixed_2_2_io_out)
	);
	BFloat16ToSIntFixed vFixed_2_3(
		.io_in(vBuf_2[63:48]),
		.io_out(_vFixed_2_3_io_out)
	);
	BFloat16ToSIntFixed vFixed_3_0(
		.io_in(vBuf_3[15:0]),
		.io_out(_vFixed_3_0_io_out)
	);
	BFloat16ToSIntFixed vFixed_3_1(
		.io_in(vBuf_3[31:16]),
		.io_out(_vFixed_3_1_io_out)
	);
	BFloat16ToSIntFixed vFixed_3_2(
		.io_in(vBuf_3[47:32]),
		.io_out(_vFixed_3_2_io_out)
	);
	BFloat16ToSIntFixed vFixed_3_3(
		.io_in(vBuf_3[63:48]),
		.io_out(_vFixed_3_3_io_out)
	);
	SIntFixedToBFloat16 conv(
		.io_in(outAccum_0_0),
		.io_out(_conv_io_out)
	);
	SIntFixedToBFloat16 conv_1(
		.io_in(outAccum_0_1),
		.io_out(_conv_1_io_out)
	);
	SIntFixedToBFloat16 conv_2(
		.io_in(outAccum_0_2),
		.io_out(_conv_2_io_out)
	);
	SIntFixedToBFloat16 conv_3(
		.io_in(outAccum_0_3),
		.io_out(_conv_3_io_out)
	);
	SIntFixedToBFloat16 conv_4(
		.io_in(outAccum_1_0),
		.io_out(_conv_4_io_out)
	);
	SIntFixedToBFloat16 conv_5(
		.io_in(outAccum_1_1),
		.io_out(_conv_5_io_out)
	);
	SIntFixedToBFloat16 conv_6(
		.io_in(outAccum_1_2),
		.io_out(_conv_6_io_out)
	);
	SIntFixedToBFloat16 conv_7(
		.io_in(outAccum_1_3),
		.io_out(_conv_7_io_out)
	);
	SIntFixedToBFloat16 conv_8(
		.io_in(outAccum_2_0),
		.io_out(_conv_8_io_out)
	);
	SIntFixedToBFloat16 conv_9(
		.io_in(outAccum_2_1),
		.io_out(_conv_9_io_out)
	);
	SIntFixedToBFloat16 conv_10(
		.io_in(outAccum_2_2),
		.io_out(_conv_10_io_out)
	);
	SIntFixedToBFloat16 conv_11(
		.io_in(outAccum_2_3),
		.io_out(_conv_11_io_out)
	);
	SIntFixedToBFloat16 conv_12(
		.io_in(outAccum_3_0),
		.io_out(_conv_12_io_out)
	);
	SIntFixedToBFloat16 conv_13(
		.io_in(outAccum_3_1),
		.io_out(_conv_13_io_out)
	);
	SIntFixedToBFloat16 conv_14(
		.io_in(outAccum_3_2),
		.io_out(_conv_14_io_out)
	);
	SIntFixedToBFloat16 conv_15(
		.io_in(outAccum_3_3),
		.io_out(_conv_15_io_out)
	);
	assign io_cmdReady = io_cmdReady_0;
	assign io_respValid = io_respValid_0;
	assign io_respRd = respRd;
	assign io_respData = respData;
	assign io_memReqValid = io_memReqValid_0;
	assign io_memReqWrite = io_memReqWrite_0;
	assign io_memReqAddr = (io_memReqWrite_0 ? _writeAddr_T_2 & 64'hfffffffffffffff0 : (_GEN_8 ? vBase + {52'h0000000000000, scoreIdx + fillIdx, 4'h0} : (_GEN_6 ? kBase + {{52'h0000000000000, fillIdx} + ({54'h00000000000000, scoreIdx[7:2]} * {52'h0000000000000, dK}), 4'h0} : (_GEN_4 ? qBase + {52'h0000000000000, fillIdx, 4'h0} : 64'h0000000000000000))));
	assign io_memReqWdata = (io_memReqWrite_0 ? {(_writeLaneWordIdxs_1_T[2] ? 64'h0000000000000000 : _GEN_3[_writeLaneWordIdxs_1_T[1:0] * 64+:64]), (putMaskBytes_7 ? _GEN_3[_writeLaneWordIdxs_0_T[1:0] * 64+:64] : 64'h0000000000000000)} : 128'h00000000000000000000000000000000);
	assign io_memReqMask = (io_memReqWrite_0 ? {{8 {~_writeLaneWordIdxs_1_T[2]}}, {8 {putMaskBytes_7}}} : {16 {(_GEN_8 | _GEN_6) | _GEN_4}});
	assign io_memRespReady = ((_GEN_14 | _GEN_10) | _GEN_7) | _GEN_5;
	assign io_busy = |state;
endmodule
module FpgaSafeOnlineAttention4x4OpenLaneTop (
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
	output wire [127:0] io_memReqWdata;
	output wire [15:0] io_memReqMask;
	input io_memRespValid;
	output wire io_memRespReady;
	input [127:0] io_memRespData;
	input io_memRespWriteAck;
	output wire io_busy;
	FpgaSafeOnlineAttention4x4Standalone dut(
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
