// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_neuron_dataset.h for the primary calling header

#ifndef VERILATED_VTB_NEURON_DATASET___024ROOT_H_
#define VERILATED_VTB_NEURON_DATASET___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_neuron_dataset__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_neuron_dataset___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_neuron_dataset__DOT__result;
    SData/*15:0*/ tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
    IData/*31:0*/ tb_neuron_dataset__DOT__bias;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 63> tb_neuron_dataset__DOT__inputs;
    VlUnpacked<SData/*15:0*/, 63> tb_neuron_dataset__DOT__weights;
    VlUnpacked<SData/*15:0*/, 14868> tb_neuron_dataset__DOT__input_memory;
    VlUnpacked<SData/*15:0*/, 236> tb_neuron_dataset__DOT__expected_memory;
    VlUnpacked<IData/*31:0*/, 1> tb_neuron_dataset__DOT__bias_memory;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_neuron_dataset__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_neuron_dataset___024root(Vtb_neuron_dataset__Syms* symsp, const char* v__name);
    ~Vtb_neuron_dataset___024root();
    VL_UNCOPYABLE(Vtb_neuron_dataset___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
