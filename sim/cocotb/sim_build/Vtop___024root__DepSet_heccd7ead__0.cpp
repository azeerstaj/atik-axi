// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h1c449781_0;
extern const VlWide<17>/*543:0*/ Vtop__ConstPool__CONST_h00a54071_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memResp_valid = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteBytes = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid = 0;
    QData/*63:0*/ AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteBytes = 0;
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
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hf4414b3f__0 = 0;
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT____VdfgTmp_hab271cef__0 = 0;
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
    CData/*0:0*/ AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0;
    AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0 = 0;
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
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<6>/*191:0*/ __Vtemp_43;
    VlWide<6>/*191:0*/ __Vtemp_44;
    VlWide<6>/*191:0*/ __Vtemp_46;
    VlWide<6>/*191:0*/ __Vtemp_47;
    VlWide<6>/*191:0*/ __Vtemp_49;
    VlWide<6>/*191:0*/ __Vtemp_50;
    VlWide<6>/*191:0*/ __Vtemp_52;
    VlWide<6>/*191:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<6>/*191:0*/ __Vtemp_57;
    VlWide<6>/*191:0*/ __Vtemp_58;
    // Body
    vlSelf->AtikAxiTop__DOT__aresetn = vlSelf->aresetn;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awprot = vlSelf->s_axi_ctrl_awprot;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_arprot = vlSelf->s_axi_ctrl_arprot;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[3U];
    vlSelf->m_axi_mem_awid = vlSelf->AtikAxiTop__DOT__m_axi_mem_awid;
    vlSelf->m_axi_mem_awlen = vlSelf->AtikAxiTop__DOT__m_axi_mem_awlen;
    vlSelf->m_axi_mem_awsize = vlSelf->AtikAxiTop__DOT__m_axi_mem_awsize;
    vlSelf->m_axi_mem_awburst = vlSelf->AtikAxiTop__DOT__m_axi_mem_awburst;
    vlSelf->m_axi_mem_awlock = vlSelf->AtikAxiTop__DOT__m_axi_mem_awlock;
    vlSelf->m_axi_mem_awcache = vlSelf->AtikAxiTop__DOT__m_axi_mem_awcache;
    vlSelf->m_axi_mem_awprot = vlSelf->AtikAxiTop__DOT__m_axi_mem_awprot;
    vlSelf->m_axi_mem_awqos = vlSelf->AtikAxiTop__DOT__m_axi_mem_awqos;
    vlSelf->m_axi_mem_wlast = vlSelf->AtikAxiTop__DOT__m_axi_mem_wlast;
    vlSelf->m_axi_mem_arid = vlSelf->AtikAxiTop__DOT__m_axi_mem_arid;
    vlSelf->m_axi_mem_arlen = vlSelf->AtikAxiTop__DOT__m_axi_mem_arlen;
    vlSelf->m_axi_mem_arsize = vlSelf->AtikAxiTop__DOT__m_axi_mem_arsize;
    vlSelf->m_axi_mem_arburst = vlSelf->AtikAxiTop__DOT__m_axi_mem_arburst;
    vlSelf->m_axi_mem_arlock = vlSelf->AtikAxiTop__DOT__m_axi_mem_arlock;
    vlSelf->m_axi_mem_arcache = vlSelf->AtikAxiTop__DOT__m_axi_mem_arcache;
    vlSelf->m_axi_mem_arprot = vlSelf->AtikAxiTop__DOT__m_axi_mem_arprot;
    vlSelf->m_axi_mem_arqos = vlSelf->AtikAxiTop__DOT__m_axi_mem_arqos;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awaddr = vlSelf->s_axi_ctrl_awaddr;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awvalid = vlSelf->s_axi_ctrl_awvalid;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wdata = vlSelf->s_axi_ctrl_wdata;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wstrb = vlSelf->s_axi_ctrl_wstrb;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wvalid = vlSelf->s_axi_ctrl_wvalid;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_bready = vlSelf->s_axi_ctrl_bready;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_araddr = vlSelf->s_axi_ctrl_araddr;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_arvalid = vlSelf->s_axi_ctrl_arvalid;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rready = vlSelf->s_axi_ctrl_rready;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_awready = vlSelf->m_axi_mem_awready;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wready = vlSelf->m_axi_mem_wready;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_bid = vlSelf->m_axi_mem_bid;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_bresp = vlSelf->m_axi_mem_bresp;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_bvalid = vlSelf->m_axi_mem_bvalid;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_arready = vlSelf->m_axi_mem_arready;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rid = vlSelf->m_axi_mem_rid;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[0U] = 
        vlSelf->m_axi_mem_rdata[0U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[1U] = 
        vlSelf->m_axi_mem_rdata[1U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[2U] = 
        vlSelf->m_axi_mem_rdata[2U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[3U] = 
        vlSelf->m_axi_mem_rdata[3U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rresp = vlSelf->m_axi_mem_rresp;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rlast = vlSelf->m_axi_mem_rlast;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rvalid = vlSelf->m_axi_mem_rvalid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__chunkK;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_waddr 
        = (0xfU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col 
                   >> 0U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__chunkD;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__outBf16_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outSoftmax 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteError 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteError 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__errorReg) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner));
    vlSelf->s_axi_ctrl_bvalid = vlSelf->AtikAxiTop__DOT__control__DOT__bValid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done 
        = (0xeU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->s_axi_ctrl_bresp = vlSelf->AtikAxiTop__DOT__control__DOT__bResp;
    vlSelf->s_axi_ctrl_arready = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__rValid)));
    vlSelf->s_axi_ctrl_rvalid = vlSelf->AtikAxiTop__DOT__control__DOT__rValid;
    vlSelf->s_axi_ctrl_rdata = vlSelf->AtikAxiTop__DOT__control__DOT__rData;
    vlSelf->s_axi_ctrl_rresp = vlSelf->AtikAxiTop__DOT__control__DOT__rResp;
    vlSelf->m_axi_mem_wdata[0U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[0U];
    vlSelf->m_axi_mem_wdata[1U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[1U];
    vlSelf->m_axi_mem_wdata[2U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[2U];
    vlSelf->m_axi_mem_wdata[3U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[3U];
    vlSelf->m_axi_mem_wstrb = vlSelf->AtikAxiTop__DOT__dma__DOT__writeMaskReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__doneReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__errorReg;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__errorReg;
    vlSelf->m_axi_mem_bready = (5U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->m_axi_mem_arvalid = (1U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__errorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_active 
        = (0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready 
        = (1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__busyReg)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_7 
        = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_run = vlSelf->AtikAxiTop__DOT__control__DOT__startPending;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__control__DOT__counterIndexReg;
    vlSelf->m_axi_mem_rready = (2U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr 
        = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__descAddrHiReg)) 
            << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__descAddrLoReg)));
    vlSelf->m_axi_mem_awaddr = vlSelf->AtikAxiTop__DOT__dma__DOT__addressReg;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[0U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[1U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[2U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__descAddrReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_bits_addr 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__base 
           + (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index) 
                              << 4U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle 
        = ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
           & ((0xeU != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
              & ((0xfU != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)) 
                 & (8U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state)))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall 
        = (7U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->__VdfgTmp_h37f88d19__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2b66f697__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hb5186375__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h68a62ad9__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h679b5da9__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h370e49b7__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hd88eaecc__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h93f172d0__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h76aa6a6d__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h70733d82__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h227ee276__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h6ad73bb6__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_he191617f__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_ha414cfa1__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hceef11f7__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h05a073ee__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___remainingD_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_k 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeKv_T_3 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_kvLen 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_done 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_0 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_6 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_0 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_14 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kvBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_13 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__dIdx));
    vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_5 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done 
        = (0x1fU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__responseErrorReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingM_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingN_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeRows_T_3 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeValueCols_T_3 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingK_T 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_k 
           - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__kBase);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_4 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__stride));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_1 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN));
    vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset 
        = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_15 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_12 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_1 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_2 
        = (7U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_3 
        = (8U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_1 
        = (0xdU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_9 
        = (0x11U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_11 
        = (0x12U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active 
        = ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state)) 
           & ((3U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state)) 
              & (4U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_3 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_wen_T_3 
        = (0U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_wen_T_3 
        = (1U == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_active 
        = (0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid 
        = (0x1bU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy = (0U 
                                                  != (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready 
        = (0U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_3 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__col);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T 
        = (9U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9 
        = (0x19U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_valid 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5 
        = (0x10U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3 
        = (0xcU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__aclk = vlSelf->aclk;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_5 
        = (0xfU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_1 
        = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid 
        = (0xbU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadCmd_valid_T_3 
        = (0x13U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1) 
                               >> 7U)) - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3 
        = (0xeU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid 
        = (1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_wen_T 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_wen_T 
        = (5U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T 
        = (4U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T_1 
        = (6U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy 
        = ((0U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state)) 
           & ((7U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state)) 
              & (8U != (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__state))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___io_tileReadCmd_valid_T 
        = (2U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->s_axi_ctrl_awready = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awHeld)) 
                                        & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid 
        = (3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive 
        = (8U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__state));
    vlSelf->s_axi_ctrl_wready = (1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wHeld)) 
                                       & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m);
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aRaw_1_T 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileM);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bRaw_1_T 
        = ((IData)(1U) + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__tileN);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_1 
        = (0x16U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___elemAddr_T_6 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__base 
           + (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outCol)) 
               + ((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__outRow)) 
                  * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__stride)))) 
              << 1U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum 
        = (((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__resultReg[0U])));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarCol;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_15 
        = (0x1aU == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_0_1);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
        = ((1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1 
                          >> 0x3fU))) ? (1ULL + (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1))
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__accum_1_1);
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_awaddr 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awaddr;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_awvalid 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wdata 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wdata;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wstrb 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wstrb;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wvalid 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_bready 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_bready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_araddr 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_araddr;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_arvalid 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_arvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rready 
        = vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_awready 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_awready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wready 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_wready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_bid = vlSelf->AtikAxiTop__DOT__m_axi_mem_bid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_bresp 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_bresp;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_bvalid 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_bvalid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_arready 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_arready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rid = vlSelf->AtikAxiTop__DOT__m_axi_mem_rid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rdata[0U] 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[0U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rdata[1U] 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[1U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rdata[2U] 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[2U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rdata[3U] 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rdata[3U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rresp 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rresp;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rlast 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rlast;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rvalid 
        = vlSelf->AtikAxiTop__DOT__m_axi_mem_rvalid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_waddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_waddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_raddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_raddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteTile_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteTile_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_outSoftmax 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outSoftmax;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteError;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteError;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_bvalid = vlSelf->s_axi_ctrl_bvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_bvalid 
        = vlSelf->s_axi_ctrl_bvalid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_index;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_state_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_status_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_state_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_status_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_bresp = vlSelf->s_axi_ctrl_bresp;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_bresp 
        = vlSelf->s_axi_ctrl_bresp;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_arready = vlSelf->s_axi_ctrl_arready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_arready 
        = vlSelf->s_axi_ctrl_arready;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rvalid = vlSelf->s_axi_ctrl_rvalid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rvalid 
        = vlSelf->s_axi_ctrl_rvalid;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rdata = vlSelf->s_axi_ctrl_rdata;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rdata 
        = vlSelf->s_axi_ctrl_rdata;
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_rresp = vlSelf->s_axi_ctrl_rresp;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_rresp 
        = vlSelf->s_axi_ctrl_rresp;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[0U] = 
        vlSelf->m_axi_mem_wdata[0U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[1U] = 
        vlSelf->m_axi_mem_wdata[1U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[2U] = 
        vlSelf->m_axi_mem_wdata[2U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[3U] = 
        vlSelf->m_axi_mem_wdata[3U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[0U] 
        = vlSelf->m_axi_mem_wdata[0U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[1U] 
        = vlSelf->m_axi_mem_wdata[1U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[2U] 
        = vlSelf->m_axi_mem_wdata[2U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[3U] 
        = vlSelf->m_axi_mem_wdata[3U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wstrb = vlSelf->m_axi_mem_wstrb;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wstrb 
        = vlSelf->m_axi_mem_wstrb;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descriptorError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorReader_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_error;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionError 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_error;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_bits_last 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_row 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_row;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_col 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_col;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_out_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_active 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_active;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_ready;
    vlSelf->AtikAxiTop__DOT___control_io_run = vlSelf->AtikAxiTop__DOT__control__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_run = vlSelf->AtikAxiTop__DOT__control__DOT__io_run;
    vlSelf->AtikAxiTop__DOT___control_io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_rready = vlSelf->m_axi_mem_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rready 
        = vlSelf->m_axi_mem_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_rready_0 
        = vlSelf->m_axi_mem_rready;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_2 = ((IData)(vlSelf->m_axi_mem_rready) 
                                                 & (IData)(vlSelf->m_axi_mem_rvalid));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_1 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readBeat_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_cmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_cmd_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_valid));
    vlSelf->AtikAxiTop__DOT___control_io_descAddr = vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_descAddr 
        = vlSelf->AtikAxiTop__DOT__control__DOT__io_descAddr;
    vlSelf->m_axi_mem_araddr = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_awaddr = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_araddr = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_awaddr 
        = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_araddr 
        = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U];
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_memReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_meshIdle 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_meshIdle;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall;
    if (vlSelf->__VdfgTmp_h37f88d19__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h2b66f697__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h2b66f697__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_hb5186375__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h68a62ad9__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h68a62ad9__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_h679b5da9__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h370e49b7__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h370e49b7__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_hd88eaecc__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h93f172d0__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h93f172d0__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_h76aa6a6d__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h70733d82__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h70733d82__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_h227ee276__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h6ad73bb6__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h6ad73bb6__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_he191617f__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_ha414cfa1__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_ha414cfa1__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata = 0U;
    }
    if (vlSelf->__VdfgTmp_hceef11f7__0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
            = vlSelf->__VdfgTmp_h05a073ee__0;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata 
            = (0xffffU & vlSelf->__VdfgTmp_h05a073ee__0);
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeD 
        = ((0x10U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___remainingD_T)
            ? 0x10U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___remainingD_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__activeKv 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeKv_T_3)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeKv_T_3);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[0U] 
        = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[1U] 
        = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
                   >> 0x20U));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9f53eaa6__0[2U] 
        = (1U & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_8 
                         >> 0x3fU)));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_memResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready;
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
    vlSelf->m_axi_mem_awvalid = ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__awDone)) 
                                 & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T));
    vlSelf->m_axi_mem_wvalid = ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__wDone)) 
                                & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___io_axi_wvalid_T));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_done 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_done;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingM_T)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingM_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingN_T)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingN_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeRows_T_3)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeRows_T_3);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols 
        = ((2U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeValueCols_T_3)
            ? 2U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___activeValueCols_T_3);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeK 
        = ((0x10U < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingK_T)
            ? 0x10U : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___remainingK_T);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___readElemAddr_T 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__row)) 
                                    * vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_base 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_outAddr 
           + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN 
                * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout))) 
               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___GEN_1) 
              << 1U));
    vlSelf->AtikAxiTop__DOT__control__DOT__reset = vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset;
    vlSelf->AtikAxiTop__DOT__dma__DOT__reset = vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__reset = vlSelf->AtikAxiTop__DOT____Vcellinp__core__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_base 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_outAddr 
           + (((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_12 
                * (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout))) 
               + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_15) 
              << 1U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_active 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_active) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileWriteOwner));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_memReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_dmaBusy 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy;
    vlSelf->AtikAxiTop__DOT___dma_io_busy = vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy;
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
    vlSelf->AtikAxiTop__DOT___dma_io_memWriteResp_valid 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_valid 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___io_bytesWritten_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteResp_valid));
    vlSelf->AtikAxiTop__DOT___dma_io_memReadReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextRow_T_2 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextCol_T_3 
           == vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__cols);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_memResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__readOwner)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_ready)
            : (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_13 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9;
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
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_7 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_7 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) 
           & (0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_6));
    vlSelf->AtikAxiTop__DOT__control__DOT__clock = vlSelf->AtikAxiTop__DOT__aclk;
    vlSelf->AtikAxiTop__DOT__dma__DOT__clock = vlSelf->AtikAxiTop__DOT__aclk;
    vlSelf->AtikAxiTop__DOT__core__DOT__clock = vlSelf->AtikAxiTop__DOT__aclk;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_valid = 1U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid_0 = 1U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_ldout;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_base;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_valid = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_ldout;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_rows;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_base;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileWriteSelected 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_valid));
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
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in 
        = (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3) 
            | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_5))
            ? (((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRow)
                 ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_1
                 : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__rowMax_0) 
               - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2)
            : (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_1 
               - vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_2));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_memReq_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadSelected 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_wen_T) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_wen_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T_1) 
              | (0x14U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state))));
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
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_awready = vlSelf->s_axi_ctrl_awready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_awready 
        = vlSelf->s_axi_ctrl_awready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_awready_0 
        = vlSelf->s_axi_ctrl_awready;
    vlSelf->AtikAxiTop__DOT__control__DOT__awFire = 
        ((IData)(vlSelf->s_axi_ctrl_awvalid) & (IData)(vlSelf->s_axi_ctrl_awready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_out_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid;
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadOwner));
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
    vlSelf->AtikAxiTop__DOT__s_axi_ctrl_wready = vlSelf->s_axi_ctrl_wready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wready 
        = vlSelf->s_axi_ctrl_wready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_axi_wready_0 
        = vlSelf->s_axi_ctrl_wready;
    vlSelf->AtikAxiTop__DOT__control__DOT__wFire = 
        ((IData)(vlSelf->s_axi_ctrl_wvalid) & (IData)(vlSelf->s_axi_ctrl_wready));
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
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aRaw_1_T 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_m);
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h4f4a4e93__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bRaw_1_T 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__descReg_n);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_meshActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_1));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__io_in 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_4 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3) 
           & (0U != vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_0 
        = ((0xccU & ((0xf0U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                               >> 4U)) | (0xcU & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                                  >> 0xcU)))) 
           | (0x33U & ((0xf0U & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                 >> 8U)) | (0xfU & 
                                            (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
                                             >> 0x10U)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT____VdfgTmp_h5abc4a49__0 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__rows);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarMul_io_outAccum 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_10 
        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN 
            + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qBase) 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_m);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_11 
        = ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_0 
            + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vColBase) 
           < vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_n);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_1) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_3) 
              | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_5) 
                 | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_5) 
                    | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_9) 
                       | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_11) 
                          | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9) 
                             | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_15))))))));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_run 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_counterIndex 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_descAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_0_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kSrams_1_io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__io_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteDone;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteDone 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteDone;
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
    vlSelf->AtikAxiTop__DOT__control__DOT__io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT___core_io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_counterValue 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readData;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeRows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__activeCols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_cols;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_bits_addr 
        = (0xfffffffffffffff0ULL & (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__base 
                                    + ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___readElemAddr_T 
                                        + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_0) 
                                       << 1U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileWriteCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_bits_base;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteResp_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_ready;
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
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready;
    vlSelf->AtikAxiTop__DOT___core_io_memReadResp_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_ready;
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
    __Vtemp_14[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16)));
    __Vtemp_14[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_14[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_14[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_14[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_14[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_14[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_14[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_14[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_14[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_14[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_14[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_14[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_14[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_14[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_14[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_14[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_15, __Vtemp_14, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_15[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_15[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_15[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_15[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_15[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_15[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_15[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_15[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_15[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_15[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_15[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_15[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_15[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_15[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_15[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_15[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_15[0x10U]);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid 
        = ((3U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__state)) 
           | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb6249bcd__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_sramStall)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_sramStall)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_sramStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_sramStall;
    __Vtemp_16[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_0)));
    __Vtemp_16[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_16[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_16[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_16[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_16[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_16[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_16[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_16[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_16[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_16[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_16[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_16[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_16[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_16[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_16[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_16[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_17, __Vtemp_16, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_17[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_17[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_17[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_17[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_17[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_17[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_17[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_17[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_17[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_17[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_17[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_17[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_17[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_17[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_17[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_17[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_17[0x10U]);
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
    __Vtemp_18[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qRaw_1)));
    __Vtemp_18[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_18[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_18[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_18[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_18[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_18[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_18[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_18[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_18[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_18[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_18[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_18[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_18[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_18[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_18[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_18[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_19, __Vtemp_18, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_19[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_19[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_19[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_19[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_19[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_19[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_19[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_19[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_19[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_19[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_19[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_19[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_19[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_19[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_19[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_19[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_19[0x10U]);
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
    __Vtemp_20[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_0)));
    __Vtemp_20[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_20[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_20[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_20[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_20[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_20[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_20[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_20[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_20[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_20[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_20[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_20[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_20[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_20[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_20[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_20[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_21, __Vtemp_20, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_21[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_21[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_21[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_21[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_21[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_21[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_21[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_21[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_21[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_21[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_21[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_21[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_21[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_21[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_21[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_21[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_21[0x10U]);
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
    __Vtemp_22[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kRaw_1)));
    __Vtemp_22[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_22[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_22[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_22[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_22[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_22[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_22[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_22[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_22[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_22[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_22[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_22[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_22[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_22[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_22[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_22[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_23, __Vtemp_22, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_23[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_23[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_23[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_23[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_23[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_23[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_23[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_23[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_23[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_23[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_23[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_23[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_23[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_23[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_23[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_23[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_23[0x10U]);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_in 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT___magnitude_T_1 
        = (- AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarExp__io_in);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_ready 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__descriptorDma__io_memReq_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid));
    AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_memReq_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadSelected) 
           & (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_valid 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__tileReadSelected));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadOut_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadOut_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready;
    vlSelf->AtikAxiTop__DOT__control__DOT__io_statusWord 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_statusWord 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT___core_io_statusWord = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_statusWord 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__statusRegs__DOT__io_word;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_base;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_valid = 1U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid_0 = 1U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_base;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_stride;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_rows;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_valid = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid_0 = 0U;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_base;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_stride;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_rows;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready = 0U;
    }
    vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr 
        = ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awFire)
            ? (IData)(vlSelf->s_axi_ctrl_awaddr) : (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awAddr));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_valid 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadOut_ready) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadOut_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_valid 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadOut_ready) 
           & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadOut_valid));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_tilesComputed 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed;
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
    vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__bValid)) 
           & (((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awHeld) 
               | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__awFire)) 
              & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wHeld) 
                 | (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__wFire))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0) 
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
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h9b7b7248__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_4) 
           | ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_7) 
              | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_9)));
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
    __VdfgTmp_h70f47b28__0 = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_softmaxActive_T_15) 
                              & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__doneReg) 
                                 & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_10) 
                                    & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_11))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesComputed_T_3) 
           | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_h6bd7686e__0));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_run 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_run;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_readIndex 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_counterIndex;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_descAddr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_descAddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_error 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_error;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileReadCmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_memReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_valid)
            ? vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_bits_addr
            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memReq_bits_addr);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaWriteActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaWriteActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive 
            = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadActive;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteActive));
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaWriteActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaWriteActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaWriteActive;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive 
            = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadActive));
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaReadActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_dmaReadActive 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaReadActive) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_active));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memResp_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteResp_valid;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_cmd_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_cmd_valid_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileWriteCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileWriteCmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_tileReadCmd_valid 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileReadSelected 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid)) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_tileReadCmd_valid));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_beatIssued 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_ready 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_4 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_out_ready) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_base 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_stride 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall 
        = (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadCmd_ready)) 
            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid)) 
           | ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileWriteCmd_ready)) 
              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteCmd_valid)));
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN = (0U 
                                                   == (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedAwAddr));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded 
        = (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T) 
                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb536d075__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___aSrams_1_io_wen_T) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hbcd473a8__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___bSrams_1_io_wen_T) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT___event_tilesLoaded_T));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded 
        = (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T) 
                           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last))));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hb834bd68__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T));
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____VdfgTmp_hd88fd5c8__0 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___io_tileReadOut_ready_T_1) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___event_tilesLoaded_T));
    __Vtemp_30[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_0__io_in)));
    __Vtemp_30[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_30[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_30[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_30[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_30[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_30[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_30[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_30[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_30[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_30[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_30[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_30[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_30[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_30[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_30[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_30[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_31, __Vtemp_30, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_31[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_31[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_31[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_31[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_31[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_31[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_31[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_31[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_31[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_31[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_31[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_31[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_31[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_31[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_31[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_31[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_31[0x10U]);
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
    __Vtemp_32[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (0x7fU & (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__vConverters_1__io_in)));
    __Vtemp_32[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_32[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_32[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_32[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_32[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_32[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_32[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_32[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_32[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_32[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_32[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_32[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_32[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_32[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_32[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_32[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_33, __Vtemp_32, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_33[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_33[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_33[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_33[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_33[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_33[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_33[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_33[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_33[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_33[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_33[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_33[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_33[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_33[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_33[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_33[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_33[0x10U]);
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
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN_2 = 
        (1U & ((vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
                >> 1U) & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy)) 
                          & ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_busy)) 
                             & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__startPending))))));
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN_0 = 
        (1U & (vlSelf->AtikAxiTop__DOT__control__DOT__selectedWData 
               & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_status_busy)) 
                  & (~ (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__startPending)))));
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shift_T_4)
            : 0U);
    AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0 
        = (VL_LTS_III(9, 0U, (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4))
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shift_T_4)
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_1_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_0_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshAccIn_1_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshAccIn_1_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shift_T_4 
        = (0x1ffU & ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hb2641d12__0) 
                     - (IData)(0x7bU)));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive 
        = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)) 
           & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
              & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_softmaxActive)));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_cols 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
    vlSelf->AtikAxiTop__DOT___core_io_memReadReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__reset 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__reset;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaReadActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_dmaReadActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_bytesRead 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_bytesRead;
    __VdfgTmp_h02c400c1__0 = (0xffffffU & ((0x8000U 
                                            & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16))
                                            ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__clipped)
                                            : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__clipped));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_bits_rows 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileReader_io_cmd_valid_T 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileReadCmd_valid) 
           | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileReadSelected));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadCmd_ready 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionTileReadSelected) 
           & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_cmd_ready));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarExp_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarExp__DOT__io_out;
    vlSelf->AtikAxiTop__DOT___dma_io_memWriteReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready_0 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteReq_ready 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0 = ((IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memWriteReq_ready) 
                                                 & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_valid));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__control__DOT___GEN_1 = 
        ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT__commitWrite) 
         & ((IData)(vlSelf->AtikAxiTop__DOT__control__DOT___GEN) 
            & (IData)(vlSelf->AtikAxiTop__DOT__control__DOT__selectedWStrb)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulEvents_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_events_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesLoaded;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_tilesLoaded 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesLoaded;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__shifted)));
    __Vtemp_34[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_h4dc7d89f__0));
    __Vtemp_34[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_34[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_34[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_34[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_34[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_34[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_34[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_34[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_34[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_34[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_34[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_34[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_34[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_34[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_34[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_34[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_35, __Vtemp_34, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_35[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_35[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_35[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_35[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_35[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_35[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_35[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_35[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_35[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_35[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_35[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_35[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_35[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_35[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_35[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_35[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_35[0x10U]);
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
    __Vtemp_36[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_h4dc7d89f__0));
    __Vtemp_36[1U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[1U] 
                                    << 7U));
    __Vtemp_36[2U] = ((Vtop__ConstPool__CONST_h1c449781_0[1U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[2U] 
                                    << 7U));
    __Vtemp_36[3U] = ((Vtop__ConstPool__CONST_h1c449781_0[2U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[3U] 
                                    << 7U));
    __Vtemp_36[4U] = ((Vtop__ConstPool__CONST_h1c449781_0[3U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[4U] 
                                    << 7U));
    __Vtemp_36[5U] = ((Vtop__ConstPool__CONST_h1c449781_0[4U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[5U] 
                                    << 7U));
    __Vtemp_36[6U] = ((Vtop__ConstPool__CONST_h1c449781_0[5U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[6U] 
                                    << 7U));
    __Vtemp_36[7U] = ((Vtop__ConstPool__CONST_h1c449781_0[6U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[7U] 
                                    << 7U));
    __Vtemp_36[8U] = ((Vtop__ConstPool__CONST_h1c449781_0[7U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[8U] 
                                    << 7U));
    __Vtemp_36[9U] = ((Vtop__ConstPool__CONST_h1c449781_0[8U] 
                       >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[9U] 
                                    << 7U));
    __Vtemp_36[0xaU] = ((Vtop__ConstPool__CONST_h1c449781_0[9U] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                                      << 7U));
    __Vtemp_36[0xbU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xaU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                                      << 7U));
    __Vtemp_36[0xcU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xbU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                                      << 7U));
    __Vtemp_36[0xdU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xcU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                                      << 7U));
    __Vtemp_36[0xeU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xdU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                                      << 7U));
    __Vtemp_36[0xfU] = ((Vtop__ConstPool__CONST_h1c449781_0[0xeU] 
                         >> 0x19U) | (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                                      << 7U));
    __Vtemp_36[0x10U] = (Vtop__ConstPool__CONST_h1c449781_0[0xfU] 
                         >> 0x19U);
    VL_SHIFTL_WWI(519,519,9, __Vtemp_37, __Vtemp_36, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_37[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_37[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_37[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_37[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_37[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_37[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_37[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_37[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_37[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_37[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_37[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_37[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_37[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_37[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_37[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_37[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_37[0x10U]);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_shiftSoftmax 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_shiftSoftmax;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarMul__io_start;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_in 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
        = ((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_hb2d8fbf0__0)
            ? (1ULL + ((IData)(__VdfgTmp_h70f47b28__0)
                        ? (~ vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarMul__DOT__io_outAccum)
                        : 0xffffffffffffffffULL)) : AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__scalarOutConverter__io_in);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_softmaxActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_softmaxActive;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_out 
        = ((0U == (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__descReg_scaleBf16) 
                            >> 7U))) ? 0U : __VdfgTmp_h02c400c1__0);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__clock 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__clock;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qConverters_0_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___qConverters_1_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kConverters_0_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___kConverters_1_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteReq_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memWriteReq_ready;
    vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_1 = (1U 
                                                 & ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready)) 
                                                    | ((~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0)) 
                                                       | (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN))));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_1_0;
    __Vtemp_38[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_h4dc7d89f__0));
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
    VL_SHIFTL_WWI(519,519,9, __Vtemp_39, __Vtemp_38, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_39[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_39[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_39[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_39[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_39[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_39[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_39[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_39[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_39[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_39[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_39[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_39[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_39[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_39[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_39[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_39[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_39[0x10U]);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_0_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_3__DOT__io_accIn 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_accIn_1_1;
    __Vtemp_40[0U] = ((Vtop__ConstPool__CONST_h1c449781_0[0U] 
                       << 7U) | (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_h4dc7d89f__0));
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
    VL_SHIFTL_WWI(519,519,9, __Vtemp_41, __Vtemp_40, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT____VdfgTmp_hf9c25935__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0U] & 
           __Vtemp_41[0U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[1U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[1U] & 
           __Vtemp_41[1U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[2U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[2U] & 
           __Vtemp_41[2U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[3U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[3U] & 
           __Vtemp_41[3U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[4U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[4U] & 
           __Vtemp_41[4U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[5U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[5U] & 
           __Vtemp_41[5U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[6U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[6U] & 
           __Vtemp_41[6U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[7U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[7U] & 
           __Vtemp_41[7U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[8U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[8U] & 
           __Vtemp_41[8U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[9U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[9U] & 
           __Vtemp_41[9U]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xaU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xaU] 
           & __Vtemp_41[0xaU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xbU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xbU] 
           & __Vtemp_41[0xbU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xcU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xcU] 
           & __Vtemp_41[0xcU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xdU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xdU] 
           & __Vtemp_41[0xdU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xeU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xeU] 
           & __Vtemp_41[0xeU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0xfU] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0xfU] 
           & __Vtemp_41[0xfU]);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT___shifted_T[0x10U] 
        = (Vtop__ConstPool__CONST_h00a54071_0[0x10U] 
           & __Vtemp_41[0x10U]);
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
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshActive;
    } else if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_computeActive;
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed = 0ULL;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_tilesComputed 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_tilesComputed;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive = 0U;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_computeActive 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_computeActive;
    AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0 
        = ((0x18U < (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___msb_T_112))
            ? (0x1fU & ((IData)(8U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___msb_T_112)))
            : 0U);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__matmul__io_tileReadBytes
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0)
                ? AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__attentionOpt__io_tileReadBytes
                : 0ULL));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_bytesRead 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_bytesRead 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesRead 
           + (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_beatIssued) 
                              << 4U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scaleConverter_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scaleConverter__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_clk 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__clock;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionEvents_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshA_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshA_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshA_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_ready 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memWriteReq_ready;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___vConverters_0_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___vConverters_1_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__vConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hab51ffad__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_0) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_hb10540cd__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bRaw_0) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__clipped)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__clipped 
        = ((0U != (0x1ffffffU & (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__shifted 
                                         >> 0x17U))))
            ? 0x7fffffU : (0xffffffU & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__shifted)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT___GEN_5 
        = AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__normalized 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___GEN_3 
           >> (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT____VdfgTmp_hf9e5c612__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedTileWriter_io_bytesWritten 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_bytesWritten;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall 
        = ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN)
            ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_events_dmaStall)
            : ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT___GEN_0) 
               & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_events_dmaStall)));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_bytesRead 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__counters__io_events_bytesRead;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_dmaStall 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_dmaStall;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_wmode 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshB_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___attentionOpt_io_meshB_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshB_1;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshA_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshA_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshB_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshB_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out 
        = ((0U == (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT____VdfgTmp_hb2641d12__0))
            ? 0U : (0xffffffU & (((IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____VdfgTmp_h56863ebb__0) 
                                  & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aRaw_1) 
                                     >> 0xfU)) ? (- vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__clipped)
                                  : vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__clipped)));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0;
    __VdfgTmp_h47518fc4__0 = (((QData)((IData)((0xffffffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0 
                                                                 >> 0x17U))))))) 
                               << 0x18U) | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_a_0)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_0 
        = AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0;
    __VdfgTmp_h0270aa18__0 = (((QData)((IData)((0xffffffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0 
                                                                 >> 0x17U))))))) 
                               << 0x18U) | (QData)((IData)(AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_b_0)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshA_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshA_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_meshB_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshB_1 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bConverters_1__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarRecip_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarRecip__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__counters__DOT__io_events_bytesWritten 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesWritten;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_events_bytesWritten 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_events_bytesWritten;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_matmulStart 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_matmulStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_start 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___controller_io_attentionStart 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__controller__DOT__io_attentionStart;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_a 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_1__DOT__io_a 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_a_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_b 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_2__DOT__io_b 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_b_0;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT___product_T 
        = (0xffffffffffffULL & (__VdfgTmp_h47518fc4__0 
                                * __VdfgTmp_h0270aa18__0));
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
    __Vtemp_43[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude);
    __Vtemp_43[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_43[2U] = 0U;
    __Vtemp_43[3U] = 0U;
    __Vtemp_43[4U] = 0U;
    __Vtemp_43[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_44, __Vtemp_43, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[0U] 
        = __Vtemp_44[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[1U] 
        = __Vtemp_44[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[2U] 
        = __Vtemp_44[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[3U] 
        = __Vtemp_44[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[4U] 
        = __Vtemp_44[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_44[5U]);
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
    __Vtemp_46[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude);
    __Vtemp_46[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_46[2U] = 0U;
    __Vtemp_46[3U] = 0U;
    __Vtemp_46[4U] = 0U;
    __Vtemp_46[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_47, __Vtemp_46, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[0U] 
        = __Vtemp_47[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[1U] 
        = __Vtemp_47[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[2U] 
        = __Vtemp_47[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[3U] 
        = __Vtemp_47[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[4U] 
        = __Vtemp_47[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_1__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_47[5U]);
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
    __Vtemp_49[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude);
    __Vtemp_49[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_49[2U] = 0U;
    __Vtemp_49[3U] = 0U;
    __Vtemp_49[4U] = 0U;
    __Vtemp_49[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_50, __Vtemp_49, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[0U] 
        = __Vtemp_50[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[1U] 
        = __Vtemp_50[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[2U] 
        = __Vtemp_50[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[3U] 
        = __Vtemp_50[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[4U] 
        = __Vtemp_50[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_0__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_50[5U]);
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
    __Vtemp_52[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude);
    __Vtemp_52[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_52[2U] = 0U;
    __Vtemp_52[3U] = 0U;
    __Vtemp_52[4U] = 0U;
    __Vtemp_52[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_53, __Vtemp_52, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[0U] 
        = __Vtemp_53[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[1U] 
        = __Vtemp_53[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[2U] 
        = __Vtemp_53[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[3U] 
        = __Vtemp_53[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[4U] 
        = __Vtemp_53[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_1_1__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_53[5U]);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out 
        = (AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedMesh__io_accIn_0_0 
           + (((QData)((IData)((0xffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT___product_T 
                                                                 >> 0x2fU)))))))) 
               << 0x30U) | vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT___product_T));
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___matmul_io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_tileWriteTile_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__outConverters_0_0__DOT__io_out;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__io_meshOut_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__io_meshOut_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___sharedMesh_io_out_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__io_out_0_0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedMesh__DOT__cell_0__DOT__io_out;
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___unbiasedExp_T_1 
        = (0xffU & ((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T) 
                    - (IData)(0x16U)));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__shiftLeft 
        = (7U > (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___msbIdx_T));
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
    __Vtemp_54[1U] = (IData)((((QData)((IData)(((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6)
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
    __Vtemp_54[2U] = (IData)(((((QData)((IData)(((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_6)
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
           | (__Vtemp_54[1U] << 0x10U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U] 
        = ((__Vtemp_54[1U] >> 0x10U) | (__Vtemp_54[2U] 
                                        << 0x10U));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U] 
        = ((((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__valid_7)
              ? (((0U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7))
                   ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_1)
                   : 0U) | ((1U == (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__candidateCol_7))
                             ? (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_2)
                             : 0U)) : 0U) << 0x10U) 
           | (__Vtemp_54[2U] >> 0x10U));
    __Vtemp_57[0U] = (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude);
    __Vtemp_57[1U] = (IData)((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__magnitude 
                              >> 0x20U));
    __Vtemp_57[2U] = 0U;
    __Vtemp_57[3U] = 0U;
    __Vtemp_57[4U] = 0U;
    __Vtemp_57[5U] = 0U;
    VL_SHIFTL_WWI(191,191,7, __Vtemp_58, __Vtemp_57, (IData)(AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT____VdfgTmp_he071bdfb__0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[0U] 
        = __Vtemp_58[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[1U] 
        = __Vtemp_58[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[2U] 
        = __Vtemp_58[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[3U] 
        = __Vtemp_58[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[4U] 
        = __Vtemp_58[4U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT___normalizedSig_T[5U] 
        = (0x7fffffffU & __Vtemp_58[5U]);
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
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT___scalarOutConverter_io_out 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__scalarOutConverter__DOT__io_out;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index;
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0;
    // Body
    __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 0U;
    if ((1U & ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_1)) 
               | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_out_bits_last)))) {
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN) {
            __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index = 0U;
        }
    } else {
        __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index)));
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_1__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_0__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_1__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_0__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_1__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_0__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_1__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_0__io_wen) {
        __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_data;
        __Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0 = 1U;
    if (vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_2) {
        vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[0U] 
            = vlSelf->m_axi_mem_rdata[0U];
        vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[1U] 
            = vlSelf->m_axi_mem_rdata[1U];
        vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[2U] 
            = vlSelf->m_axi_mem_rdata[2U];
        vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[3U] 
            = vlSelf->m_axi_mem_rdata[3U];
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN_0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[0U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[1U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[2U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__dataReg[3U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U];
    }
    if ((1U & (~ (IData)(vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_1)))) {
        vlSelf->AtikAxiTop__DOT__dma__DOT__writeMaskReg 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memMask;
        vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[0U] 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[0U];
        vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[1U] 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[1U];
        vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[2U] 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[2U];
        vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[3U] 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memData[3U];
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT____Vcellinp__mem_ext__RW0_addr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_1__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__kSrams_0__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_1__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT____Vcellinp__qSrams_0__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_1__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__bSrams_0__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_1__io_wen;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT____Vcellinp__aSrams_0__io_wen;
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT___GEN) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorReader__DOT__io_readCmd_bits_base;
    }
    if (vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadReq_ready) {
        if (vlSelf->AtikAxiTop__DOT__dma__DOT___GEN) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__addressReg 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadReq_bits_addr;
        } else if (vlSelf->AtikAxiTop__DOT__dma__DOT___GEN_0) {
            vlSelf->AtikAxiTop__DOT__dma__DOT__addressReg 
                = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__io_memReq_bits_addr;
        }
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___io_bytesRead_T) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[0U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[1U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[2U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U];
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[3U] 
            = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U];
    }
    if (vlSelf->AtikAxiTop__DOT__control__DOT__awFire) {
        vlSelf->AtikAxiTop__DOT__control__DOT__awAddr 
            = vlSelf->s_axi_ctrl_awaddr;
    }
    if ((1U & (((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_4)) 
                | (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_out_bits_last)) 
               | (~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__nextElemInCachedBeat))))) {
        if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_3) {
            vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
                = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__base 
                   + ((vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___readElemAddr_T 
                       + vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_0) 
                      << 1U));
        }
    } else {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__readElemAddr 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___nextElemAddr_T_4;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_2) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_stride;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__rows 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_rows;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__cols 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_cols;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileReader__io_cmd_bits_base;
    }
    if (vlSelf->AtikAxiTop__DOT__control__DOT__wFire) {
        vlSelf->AtikAxiTop__DOT__control__DOT__wStrb 
            = vlSelf->s_axi_ctrl_wstrb;
        vlSelf->AtikAxiTop__DOT__control__DOT__wData 
            = vlSelf->s_axi_ctrl_wdata;
    }
    if (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT___GEN_3) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__stride 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_stride;
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileWriter__DOT__base 
            = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT____Vcellinp__sharedTileWriter__io_cmd_bits_base;
    }
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index 
        = __Vdly__AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index;
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory__v0;
    }
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[0U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[1U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[2U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__readDataReg[3U];
    vlSelf->m_axi_mem_wstrb = vlSelf->AtikAxiTop__DOT__dma__DOT__writeMaskReg;
    vlSelf->__VdfgTmp_h05a073ee__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_ha414cfa1__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h6ad73bb6__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h70733d82__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h93f172d0__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h370e49b7__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h68a62ad9__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2b66f697__0 = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__Memory
        [vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_raddr_d0];
    vlSelf->m_axi_mem_wdata[0U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[0U];
    vlSelf->m_axi_mem_wdata[1U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[1U];
    vlSelf->m_axi_mem_wdata[2U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[2U];
    vlSelf->m_axi_mem_wdata[3U] = vlSelf->AtikAxiTop__DOT__dma__DOT__writeDataReg[3U];
    vlSelf->__VdfgTmp_hceef11f7__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_he191617f__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h227ee276__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h76aa6a6d__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hd88eaecc__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h679b5da9__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hb5186375__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h37f88d19__0 = ((~ (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT___RW0_ren_d0));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_bits_addr 
        = (vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__base 
           + (QData)((IData)(((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__index) 
                              << 4U))));
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN 
        = (QData)((IData)(vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__stride));
    vlSelf->m_axi_mem_awaddr = vlSelf->AtikAxiTop__DOT__dma__DOT__addressReg;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT___GEN_1[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__dataReg[3U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT___dma_io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__dma__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wstrb = vlSelf->m_axi_mem_wstrb;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wstrb 
        = vlSelf->m_axi_mem_wstrb;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[0U] = 
        vlSelf->m_axi_mem_wdata[0U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[1U] = 
        vlSelf->m_axi_mem_wdata[1U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[2U] = 
        vlSelf->m_axi_mem_wdata[2U];
    vlSelf->AtikAxiTop__DOT__m_axi_mem_wdata[3U] = 
        vlSelf->m_axi_mem_wdata[3U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[0U] 
        = vlSelf->m_axi_mem_wdata[0U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[1U] 
        = vlSelf->m_axi_mem_wdata[1U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[2U] 
        = vlSelf->m_axi_mem_wdata[2U];
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_wdata[3U] 
        = vlSelf->m_axi_mem_wdata[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_hceef11f7__0) ? vlSelf->__VdfgTmp_h05a073ee__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_he191617f__0) ? vlSelf->__VdfgTmp_ha414cfa1__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h227ee276__0) ? vlSelf->__VdfgTmp_h6ad73bb6__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h76aa6a6d__0) ? vlSelf->__VdfgTmp_h70733d82__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_hd88eaecc__0) ? vlSelf->__VdfgTmp_h93f172d0__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h679b5da9__0) ? vlSelf->__VdfgTmp_h370e49b7__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_hb5186375__0) ? vlSelf->__VdfgTmp_h68a62ad9__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata 
        = ((IData)(vlSelf->__VdfgTmp_h37f88d19__0) ? vlSelf->__VdfgTmp_h2b66f697__0
            : 0U);
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT___descriptorDma_io_memReq_bits_addr 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memReq_bits_addr;
    vlSelf->m_axi_mem_araddr = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_awaddr = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__m_axi_mem_araddr = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_awaddr 
        = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__dma__DOT__io_axi_araddr 
        = vlSelf->m_axi_mem_awaddr;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__kSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__attentionOpt__DOT__qSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__bSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_1__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT___mem_ext_RW0_rdata 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__matmul__DOT__aSrams_0__DOT__bank__DOT__mem_ext__DOT__RW0_rdata;
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__descriptorDma__DOT__io_memResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[3U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[0U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[0U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[1U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[1U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[2U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[2U];
    vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__sharedTileReader__DOT__io_memResp_bits_data[3U] 
        = vlSelf->AtikAxiTop__DOT__core__DOT__core__DOT__io_memReadResp_bits_data[3U];
}
