// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h0e7829ba_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_hf67920e7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h7ee1a44d_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h1c449781_0;
extern const VlWide<17>/*543:0*/ Vtop__ConstPool__CONST_h00a54071_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memResp_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memResp_valid = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memReq_ready;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memReq_ready = 0;
    SData/*15:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_1;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_1 = 0;
    SData/*15:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_0;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_0 = 0;
    SData/*15:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_1;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_1 = 0;
    SData/*15:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_0;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_0 = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_1;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_1 = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_0;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_0 = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1 = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_0;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_0 = 0;
    IData/*23:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1 = 0;
    IData/*23:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0 = 0;
    IData/*23:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1 = 0;
    IData/*23:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb536d075__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb536d075__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hbcd473a8__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hbcd473a8__0 = 0;
    CData/*7:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0 = 0;
    CData/*7:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hf9c25935__0 = 0;
    CData/*7:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0 = 0;
    CData/*7:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hf9c25935__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT____VdfgTmp_he071bdfb__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT____VdfgTmp_he071bdfb__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT____VdfgTmp_he071bdfb__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT____VdfgTmp_he071bdfb__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT____VdfgTmp_he071bdfb__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT____VdfgTmp_he071bdfb__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT____VdfgTmp_he071bdfb__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT____VdfgTmp_he071bdfb__0 = 0;
    SData/*15:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in = 0;
    SData/*15:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb6249bcd__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb6249bcd__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h78b76b5a__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h78b76b5a__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb834bd68__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb834bd68__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hd88fd5c8__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hd88fd5c8__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9b7b7248__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9b7b7248__0 = 0;
    VlWide<3>/*64:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0;
    VL_ZERO_W(65, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0);
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT____VdfgTmp_hf9c25935__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT____VdfgTmp_hf9c25935__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT____VdfgTmp_hf9c25935__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT____VdfgTmp_hf9c25935__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0 = 0;
    SData/*8:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0 = 0;
    CData/*4:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0 = 0;
    CData/*6:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_he071bdfb__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_he071bdfb__0 = 0;
    IData/*23:0*/ __VdfgTmp_h02c400c1__0;
    __VdfgTmp_h02c400c1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h70f47b28__0;
    __VdfgTmp_h70f47b28__0 = 0;
    QData/*47:0*/ __VdfgTmp_h47518fc4__0;
    __VdfgTmp_h47518fc4__0 = 0;
    QData/*47:0*/ __VdfgTmp_h0270aa18__0;
    __VdfgTmp_h0270aa18__0 = 0;
    QData/*47:0*/ __VdfgTmp_he0599b2f__0;
    __VdfgTmp_he0599b2f__0 = 0;
    QData/*47:0*/ __VdfgTmp_hd8f352e8__0;
    __VdfgTmp_hd8f352e8__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg = 0;
    CData/*3:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase = 0;
    CData/*3:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0;
    CData/*5:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx = 0;
    CData/*3:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1 = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0 = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 = 0;
    QData/*63:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__control__DOT__descAddrLoReg;
    __Vdly__AtikAxiTop__DOT__control__DOT__descAddrLoReg = 0;
    IData/*31:0*/ __Vdly__AtikAxiTop__DOT__control__DOT__descAddrHiReg;
    __Vdly__AtikAxiTop__DOT__control__DOT__descAddrHiReg = 0;
    CData/*3:0*/ __Vdly__AtikAxiTop__DOT__control__DOT__counterIndexReg;
    __Vdly__AtikAxiTop__DOT__control__DOT__counterIndexReg = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__control__DOT__rValid;
    __Vdly__AtikAxiTop__DOT__control__DOT__rValid = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__dma__DOT__responseErrorReg;
    __Vdly__AtikAxiTop__DOT__dma__DOT__responseErrorReg = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__dma__DOT__awDone;
    __Vdly__AtikAxiTop__DOT__dma__DOT__awDone = 0;
    CData/*0:0*/ __Vdly__AtikAxiTop__DOT__dma__DOT__wDone;
    __Vdly__AtikAxiTop__DOT__dma__DOT__wDone = 0;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_54;
    VlWide<17>/*543:0*/ __Vtemp_55;
    VlWide<17>/*543:0*/ __Vtemp_56;
    VlWide<17>/*543:0*/ __Vtemp_57;
    VlWide<17>/*543:0*/ __Vtemp_58;
    VlWide<17>/*543:0*/ __Vtemp_59;
    VlWide<17>/*543:0*/ __Vtemp_60;
    VlWide<17>/*543:0*/ __Vtemp_61;
    VlWide<17>/*543:0*/ __Vtemp_62;
    VlWide<17>/*543:0*/ __Vtemp_63;
    VlWide<17>/*543:0*/ __Vtemp_64;
    VlWide<17>/*543:0*/ __Vtemp_65;
    VlWide<6>/*191:0*/ __Vtemp_67;
    VlWide<6>/*191:0*/ __Vtemp_68;
    VlWide<6>/*191:0*/ __Vtemp_70;
    VlWide<6>/*191:0*/ __Vtemp_71;
    VlWide<6>/*191:0*/ __Vtemp_73;
    VlWide<6>/*191:0*/ __Vtemp_74;
    VlWide<6>/*191:0*/ __Vtemp_76;
    VlWide<6>/*191:0*/ __Vtemp_77;
    VlWide<6>/*191:0*/ __Vtemp_79;
    VlWide<6>/*191:0*/ __Vtemp_80;
    // Body
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state;
    __Vdly__AtikAxiTop__DOT__control__DOT__descAddrHiReg 
        = vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg;
    __Vdly__AtikAxiTop__DOT__control__DOT__descAddrLoReg 
        = vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg;
    __Vdly__AtikAxiTop__DOT__control__DOT__rValid = vlSelf->AtikAxiTop__DOT__control__DOT__rValid;
    __Vdly__AtikAxiTop__DOT__control__DOT__counterIndexReg 
        = vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg;
    __Vdly__AtikAxiTop__DOT__dma__DOT__wDone = vlSelf->AtikAxiTop__DOT__dma__DOT__wDone;
    __Vdly__AtikAxiTop__DOT__dma__DOT__awDone = vlSelf->AtikAxiTop__DOT__dma__DOT__awDone;
    __Vdly__AtikAxiTop__DOT__dma__DOT__responseErrorReg 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__responseErrorReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state;
    if (vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset) {
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_6 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_7 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_9 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_10 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_op = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_aAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_bAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_vAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_outAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_m = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_n = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_k = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_kvLen = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_lda = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldb = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldv = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldout = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_scaleBf16 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__readOwner = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner = 0U;
        __Vdly__AtikAxiTop__DOT__control__DOT__descAddrLoReg = 0U;
        __Vdly__AtikAxiTop__DOT__control__DOT__descAddrHiReg = 0U;
        __Vdly__AtikAxiTop__DOT__control__DOT__counterIndexReg = 0U;
        vlSelf->AtikAxiTop__DOT__control__DOT__bResp = 0U;
        __Vdly__AtikAxiTop__DOT__control__DOT__rValid = 0U;
        vlSelf->AtikAxiTop__DOT__control__DOT__rData = 0U;
        vlSelf->AtikAxiTop__DOT__control__DOT__rResp = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state = 0U;
        vlSelf->AtikAxiTop__DOT__dma__DOT__state = 0U;
        __Vdly__AtikAxiTop__DOT__dma__DOT__responseErrorReg = 0U;
        __Vdly__AtikAxiTop__DOT__dma__DOT__awDone = 0U;
        __Vdly__AtikAxiTop__DOT__dma__DOT__wDone = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_aAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_bAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_vAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_outAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_m = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_n = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_k = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_kvLen = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_lda = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldb = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldv = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldout = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_scaleBf16 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__doneReg = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[0U] = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[1U] = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[2U] = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[3U] = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_aAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_bAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_outAddr = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_lda = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldb = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_aAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_bAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_vAddr = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_outAddr = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_lda = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldb = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldv = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_0 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_1 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_0 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_1 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 = 0ULL;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_1 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 = 0U;
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 = 0U;
    } else {
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_clear) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_6 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_7 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_9 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_10 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 = 0ULL;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 = 0ULL;
        } else {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_dmaReadActive) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2);
            }
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_6 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_6 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_bytesRead);
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8);
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12);
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1);
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3);
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshActive) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4);
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshIdle) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5);
            }
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_7 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_7 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesWritten);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_9 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_9 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesLoaded);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_10 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_10 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed);
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11);
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
                    = (1ULL + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0);
            }
        }
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_1 
            = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_2 
            = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_3 
            = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_4 
            = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_5 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorStart) 
               & ((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state)) 
                  | (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state))));
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_5) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state = 3U;
        } else if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready) 
                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid))) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state = 2U;
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state = 1U;
        }
        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0) 
             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_1))) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_op 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_aAddr 
                = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U])));
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_op = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_aAddr = 0ULL;
        }
        if ((1U & (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_1)) 
                   | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_2))))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_bAddr = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_vAddr = 0ULL;
            }
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_bAddr 
                = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U])));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_vAddr 
                = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U])));
        }
        if ((1U & ((((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_1)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_2)) 
                   | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_3))))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_outAddr = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_m = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_n = 0U;
            }
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_outAddr 
                = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U])));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_m 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_n 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U];
        }
        if ((1U & (((((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0)) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_1)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_2)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_3)) 
                   | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_4))))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_k = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_kvLen = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_lda = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldb = 0U;
            }
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_k 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_kvLen 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_lda 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldb 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U];
        }
        if ((1U & ((((((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_1)) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_2)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_3)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_4)) 
                   | (4U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index))))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldv = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldout = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_scaleBf16 = 0U;
            }
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldv 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldout 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_scaleBf16 
                = (0xffffU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U]);
        }
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_0)
                ? ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error))
                : ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN)) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg)));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN_5) 
               | ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__unnamedblk1__DOT___GEN)) 
                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg)));
        if (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready) 
             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid))) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__readOwner 
                = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid)));
        }
        if ((1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_4)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last)))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_2) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row = 0U;
            }
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_3;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_3;
        }
        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready) 
             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T))) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner 
                = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid)));
        }
        vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_3 
            = (8U == (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr));
        vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_4 
            = (0xcU == (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr));
        vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_5 
            = (0x10U == (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr));
        vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelf->s_axi_ctrl_arvalid) 
               & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__rValid)));
        if ((1U & (~ (((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN)) 
                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_3)))))) {
            __Vdly__AtikAxiTop__DOT__control__DOT__descAddrLoReg 
                = ((((8U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                      ? (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                         >> 0x18U) : (vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg 
                                      >> 0x18U)) << 0x18U) 
                   | ((0xff0000U & (((4U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                                      ? (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                                         >> 0x10U) : 
                                     (vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg 
                                      >> 0x10U)) << 0x10U)) 
                      | ((0xff00U & (((2U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                                       ? (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                                          >> 8U) : 
                                      (vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg 
                                       >> 8U)) << 8U)) 
                         | (0xffU & ((1U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                                      ? vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData
                                      : vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg)))));
        }
        if ((1U & (~ ((((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_3)) 
                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_4)))))) {
            __Vdly__AtikAxiTop__DOT__control__DOT__descAddrHiReg 
                = ((((8U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                      ? (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                         >> 0x18U) : (vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg 
                                      >> 0x18U)) << 0x18U) 
                   | ((0xff0000U & (((4U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                                      ? (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                                         >> 0x10U) : 
                                     (vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg 
                                      >> 0x10U)) << 0x10U)) 
                      | ((0xff00U & (((2U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                                       ? (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                                          >> 8U) : 
                                      (vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg 
                                       >> 8U)) << 8U)) 
                         | (0xffU & ((1U & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb))
                                      ? vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData
                                      : vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg)))));
        }
        if ((1U & (~ ((((((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN)) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_3)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_4)) 
                       | (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_5))) 
                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb)))))) {
            __Vdly__AtikAxiTop__DOT__control__DOT__counterIndexReg 
                = (0xfU & vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData);
        }
        if (vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite) {
            vlSelf->AtikAxiTop__DOT__control__DOT__bResp 
                = (2U & ((~ ((((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_3)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_4)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_5))) 
                         << 1U));
        }
        __Vdly__AtikAxiTop__DOT__control__DOT__rValid 
            = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_6) 
               | ((~ ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__rValid) 
                      & (IData)(vlSelf->s_axi_ctrl_rready))) 
                  & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__rValid)));
        if (vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT___GEN_6) {
            vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7 
                = (4U == (IData)(vlSelf->s_axi_ctrl_araddr));
            vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8 
                = (8U == (IData)(vlSelf->s_axi_ctrl_araddr));
            vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9 
                = (0xcU == (IData)(vlSelf->s_axi_ctrl_araddr));
            vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_10 
                = (0x10U == (IData)(vlSelf->s_axi_ctrl_araddr));
            vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_11 
                = (0x14U == (IData)(vlSelf->s_axi_ctrl_araddr));
            vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_12 
                = (0x18U == (IData)(vlSelf->s_axi_ctrl_araddr));
            vlSelf->AtikAxiTop__DOT__control__DOT__rData 
                = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7)
                    ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word)
                    : ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8)
                        ? vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg
                        : ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9)
                            ? vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg
                            : ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_10)
                                ? (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg)
                                : ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_11)
                                    ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData)
                                    : ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_12)
                                        ? (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData 
                                                   >> 0x20U))
                                        : 0U))))));
            vlSelf->AtikAxiTop__DOT__control__DOT__rResp 
                = (2U & ((~ ((((((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_10)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_11)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_12))) 
                         << 1U));
        }
        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready) 
             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_cmd_valid_T))) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner 
                = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid)));
        }
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_4) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last)
                    ? 0U : (1U | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__nextElemInCachedBeat) 
                                  << 1U)));
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___io_bytesRead_T) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state = 3U;
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_3) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state = 2U;
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_2) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state 
                = (1U & (~ ((0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows) 
                            | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols))));
        }
        vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT__awFire 
            = ((IData)(vlSelf->m_axi_mem_awvalid) & (IData)(vlSelf->m_axi_mem_awready));
        vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT__wFire 
            = ((IData)(vlSelf->m_axi_mem_wvalid) & (IData)(vlSelf->m_axi_mem_wready));
        vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT___GEN_3 
            = ((IData)(vlSelf->m_axi_mem_bready) & (IData)(vlSelf->m_axi_mem_bvalid));
        if (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid) 
             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready))) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__state = 0U;
        } else if (vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT___GEN_3) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__state = 6U;
        } else if ((((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T) 
                     & ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__awDone) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT__awFire))) 
                    & ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__wDone) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT__wFire)))) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__state = 5U;
        } else if (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid) 
                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready))) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__state = 0U;
        } else if (vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_2) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__state = 3U;
        } else if (((IData)(vlSelf->m_axi_mem_arvalid) 
                    & (IData)(vlSelf->m_axi_mem_arready))) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__state = 2U;
        } else if (vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready) {
            if (vlSelf->AtikAxiTop__DOT__dma__DOT___GEN) {
                vlSelf->AtikAxiTop__DOT__dma__DOT__state = 1U;
            } else if (vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0) {
                vlSelf->AtikAxiTop__DOT__dma__DOT__state = 4U;
            }
        }
        __Vdly__AtikAxiTop__DOT__dma__DOT__responseErrorReg 
            = (1U & ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT___GEN_3)
                      ? (((0U != (IData)(vlSelf->m_axi_mem_bresp)) 
                          & (1U != (IData)(vlSelf->m_axi_mem_bresp))) 
                         | (IData)(vlSelf->m_axi_mem_bid))
                      : ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_2)
                          ? ((((0U != (IData)(vlSelf->m_axi_mem_rresp)) 
                               & (1U != (IData)(vlSelf->m_axi_mem_rresp))) 
                              | (~ (IData)(vlSelf->m_axi_mem_rlast))) 
                             | (IData)(vlSelf->m_axi_mem_rid))
                          : ((~ ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready) 
                                 & ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN) 
                                    | (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0)))) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__responseErrorReg)))));
        __Vdly__AtikAxiTop__DOT__dma__DOT__awDone = 
            (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T) 
              & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT__awFire)) 
             | ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_1) 
                & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__awDone)));
        __Vdly__AtikAxiTop__DOT__dma__DOT__wDone = 
            (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T) 
              & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__unnamedblk1__DOT__wFire)) 
             | ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_1) 
                & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__wDone)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___causalReg_T 
            = (2U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__isAttention 
            = ((1U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___causalReg_T));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__badOp 
            = ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op) 
               & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__isAttention)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8 
            = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_setDesc) 
               & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_9 
            = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8)) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_10 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__badOp));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_11 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_5) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_12 
            = ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_1) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_2)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_3)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4));
        if (vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 0U;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_aAddr = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_bAddr = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_vAddr = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_outAddr = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_m = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_n = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_k = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_kvLen = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_lda = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldb = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldv = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldout = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_scaleBf16 = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_13 
                = (0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_14 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_13)
                    ? 3U : 0U);
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_1) {
                if (vlSelf->AtikAxiTop__DOT__control__DOT__io_run) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state 
                        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_13)
                            ? 8U : 1U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_14;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_2) {
                if (vlSelf->AtikAxiTop__DOT__control__DOT__io_run) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 1U;
                }
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_3) {
                if ((1U & (~ ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_run)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_13))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 1U;
                }
                if (vlSelf->AtikAxiTop__DOT__control__DOT__io_run) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_14;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 2U;
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_5) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_10) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 8U;
                    } else if ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op)) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__isAttention) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 5U;
                        }
                    } else {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 3U;
                    }
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 5U;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__badOp) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 1U;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                    }
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_6) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 4U;
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN) {
                if ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 8U;
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error;
                } else {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 7U;
                    }
                    if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8))) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                    }
                }
            } else {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_7) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 6U;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) {
                    if ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error))) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 8U;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state = 7U;
                    }
                }
                if ((1U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_7) 
                           | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0))))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                    }
                } else if ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error;
                } else if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg = 0U;
                }
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg 
                    = vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr;
            }
            if ((1U & (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_12) 
                            | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_11))) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_10)) 
                          | (~ ((~ (IData)((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op))) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__isAttention))))))) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_aAddr 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_aAddr;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_bAddr 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_bAddr;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_vAddr 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_vAddr;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_outAddr 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_outAddr;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_m 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_m;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_n 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_n;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_k 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_k;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_kvLen 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_kvLen;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_lda 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_lda;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldb 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldb;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldv 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldv;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldout 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldout;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_scaleBf16 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_scaleBf16;
            }
        }
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg 
            = ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore)) 
               & ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_1) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_2)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_3))
                   ? ((~ ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_run) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_8))) 
                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg))
                   : ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_5)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_6))
                       ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_9)
                       : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
                           ? (((~ (IData)((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error)))) 
                               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_9))
                           : (((((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_7)) 
                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0)) 
                                & (~ (IData)((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error))))) 
                               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_9))))));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg 
            = ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__io_resetCore)) 
               & ((1U & (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_12) 
                          | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_11))) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___GEN_10)))
                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg)
                   : ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op) 
                      & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT__isAttention)
                          ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__unnamedblk1__DOT___causalReg_T)
                          : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg)))));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutRowWide_T 
            = (3U & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutColWide_T 
            = (0xfU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0) 
                       + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__writeElemsThisBeat)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT__onLastOutCol 
            = (IData)(((0U != (0xeU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutColWide_T))) 
                       | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutColWide_T) 
                          >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__cols)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___GEN_4 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT__onLastOutCol) 
               & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutRowWide_T) 
                  >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__rows));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___GEN_5 
            = ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___GEN_4));
        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done) 
             & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T)))) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state = 0U;
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state 
                = ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error)
                    ? 4U : (1U | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___GEN_4) 
                                  << 1U)));
        } else if (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready) 
                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid))) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state = 2U;
        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state 
                = (1U | (((0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows) 
                          | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols)) 
                         << 1U));
        }
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow 
            = (1U & ((1U & (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___GEN_5)) 
                            | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT__onLastOutCol))))
                      ? ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3)) 
                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow))
                      : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutRowWide_T)));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol 
            = (1U & ((1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___GEN_5)))
                      ? ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3)) 
                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol))
                      : ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT__onLastOutCol)) 
                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__unnamedblk1__DOT___nextOutColWide_T))));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT___GEN 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_start) 
               & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg)));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT___GEN;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__doneReg 
            = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT___GEN)) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg));
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT___GEN) {
            __Vtemp_12[0U] = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U];
            __Vtemp_12[1U] = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U];
            __Vtemp_12[2U] = (((IData)((0x1ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U])))))) 
                               << 1U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U]);
            __Vtemp_12[3U] = (((IData)((0x1ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U])))))) 
                               >> 0x1fU) | ((IData)(
                                                    ((0x1ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U]))))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp_16[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs);
            __Vtemp_16[1U] = (((- (IData)((1U & (IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
                                                         >> 0x20U))))) 
                               << 1U) | (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
                                                 >> 0x20U)));
            __Vtemp_16[2U] = (((- (IData)((1U & (IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
                                                         >> 0x20U))))) 
                               >> 0x1fU) | ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
                                                                   >> 0x20U))))) 
                                            << 1U));
            __Vtemp_16[3U] = (((- (IData)((1U & (IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
                                                         >> 0x20U))))) 
                               >> 0x1fU) | (2U & ((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
                                                                         >> 0x20U))))) 
                                                  << 1U)));
            VL_MUL_W(4, __Vtemp_17, __Vtemp_12, __Vtemp_16);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[0U] 
                = __Vtemp_17[0U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[1U] 
                = __Vtemp_17[1U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[2U] 
                = __Vtemp_17[2U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[3U] 
                = (3U & __Vtemp_17[3U]);
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_shiftSoftmax) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[0U] 
                    = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[1U] 
                        << 8U) | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[0U] 
                                  >> 0x18U));
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[1U] 
                    = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[2U] 
                        << 8U) | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[1U] 
                                  >> 0x18U));
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[2U] 
                    = (0x7fffffU & ((0x7ffc00U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[3U] 
                                                                 >> 1U)))) 
                                                  << 0xaU)) 
                                    | (0x3ffU & ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[3U] 
                                                  << 8U) 
                                                 | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[2U] 
                                                    >> 0x18U)))));
            } else {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[0U] 
                    = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[1U] 
                        << 0x15U) | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[0U] 
                                     >> 0xbU));
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[1U] 
                    = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[2U] 
                        << 0x15U) | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[1U] 
                                     >> 0xbU));
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[2U] 
                    = (0x7fffffU & ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[3U] 
                                     << 0x15U) | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__product[2U] 
                                                  >> 0xbU)));
            }
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[0U] 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[0U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[1U] 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[1U];
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[2U] 
                = (((- (IData)((1U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[2U] 
                                      >> 0x16U)))) 
                    << 0x17U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[2U]);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[3U] 
                = (3U & ((- (IData)((1U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__shifted[2U] 
                                           >> 0x16U)))) 
                         >> 9U));
        }
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__badDims 
            = (((0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m) 
                | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n)) 
               | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__badAddr 
            = (((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr) 
                | (0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr)) 
               | (0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_4 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__badDims) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__badAddr));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastChunkK 
            = ((0x1fU & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK))) 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeK);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___kBase_T 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase 
               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeK);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastKChunk 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___kBase_T 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___tileN_T 
            = ((IData)(2U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastTileCol 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___tileN_T 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___tileM_T 
            = ((IData)(2U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart) 
               & (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_3 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__badDims)
                ? 2U : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__badAddr)
                         ? 3U : 0U));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5 
            = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_4)));
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_4)
                    ? 0xfU : 1U);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_aAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_bAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_outAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_lda 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_lda;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldb 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldb;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldout;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state;
        }
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_7 
            = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8 
            = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10 
            = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11 
            = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12 
            = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13 
            = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14 
            = (7U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_15 
            = (8U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_16 
            = (9U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_17 
            = (0xaU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_18 
            = (0xbU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_19 
            = (0xcU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_20 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastTileCol) 
               & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___tileM_T 
                  >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_21 
            = (0xdU != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_22 
            = ((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_7) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11)) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_15)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_16)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_17)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_18)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_19));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_23 
            = (((0xeU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
                & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart)))
                ? 0U : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_24 
            = (((QData)((IData)((9U | ((0xff000000U 
                                        & (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_23) 
                                            << 0x1cU) 
                                           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_23) 
                                              << 0x18U))) 
                                       | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_20)
                                             ? 0xeU
                                             : 1U) 
                                           << 0x14U) 
                                          | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteError)
                                                ? 0xfU
                                                : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteDone)
                                                    ? 0xdU
                                                    : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6))) 
                                              << 0x10U) 
                                             | (((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready) 
                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid))
                                                   ? 0xcU
                                                   : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)) 
                                                 << 0xcU) 
                                                | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastKChunk)
                                                      ? 0xbU
                                                      : 2U) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastChunkK)
                                                        ? 0xaU
                                                        : 6U) 
                                                      << 4U))))))))) 
                << 0x20U) | (QData)((IData)((0x87000020U 
                                             | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T)
                                                   ? 
                                                  ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)
                                                    ? 0xfU
                                                    : 
                                                   ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last)
                                                     ? 6U
                                                     : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)))
                                                   : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)) 
                                                 << 0x14U) 
                                                | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_9)
                                                      ? 5U
                                                      : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T)
                                                         ? 
                                                        ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)
                                                          ? 0xfU
                                                          : 
                                                         ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last)
                                                           ? 4U
                                                           : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)))
                                                         : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)) 
                                                       << 0xcU) 
                                                      | ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_9)
                                                            ? 3U
                                                            : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_6)) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_23)))))))));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state 
            = (0xfU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_24 
                               >> (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state), 2U)))));
        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_7) 
             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_3;
            }
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error));
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg = 5U;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_3;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_3;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg = 5U;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_3;
                }
            } else if ((1U & (((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_15)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_16)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_17)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_18)) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_19) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteError)))))) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_2) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_3;
                }
            } else {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg = 5U;
            }
        }
        if ((1U & ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_22) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_21)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_20)) 
                   | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastTileCol))))) {
            if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM = 0U;
            }
        } else {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___tileM_T;
        }
        if ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_22) 
              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_21)) 
             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_20))) {
            if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN = 0U;
            }
        } else {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastTileCol)
                    ? 0U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___tileN_T);
        }
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_7) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase = 0U;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0 = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1 = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0 = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1 = 0U;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0 = 0ULL;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1 = 0ULL;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_26 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_15) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_16));
            if ((1U & (((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14)) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_26)) 
                        | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_17))) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastKChunk)))) {
                if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase = 0U;
                }
            } else {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___kBase_T;
            }
            if ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11))) {
                if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12) {
                if ((1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)))) {
                    if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
                    }
                } else if ((1U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last) 
                                  | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5))))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
                }
            } else if ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_15))) {
                if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_16) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastChunkK) {
                    if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5)))) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
                    }
                } else {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK)));
                }
            } else if ((1U & (~ (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_17)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastKChunk)) 
                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_5))))) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK = 0U;
            }
            if ((1U & (~ (((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13))))) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0 
                        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata)
                            : 0U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0 
                        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata)
                            : 0U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1 
                        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aRaw_1_T 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata)
                            : 0U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1 
                        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bRaw_1_T 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata)
                            : 0U);
                } else if ((1U & (~ (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_26) 
                                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_17))) 
                                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT__onLastKChunk))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0 = 0U;
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1 = 0U;
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0 = 0U;
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1 = 0U;
                }
            }
            if ((1U & (~ (((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_8) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_10)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_11)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_12)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_13)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_14)) 
                          | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__unnamedblk1__DOT___GEN_15)))))) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
            }
        }
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__badDims 
            = ((((0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m) 
                 | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n)) 
                | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k)) 
               | (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_kvLen));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__badAddr 
            = ((((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr) 
                 | (0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr)) 
                | (0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_vAddr)) 
               | (0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastChunkD 
            = ((0x1fU & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD))) 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeD);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___dIdx_T 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx 
               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeD);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastDChunk 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___dIdx_T 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___kvBase_T 
            = ((IData)(2U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastKvTile 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___kvBase_T 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___vColBase_T 
            = ((IData)(2U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___vColBase_T 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___qBase_T 
            = ((IData)(2U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastQueryTile 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___qBase_T 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastPvIdx 
            = ((3U & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx))) 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeKv);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_16 
            = (3U & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForKv 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_16) 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeKv);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_16) 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow 
            = ((3U & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))) 
               >= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart) 
               & (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__badDims)
                ? 2U : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__badAddr)
                         ? 3U : 0U));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_19 
            = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20 
            = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21 
            = (0x21U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22 
            = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23 
            = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24 
            = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25 
            = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_26 
            = (1U & (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T)) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)) 
                     | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last))));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27 
            = (7U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28 
            = (8U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29 
            = (9U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30 
            = (0xaU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31 
            = (0xbU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32 
            = (0xcU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33 
            = (0xdU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_34 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_35 
            = (((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36 
            = (0xeU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37 
            = (0xfU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38 
            = (0x11U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_39 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40 
            = (0x12U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41 
            = (0x13U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42 
            = (0x14U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_43 
            = (((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_44 
            = ((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_43));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45 
            = (0x15U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46 
            = (0x16U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47 
            = (0x17U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48 
            = (0x18U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_49 
            = (((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_50 
            = (((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_49));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_51 
            = ((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_50));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_10) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_11));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53 
            = (0x1aU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_54 
            = (0x1bU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_55 
            = (0x1cU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56 
            = (0x1dU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_57 
            = (0x1eU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_58 
            = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_57)) 
                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastQueryTile)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_59 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_54) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_55));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_60 
            = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_59));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_61 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_60) 
               | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56)
                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile)
                   : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_58)));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_62 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_19) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20));
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_19) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 2U;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase = 0U;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase = 0U;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___globalQ_T_1 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___globalK_T_1 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_0 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__selectedValidScore 
                = (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___globalQ_T_1 
                     < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m) 
                    & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___globalK_T_1 
                       < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen)) 
                   & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg)) 
                      | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___globalK_T_1 
                         <= vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___globalQ_T_1)));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase 
                   < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m);
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64 
                = (((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase) 
                   < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m);
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__selectedValidScore) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_out;
            } else {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked = 0x8000000000000000ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue = 0U;
            }
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65 
                = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)) 
                         & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67 
                = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                   & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38));
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x21U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_1 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_1 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1 = 0U;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0 = 0x8000000000000000ULL;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1 = 0x8000000000000000ULL;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0 = 0U;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1 = 0U;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 = 0x8000000000000000ULL;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 = 0x8000000000000000ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_1 = 0U;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 = 0U;
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 = 0U;
            } else {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75 
                    = (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col);
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77 
                    = (1U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col);
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___oldScale_T_1 
                    = ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                        ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_out
                        : 0U);
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74 
                    = ((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33));
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76 
                    = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42) 
                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T));
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 3U;
                } else {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78 
                        = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__badDims) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__badAddr))
                            ? 0x20U : 1U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79 
                        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadCmd_ready) 
                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid));
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 4U;
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                        }
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T) {
                            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x20U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 5U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                            }
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                        }
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 6U;
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                        }
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T) {
                            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x20U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 7U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                            }
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                        }
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 8U;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 9U;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0xaU;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastChunkD)
                                ? (3U | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastDChunk) 
                                         << 3U)) : 7U);
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0xcU;
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0xdU;
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                        }
                    } else {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_80 
                            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForKv) 
                               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow));
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) {
                            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = (0xcU | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_80) 
                                               << 1U));
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                            }
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36) {
                            if ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0xfU;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x10U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                            }
                        } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37) {
                            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)
                                        ? 0x10U : 0xeU);
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                            }
                        } else {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT___GEN_81 
                                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue) 
                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow));
                            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) {
                                if ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6)) {
                                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x11U;
                                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                    }
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT___GEN_81) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x12U;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = (0x10U | 
                                           ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT___GEN_81) 
                                            << 1U));
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_80) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x13U;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x14U;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T) {
                                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x20U;
                                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x15U;
                                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                    }
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x16U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x17U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastPvIdx)
                                        ? 0x18U : 0x15U);
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastKvTile)
                                        ? 0x19U : 0x21U);
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52) {
                                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x1aU;
                                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                    }
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT___GEN_81) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x1bU;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = (0x19U | 
                                           ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT___GEN_81) 
                                            << 1U));
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_54) {
                                if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteCmd_ready) 
                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid))) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x1cU;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_55) {
                                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteError) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x20U;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteDone) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0x1dU;
                                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                                }
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile)
                                        ? 0x1eU : 2U);
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_57) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastQueryTile)
                                        ? 0x1fU : 2U);
                            } else if (((0x1fU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state)) 
                                        & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart)))) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state = 0U;
                            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
                                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_78;
                            }
                        }
                    }
                }
                if ((1U & (~ (((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                              | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0 
                        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata)
                            : 0U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0 
                        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata)
                            : 0U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1 
                        = ((((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase) 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata)
                            : 0U);
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1 
                        = ((((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase) 
                            < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen)
                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata)
                            : 0U);
                }
                if ((1U & (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_44) 
                                | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76))) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
                }
                if ((1U & (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_44) 
                                | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76))) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
                }
                if ((1U & (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_44) 
                                | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76))) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
                }
                if ((1U & (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_44) 
                                | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76))) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error)) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
                }
                if ((1U & (~ ((((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37))))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) {
                        if (((~ (IData)((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6))) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0 = 0ULL;
                        }
                        if (((~ (IData)((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6))) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1 = 0ULL;
                        }
                        if (((~ (IData)((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6))) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0 = 0ULL;
                        }
                        if (((~ (IData)((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6))) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1 = 0ULL;
                        }
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
                        }
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
                        }
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
                        }
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
                        }
                    } else {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_82 
                            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase 
                               < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n);
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_83 
                            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx) 
                               < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeKv);
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_84 
                            = ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45));
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_85 
                            = (((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase) 
                               < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n);
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_84) 
                                      | (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46) 
                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63)) 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_82)) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_83))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_84) 
                                      | (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46) 
                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63)) 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_85)) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_83))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_84) 
                                      | (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46) 
                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64)) 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_82)) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_83))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_84) 
                                      | (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46) 
                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64)) 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_85)) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT___GEN_83))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
                        }
                    }
                }
                if ((1U & (~ (((((((((((((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21) 
                                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)) 
                                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)) 
                                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)) 
                                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48))))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9) {
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52) 
                                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65)))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52) 
                                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67)))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52) 
                                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69)))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52) 
                                      | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71)))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1 = 0U;
                        }
                    } else {
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_51) 
                              | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)))))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0;
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1;
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0;
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1;
                }
                if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_35)))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 
                            = ((0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0)
                                ? 0x8000000000000000ULL
                                : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0);
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 
                            = ((0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1)
                                ? 0x8000000000000000ULL
                                : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1);
                    } else {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_86 
                            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__selectedValidScore) 
                               & VL_GTS_IQQ(64, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2));
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32) 
                                      | (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) 
                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done)) 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_86)) 
                                            & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)))))))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32) 
                                      | (~ ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) 
                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done)) 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_86)) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))))))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36) 
                                    & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___oldScale_T_1;
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___oldScale_T_1;
                }
                if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74)))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36) {
                        if ((1U & (~ ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3) 
                                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 = 0U;
                        }
                        if (((~ (IData)((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3))) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 = 0U;
                        }
                    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37) {
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                             & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outSoftmax;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outSoftmax;
                        }
                    } else {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk9__DOT___nextRowSum_T 
                            = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                                 ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1
                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0) 
                               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue);
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73) 
                                      | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                            & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)))))))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk9__DOT___nextRowSum_T;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73) 
                                      | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))))))) {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk9__DOT___nextRowSum_T;
                        }
                    }
                }
            }
            if ((1U & (~ ((((((((((((((((((((((((((
                                                   (((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20) 
                                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21)) 
                                                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                                                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)) 
                                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)) 
                                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)) 
                                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41)) 
                                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42)) 
                                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45)) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_54)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_55)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56)) 
                           | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_57))) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastQueryTile))))) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___qBase_T;
            }
            if ((1U & (~ (((((((((((((((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20) 
                                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21)) 
                                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22)) 
                                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                                      | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                                     | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_41)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_60))))) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56) {
                    if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile)))) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase 
                            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___vColBase_T;
                    }
                } else if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_58)))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase = 0U;
                }
            }
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_34) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_0 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_1 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_0 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_1 = 0ULL;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_1 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_0 = 0U;
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_1 = 0U;
            } else {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_87 
                    = ((((((((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29)) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)) 
                        | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)) 
                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73));
                if ((1U & (~ ((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27)) 
                              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28))))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29) {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT___GEN_88 
                            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase 
                               < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen);
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT___GEN_89 
                            = (((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase) 
                               < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen);
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT___GEN_88))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT___GEN_89))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT___GEN_88))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
                        }
                        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64) 
                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT___GEN_89))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
                        }
                    } else {
                        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_90 
                            = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32));
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_90) 
                                      | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_90) 
                                      | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_90) 
                                      | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_0 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked;
                        }
                        if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_90) 
                                      | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72))))))) {
                            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_1 
                                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__masked;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_87) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue;
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_87) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue;
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_87) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_0 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue;
                }
                if ((1U & (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_87) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71))))))) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_1 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expValue;
                }
            }
        }
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_aAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_bAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_vAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_vAddr;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_outAddr 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_kvLen;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_lda 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_lda;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldb 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldb;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldv 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldv;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldout;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_scaleBf16;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_causal;
        }
        if (((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_19) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_20)) 
              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_21)) 
             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                    = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
            }
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_91 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error));
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_91) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg = 5U;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_91) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg = 5U;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_43) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
                }
            } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_91) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg = 5U;
                } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
                }
            } else if ((1U & ((((((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45) 
                                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46)) 
                                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)) 
                                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53)) 
                               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_54)) 
                              | (~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_55) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteError)))))) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_17) {
                    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_18;
                }
            } else {
                vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg = 5U;
            }
        }
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_62) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase = 0U;
        } else if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_51)))) {
            if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48) {
                if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastKvTile)))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase 
                        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___kvBase_T;
                }
            } else if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_61)))) {
                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase = 0U;
            }
        }
        if (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_19) 
             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_34))) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx = 0U;
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD = 0U;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_92 
                = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_50) 
                   | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)
                       ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastKvTile)
                       : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_61)));
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_93 
                = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_27) 
                    | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_28)) 
                   | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_29));
            if ((1U & (~ (((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24)) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_93))))) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30) {
                    if ((1U & (~ ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastChunkD)) 
                                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastDChunk))))) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx 
                            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___dIdx_T;
                    }
                } else if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_92)))) {
                    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx = 0U;
                }
            }
            if ((1U & (~ (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_22) 
                           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_23)) 
                          | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_24))))) {
                if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_25) {
                    if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_26)))) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD = 0U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_93)))) {
                    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_30) {
                        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastChunkD) {
                            if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastDChunk)))) {
                                __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD = 0U;
                            }
                        } else {
                            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD)));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_92)))) {
                        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD = 0U;
                    }
                }
            }
        }
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx 
            = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_62)) 
                     & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_44)
                         ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx)
                         : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_42)
                             ? ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_26) 
                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx))
                             : (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_45) 
                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_46))
                                 ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx)
                                 : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_47)
                                     ? ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastPvIdx)
                                         ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx)
                                         : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx) 
                                            - (IData)(1U)))
                                     : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)
                                         ? ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastKvTile) 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx))
                                         : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_60)
                                             ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx)
                                             : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56)
                                                 ? 
                                                ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile) 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx))
                                                 : 
                                                ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_58) 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx)))))))))));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow 
            = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_62)) 
                     & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_35)
                         ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                         : ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)
                                ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                                : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)
                                    ? (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForKv))
                                        ? ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                              - (IData)(1U)))
                                        : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                    : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)
                                        ? ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                                            : ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                               & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                  - (IData)(1U))))
                                        : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)
                                            ? ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done)
                                                ? (
                                                   (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                                   & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                      - (IData)(1U)))
                                                : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)
                                                ? (
                                                   ((~ (IData)(
                                                               (0U 
                                                                != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6))) 
                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue))
                                                    ? 
                                                   ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                                    & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                       - (IData)(1U)))
                                                    : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                                : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)
                                                    ? 
                                                   ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_39)
                                                     ? 
                                                    ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                                     & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                        - (IData)(1U)))
                                                     : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                                    : 
                                                   ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)
                                                     ? 
                                                    ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForKv)
                                                      ? 
                                                     ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                                      & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                         - (IData)(1U)))
                                                      : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                                     : 
                                                    ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_49)
                                                      ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                                                      : 
                                                     ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)) 
                                                      & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52) 
                                                              | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue))))
                                                           ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                                                           : 
                                                          ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                                           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                              - (IData)(1U))))
                                                          : 
                                                         ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53)
                                                           ? 
                                                          ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_39)
                                                            ? 
                                                           ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow)) 
                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) 
                                                               - (IData)(1U)))
                                                            : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                                           : 
                                                          ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_59)
                                                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                                                            : 
                                                           ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56)
                                                             ? 
                                                            ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile) 
                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow))
                                                             : 
                                                            ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_58) 
                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)))))))))))))))))));
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol 
            = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_62)) 
                     & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_35)
                         ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)
                         : ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_31)) 
                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_32)
                                ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)
                                : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_33)
                                    ? ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done)
                                        ? ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForKv)) 
                                           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) 
                                              - (IData)(1U)))
                                        : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))
                                    : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_36)
                                        ? ((~ ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3))) 
                                               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow))) 
                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))
                                        : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_37)
                                            ? ((~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done) 
                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarRow))) 
                                               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))
                                            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5)
                                                ? (
                                                   (0U 
                                                    != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6)
                                                    ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)
                                                    : 
                                                   ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue)) 
                                                    & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) 
                                                       - (IData)(1U))))
                                                : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_38)
                                                    ? 
                                                   ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done)
                                                     ? 
                                                    ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue)) 
                                                     & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) 
                                                        - (IData)(1U)))
                                                     : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))
                                                    : 
                                                   ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_40)
                                                     ? 
                                                    ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForKv)) 
                                                     & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) 
                                                        - (IData)(1U)))
                                                     : 
                                                    ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_49)
                                                      ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)
                                                      : 
                                                     ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_48)) 
                                                      & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)
                                                          ? 
                                                         ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_52)
                                                           ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)
                                                           : 
                                                          ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue)) 
                                                           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) 
                                                              - (IData)(1U))))
                                                          : 
                                                         ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_53)
                                                           ? 
                                                          ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done)
                                                            ? 
                                                           ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastScalarColForValue)) 
                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) 
                                                               - (IData)(1U)))
                                                            : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))
                                                           : 
                                                          ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_59)
                                                            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)
                                                            : 
                                                           ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_56)
                                                             ? 
                                                            ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT__onLastValueTile) 
                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol))
                                                             : 
                                                            ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__unnamedblk1__DOT___GEN_58) 
                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol)))))))))))))))))));
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__errorReg 
        = ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___io_bytesRead_T)
                ? (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error)
                : ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_2)) 
                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__errorReg))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg 
        = ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))) 
           && (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T) 
                & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error)) 
               | ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3)) 
                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg))));
    vlSelf->AtikAxiTop__DOT__control__DOT__startPending 
        = ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))) 
           && ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_1) 
               & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_0) 
                  | ((~ ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN_2) 
                         | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__startPending))) 
                     & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__startPending)))));
    vlSelf->AtikAxiTop__DOT__control__DOT__awHeld = 
        ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))) 
         && ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite)) 
             & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awFire) 
                | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awHeld))));
    vlSelf->AtikAxiTop__DOT__control__DOT__wHeld = 
        ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))) 
         && ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite)) 
             & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wFire) 
                | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wHeld))));
    vlSelf->AtikAxiTop__DOT__control__DOT__bValid = 
        ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))) 
         && ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite) 
             | ((~ ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid) 
                    & (IData)(vlSelf->s_axi_ctrl_bready))) 
                & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid))));
    __Vtableidx1 = (((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error) 
                     << 7U) | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__errorReg) 
                                << 6U) | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN) 
                                           << 5U) | 
                                          (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued) 
                                            << 4U) 
                                           | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_0) 
                                               << 3U) 
                                              | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset))))))));
    if ((1U & Vtop__ConstPool__TABLE_h0e7829ba_0[__Vtableidx1])) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state 
            = Vtop__ConstPool__TABLE_hf67920e7_0[__Vtableidx1];
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__errorReg 
        = Vtop__ConstPool__TABLE_h7ee1a44d_0[__Vtableidx1];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state;
    vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg 
        = __Vdly__AtikAxiTop__DOT__control__DOT__descAddrLoReg;
    vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg 
        = __Vdly__AtikAxiTop__DOT__control__DOT__descAddrHiReg;
    vlSelf->AtikAxiTop__DOT__control__DOT__rValid = __Vdly__AtikAxiTop__DOT__control__DOT__rValid;
    vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg 
        = __Vdly__AtikAxiTop__DOT__control__DOT__counterIndexReg;
    vlSelf->AtikAxiTop__DOT__dma__DOT__awDone = __Vdly__AtikAxiTop__DOT__dma__DOT__awDone;
    vlSelf->AtikAxiTop__DOT__dma__DOT__wDone = __Vdly__AtikAxiTop__DOT__dma__DOT__wDone;
    vlSelf->AtikAxiTop__DOT__dma__DOT__responseErrorReg 
        = __Vdly__AtikAxiTop__DOT__dma__DOT__responseErrorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__causalReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__nextRowSum_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[1U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[2U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[3U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_1 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[4U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[5U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_2 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[6U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[7U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_3 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[8U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[9U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_4 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0xaU] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0xbU] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_5 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0xcU] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_6);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0xdU] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_6 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0xeU] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_7);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0xfU] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_7 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x10U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x11U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_8 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x12U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_9);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x13U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_9 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x14U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_10);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x15U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_10 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x16U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x17U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_11 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x18U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x19U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_12 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x1aU] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x1bU] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x1cU] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x1dU] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x1eU] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[0x1fU] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__counters_0 
                   >> 0x20U));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_run = vlSelf->AtikAxiTop__DOT__control__DOT__startPending;
    vlSelf->s_axi_ctrl_bvalid = vlSelf->AtikAxiTop__DOT__control__DOT__bValid;
    vlSelf->s_axi_ctrl_awready = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awHeld)) 
                                        & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid))));
    vlSelf->s_axi_ctrl_wready = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wHeld)) 
                                       & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_op;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_vAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_vAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldv 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldv;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_scaleBf16 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__descReg_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_active 
        = (0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_0 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_3 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_3 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3 
        = (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3 
        = (1U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteError 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteError 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner));
    vlSelf->s_axi_ctrl_bresp = vlSelf->AtikAxiTop__DOT__control__DOT__bResp;
    vlSelf->s_axi_ctrl_rdata = vlSelf->AtikAxiTop__DOT__control__DOT__rData;
    vlSelf->s_axi_ctrl_rresp = vlSelf->AtikAxiTop__DOT__control__DOT__rResp;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr 
        = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg)) 
            << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg)));
    vlSelf->s_axi_ctrl_arready = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__rValid)));
    vlSelf->s_axi_ctrl_rvalid = vlSelf->AtikAxiTop__DOT__control__DOT__rValid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_active 
        = (0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__responseErrorReg;
    vlSelf->m_axi_mem_bready = (5U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->m_axi_mem_arvalid = (1U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->m_axi_mem_rready = (2U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy = (0U 
                                                  != (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_vAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_vAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldv 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldv;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_scaleBf16 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_causal 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__causalReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descReg_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_7 
        = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_6 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_5 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_1 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_2 
        = (7U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_3 
        = (8U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy 
        = ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state)) 
           & ((7U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state)) 
              & (8U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active 
        = ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state)) 
           & ((3U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state)) 
              & (4U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready 
        = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outSoftmax 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum 
        = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[0U])));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_0 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingK_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingM_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aRaw_1_T 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingN_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_1 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bRaw_1_T 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done 
        = (0xeU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle 
        = ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
           & ((0xeU != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
              & ((0xfU != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
                 & (8U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid 
        = (0xbU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_wen_T 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_wen_T 
        = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___io_tileReadCmd_valid_T 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive 
        = (8U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeKv_T_3 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_14 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___remainingD_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_13 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1) 
                               >> 7U)) - (IData)(0x7bU)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__pvIdx) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0_shifted 
            = (0x7ffffU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_1 
                           >> 0xdU));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1_shifted 
            = (0x7ffffU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_1 
                           >> 0xdU));
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_0;
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_1_1;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0_shifted 
            = (0x7ffffU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_0_0 
                           >> 0xdU));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1_shifted 
            = (0x7ffffU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreExpTile_1_0 
                           >> 0xdU));
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_0;
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vTile_0_1;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeRows_T_3 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_12 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeValueCols_T_3 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_15 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol) {
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_1;
        } else {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1;
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_1;
        }
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_0;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_0;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_1;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_1;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_1;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__oldScale_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__newRowMax_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowSum_0;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall 
        = (7U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done 
        = (0x1fU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_1 
        = (0xdU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_9 
        = (0x11U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_11 
        = (0x12U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid 
        = (0x1bU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T 
        = (9U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9 
        = (0x19U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5 
        = (0x10U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3 
        = (0xcU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_5 
        = (0xfU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_1 
        = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_3 
        = (0x13U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3 
        = (0xeU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T_1 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_1 
        = (0x16U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_15 
        = (0x1aU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData 
        = ((0xdU > (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg))
            ? (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[
                                (((IData)(0x3fU) + 
                                  (0x3ffU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[
                                              (((IData)(0x1fU) 
                                                + (0x3ffU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U))))) 
                  | ((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT___GEN[
                                     (0x1fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U) 
                                               >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg), 6U)))))
            : 0xbad0bad0bad0bad0ULL);
    vlSelf->AtikAxiTop__DOT___control_io_run = vlSelf->AtikAxiTop__DOT__control__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_run = vlSelf->AtikAxiTop__DOT__control__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_bvalid = vlSelf->s_axi_ctrl_bvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_bvalid 
        = vlSelf->s_axi_ctrl_bvalid;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awready = vlSelf->s_axi_ctrl_awready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_awready 
        = vlSelf->s_axi_ctrl_awready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_awready_0 
        = vlSelf->s_axi_ctrl_awready;
    vlSelf->AtikAxiTop__DOT__control__DOT__awFire = 
        ((IData)(vlSelf->s_axi_ctrl_awvalid) & (IData)(vlSelf->s_axi_ctrl_awready));
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wready = vlSelf->s_axi_ctrl_wready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wready 
        = vlSelf->s_axi_ctrl_wready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wready_0 
        = vlSelf->s_axi_ctrl_wready;
    vlSelf->AtikAxiTop__DOT__control__DOT__wFire = 
        ((IData)(vlSelf->s_axi_ctrl_wvalid) & (IData)(vlSelf->s_axi_ctrl_wready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_op 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_op 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_op;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_vAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_vAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_vAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_vAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_ldv 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldv;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_ldv 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldv;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptor_scaleBf16 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_desc_scaleBf16 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_desc_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_readCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_readBeat_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_1 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_active 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_active;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_cmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_memResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_memReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteError;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteError;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_bresp = vlSelf->s_axi_ctrl_bresp;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_bresp 
        = vlSelf->s_axi_ctrl_bresp;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rdata = vlSelf->s_axi_ctrl_rdata;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rdata 
        = vlSelf->s_axi_ctrl_rdata;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rresp = vlSelf->s_axi_ctrl_rresp;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rresp 
        = vlSelf->s_axi_ctrl_rresp;
    vlSelf->AtikAxiTop__DOT___control_io_descAddr = vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_descAddr 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_arready = vlSelf->s_axi_ctrl_arready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_arready 
        = vlSelf->s_axi_ctrl_arready;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rvalid = vlSelf->s_axi_ctrl_rvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rvalid 
        = vlSelf->s_axi_ctrl_rvalid;
    vlSelf->AtikAxiTop__DOT___control_io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_active 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_active;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_active));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_active) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_cmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_memReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadSelected 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_memResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__readOwner)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready)
            : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner));
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT___dma_io_memWriteResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_bready = vlSelf->m_axi_mem_bready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_bready 
        = vlSelf->m_axi_mem_bready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_bready_0 
        = vlSelf->m_axi_mem_bready;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_arvalid = vlSelf->m_axi_mem_arvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_arvalid 
        = vlSelf->m_axi_mem_arvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_arvalid_0 
        = vlSelf->m_axi_mem_arvalid;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rready = vlSelf->m_axi_mem_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rready 
        = vlSelf->m_axi_mem_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rready_0 
        = vlSelf->m_axi_mem_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_2 = ((IData)(vlSelf->m_axi_mem_rready) 
                                                 & (IData)(vlSelf->m_axi_mem_rvalid));
    vlSelf->m_axi_mem_awvalid = ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__awDone)) 
                                 & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T));
    vlSelf->m_axi_mem_wvalid = ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__wDone)) 
                                & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_dmaBusy 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy;
    vlSelf->AtikAxiTop__DOT___dma_io_busy = vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy;
    vlSelf->AtikAxiTop__DOT___dma_io_memWriteResp_valid 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_valid 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT___dma_io_memReadReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready));
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_valid 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_valid 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__readOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memResp_valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__readOwner));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_vAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_vAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_vAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_vAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_kvLen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_kvLen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_ldv 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldv;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_ldv 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldv;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_scaleBf16 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_scaleBf16 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_causal 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_causal;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_causal 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_causal;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_aAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_aAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_bAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_bAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_outAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_outAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_m 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_m;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_n 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_n;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_k 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_k;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_lda 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_lda;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_ldb 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldb;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_desc_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_desc_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_activeDesc_ldout 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_activeDesc_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_descriptorAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_readCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_state_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_status_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_state_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_status_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_totalActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_state_busy 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_coreBusy 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_busy = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT___core_io_busy = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_busy 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_status_busy 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_totalActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_totalActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__busy 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word 
        = (QData)((IData)((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg) 
                            << 8U) | (((IData)((0U 
                                                != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg))) 
                                       << 2U) | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteDone 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteDone 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT___core_io_memWriteReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_active 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT___core_io_memWriteResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_outSoftmax 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outSoftmax;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_outAccum 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeK 
        = ((0x10U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingK_T)
            ? 0x10U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingK_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingM_T)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingM_T);
    if (AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0 
            = (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0));
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0 
            = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0) 
                        >> 7U));
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_in = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0 = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0 = 0U;
    }
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aRaw_1_T 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingN_T)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingN_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_base 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_outAddr 
           + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN 
                * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout))) 
               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_1) 
              << 1U));
    if (AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0 
            = (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0));
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0 
            = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0) 
                        >> 7U));
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_in = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0 = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0 = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_0 
        = (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0) 
            & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0))
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0
            : 0ULL);
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bRaw_1_T 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_wen_T) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_wen_T));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___io_tileReadCmd_valid_T) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_lda;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_base 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_aAddr 
               + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN 
                    * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_lda))) 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_0) 
                  << 1U));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeK;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldb;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_base 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_bAddr 
               + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_0 
                    * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldb))) 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_1) 
                  << 1U));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeK;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___io_tileReadCmd_valid_T) 
           | (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN 
        = ((0xf0f0U & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                            >> 0x10U)) 
                                   << 8U)) | (0xf0U 
                                              & ((IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                          >> 0x1cU)) 
                                                 << 4U)))) 
           | (0xf0fU & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                             >> 0x18U)) 
                                    << 8U)) | (0xffU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                          >> 0x20U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN 
        = ((0xf0f0U & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                            >> 0x10U)) 
                                   << 8U)) | (0xf0U 
                                              & ((IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                          >> 0x1cU)) 
                                                 << 4U)))) 
           | (0xf0fU & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                             >> 0x18U)) 
                                    << 8U)) | (0xffU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                          >> 0x20U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN 
        = ((0xf0f0U & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                            >> 0x10U)) 
                                   << 8U)) | (0xf0U 
                                              & ((IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                          >> 0x1cU)) 
                                                 << 4U)))) 
           | (0xf0fU & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                             >> 0x18U)) 
                                    << 8U)) | (0xffU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                          >> 0x20U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN 
        = ((0xf0f0U & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                            >> 0x10U)) 
                                   << 8U)) | (0xf0U 
                                              & ((IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                          >> 0x1cU)) 
                                                 << 4U)))) 
           | (0xf0fU & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                             >> 0x18U)) 
                                    << 8U)) | (0xffU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                          >> 0x20U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeKv 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeKv_T_3)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeKv_T_3);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeD 
        = ((0x10U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___remainingD_T)
            ? 0x10U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___remainingD_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_raddr;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__io_in 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__io_in 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeRows_T_3)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeRows_T_3);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeValueCols_T_3)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeValueCols_T_3);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_base 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_outAddr 
           + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_12 
                * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout))) 
               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_15) 
              << 1U));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_base;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_base;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_11 
        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_0 
            + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase) 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[0U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[1U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
                   >> 0x20U));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[2U] 
        = (1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
                         >> 0x3fU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_0 
        = ((0xccU & ((0xf0U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                               >> 4U)) | (0xcU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                  >> 0xcU)))) 
           | (0x33U & ((0xf0U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                 >> 8U)) | (0xfU & 
                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                             >> 0x10U)))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_10 
        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN 
            + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase) 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileWriteSelected 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_13 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_7 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_7 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) 
           & (0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_1) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldb;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_base 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_bAddr 
               + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_14 
                    * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldb))) 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_13) 
                  << 1U));
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_3) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldv;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_base 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_vAddr 
               + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_14 
                    * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldv))) 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_15) 
                  << 1U));
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_lda;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_base 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_aAddr 
               + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_12 
                    * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_lda))) 
                   + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_13) 
                  << 1U));
    }
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb6249bcd__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_1) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_4 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3) 
           & (0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in 
        = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3) 
            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_5))
            ? (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                 ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1
                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0) 
               - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2)
            : (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
               - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T_1) 
              | (0x14U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_1));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_1) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3) 
              | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_5) 
                 | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) 
                    | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_9) 
                       | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_11) 
                          | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_15))))))));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT___core_io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_run 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid)) 
           & (((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awHeld) 
               | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awFire)) 
              & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wHeld) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wFire))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_descAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_dmaReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_dmaReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_dmaReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_dmaReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaReadActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memReq_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadSelected) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadSelected));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready;
    vlSelf->AtikAxiTop__DOT___core_io_memReadResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_valid 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_valid 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_awvalid = vlSelf->m_axi_mem_awvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_awvalid 
        = vlSelf->m_axi_mem_awvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_awvalid_0 
        = vlSelf->m_axi_mem_awvalid;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wvalid = vlSelf->m_axi_mem_wvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wvalid 
        = vlSelf->m_axi_mem_wvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wvalid_0 
        = vlSelf->m_axi_mem_wvalid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_ready 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_valid 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_valid 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___io_bytesRead_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memResp_valid));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_statusWord 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_statusWord 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT___core_io_statusWord = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_statusWord 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteDone;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteDone;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_dmaWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_dmaWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_dmaWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_dmaWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaWriteActive 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeRows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
    if (AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0 
            = (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1));
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0 
            = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1) 
                        >> 7U));
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_in = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0 = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0 = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_0 
        = (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0) 
            & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0))
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0
            : 0ULL);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeCols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
    if (AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0 
            = (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1));
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0 
            = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1) 
                        >> 7U));
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_in = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0 = 0U;
        AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0 = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_1 
        = (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0) 
            & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0))
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1
            : 0ULL);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_1 
        = (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0) 
            & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0))
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1
            : 0ULL);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadOut_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_0 
        = (0x3333333333ULL & (((QData)((IData)((0xfU 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                           >> 8U))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                         >> 0xcU))))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((0x3c000000U 
                                                                & ((IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                            >> 0x10U)) 
                                                                   << 0x1aU)) 
                                                               | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN) 
                                                                   << 0xaU) 
                                                                  | ((0x3c0U 
                                                                      & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x24U)) 
                                                                         << 6U)) 
                                                                     | ((0x3cU 
                                                                         & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x2eU))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_0 
        = (0x3333333333ULL & (((QData)((IData)((0xfU 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                           >> 8U))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                         >> 0xcU))))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((0x3c000000U 
                                                                & ((IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                            >> 0x10U)) 
                                                                   << 0x1aU)) 
                                                               | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN) 
                                                                   << 0xaU) 
                                                                  | ((0x3c0U 
                                                                      & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x24U)) 
                                                                         << 6U)) 
                                                                     | ((0x3cU 
                                                                         & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x2eU))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_0 
        = (0x3333333333ULL & (((QData)((IData)((0xfU 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                           >> 8U))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                         >> 0xcU))))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((0x3c000000U 
                                                                & ((IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                            >> 0x10U)) 
                                                                   << 0x1aU)) 
                                                               | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN) 
                                                                   << 0xaU) 
                                                                  | ((0x3c0U 
                                                                      & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x24U)) 
                                                                         << 6U)) 
                                                                     | ((0x3cU 
                                                                         & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x2eU))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_0 
        = (0x3333333333ULL & (((QData)((IData)((0xfU 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                           >> 8U))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                         >> 0xcU))))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((0x3c000000U 
                                                                & ((IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                            >> 0x10U)) 
                                                                   << 0x1aU)) 
                                                               | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN) 
                                                                   << 0xaU) 
                                                                  | ((0x3c0U 
                                                                      & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x24U)) 
                                                                         << 6U)) 
                                                                     | ((0x3cU 
                                                                         & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x2eU))))))))))));
    __Vtemp_38[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16)));
    __Vtemp_38[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_38[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_38[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_38[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_38[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_38[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_38[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_38[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_38[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_38[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_38[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_38[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_38[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_38[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_38[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_38[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_39, __Vtemp_38, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_39[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_39[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_39[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_39[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_39[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_39[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_39[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_39[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_39[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_39[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_39[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_39[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_39[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_39[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_39[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_39[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_39[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4)))
                                               : 0U)));
    __Vtemp_40[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0)));
    __Vtemp_40[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_40[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_40[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_40[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_40[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_40[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_40[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_40[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_40[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_40[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_40[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_40[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_40[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_40[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_40[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_40[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_41, __Vtemp_40, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_41[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_41[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_41[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_41[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_41[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_41[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_41[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_41[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_41[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_41[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_41[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_41[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_41[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_41[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_41[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_41[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_41[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shift_T_4)))
                                               : 0U)));
    __Vtemp_42[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1)));
    __Vtemp_42[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_42[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_42[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_42[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_42[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_42[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_42[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_42[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_42[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_42[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_42[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_42[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_42[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_42[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_42[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_42[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_43, __Vtemp_42, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_43[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_43[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_43[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_43[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_43[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_43[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_43[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_43[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_43[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_43[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_43[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_43[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_43[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_43[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_43[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_43[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_43[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shift_T_4)))
                                               : 0U)));
    __Vtemp_44[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0)));
    __Vtemp_44[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_44[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_44[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_44[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_44[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_44[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_44[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_44[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_44[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_44[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_44[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_44[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_44[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_44[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_44[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_44[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_45, __Vtemp_44, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_45[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_45[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_45[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_45[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_45[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_45[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_45[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_45[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_45[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_45[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_45[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_45[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_45[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_45[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_45[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_45[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_45[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shift_T_4)))
                                               : 0U)));
    __Vtemp_46[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1)));
    __Vtemp_46[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_46[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_46[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_46[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_46[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_46[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_46[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_46[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_46[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_46[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_46[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_46[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_46[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_46[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_46[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_46[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_47, __Vtemp_46, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_47[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_47[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_47[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_47[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_47[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_47[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_47[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_47[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_47[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_47[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_47[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_47[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_47[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_47[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_47[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_47[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_47[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shift_T_4)))
                                               : 0U)));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeRows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeValueCols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_cols 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_3)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeD);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_1 
        = (0x55555U & ((0x60000U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                    << 0xdU)) | ((0x18000U 
                                                  & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                     << 9U)) 
                                                 | ((0x6000U 
                                                     & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                        << 5U)) 
                                                    | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_0) 
                                                        << 5U) 
                                                       | ((0x18U 
                                                           & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                              >> 0xfU)) 
                                                          | ((6U 
                                                              & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                                 >> 0x13U)) 
                                                             | (1U 
                                                                & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                                   >> 0x17U)))))))));
    __VdfgTmp_h70f47b28__0 = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_15) 
                              & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__doneReg) 
                                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_10) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_11))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileWriteSelected));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteCmd_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileWriteSelected) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_rows 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb6249bcd__0)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeKv
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows);
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_stride;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_base;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_rows;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_stride;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_base;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_rows;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid 
        = ((3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state)) 
           | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb6249bcd__0));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9b7b7248__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_4) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_7) 
              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_in 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
        = (- AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadOut_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_1) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshAccIn_0_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_0_1;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outAcc_1_1;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshAccIn_0_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_0_1;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scoreTile_1_1;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshAccIn_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshAccIn_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshAccIn_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__event_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshIdle 
        = ((~ ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive) 
               | ((0x20U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state)) 
                  | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done)))) 
           & (0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state)));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h78b76b5a__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3) 
           | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_run 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readIndex 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaReadActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_dmaReadActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_active));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_ready 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_3 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memReq_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid;
    vlSelf->AtikAxiTop__DOT___core_io_memReadReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN = ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready) 
                                               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_beatIssued 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_bytesRead 
        = (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___io_bytesRead_T) 
                           << 4U)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner) {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes = 0ULL;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_bytesRead;
    } else {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_bytesRead;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes = 0ULL;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaWriteActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaWriteActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_rows;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_cols;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb536d075__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_wen_T) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hbcd473a8__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_wen_T) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall 
        = (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready)) 
            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid)) 
           | ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready)) 
              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_1 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_0 
                             >> 0x1eU)) | (0x33U & 
                                           ((0xf0U 
                                             & ((IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                         >> 0xcU)) 
                                                << 4U)) 
                                            | (0xfU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                          >> 0x10U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_3 
        = (3U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_0 
                          >> 0xaU)) | (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                               >> 0x24U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_2 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_0 
                               >> 0xeU)) | (0x3333U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_4 
        = ((0xfcU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_0) 
                     << 2U)) | (0x33U & ((0xf0U & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                            >> 0x2cU)) 
                                                   << 4U)) 
                                         | (0xfU & (IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                            >> 0x30U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_1 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_0 
                             >> 0x1eU)) | (0x33U & 
                                           ((0xf0U 
                                             & ((IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                         >> 0xcU)) 
                                                << 4U)) 
                                            | (0xfU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                          >> 0x10U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_3 
        = (3U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_0 
                          >> 0xaU)) | (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                               >> 0x24U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_2 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_0 
                               >> 0xeU)) | (0x3333U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_4 
        = ((0xfcU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_0) 
                     << 2U)) | (0x33U & ((0xf0U & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                            >> 0x2cU)) 
                                                   << 4U)) 
                                         | (0xfU & (IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                            >> 0x30U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_1 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_0 
                             >> 0x1eU)) | (0x33U & 
                                           ((0xf0U 
                                             & ((IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                         >> 0xcU)) 
                                                << 4U)) 
                                            | (0xfU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                          >> 0x10U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_3 
        = (3U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_0 
                          >> 0xaU)) | (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                               >> 0x24U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_2 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_0 
                               >> 0xeU)) | (0x3333U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_4 
        = ((0xfcU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_0) 
                     << 2U)) | (0x33U & ((0xf0U & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                            >> 0x2cU)) 
                                                   << 4U)) 
                                         | (0xfU & (IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                            >> 0x30U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_1 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_0 
                             >> 0x1eU)) | (0x33U & 
                                           ((0xf0U 
                                             & ((IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                         >> 0xcU)) 
                                                << 4U)) 
                                            | (0xfU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                          >> 0x10U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_3 
        = (3U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_0 
                          >> 0xaU)) | (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                               >> 0x24U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_2 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_0 
                               >> 0xeU)) | (0x3333U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_4 
        = ((0xfcU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_0) 
                     << 2U)) | (0x33U & ((0xf0U & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                            >> 0x2cU)) 
                                                   << 4U)) 
                                         | (0xfU & (IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                            >> 0x30U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__shifted)));
    __Vtemp_54[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in)));
    __Vtemp_54[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_54[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_54[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_54[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_54[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_54[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_54[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_54[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_54[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_54[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_54[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_54[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_54[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_54[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_54[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_54[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_55, __Vtemp_54, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_55[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_55[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_55[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_55[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_55[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_55[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_55[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_55[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_55[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_55[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_55[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_55[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_55[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_55[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_55[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_55[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_55[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4)))
                                               : 0U)));
    __Vtemp_56[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in)));
    __Vtemp_56[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_56[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_56[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_56[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_56[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_56[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_56[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_56[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_56[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_56[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_56[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_56[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_56[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_56[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_56[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_56[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_57, __Vtemp_56, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_57[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_57[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_57[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_57[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_57[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_57[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_57[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_57[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_57[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_57[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_57[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_57[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_57[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_57[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_57[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_57[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_57[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in))))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4)))
                                               : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_2 
        = (0xfU & ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_1 
                    >> 0xfU) | (5U & ((0xcU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                               >> 4U)) 
                                      | (3U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                               >> 8U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3 
        = (0xffU & ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_1 
                     >> 7U) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_0))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_4 
        = ((0xeU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_1 
                    << 1U)) | (5U & ((0xcU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                              >> 0x14U)) 
                                     | (3U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                              >> 0x18U)))));
    if (__VdfgTmp_h70f47b28__0) {
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0 
            = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[1U] 
               >> 0x1fU);
    } else {
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in = 0ULL;
        AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0 = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteCmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileReadSelected 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U] 
            = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U] 
            = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
                       >> 0x20U));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U] 
            = (1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
                             >> 0x3fU)));
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_4) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U] 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U] = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U] = 0U;
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_7) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U] 
            = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[0U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U] 
            = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[1U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U] 
            = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[2U];
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U] 
            = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[0U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U] 
            = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[1U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U] 
            = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[2U];
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U] = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U] = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U] = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_lhs[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_lhs[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_lhs[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_lhs[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_shiftSoftmax 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3)) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9b7b7248__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_start 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready) 
           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3) 
              | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9b7b7248__0)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__magnitude 
        = (VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in)
            ? (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
               >> 0x12U) : 0ULL);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_out 
        = (((0U == (0x1fU & VL_SHIFTL_III(13,13,32, 
                                          ((VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in) 
                                            & (0U != 
                                               (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                >> 0x1aU)))
                                            ? 0xffU
                                            : (VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in)
                                                ? (0xffU 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                              >> 0x12U)))
                                                : 0U)), 5U)))
             ? 0U : (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___GEN[
                     (((IData)(0x1fU) + (0x1fffU & 
                                         VL_SHIFTL_III(13,13,32, 
                                                       ((VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in) 
                                                         & (0U 
                                                            != 
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                             >> 0x1aU)))
                                                         ? 0xffU
                                                         : 
                                                        (VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in)
                                                          ? 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                                     >> 0x12U)))
                                                          : 0U)), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(13,13,32, 
                                                         ((VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in) 
                                                           & (0U 
                                                              != 
                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                               >> 0x1aU)))
                                                           ? 0xffU
                                                           : 
                                                          (VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in)
                                                            ? 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                                       >> 0x12U)))
                                                            : 0U)), 5U))))) 
           | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___GEN[
              (0xffU & (VL_SHIFTL_III(13,13,32, ((VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in) 
                                                  & (0U 
                                                     != 
                                                     (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                      >> 0x1aU)))
                                                  ? 0xffU
                                                  : 
                                                 (VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in)
                                                   ? 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                              >> 0x12U)))
                                                   : 0U)), 5U) 
                        >> 5U))] >> (0x1fU & VL_SHIFTL_III(13,13,32, 
                                                           ((VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in) 
                                                             & (0U 
                                                                != 
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                                 >> 0x1aU)))
                                                             ? 0xffU
                                                             : 
                                                            (VL_GTS_IQQ(64, 0ULL, AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in)
                                                              ? 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
                                                                         >> 0x12U)))
                                                              : 0U)), 5U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_ready 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_4 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb834bd68__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hd88fd5c8__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T_1) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_0
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_0_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_meshActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesComputed 
        = (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h78b76b5a__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_computeActive 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h78b76b5a__0) 
           | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)) 
           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaReadActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_dmaReadActive;
    vlSelf->AtikAxiTop__DOT___dma_io_memWriteReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0 = ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready) 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_bytesRead 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_bytesRead;
    __Vtemp_58[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0));
    __Vtemp_58[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_58[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_58[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_58[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_58[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_58[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_58[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_58[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_58[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_58[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_58[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_58[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_58[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_58[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_58[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_58[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_59, __Vtemp_58, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_59[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_59[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_59[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_59[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_59[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_59[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_59[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_59[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_59[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_59[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_59[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_59[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_59[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_59[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_59[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_59[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_59[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4)))
                                               : 0U)));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_0
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_1_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_0;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shift_T_4)
            : 0U);
    __Vtemp_60[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0));
    __Vtemp_60[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_60[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_60[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_60[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_60[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_60[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_60[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_60[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_60[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_60[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_60[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_60[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_60[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_60[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_60[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_60[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_61, __Vtemp_60, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_61[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_61[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_61[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_61[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_61[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_61[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_61[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_61[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_61[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_61[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_61[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_61[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_61[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_61[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_61[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_61[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_61[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4)))
                                               : 0U)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive) {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_1;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_0_1 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_1;
    } else {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_0_1;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_0_1 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshAccIn_1_1;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_1_1 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_1;
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_0__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb536d075__0) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_1__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb536d075__0) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_0__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hbcd473a8__0) 
           & (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_1__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hbcd473a8__0) 
           & (1U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_9 
        = ((2U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN) 
                  >> 2U)) | (1U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_3)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
        = (0x5555555555555ULL & (((QData)((IData)((3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                              >> 4U))))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                            >> 6U))))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                               >> 8U))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_1)) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_2)) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x180000U 
                                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_3) 
                                                                               << 0x11U) 
                                                                              | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x26U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_4) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x32U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 0x37U))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_9 
        = ((2U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN) 
                  >> 2U)) | (1U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_3)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
        = (0x5555555555555ULL & (((QData)((IData)((3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                              >> 4U))))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                            >> 6U))))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                               >> 8U))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_1)) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_2)) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x180000U 
                                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_3) 
                                                                               << 0x11U) 
                                                                              | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x26U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_4) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x32U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 0x37U))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_9 
        = ((2U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN) 
                  >> 2U)) | (1U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_3)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
        = (0x5555555555555ULL & (((QData)((IData)((3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                              >> 4U))))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                            >> 6U))))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                               >> 8U))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_1)) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_2)) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x180000U 
                                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_3) 
                                                                               << 0x11U) 
                                                                              | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x26U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_4) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x32U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 0x37U))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_9 
        = ((2U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN) 
                  >> 2U)) | (1U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_3)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
        = (0x5555555555555ULL & (((QData)((IData)((3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                              >> 4U))))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                            >> 6U))))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                               >> 8U))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_1)) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_2)) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x180000U 
                                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_3) 
                                                                               << 0x11U) 
                                                                              | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x26U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_4) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x32U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 0x37U))))))))))))))))));
    __VdfgTmp_h02c400c1__0 = (0xffffffU & ((0x8000U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16))
                                            ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__clipped)
                                            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__clipped));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__io_out 
        = ((0U == (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0) 
                            >> 7U))) ? 0U : (0xffffffU 
                                             & ((0x8000U 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0))
                                                 ? 
                                                (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__clipped)
                                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__io_out 
        = ((0U == (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1) 
                            >> 7U))) ? 0U : (0xffffffU 
                                             & ((0x8000U 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1))
                                                 ? 
                                                (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__clipped)
                                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__io_out 
        = ((0U == (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0) 
                            >> 7U))) ? 0U : (0xffffffU 
                                             & ((0x8000U 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0))
                                                 ? 
                                                (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__clipped)
                                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__io_out 
        = ((0U == (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1) 
                            >> 7U))) ? 0U : (0xffffffU 
                                             & ((0x8000U 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1))
                                                 ? 
                                                (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__clipped)
                                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___msb_T_112 
        = (0x1fU & ((IData)(0x1fU) - ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                       >> 0x1fU) ? 0U
                                       : ((0x40000000U 
                                           & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                           ? 1U : (
                                                   (0x20000000U 
                                                    & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_4))
                                                         ? 7U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_4))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_4))
                                                           ? 9U
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_4))
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_1 
                                                                   >> 5U) 
                                                                  | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                                     >> 0x12U)))
                                                               ? 0xdU
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_0))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                 ? 0xfU
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((8U 
                                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x40U 
                                                                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_3))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_2))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_2))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_2))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((8U 
                                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_2))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
                                                                               ? 0x1dU
                                                                               : 
                                                                              (0x1eU 
                                                                               | (1U 
                                                                                & (~ 
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                                                >> 1U))))))))))))))))))))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_in 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0)
            ? (1ULL + ((IData)(__VdfgTmp_h70f47b28__0)
                        ? (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum)
                        : 0xffffffffffffffffULL)) : AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_cmd_valid_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileReadSelected));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadCmd_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileReadSelected) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_shiftSoftmax 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_shiftSoftmax;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_start;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarExp_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_0__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb834bd68__0) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_1__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb834bd68__0) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_0__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hd88fd5c8__0) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_1__io_wen 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hd88fd5c8__0) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshIdle 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshIdle)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_computeActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_computeActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteReq_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_1 = (1U 
                                                 & ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready)) 
                                                    | ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0)) 
                                                       | (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_bytesRead 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadBytes 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_bytesRead 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_bytesRead 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_bytesRead 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadBytes 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_bytesRead 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_bytesRead 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_1_0;
    __Vtemp_62[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0));
    __Vtemp_62[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_62[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_62[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_62[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_62[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_62[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_62[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_62[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_62[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_62[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_62[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_62[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_62[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_62[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_62[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_62[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_63, __Vtemp_62, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_63[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_63[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_63[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_63[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_63[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_63[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_63[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_63[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_63[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_63[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_63[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_63[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_63[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_63[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_63[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_63[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_63[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shift_T_4)))
                                               : 0U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_1_1;
    __Vtemp_64[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0));
    __Vtemp_64[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_64[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_64[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_64[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_64[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_64[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_64[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_64[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_64[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_64[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_64[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_64[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_64[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_64[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_64[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_64[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_65, __Vtemp_64, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_65[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_65[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_65[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_65[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_65[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_65[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_65[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_65[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_65[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_65[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_65[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_65[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_65[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_65[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_65[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_65[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_65[0x10U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__shifted 
        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,9, 
                                             (0xffffffffffffULL 
                                              & VL_SHIFTL_QQI(48,48,9, 
                                                              (0x80ULL 
                                                               | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0))), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hf9c25935__0))), 
                                             (VL_GTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shift_T_4))
                                               ? (0x1ffU 
                                                  & (- (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shift_T_4)))
                                               : 0U)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_0__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_wen = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_1__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_wen = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_0__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_wen = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_1__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_wen = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_6 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                            >> 0x2fU)) | (5U & ((0xcU 
                                                 & ((IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                              >> 8U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                             >> 0x27U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                               >> 0x17U)) | (0x5555U 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_2))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_10 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                            >> 0xfU)) | (5U & ((0xcU 
                                                & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                            >> 0x26U)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                             >> 0x28U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                             >> 7U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_4))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_12 
        = ((0xeU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5) 
                    << 1U)) | (5U & ((0xcU & ((IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                       >> 0x36U)) 
                                              << 2U)) 
                                     | (3U & (IData)(
                                                     (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                      >> 0x38U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_6 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                            >> 0x2fU)) | (5U & ((0xcU 
                                                 & ((IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                              >> 8U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                             >> 0x27U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                               >> 0x17U)) | (0x5555U 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_2))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_10 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                            >> 0xfU)) | (5U & ((0xcU 
                                                & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                            >> 0x26U)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                             >> 0x28U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                             >> 7U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_4))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_12 
        = ((0xeU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5) 
                    << 1U)) | (5U & ((0xcU & ((IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                       >> 0x36U)) 
                                              << 2U)) 
                                     | (3U & (IData)(
                                                     (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                      >> 0x38U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_6 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                            >> 0x2fU)) | (5U & ((0xcU 
                                                 & ((IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                              >> 8U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                             >> 0x27U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                               >> 0x17U)) | (0x5555U 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_2))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_10 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                            >> 0xfU)) | (5U & ((0xcU 
                                                & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                            >> 0x26U)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                             >> 0x28U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                             >> 7U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_4))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_12 
        = ((0xeU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5) 
                    << 1U)) | (5U & ((0xcU & ((IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                       >> 0x36U)) 
                                              << 2U)) 
                                     | (3U & (IData)(
                                                     (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                      >> 0x38U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_6 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                            >> 0x2fU)) | (5U & ((0xcU 
                                                 & ((IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                              >> 8U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                             >> 0x27U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                               >> 0x17U)) | (0x5555U 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_2))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_10 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                            >> 0xfU)) | (5U & ((0xcU 
                                                & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                            >> 0x26U)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                             >> 0x28U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                             >> 7U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_4))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_12 
        = ((0xeU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5) 
                    << 1U)) | (5U & ((0xcU & ((IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                       >> 0x36U)) 
                                              << 2U)) 
                                     | (3U & (IData)(
                                                     (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                      >> 0x38U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_out 
        = ((0U == (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16) 
                            >> 7U))) ? 0U : __VdfgTmp_h02c400c1__0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qConverters_0_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qConverters_1_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kConverters_0_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kConverters_1_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__io_out 
        = ((0U == (0xffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in) 
                            >> 7U))) ? 0U : (0xffffffU 
                                             & ((0x8000U 
                                                 & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in))
                                                 ? 
                                                (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__clipped)
                                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__io_out 
        = ((0U == (0xffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in) 
                            >> 7U))) ? 0U : (0xffffffU 
                                             & ((0x8000U 
                                                 & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in))
                                                 ? 
                                                (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__clipped)
                                                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__clipped)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_1) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0 
            = ((0xf80000U & ((- (IData)((1U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0_shifted 
                                               >> 0x12U)))) 
                             << 0x13U)) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0_shifted);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1 
            = ((0xf80000U & ((- (IData)((1U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1_shifted 
                                               >> 0x12U)))) 
                             << 0x13U)) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1_shifted);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__io_out;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__io_out;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__io_out;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__io_out;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__io_out;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__io_out;
    }
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0 
        = ((0x18U < (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___msb_T_112))
            ? (0x1fU & ((IData)(8U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___msb_T_112)))
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN 
        = ((0xf0f0U & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                            >> 0x10U)) 
                                   << 8U)) | (0xf0U 
                                              & ((IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                          >> 0x1cU)) 
                                                 << 4U)))) 
           | (0xf0fU & ((0xff00U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                             >> 0x18U)) 
                                    << 8U)) | (0xffU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                          >> 0x20U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_cmd_valid_T;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_2 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_cmd_valid_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadCmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall 
        = (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadCmd_ready)) 
            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid)) 
           | ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteCmd_ready)) 
              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall;
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_computeActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_0__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_wen = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_1__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_wen = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_0__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_wen = 0U;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_1__io_wen) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_wen = 1U;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr 
            = (0xfU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_wen = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_bytesRead 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_bytesRead 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead 
           + (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued) 
                              << 4U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___msbIdx_T 
        = (0x3fU & ((IData)(0x3fU) - ((1U & (IData)(
                                                    (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                     >> 0x3fU)))
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                           >> 0x3eU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                               >> 0x3dU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                >> 0x3cU)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                 >> 0x3bU)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                  >> 0x3aU)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                   >> 0x39U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_12))
                                                         ? 7U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_12))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_12))
                                                           ? 9U
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_12))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                        >> 0x34U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                         >> 0x33U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & ((IData)(
                                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                                                                           >> 5U)) 
                                                                  | (IData)(
                                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                             >> 0x32U))))
                                                               ? 0xdU
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_4))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                 ? 0xfU
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((8U 
                                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x40U 
                                                                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_11))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_10))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_10))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_10))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((8U 
                                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_10))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_9))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_9))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_5 
                                                                                >> 0x15U)) 
                                                                                | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN) 
                                                                                >> 2U)))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_2))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0x200U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x400U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x800U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x1000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0x2000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0x4000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x8000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_8))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_7))
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_6))
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_6))
                                                                                 ? 0x38U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_6))
                                                                                 ? 0x39U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___GEN_6))
                                                                                 ? 0x3aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 4U)))
                                                                                 ? 0x3bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 3U)))
                                                                                 ? 0x3cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 2U)))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                (0x3eU 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___msbIdx_T 
        = (0x3fU & ((IData)(0x3fU) - ((1U & (IData)(
                                                    (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                     >> 0x3fU)))
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                           >> 0x3eU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                               >> 0x3dU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                >> 0x3cU)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                 >> 0x3bU)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                  >> 0x3aU)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                   >> 0x39U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_12))
                                                         ? 7U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_12))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_12))
                                                           ? 9U
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_12))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                        >> 0x34U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                         >> 0x33U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & ((IData)(
                                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                                                                           >> 5U)) 
                                                                  | (IData)(
                                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                             >> 0x32U))))
                                                               ? 0xdU
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_4))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                 ? 0xfU
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((8U 
                                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x40U 
                                                                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_11))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_10))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_10))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_10))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((8U 
                                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_10))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_9))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_9))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_5 
                                                                                >> 0x15U)) 
                                                                                | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN) 
                                                                                >> 2U)))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_2))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0x200U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x400U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x800U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x1000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0x2000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0x4000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x8000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_8))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_7))
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_6))
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_6))
                                                                                 ? 0x38U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_6))
                                                                                 ? 0x39U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___GEN_6))
                                                                                 ? 0x3aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 4U)))
                                                                                 ? 0x3bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 3U)))
                                                                                 ? 0x3cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 2U)))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                (0x3eU 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___msbIdx_T 
        = (0x3fU & ((IData)(0x3fU) - ((1U & (IData)(
                                                    (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                     >> 0x3fU)))
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                           >> 0x3eU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                               >> 0x3dU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                >> 0x3cU)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                 >> 0x3bU)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                  >> 0x3aU)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                   >> 0x39U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_12))
                                                         ? 7U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_12))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_12))
                                                           ? 9U
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_12))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                        >> 0x34U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                         >> 0x33U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & ((IData)(
                                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                                                                           >> 5U)) 
                                                                  | (IData)(
                                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                             >> 0x32U))))
                                                               ? 0xdU
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_4))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                 ? 0xfU
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((8U 
                                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x40U 
                                                                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_11))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_10))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_10))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_10))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((8U 
                                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_10))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_9))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_9))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_5 
                                                                                >> 0x15U)) 
                                                                                | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN) 
                                                                                >> 2U)))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_2))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0x200U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x400U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x800U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x1000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0x2000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0x4000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x8000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_8))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_7))
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_6))
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_6))
                                                                                 ? 0x38U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_6))
                                                                                 ? 0x39U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___GEN_6))
                                                                                 ? 0x3aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 4U)))
                                                                                 ? 0x3bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 3U)))
                                                                                 ? 0x3cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 2U)))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                (0x3eU 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___msbIdx_T 
        = (0x3fU & ((IData)(0x3fU) - ((1U & (IData)(
                                                    (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                     >> 0x3fU)))
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                           >> 0x3eU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                               >> 0x3dU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                >> 0x3cU)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                 >> 0x3bU)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                  >> 0x3aU)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                   >> 0x39U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_12))
                                                         ? 7U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_12))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_12))
                                                           ? 9U
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_12))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                        >> 0x34U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                         >> 0x33U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & ((IData)(
                                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                                                                           >> 5U)) 
                                                                  | (IData)(
                                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                             >> 0x32U))))
                                                               ? 0xdU
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_4))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                 ? 0xfU
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((8U 
                                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x40U 
                                                                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_11))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_10))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_10))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_10))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((8U 
                                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_10))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_9))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_9))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_5 
                                                                                >> 0x15U)) 
                                                                                | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN) 
                                                                                >> 2U)))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_2))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0x200U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x400U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x800U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x1000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0x2000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0x4000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x8000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_8))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_7))
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_6))
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_6))
                                                                                 ? 0x38U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_6))
                                                                                 ? 0x39U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___GEN_6))
                                                                                 ? 0x3aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 4U)))
                                                                                 ? 0x3bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 3U)))
                                                                                 ? 0x3cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 2U)))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                (0x3eU 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scaleConverter_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshA_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshA_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___vConverters_0_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___vConverters_1_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_5 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
           >> (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_0 
        = (0x3333333333ULL & (((QData)((IData)((0xfU 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                           >> 8U))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                         >> 0xcU))))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((0x3c000000U 
                                                                & ((IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                            >> 0x10U)) 
                                                                   << 0x1aU)) 
                                                               | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN) 
                                                                   << 0xaU) 
                                                                  | ((0x3c0U 
                                                                      & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x24U)) 
                                                                         << 6U)) 
                                                                     | ((0x3cU 
                                                                         & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x2eU))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_wen 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_bytesRead 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_bytesRead;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshA_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshA_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshB_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshB_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_1) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__clipped)));
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive) {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_out;
    } else {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_0;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_1;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___unbiasedExp_T_1 
        = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___msbIdx_T) 
                    - (IData)(0x16U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__shiftLeft 
        = (7U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___msbIdx_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___unbiasedExp_T_1 
        = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___msbIdx_T) 
                    - (IData)(0x16U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__shiftLeft 
        = (7U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___msbIdx_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___unbiasedExp_T_1 
        = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___msbIdx_T) 
                    - (IData)(0x16U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__shiftLeft 
        = (7U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___msbIdx_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___unbiasedExp_T_1 
        = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___msbIdx_T) 
                    - (IData)(0x16U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__shiftLeft 
        = (7U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___msbIdx_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshB_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshB_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__io_out 
        = ((0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3)
            ? ((((0U == (0x1fU & VL_SHIFTL_III(13,13,32, 
                                               (0xffU 
                                                & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
                                                   >> 0x10U)), 5U)))
                  ? 0U : (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN[
                          (((IData)(0x1fU) + (0x1fffU 
                                              & VL_SHIFTL_III(13,13,32, 
                                                              (0xffU 
                                                               & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
                                                                  >> 0x10U)), 5U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(13,13,32, 
                                                                (0xffU 
                                                                 & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
                                                                    >> 0x10U)), 5U))))) 
                | (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN[
                   (0xffU & (VL_SHIFTL_III(13,13,32, 
                                           (0xffU & 
                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
                                             >> 0x10U)), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(13,13,32, 
                                                                (0xffU 
                                                                 & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
                                                                    >> 0x10U)), 5U)))) 
               >> (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0))
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3)
            ? (((QData)((IData)((0x1ffU & (- (IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16) 
                                                           >> 7U))) 
                                                      & (__VdfgTmp_h02c400c1__0 
                                                         >> 0x17U))))))) 
                << 0x18U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_out)))
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_4)
                ? (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_out))
                : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_7)
                    ? (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6))
                    : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)
                        ? (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__io_out))
                        : 0ULL))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_1 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_0 
                             >> 0x1eU)) | (0x33U & 
                                           ((0xf0U 
                                             & ((IData)(
                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                         >> 0xcU)) 
                                                << 4U)) 
                                            | (0xfU 
                                               & (IData)(
                                                         (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                          >> 0x10U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_3 
        = (3U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_0 
                          >> 0xaU)) | (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                               >> 0x24U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_2 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_0 
                               >> 0xeU)) | (0x3333U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_4 
        = ((0xfcU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_0) 
                     << 2U)) | (0x33U & ((0xf0U & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                            >> 0x2cU)) 
                                                   << 4U)) 
                                         | (0xfU & (IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                            >> 0x30U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0;
    __VdfgTmp_h47518fc4__0 = (((QData)((IData)((0xffffffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0 
                                                                 >> 0x17U))))))) 
                               << 0x18U) | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshA_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshA_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshB_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshB_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___biasedExp_T 
        = (0x1ffU & ((IData)(0x7fU) + ((0x100U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___unbiasedExp_T_1) 
                                                  << 1U)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___unbiasedExp_T_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T_2 
        = VL_SHIFTR_QQI(64,64,7, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude, 
                        ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__shiftLeft)
                          ? 0U : (0x3fU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___msbIdx_T) 
                                           - (IData)(7U)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT____VdfgTmp_he071bdfb__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__shiftLeft)
            ? (0x3fU & ((IData)(7U) - (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___msbIdx_T)))
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___biasedExp_T 
        = (0x1ffU & ((IData)(0x7fU) + ((0x100U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___unbiasedExp_T_1) 
                                                  << 1U)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___unbiasedExp_T_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T_2 
        = VL_SHIFTR_QQI(64,64,7, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude, 
                        ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__shiftLeft)
                          ? 0U : (0x3fU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___msbIdx_T) 
                                           - (IData)(7U)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT____VdfgTmp_he071bdfb__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__shiftLeft)
            ? (0x3fU & ((IData)(7U) - (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___msbIdx_T)))
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___biasedExp_T 
        = (0x1ffU & ((IData)(0x7fU) + ((0x100U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___unbiasedExp_T_1) 
                                                  << 1U)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___unbiasedExp_T_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T_2 
        = VL_SHIFTR_QQI(64,64,7, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude, 
                        ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__shiftLeft)
                          ? 0U : (0x3fU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___msbIdx_T) 
                                           - (IData)(7U)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT____VdfgTmp_he071bdfb__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__shiftLeft)
            ? (0x3fU & ((IData)(7U) - (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___msbIdx_T)))
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___biasedExp_T 
        = (0x1ffU & ((IData)(0x7fU) + ((0x100U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___unbiasedExp_T_1) 
                                                  << 1U)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___unbiasedExp_T_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T_2 
        = VL_SHIFTR_QQI(64,64,7, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude, 
                        ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__shiftLeft)
                          ? 0U : (0x3fU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___msbIdx_T) 
                                           - (IData)(7U)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT____VdfgTmp_he071bdfb__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__shiftLeft)
            ? (0x3fU & ((IData)(7U) - (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___msbIdx_T)))
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0;
    __VdfgTmp_h0270aa18__0 = (((QData)((IData)((0xffffffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0 
                                                                 >> 0x17U))))))) 
                               << 0x18U) | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarRecip_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_9 
        = ((2U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN) 
                  >> 2U)) | (1U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_3)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
        = (0x5555555555555ULL & (((QData)((IData)((3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                              >> 4U))))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                            >> 6U))))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                               >> 8U))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_1)) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_2)) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x180000U 
                                                                            & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_3) 
                                                                               << 0x11U) 
                                                                              | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x26U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_4) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x32U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 0x37U))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_a 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_a 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_1 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1;
    __VdfgTmp_hd8f352e8__0 = (((QData)((IData)((0xffffffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1 
                                                                 >> 0x17U))))))) 
                               << 0x18U) | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_1)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_1 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1;
    __VdfgTmp_he0599b2f__0 = (((QData)((IData)((0xffffffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1 
                                                                 >> 0x17U))))))) 
                               << 0x18U) | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_1)));
    __Vtemp_67[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude);
    __Vtemp_67[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_67[2U] = 0U;
    __Vtemp_67[3U] = 0U;
    __Vtemp_67[4U] = 0U;
    __Vtemp_67[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_68, __Vtemp_67, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[0U] 
        = __Vtemp_68[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[1U] 
        = __Vtemp_68[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[2U] 
        = __Vtemp_68[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[3U] 
        = __Vtemp_68[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[4U] 
        = __Vtemp_68[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_68[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_out 
        = (((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude) 
            | VL_GTS_III(9, 1U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___biasedExp_T)))
            ? 0U : ((0x8000U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0 
                                         >> 0x3fU)) 
                                << 0xfU)) | ((0xffU 
                                              == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___biasedExp_T))
                                              ? 0x7f7fU
                                              : ((0x7f80U 
                                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___biasedExp_T) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__shiftLeft)
                                                        ? 
                                                       VL_SHIFTL_III(7,7,7, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT____VdfgTmp_he071bdfb__0))
                                                        : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T_2)))))));
    __Vtemp_70[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude);
    __Vtemp_70[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_70[2U] = 0U;
    __Vtemp_70[3U] = 0U;
    __Vtemp_70[4U] = 0U;
    __Vtemp_70[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_71, __Vtemp_70, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[0U] 
        = __Vtemp_71[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[1U] 
        = __Vtemp_71[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[2U] 
        = __Vtemp_71[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[3U] 
        = __Vtemp_71[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[4U] 
        = __Vtemp_71[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_71[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__io_out 
        = (((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude) 
            | VL_GTS_III(9, 1U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___biasedExp_T)))
            ? 0U : ((0x8000U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1 
                                         >> 0x3fU)) 
                                << 0xfU)) | ((0xffU 
                                              == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___biasedExp_T))
                                              ? 0x7f7fU
                                              : ((0x7f80U 
                                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___biasedExp_T) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__shiftLeft)
                                                        ? 
                                                       VL_SHIFTL_III(7,7,7, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT____VdfgTmp_he071bdfb__0))
                                                        : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T_2)))))));
    __Vtemp_73[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude);
    __Vtemp_73[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_73[2U] = 0U;
    __Vtemp_73[3U] = 0U;
    __Vtemp_73[4U] = 0U;
    __Vtemp_73[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_74, __Vtemp_73, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[0U] 
        = __Vtemp_74[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[1U] 
        = __Vtemp_74[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[2U] 
        = __Vtemp_74[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[3U] 
        = __Vtemp_74[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[4U] 
        = __Vtemp_74[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_74[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__io_out 
        = (((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude) 
            | VL_GTS_III(9, 1U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___biasedExp_T)))
            ? 0U : ((0x8000U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0 
                                         >> 0x3fU)) 
                                << 0xfU)) | ((0xffU 
                                              == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___biasedExp_T))
                                              ? 0x7f7fU
                                              : ((0x7f80U 
                                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___biasedExp_T) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__shiftLeft)
                                                        ? 
                                                       VL_SHIFTL_III(7,7,7, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT____VdfgTmp_he071bdfb__0))
                                                        : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T_2)))))));
    __Vtemp_76[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude);
    __Vtemp_76[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_76[2U] = 0U;
    __Vtemp_76[3U] = 0U;
    __Vtemp_76[4U] = 0U;
    __Vtemp_76[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_77, __Vtemp_76, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[0U] 
        = __Vtemp_77[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[1U] 
        = __Vtemp_77[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[2U] 
        = __Vtemp_77[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[3U] 
        = __Vtemp_77[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[4U] 
        = __Vtemp_77[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_77[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__io_out 
        = (((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude) 
            | VL_GTS_III(9, 1U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___biasedExp_T)))
            ? 0U : ((0x8000U & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1 
                                         >> 0x3fU)) 
                                << 0xfU)) | ((0xffU 
                                              == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___biasedExp_T))
                                              ? 0x7f7fU
                                              : ((0x7f80U 
                                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___biasedExp_T) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__shiftLeft)
                                                        ? 
                                                       VL_SHIFTL_III(7,7,7, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT____VdfgTmp_he071bdfb__0))
                                                        : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T_2)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_b 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_b 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT___product_T 
        = (0xffffffffffffULL & (__VdfgTmp_h47518fc4__0 
                                * __VdfgTmp_h0270aa18__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_rhs 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_rhs;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_6 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                            >> 0x2fU)) | (5U & ((0xcU 
                                                 & ((IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(
                                                             (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                              >> 8U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                             >> 0x27U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8 
        = (0xffffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                               >> 0x17U)) | (0x5555U 
                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_2))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_10 
        = (0xfU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                            >> 0xfU)) | (5U & ((0xcU 
                                                & ((IData)(
                                                           (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                            >> 0x26U)) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                             >> 0x28U)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11 
        = (0xffU & ((IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                             >> 7U)) | (0x55U & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_4))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_12 
        = ((0xeU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5) 
                    << 1U)) | (5U & ((0xcU & ((IData)(
                                                      (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                       >> 0x36U)) 
                                              << 2U)) 
                                     | (3U & (IData)(
                                                     (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                      >> 0x38U))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_a 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_a 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT___product_T 
        = (0xffffffffffffULL & (__VdfgTmp_hd8f352e8__0 
                                * __VdfgTmp_h0270aa18__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_b 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_b 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT___product_T 
        = (0xffffffffffffULL & (__VdfgTmp_h47518fc4__0 
                                * __VdfgTmp_he0599b2f__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT___product_T 
        = (0xffffffffffffULL & (__VdfgTmp_hd8f352e8__0 
                                * __VdfgTmp_he0599b2f__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_out;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner) {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1;
    } else {
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_out;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__io_out;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__io_out;
        AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_1 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__io_out;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteTile_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteTile_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteTile_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteTile_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteTile_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteTile_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out 
        = (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_0 
           + (((QData)((IData)((0xffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT___product_T 
                                                                 >> 0x2fU)))))))) 
               << 0x30U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT___product_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T 
        = (0x3fU & ((IData)(0x3fU) - ((1U & (IData)(
                                                    (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                     >> 0x3fU)))
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                           >> 0x3eU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                               >> 0x3dU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                >> 0x3cU)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                 >> 0x3bU)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                  >> 0x3aU)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                   >> 0x39U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_12))
                                                         ? 7U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_12))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_12))
                                                           ? 9U
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_12))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                        >> 0x34U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                         >> 0x33U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & ((IData)(
                                                                          (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                                                                           >> 5U)) 
                                                                  | (IData)(
                                                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                             >> 0x32U))))
                                                               ? 0xdU
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_4))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                 ? 0xfU
                                                                 : 
                                                                ((2U 
                                                                  & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((8U 
                                                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x40U 
                                                                       & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_11))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_10))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_10))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_10))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((8U 
                                                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_10))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_9))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_9))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               & ((IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_5 
                                                                                >> 0x15U)) 
                                                                                | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN) 
                                                                                >> 2U)))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_2))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0x200U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x400U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x800U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x1000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0x2000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0x4000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x8000U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_8))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x10U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0x20U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_7))
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_6))
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_6))
                                                                                 ? 0x38U
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_6))
                                                                                 ? 0x39U
                                                                                 : 
                                                                                ((8U 
                                                                                & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___GEN_6))
                                                                                 ? 0x3aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 4U)))
                                                                                 ? 0x3bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 3U)))
                                                                                 ? 0x3cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 2U)))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                (0x3eU 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out 
        = (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_0 
           + (((QData)((IData)((0xffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT___product_T 
                                                                 >> 0x2fU)))))))) 
               << 0x30U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT___product_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out 
        = (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_1 
           + (((QData)((IData)((0xffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT___product_T 
                                                                 >> 0x2fU)))))))) 
               << 0x30U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT___product_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out 
        = (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_1_1 
           + (((QData)((IData)((0xffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT___product_T 
                                                                 >> 0x2fU)))))))) 
               << 0x30U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT___product_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_tile_0_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_tile_0_1 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_tile_1_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_0;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_1;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_0_1;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_tile_1_1 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_tile_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshOut_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshOut_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedMesh_io_out_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_out_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___unbiasedExp_T_1 
        = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T) 
                    - (IData)(0x16U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__shiftLeft 
        = (7U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshOut_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshOut_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedMesh_io_out_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_out_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshOut_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshOut_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedMesh_io_out_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_out_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshOut_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshOut_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedMesh_io_out_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_out_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___biasedExp_T 
        = (0x1ffU & ((IData)(0x7fU) + ((0x100U & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___unbiasedExp_T_1) 
                                                  << 1U)) 
                                       | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___unbiasedExp_T_1))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T_2 
        = VL_SHIFTR_QQI(64,64,7, vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude, 
                        ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__shiftLeft)
                          ? 0U : (0x3fU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T) 
                                           - (IData)(7U)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_he071bdfb__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__shiftLeft)
            ? (0x3fU & ((IData)(7U) - (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T)))
            : 0U);
    __Vtemp_79[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude);
    __Vtemp_79[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_79[2U] = 0U;
    __Vtemp_79[3U] = 0U;
    __Vtemp_79[4U] = 0U;
    __Vtemp_79[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_80, __Vtemp_79, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[0U] 
        = __Vtemp_80[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[1U] 
        = __Vtemp_80[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[2U] 
        = __Vtemp_80[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[3U] 
        = __Vtemp_80[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[4U] 
        = __Vtemp_80[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_80[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out 
        = (((0ULL == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude) 
            | VL_GTS_III(9, 1U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___biasedExp_T)))
            ? 0U : (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0) 
                     << 0xfU) | ((0xffU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___biasedExp_T))
                                  ? 0x7f7fU : ((0x7f80U 
                                                & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___biasedExp_T) 
                                                   << 7U)) 
                                               | (0x7fU 
                                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__shiftLeft)
                                                      ? 
                                                     VL_SHIFTL_III(7,7,7, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude), (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_he071bdfb__0))
                                                      : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T_2)))))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarOutConverter_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out;
}
