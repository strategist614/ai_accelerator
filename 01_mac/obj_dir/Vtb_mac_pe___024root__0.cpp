// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mac_pe.h for the primary calling header

#include "Vtb_mac_pe__pch.h"

VlCoroutine Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_mac_pe___024root* vlSelf);
VlCoroutine Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_mac_pe___024root* vlSelf);

void Vtb_mac_pe___024root___eval_initial(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_initial\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mac_pe__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_mac_pe.sv", 
                                             20);
        vlSelfRef.tb_mac_pe__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_mac_pe__DOT__clk)));
    }
    co_return;
}

VlCoroutine Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mac_pe__DOT__rst = 1U;
    vlSelfRef.tb_mac_pe__DOT__a = 0U;
    vlSelfRef.tb_mac_pe__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000cULL, 
                                         nullptr, "tb_mac_pe.sv", 
                                         28);
    vlSelfRef.tb_mac_pe__DOT__rst = 0U;
    vlSelfRef.tb_mac_pe__DOT__a = 2U;
    vlSelfRef.tb_mac_pe__DOT__b = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mac_pe.sv", 
                                         34);
    vlSelfRef.tb_mac_pe__DOT__a = 0xfcU;
    vlSelfRef.tb_mac_pe__DOT__b = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mac_pe.sv", 
                                         39);
    vlSelfRef.tb_mac_pe__DOT__a = 7U;
    vlSelfRef.tb_mac_pe__DOT__b = 0xfeU;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mac_pe.sv", 
                                         44);
    VL_WRITEF_NX("final acc = %0d\n",1, '~',32,vlSelfRef.tb_mac_pe__DOT__acc);
    if ((0xffffffe4U == vlSelfRef.tb_mac_pe__DOT__acc)) {
        VL_WRITEF_NX("PASS\n",0);
    } else {
        VL_WRITEF_NX("FAIL\n",0);
    }
    VL_FINISH_MT("tb_mac_pe.sv", 53, "");
    co_return;
}

bool Vtb_mac_pe___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___trigger_anySet__act\n"); );
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

void Vtb_mac_pe___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mac_pe___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_mac_pe___024root___eval_phase__act(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_phase__act\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_mac_pe__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mac_pe__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mac_pe__DOT__clk__0 
            = vlSelfRef.tb_mac_pe__DOT__clk;
    }
    Vtb_mac_pe___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mac_pe___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_mac_pe___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_mac_pe___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_mac_pe___024root___eval_phase__inact(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_phase__inact\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_mac_pe.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_mac_pe___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_mac_pe___024root___eval_phase__nba(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_phase__nba\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_mac_pe___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.tb_mac_pe__DOT__acc = 
                        ((IData)(vlSelfRef.tb_mac_pe__DOT__rst)
                          ? 0U : (vlSelfRef.tb_mac_pe__DOT__acc 
                                  + VL_EXTENDS_II(32,16, 
                                                  (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_mac_pe__DOT__a))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_mac_pe__DOT__b))))))));
                }
            }
        }
        Vtb_mac_pe___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_mac_pe___024root___eval(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_mac_pe___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_mac_pe.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_mac_pe.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_mac_pe___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_mac_pe.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_mac_pe___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_mac_pe___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_mac_pe___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_mac_pe___024root___eval_debug_assertions(Vtb_mac_pe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mac_pe___024root___eval_debug_assertions\n"); );
    Vtb_mac_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
