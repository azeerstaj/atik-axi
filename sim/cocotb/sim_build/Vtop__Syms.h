// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_AtikAxiTop;
    VerilatedScope __Vscope_AtikAxiTop__control;
    VerilatedScope __Vscope_AtikAxiTop__control__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__control__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_AtikAxiTop__core;
    VerilatedScope __Vscope_AtikAxiTop__core__core;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kConverters_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kConverters_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kSrams_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kSrams_0__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kSrams_0__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kSrams_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kSrams_1__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__kSrams_1__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qConverters_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qConverters_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qSrams_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qSrams_0__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qSrams_0__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qSrams_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qSrams_1__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__qSrams_1__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scalarExp;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scalarMul;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scalarMul__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scalarMul__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scalarOutConverter;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scalarRecip;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__scaleConverter;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk13;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk14;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk10;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk10__unnamedblk11;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk10__unnamedblk12;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk5__unnamedblk6;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk7;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk8;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk9;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__vConverters_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__attentionOpt__vConverters_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__controller;
    VerilatedScope __Vscope_AtikAxiTop__core__core__controller__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__controller__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_AtikAxiTop__core__core__counters;
    VerilatedScope __Vscope_AtikAxiTop__core__core__descriptorDma;
    VerilatedScope __Vscope_AtikAxiTop__core__core__descriptorReader;
    VerilatedScope __Vscope_AtikAxiTop__core__core__descriptorReader__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aConverters_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aConverters_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aSrams_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aSrams_0__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aSrams_0__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aSrams_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aSrams_1__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__aSrams_1__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bConverters_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bConverters_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bSrams_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bSrams_0__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bSrams_0__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bSrams_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bSrams_1__bank;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__bSrams_1__bank__mem_ext;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__outConverters_0_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__outConverters_0_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__outConverters_1_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__outConverters_1_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_AtikAxiTop__core__core__matmul__unnamedblk1__unnamedblk3;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedMesh;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedMesh__cell_0;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedMesh__cell_1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedMesh__cell_2;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedMesh__cell_3;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedTileReader;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedTileWriter;
    VerilatedScope __Vscope_AtikAxiTop__core__core__sharedTileWriter__unnamedblk1;
    VerilatedScope __Vscope_AtikAxiTop__core__core__statusRegs;
    VerilatedScope __Vscope_AtikAxiTop__dma;
    VerilatedScope __Vscope_AtikAxiTop__dma__unnamedblk1;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
