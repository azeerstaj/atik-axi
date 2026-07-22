// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h37f88d19__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h2b66f697__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h679b5da9__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h370e49b7__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_hb5186375__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h68a62ad9__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_hd88eaecc__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h93f172d0__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h76aa6a6d__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h70733d82__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_he191617f__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_ha414cfa1__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h227ee276__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h6ad73bb6__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata 
        = ((IData)(vlSelf->__VdfgTmp_hceef11f7__0) ? 
           (0xffffU & vlSelf->__VdfgTmp_h05a073ee__0)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data 
        = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
                                                                 >> 1U))), 4U)))
                        ? 0U : (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[
                                (((IData)(0xfU) + (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
                                                                               >> 1U))), 4U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
                                                                            >> 1U))), 4U))))) 
                      | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[
                         (3U & (VL_SHIFTL_III(7,7,32, 
                                              (7U & (IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
                                                             >> 1U))), 4U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
                                                                         >> 1U))), 4U)))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_data 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_data 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_data 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_data;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_wdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_wdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_wdata;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___readElemAddr_T 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row)) 
                                    * vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__base 
           + (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol)) 
               + ((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow)) 
                  * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__stride)))) 
              << 1U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_3 
           == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__cols);
    vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awFire)
            ? (IData)(vlSelf->s_axi_ctrl_awaddr) : (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awAddr));
    if (vlSelf->AtikAxiTop__DOT__control__DOT__wFire) {
        vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb 
            = vlSelf->s_axi_ctrl_wstrb;
        vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
            = vlSelf->s_axi_ctrl_wdata;
    } else {
        vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb 
            = vlSelf->AtikAxiTop__DOT__control__DOT__wStrb;
        vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
            = vlSelf->AtikAxiTop__DOT__control__DOT__wData;
    }
    AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__rows);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_bits_addr 
        = (0xfffffffffffffff0ULL & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__base 
                                    + ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___readElemAddr_T 
                                        + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_0) 
                                       << 1U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_bits_addr 
        = (0xfffffffffffffff0ULL & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7 
        = (0xfU & ((7U & ((IData)(7U) - (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                 >> 1U)))) 
                   + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                     >> 3U))) ? 0U : 
                      (7U & ((IData)(3U) - (IData)(
                                                   (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                    >> 1U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart 
        = (0U == (7U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                >> 1U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_1 
        = (2U > (7U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                               >> 1U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_2 
        = (3U > (7U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                               >> 1U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_4 
        = (5U > (7U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                               >> 1U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_5 
        = (3U != (3U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                >> 2U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_6 
        = (7U != (7U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                >> 1U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_2 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextElemAddr_T_4 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__base 
           + ((((QData)((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row 
                                 + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2)))) 
                * vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN) 
               + (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2)
                                   ? 0U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_3)))) 
              << 1U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last 
        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_3 
            == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__rows) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2));
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN = (0U 
                                                   == (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr));
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN_2 = 
        (1U & ((vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                >> 1U) & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy)) 
                          & ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy)) 
                             & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__startPending))))));
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN_0 = 
        (1U & (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
               & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy)) 
                  & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__startPending)))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_memReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_bits_addr
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_bits_addr);
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT___core_io_memWriteReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_7 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
           & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7)) 
              & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7) 
                 < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_3 
        = ((~ (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                       >> 3U))) & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
                                   & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3)) 
                                      & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3) 
                                         < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart)
                       ? (7U & (- (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                           >> 1U))))
                       : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_1)
                       ? (7U & ((IData)(1U) - (IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                       >> 1U))))
                       : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_2 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_2)
                       ? (7U & ((IData)(2U) - (IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                       >> 1U))))
                       : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_4)
                       ? (7U & ((IData)(4U) - (IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                       >> 1U))))
                       : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_5)
                       ? (7U & ((IData)(5U) - (IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                       >> 1U))))
                       : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6 
        = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                   + ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_6)
                       ? (7U & ((IData)(6U) - (IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
                                                       >> 1U))))
                       : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__nextElemInCachedBeat 
        = ((0xfffffffffffffff0ULL & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextElemAddr_T_4) 
           == (0xfffffffffffffff0ULL & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__lastElem 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded 
        = (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T) 
                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded 
        = (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T) 
                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last))));
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN_1 = 
        ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite) 
         & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN) 
            & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb)));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
    vlSelf->AtikAxiTop__DOT___core_io_memReadReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart) 
           & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
              & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T)) 
                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T) 
                    < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_1 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_1) 
           & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
              & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1)) 
                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1) 
                    < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_2 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_2) 
           & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
              & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_2)) 
                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_2) 
                    < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_4 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_4) 
           & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
              & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4)) 
                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4) 
                    < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_5 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_5) 
           & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
              & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5)) 
                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5) 
                    < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__laneAfterStart_6) 
           & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0) 
              & ((2U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6)) 
                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6) 
                    < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_setDesc 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_1) 
           & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_0));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_clearCounters 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_1) 
           & (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
              >> 2U));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_1) 
           & ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_0)) 
              & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_2)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memMask 
        = ((0xc000U & ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_7))) 
                       << 0xeU)) | ((0x3000U & ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6))) 
                                                << 0xcU)) 
                                    | ((0xc00U & ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_5))) 
                                                  << 0xaU)) 
                                       | ((0x300U & 
                                           ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_4))) 
                                            << 8U)) 
                                          | ((0xc0U 
                                              & ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_3))) 
                                                 << 6U)) 
                                             | ((0x30U 
                                                 & ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_2))) 
                                                    << 4U)) 
                                                | ((0xcU 
                                                    & ((- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_1))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid)))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__writeElemsThisBeat 
        = (0xfU & ((7U & ((3U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid) 
                                 + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_1))) 
                          + (3U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_2) 
                                   + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_3))))) 
                   + (7U & ((3U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_4) 
                                   + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_5))) 
                            + (3U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6) 
                                     + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_7)))))));
    __Vtemp_1[1U] = (IData)((((QData)((IData)(((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6)
                                                  ? 
                                                 (((0U 
                                                    == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6))
                                                    ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                    : 0U) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6))
                                                      ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                      : 0U))
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_5)
                                                   ? 
                                                  (((0U 
                                                     == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5))
                                                     ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                     : 0U) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5))
                                                       ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                       : 0U))
                                                   : 0U)))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_4)
                                                              ? 
                                                             (((0U 
                                                                == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4))
                                                                ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                                : 0U) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4))
                                                                  ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                                  : 0U))
                                                              : 0U) 
                                                            << 0x10U) 
                                                           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_3)
                                                               ? 
                                                              (((0U 
                                                                 == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3))
                                                                 ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                                 : 0U) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3))
                                                                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                                   : 0U))
                                                               : 0U))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6)
                                                   ? 
                                                  (((0U 
                                                     == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6))
                                                     ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                     : 0U) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_6))
                                                       ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                       : 0U))
                                                   : 0U) 
                                                 << 0x10U) 
                                                | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_5)
                                                    ? 
                                                   (((0U 
                                                      == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5))
                                                      ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                      : 0U) 
                                                    | ((1U 
                                                        == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_5))
                                                        ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                        : 0U))
                                                    : 0U)))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_4)
                                                               ? 
                                                              (((0U 
                                                                 == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4))
                                                                 ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                                 : 0U) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_4))
                                                                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                                   : 0U))
                                                               : 0U) 
                                                             << 0x10U) 
                                                            | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_3)
                                                                ? 
                                                               (((0U 
                                                                  == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3))
                                                                  ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                                                                  : 0U) 
                                                                | ((1U 
                                                                    == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_3))
                                                                    ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                                                    : 0U))
                                                                : 0U))))) 
                             >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[0U] 
        = ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_1)
              ? (((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1))
                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                   : 0U) | ((1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1))
                             ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                             : 0U)) : 0U) << 0x10U) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid)
               ? (((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T))
                    ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                    : 0U) | ((1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T))
                              ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                              : 0U)) : 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[1U] 
        = ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_2)
              ? (0xffffU & (((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_2))
                              ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                              : 0U) | ((1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_2))
                                        ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                        : 0U))) : 0U) 
            | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_1)
                 ? (((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1))
                      ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                      : 0U) | ((1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___candidateCol_T_1))
                                ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                                : 0U)) : 0U) >> 0x10U)) 
           | (__Vtemp_1[1U] << 0x10U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U] 
        = ((__Vtemp_1[1U] >> 0x10U) | (__Vtemp_1[2U] 
                                       << 0x10U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U] 
        = ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_7)
              ? (((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7))
                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                   : 0U) | ((1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7))
                             ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                             : 0U)) : 0U) << 0x10U) 
           | (__Vtemp_1[2U] >> 0x10U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesLoaded 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0)
                ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded
                : 0ULL));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT___control_io_setDesc = vlSelf->AtikAxiTop__DOT__control__DOT__io_setDesc;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_setDesc 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_setDesc;
    vlSelf->AtikAxiTop__DOT___control_io_clearCounters 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_clearCounters;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_clearCounters 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_clearCounters;
    vlSelf->AtikAxiTop__DOT___control_io_resetCore 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_clear 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_clearCounters) 
           | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore));
    vlSelf->AtikAxiTop__DOT__core__DOT__io_resetCore 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore;
    AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_1) 
              | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_2) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_3))));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteMask 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memMask;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteMask 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memMask;
    vlSelf->AtikAxiTop__DOT___core_io_memWriteMask 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memMask;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteMask 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memMask;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_bytesWritten 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T)
            ? (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__writeElemsThisBeat) 
                               << 1U))) : 0ULL);
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteData[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[0U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteData[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[1U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteData[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteData[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteData[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteData[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteData[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteData[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U];
    vlSelf->AtikAxiTop__DOT___core_io_memWriteData[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[0U];
    vlSelf->AtikAxiTop__DOT___core_io_memWriteData[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[1U];
    vlSelf->AtikAxiTop__DOT___core_io_memWriteData[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U];
    vlSelf->AtikAxiTop__DOT___core_io_memWriteData[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteData[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteData[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteData[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteData[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_setDesc 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_setDesc;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_clearCounters 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_clearCounters;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_clear 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_clear;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_resetCore 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_resetCore;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorStart 
        = ((~ (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4));
    AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4) 
              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_5)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_bytesWritten 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_bytesWritten;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner) {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes = 0ULL;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_bytesWritten;
    } else {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_bytesWritten;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes = 0ULL;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesWritten 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0)
                ? AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes
                : 0ULL));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_setDesc 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_setDesc;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_resetCore 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_resetCore;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_descriptorStart 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart 
        = ((~ (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_6));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart 
        = ((~ ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0) 
               | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_6) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)))) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_7));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_bytesWritten 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteBytes 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_bytesWritten 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_bytesWritten 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_bytesWritten 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteBytes 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_bytesWritten 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_bytesWritten 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_matmulStart 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_attentionStart 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_bytesWritten 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesWritten;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_bytesWritten 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesWritten;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows;
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/pc_5996/chipyard-f2/generators/atik/build/atik-axi-2x2/AtikAxiTop.sv", 5144, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/pc_5996/chipyard-f2/generators/atik/build/atik-axi-2x2/AtikAxiTop.sv", 5144, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/pc_5996/chipyard-f2/generators/atik/build/atik-axi-2x2/AtikAxiTop.sv", 5144, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_awaddr & 0xf000U))) {
        Verilated::overWidthError("s_axi_ctrl_awaddr");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("s_axi_ctrl_awprot");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_ctrl_awvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("s_axi_ctrl_wstrb");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_ctrl_wvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("s_axi_ctrl_bready");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_araddr & 0xf000U))) {
        Verilated::overWidthError("s_axi_ctrl_araddr");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("s_axi_ctrl_arprot");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_ctrl_arvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("s_axi_ctrl_rready");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_awready & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_awready");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_wready & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_wready");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_bid & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_bid");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_bresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_mem_bresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_bvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_bvalid");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_arready & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_arready");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_rid & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_rid");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_rresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_mem_rresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_rlast & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_rlast");}
    if (VL_UNLIKELY((vlSelf->m_axi_mem_rvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_mem_rvalid");}
}
#endif  // VL_DEBUG
