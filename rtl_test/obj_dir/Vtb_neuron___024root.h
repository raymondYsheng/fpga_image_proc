// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_neuron.h for the primary calling header

#ifndef VERILATED_VTB_NEURON___024ROOT_H_
#define VERILATED_VTB_NEURON___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_neuron__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_neuron___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_neuron__DOT__result;
    IData/*31:0*/ tb_neuron__DOT__bias;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 63> tb_neuron__DOT__inputs;
    VlUnpacked<SData/*15:0*/, 63> tb_neuron__DOT__weights;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_neuron__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_neuron___024root(Vtb_neuron__Syms* symsp, const char* v__name);
    ~Vtb_neuron___024root();
    VL_UNCOPYABLE(Vtb_neuron___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
