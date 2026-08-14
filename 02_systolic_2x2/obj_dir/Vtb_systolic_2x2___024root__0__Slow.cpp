// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolic_2x2.h for the primary calling header

#include "Vtb_systolic_2x2__pch.h"

void Vtb_systolic_2x2___024root___timing_ready(Vtb_systolic_2x2___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_2x2___024root___eval_static(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_static\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0 
        = vlSelfRef.tb_systolic_2x2__DOT__clk;
    Vtb_systolic_2x2___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_systolic_2x2___024root___eval_final(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_final\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_2x2___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_systolic_2x2___024root___eval_phase__stl(Vtb_systolic_2x2___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_2x2___024root___eval_settle(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_settle\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolic_2x2___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_systolic_2x2.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_systolic_2x2___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_systolic_2x2___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_2x2___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_systolic_2x2___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_systolic_2x2___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD bool Vtb_systolic_2x2___024root___eval_phase__stl(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_phase__stl\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolic_2x2___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_systolic_2x2___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe00__DOT__product 
                        = (0x0000ffffU & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__a0_in))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__b0_in)))));
                    vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe10__DOT__product 
                        = (0x0000ffffU & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__a1_in))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b00_to_10)))));
                    vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe01__DOT__product 
                        = (0x0000ffffU & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a00_to_01))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__b1_in)))));
                    vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe11__DOT__product 
                        = (0x0000ffffU & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a10_to_11))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b01_to_11)))));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_systolic_2x2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_2x2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_systolic_2x2___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_systolic_2x2.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_systolic_2x2.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_systolic_2x2___024root___ctor_var_reset(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___ctor_var_reset\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_systolic_2x2__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3368199507100740194ull);
    vlSelf->tb_systolic_2x2__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11326684205464624788ull);
    vlSelf->tb_systolic_2x2__DOT__a0_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13472226039974232222ull);
    vlSelf->tb_systolic_2x2__DOT__a1_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13644022313017470294ull);
    vlSelf->tb_systolic_2x2__DOT__b0_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10032454328239287801ull);
    vlSelf->tb_systolic_2x2__DOT__b1_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6732635808427437078ull);
    vlSelf->tb_systolic_2x2__DOT__c00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7240405756382889454ull);
    vlSelf->tb_systolic_2x2__DOT__c01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18344571587183055525ull);
    vlSelf->tb_systolic_2x2__DOT__c10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7049476833995237268ull);
    vlSelf->tb_systolic_2x2__DOT__c11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15944497541392250348ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__a00_to_01 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2779119210607376066ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__a10_to_11 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14143767666266600643ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__b00_to_10 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10128585132601570005ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__b01_to_11 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7573407300891533855ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__pe11__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3108021715569809506ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__pe10__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15269793971401639862ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__pe01__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18005535341416450928ull);
    vlSelf->tb_systolic_2x2__DOT__dut__DOT__pe00__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14179292535833571569ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
