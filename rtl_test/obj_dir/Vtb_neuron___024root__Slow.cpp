// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_neuron.h for the primary calling header

#include "Vtb_neuron__pch.h"
#include "Vtb_neuron__Syms.h"
#include "Vtb_neuron___024root.h"

void Vtb_neuron___024root___ctor_var_reset(Vtb_neuron___024root* vlSelf);

Vtb_neuron___024root::Vtb_neuron___024root(Vtb_neuron__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_neuron___024root___ctor_var_reset(this);
}

void Vtb_neuron___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_neuron___024root::~Vtb_neuron___024root() {
}
