// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_NEURON__SYMS_H_
#define VERILATED_VTB_NEURON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_neuron.h"

// INCLUDE MODULE CLASSES
#include "Vtb_neuron___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_neuron__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_neuron* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_neuron___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_neuron;

    // CONSTRUCTORS
    Vtb_neuron__Syms(VerilatedContext* contextp, const char* namep, Vtb_neuron* modelp);
    ~Vtb_neuron__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
