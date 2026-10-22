// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_neuron_dataset__pch.h"
#include "Vtb_neuron_dataset.h"
#include "Vtb_neuron_dataset___024root.h"

// FUNCTIONS
Vtb_neuron_dataset__Syms::~Vtb_neuron_dataset__Syms()
{
}

Vtb_neuron_dataset__Syms::Vtb_neuron_dataset__Syms(VerilatedContext* contextp, const char* namep, Vtb_neuron_dataset* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_neuron_dataset.configure(this, name(), "tb_neuron_dataset", "tb_neuron_dataset", -12, VerilatedScope::SCOPE_OTHER);
}
