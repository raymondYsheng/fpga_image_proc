// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_neuron_dataset.h for the primary calling header

#include "Vtb_neuron_dataset__pch.h"
#include "Vtb_neuron_dataset__Syms.h"
#include "Vtb_neuron_dataset___024root.h"

void Vtb_neuron_dataset___024root___ctor_var_reset(Vtb_neuron_dataset___024root* vlSelf);

Vtb_neuron_dataset___024root::Vtb_neuron_dataset___024root(Vtb_neuron_dataset__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_neuron_dataset___024root___ctor_var_reset(this);
}

void Vtb_neuron_dataset___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_neuron_dataset___024root::~Vtb_neuron_dataset___024root() {
}
