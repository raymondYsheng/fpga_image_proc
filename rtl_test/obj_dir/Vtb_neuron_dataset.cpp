// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_neuron_dataset__pch.h"

//============================================================
// Constructors

Vtb_neuron_dataset::Vtb_neuron_dataset(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_neuron_dataset__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_neuron_dataset::Vtb_neuron_dataset(const char* _vcname__)
    : Vtb_neuron_dataset(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_neuron_dataset::~Vtb_neuron_dataset() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_neuron_dataset___024root___eval_debug_assertions(Vtb_neuron_dataset___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_neuron_dataset___024root___eval_static(Vtb_neuron_dataset___024root* vlSelf);
void Vtb_neuron_dataset___024root___eval_initial(Vtb_neuron_dataset___024root* vlSelf);
void Vtb_neuron_dataset___024root___eval_settle(Vtb_neuron_dataset___024root* vlSelf);
void Vtb_neuron_dataset___024root___eval(Vtb_neuron_dataset___024root* vlSelf);

void Vtb_neuron_dataset::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_neuron_dataset::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_neuron_dataset___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_neuron_dataset___024root___eval_static(&(vlSymsp->TOP));
        Vtb_neuron_dataset___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_neuron_dataset___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_neuron_dataset___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_neuron_dataset::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_neuron_dataset::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_neuron_dataset::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_neuron_dataset___024root___eval_final(Vtb_neuron_dataset___024root* vlSelf);

VL_ATTR_COLD void Vtb_neuron_dataset::final() {
    Vtb_neuron_dataset___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_neuron_dataset::hierName() const { return vlSymsp->name(); }
const char* Vtb_neuron_dataset::modelName() const { return "Vtb_neuron_dataset"; }
unsigned Vtb_neuron_dataset::threads() const { return 1; }
void Vtb_neuron_dataset::prepareClone() const { contextp()->prepareClone(); }
void Vtb_neuron_dataset::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_neuron_dataset::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_neuron_dataset::trace()' called on model that was Verilated without --trace option");
}
