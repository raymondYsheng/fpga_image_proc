// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_neuron.h for the primary calling header

#include "Vtb_neuron__pch.h"
#include "Vtb_neuron___024root.h"

VlCoroutine Vtb_neuron___024root___eval_initial__TOP__Vtiming__0(Vtb_neuron___024root* vlSelf);

void Vtb_neuron___024root___eval_initial(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval_initial\n"); );
    // Body
    Vtb_neuron___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vtb_neuron___024root___act_sequent__TOP__0(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_neuron__DOT__dut__DOT__product;
    tb_neuron__DOT__dut__DOT__product = 0;
    QData/*47:0*/ tb_neuron__DOT__dut__DOT__accumulator;
    tb_neuron__DOT__dut__DOT__accumulator = 0;
    QData/*47:0*/ tb_neuron__DOT__dut__DOT__shift;
    tb_neuron__DOT__dut__DOT__shift = 0;
    // Body
    tb_neuron__DOT__dut__DOT__accumulator = (((QData)((IData)(
                                                              (0xffffU 
                                                               & (- (IData)(
                                                                            (vlSelf->tb_neuron__DOT__bias 
                                                                             >> 0x1fU)))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->tb_neuron__DOT__bias)));
    tb_neuron__DOT__dut__DOT__shift = 0ULL;
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [1U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [1U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [2U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [2U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [3U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [3U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [4U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [4U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [5U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [5U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [6U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [6U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [7U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [7U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [8U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [8U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [9U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [9U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0xaU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0xaU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0xbU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0xbU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0xcU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0xcU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0xdU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0xdU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0xeU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0xeU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0xfU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0xfU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x10U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x10U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x11U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x11U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x12U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x12U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x13U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x13U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x14U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x14U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x15U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x15U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x16U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x16U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x17U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x17U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x18U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x18U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x19U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x19U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x1aU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x1aU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x1bU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x1bU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x1cU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x1cU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x1dU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x1dU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x1eU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x1eU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x1fU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x1fU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x20U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x20U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x21U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x21U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x22U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x22U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x23U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x23U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x24U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x24U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x25U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x25U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x26U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x26U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x27U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x27U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x28U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x28U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x29U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x29U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x2aU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x2aU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x2bU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x2bU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x2cU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x2cU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x2dU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x2dU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x2eU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x2eU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x2fU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x2fU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x30U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x30U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x31U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x31U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x32U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x32U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x33U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x33U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x34U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x34U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x35U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x35U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x36U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x36U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x37U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x37U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x38U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x38U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x39U]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x39U]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x3aU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x3aU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x3bU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x3bU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x3cU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x3cU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x3dU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x3dU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    tb_neuron__DOT__dut__DOT__product = VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__inputs
                                                                  [0x3eU]), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  vlSelf->tb_neuron__DOT__weights
                                                                  [0x3eU]));
    tb_neuron__DOT__dut__DOT__accumulator = (0xffffffffffffULL 
                                             & (tb_neuron__DOT__dut__DOT__accumulator 
                                                + (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (- (IData)(
                                                                                (tb_neuron__DOT__dut__DOT__product 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(tb_neuron__DOT__dut__DOT__product)))));
    if (VL_GTES_IQQ(48, 0ULL, tb_neuron__DOT__dut__DOT__accumulator)) {
        vlSelf->tb_neuron__DOT__result = 0U;
    } else {
        tb_neuron__DOT__dut__DOT__shift = (0xffffffffffffULL 
                                           & VL_SHIFTRS_QQI(48,48,32, tb_neuron__DOT__dut__DOT__accumulator, 0xaU));
        vlSelf->tb_neuron__DOT__result = (VL_LTS_IQQ(48, 0x7fffULL, tb_neuron__DOT__dut__DOT__shift)
                                           ? 0x7fffU
                                           : (0xffffU 
                                              & (IData)(tb_neuron__DOT__dut__DOT__shift)));
    }
}

void Vtb_neuron___024root___eval_act(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_neuron___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_neuron___024root___eval_nba(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_neuron___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_neuron___024root___timing_resume(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_neuron___024root___eval_triggers__act(Vtb_neuron___024root* vlSelf);

bool Vtb_neuron___024root___eval_phase__act(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_neuron___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_neuron___024root___timing_resume(vlSelf);
        Vtb_neuron___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_neuron___024root___eval_phase__nba(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_neuron___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_neuron___024root___dump_triggers__nba(Vtb_neuron___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_neuron___024root___dump_triggers__act(Vtb_neuron___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_neuron___024root___eval(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_neuron___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_neuron.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_neuron___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_neuron.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_neuron___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_neuron___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_neuron___024root___eval_debug_assertions(Vtb_neuron___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
