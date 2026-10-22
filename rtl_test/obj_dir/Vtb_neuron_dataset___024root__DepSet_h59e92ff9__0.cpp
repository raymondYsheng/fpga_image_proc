// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_neuron_dataset.h for the primary calling header

#include "Vtb_neuron_dataset__pch.h"
#include "Vtb_neuron_dataset__Syms.h"
#include "Vtb_neuron_dataset___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_neuron_dataset___024root___eval_initial__TOP__Vtiming__0(Vtb_neuron_dataset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron_dataset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron_dataset___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_neuron_dataset__DOT__failures;
    tb_neuron_dataset__DOT__failures = 0;
    IData/*31:0*/ tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id;
    tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x67687473U;
    __Vtemp_1[2U] = 0x776569U;
    VL_READMEM_N(true, 16, 63, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->tb_neuron_dataset__DOT__weights)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1, 0, std::string{"bias.hex"}
                 ,  &(vlSelf->tb_neuron_dataset__DOT__bias_memory)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x70757473U;
    __Vtemp_2[2U] = 0x696eU;
    VL_READMEM_N(true, 16, 14868, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelf->tb_neuron_dataset__DOT__input_memory)
                 , 0, ~0ULL);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x63746564U;
    __Vtemp_3[2U] = 0x65787065U;
    VL_READMEM_N(true, 16, 236, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelf->tb_neuron_dataset__DOT__expected_memory)
                 , 0, ~0ULL);
    vlSelf->tb_neuron_dataset__DOT__bias = vlSelf->tb_neuron_dataset__DOT__bias_memory
        [0U];
    tb_neuron_dataset__DOT__failures = 0U;
    tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id = 0U;
    while (VL_GTS_III(32, 0xecU, tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)) {
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(1U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[1U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(2U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[2U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(3U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(3U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[3U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(4U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(4U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[4U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(5U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(5U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[5U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(6U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(6U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[6U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(7U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(7U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[7U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(8U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(8U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[8U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(9U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(9U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[9U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0xaU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0xaU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0xaU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0xbU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0xbU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0xbU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0xcU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0xcU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0xcU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0xdU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0xdU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0xdU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0xeU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0xeU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0xeU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0xfU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0xfU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0xfU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x10U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x10U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x10U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x11U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x11U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x11U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x12U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x12U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x12U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x13U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x13U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x13U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x14U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x14U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x14U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x15U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x15U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x15U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x16U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x16U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x16U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x17U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x17U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x17U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x18U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x18U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x18U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x19U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x19U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x19U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x1aU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x1aU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x1aU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x1bU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x1bU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x1bU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x1cU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x1cU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x1cU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x1dU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x1dU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x1dU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x1eU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x1eU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x1eU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x1fU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x1fU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x1fU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x20U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x20U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x20U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x21U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x21U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x21U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x22U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x22U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x22U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x23U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x23U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x23U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x24U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x24U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x24U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x25U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x25U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x25U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x26U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x26U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x26U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x27U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x27U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x27U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x28U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x28U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x28U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x29U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x29U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x29U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x2aU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x2aU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x2aU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x2bU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x2bU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x2bU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x2cU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x2cU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x2cU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x2dU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x2dU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x2dU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x2eU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x2eU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x2eU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x2fU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x2fU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x2fU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x30U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x30U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x30U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x31U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x31U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x31U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x32U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x32U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x32U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x33U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x33U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x33U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x34U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x34U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x34U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x35U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x35U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x35U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x36U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x36U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x36U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x37U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x37U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x37U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x38U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x38U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x38U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x39U) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x39U) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x39U] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x3aU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x3aU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x3aU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x3bU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x3bU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x3bU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x3cU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x3cU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x3cU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x3dU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x3dU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x3dU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0 
            = ((0x3a13U >= (0x3fffU & ((IData)(0x3eU) 
                                       + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))))
                ? vlSelf->tb_neuron_dataset__DOT__input_memory
               [(0x3fffU & ((IData)(0x3eU) + VL_MULS_III(32, (IData)(0x3fU), tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)))]
                : 0U);
        vlSelf->tb_neuron_dataset__DOT__inputs[0x3eU] 
            = vlSelf->tb_neuron_dataset__DOT____Vlvbound_h52b0b737__0;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb_neuron_dataset.sv", 
                                           39);
        if (VL_UNLIKELY(((IData)(vlSelf->tb_neuron_dataset__DOT__result) 
                         != ((0xebU >= (0xffU & tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))
                              ? vlSelf->tb_neuron_dataset__DOT__expected_memory
                             [(0xffU & tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)]
                              : 0U)))) {
            VL_WRITEF("FAIL sample %0d: got %0d, expected %0d\n",
                      32,tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id,
                      16,(IData)(vlSelf->tb_neuron_dataset__DOT__result),
                      16,((0xebU >= (0xffU & tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id))
                           ? vlSelf->tb_neuron_dataset__DOT__expected_memory
                          [(0xffU & tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id)]
                           : 0U));
            tb_neuron_dataset__DOT__failures = ((IData)(1U) 
                                                + tb_neuron_dataset__DOT__failures);
        }
        tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id 
            = ((IData)(1U) + tb_neuron_dataset__DOT__unnamedblk1__DOT__sample_id);
    }
    if (VL_UNLIKELY((0U != tb_neuron_dataset__DOT__failures))) {
        VL_WRITEF("[%0t] %%Fatal: tb_neuron_dataset.sv:51: Assertion failed in %Ntb_neuron_dataset: %0d samples failed\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  32,tb_neuron_dataset__DOT__failures);
        VL_STOP_MT("tb_neuron_dataset.sv", 51, "");
    }
    VL_WRITEF("PASS: all 236 neuron outputs match Python.\n");
    VL_FINISH_MT("tb_neuron_dataset.sv", 54, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_neuron_dataset___024root___dump_triggers__act(Vtb_neuron_dataset___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_neuron_dataset___024root___eval_triggers__act(Vtb_neuron_dataset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_neuron_dataset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_neuron_dataset___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_neuron_dataset___024root___dump_triggers__act(vlSelf);
    }
#endif
}
