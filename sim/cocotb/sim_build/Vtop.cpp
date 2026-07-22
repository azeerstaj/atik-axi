// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , aclk{vlSymsp->TOP.aclk}
    , aresetn{vlSymsp->TOP.aresetn}
    , s_axi_ctrl_awprot{vlSymsp->TOP.s_axi_ctrl_awprot}
    , s_axi_ctrl_awvalid{vlSymsp->TOP.s_axi_ctrl_awvalid}
    , s_axi_ctrl_awready{vlSymsp->TOP.s_axi_ctrl_awready}
    , s_axi_ctrl_wstrb{vlSymsp->TOP.s_axi_ctrl_wstrb}
    , s_axi_ctrl_wvalid{vlSymsp->TOP.s_axi_ctrl_wvalid}
    , s_axi_ctrl_wready{vlSymsp->TOP.s_axi_ctrl_wready}
    , s_axi_ctrl_bresp{vlSymsp->TOP.s_axi_ctrl_bresp}
    , s_axi_ctrl_bvalid{vlSymsp->TOP.s_axi_ctrl_bvalid}
    , s_axi_ctrl_bready{vlSymsp->TOP.s_axi_ctrl_bready}
    , s_axi_ctrl_arprot{vlSymsp->TOP.s_axi_ctrl_arprot}
    , s_axi_ctrl_arvalid{vlSymsp->TOP.s_axi_ctrl_arvalid}
    , s_axi_ctrl_arready{vlSymsp->TOP.s_axi_ctrl_arready}
    , s_axi_ctrl_rresp{vlSymsp->TOP.s_axi_ctrl_rresp}
    , s_axi_ctrl_rvalid{vlSymsp->TOP.s_axi_ctrl_rvalid}
    , s_axi_ctrl_rready{vlSymsp->TOP.s_axi_ctrl_rready}
    , m_axi_mem_awid{vlSymsp->TOP.m_axi_mem_awid}
    , m_axi_mem_awlen{vlSymsp->TOP.m_axi_mem_awlen}
    , m_axi_mem_awsize{vlSymsp->TOP.m_axi_mem_awsize}
    , m_axi_mem_awburst{vlSymsp->TOP.m_axi_mem_awburst}
    , m_axi_mem_awlock{vlSymsp->TOP.m_axi_mem_awlock}
    , m_axi_mem_awcache{vlSymsp->TOP.m_axi_mem_awcache}
    , m_axi_mem_awprot{vlSymsp->TOP.m_axi_mem_awprot}
    , m_axi_mem_awqos{vlSymsp->TOP.m_axi_mem_awqos}
    , m_axi_mem_awvalid{vlSymsp->TOP.m_axi_mem_awvalid}
    , m_axi_mem_awready{vlSymsp->TOP.m_axi_mem_awready}
    , m_axi_mem_wlast{vlSymsp->TOP.m_axi_mem_wlast}
    , m_axi_mem_wvalid{vlSymsp->TOP.m_axi_mem_wvalid}
    , m_axi_mem_wready{vlSymsp->TOP.m_axi_mem_wready}
    , m_axi_mem_bid{vlSymsp->TOP.m_axi_mem_bid}
    , m_axi_mem_bresp{vlSymsp->TOP.m_axi_mem_bresp}
    , m_axi_mem_bvalid{vlSymsp->TOP.m_axi_mem_bvalid}
    , m_axi_mem_bready{vlSymsp->TOP.m_axi_mem_bready}
    , m_axi_mem_arid{vlSymsp->TOP.m_axi_mem_arid}
    , m_axi_mem_arlen{vlSymsp->TOP.m_axi_mem_arlen}
    , m_axi_mem_arsize{vlSymsp->TOP.m_axi_mem_arsize}
    , m_axi_mem_arburst{vlSymsp->TOP.m_axi_mem_arburst}
    , m_axi_mem_arlock{vlSymsp->TOP.m_axi_mem_arlock}
    , m_axi_mem_arcache{vlSymsp->TOP.m_axi_mem_arcache}
    , m_axi_mem_arprot{vlSymsp->TOP.m_axi_mem_arprot}
    , m_axi_mem_arqos{vlSymsp->TOP.m_axi_mem_arqos}
    , m_axi_mem_arvalid{vlSymsp->TOP.m_axi_mem_arvalid}
    , m_axi_mem_arready{vlSymsp->TOP.m_axi_mem_arready}
    , m_axi_mem_rid{vlSymsp->TOP.m_axi_mem_rid}
    , m_axi_mem_rresp{vlSymsp->TOP.m_axi_mem_rresp}
    , m_axi_mem_rlast{vlSymsp->TOP.m_axi_mem_rlast}
    , m_axi_mem_rvalid{vlSymsp->TOP.m_axi_mem_rvalid}
    , m_axi_mem_rready{vlSymsp->TOP.m_axi_mem_rready}
    , s_axi_ctrl_awaddr{vlSymsp->TOP.s_axi_ctrl_awaddr}
    , s_axi_ctrl_araddr{vlSymsp->TOP.s_axi_ctrl_araddr}
    , m_axi_mem_wstrb{vlSymsp->TOP.m_axi_mem_wstrb}
    , s_axi_ctrl_wdata{vlSymsp->TOP.s_axi_ctrl_wdata}
    , s_axi_ctrl_rdata{vlSymsp->TOP.s_axi_ctrl_rdata}
    , m_axi_mem_wdata{vlSymsp->TOP.m_axi_mem_wdata}
    , m_axi_mem_rdata{vlSymsp->TOP.m_axi_mem_rdata}
    , m_axi_mem_awaddr{vlSymsp->TOP.m_axi_mem_awaddr}
    , m_axi_mem_araddr{vlSymsp->TOP.m_axi_mem_araddr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on model that was Verilated without --trace option");
}
