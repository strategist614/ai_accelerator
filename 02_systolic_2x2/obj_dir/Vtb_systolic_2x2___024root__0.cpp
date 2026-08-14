// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolic_2x2.h for the primary calling header

#include "Vtb_systolic_2x2__pch.h"

VlCoroutine Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__0(Vtb_systolic_2x2___024root* vlSelf);
VlCoroutine Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__1(Vtb_systolic_2x2___024root* vlSelf);

void Vtb_systolic_2x2___024root___eval_initial(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_initial\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__0(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_2x2__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_systolic_2x2.sv", 
                                             34);
        vlSelfRef.tb_systolic_2x2__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_systolic_2x2__DOT__clk)));
    }
    co_return;
}

void Vtb_systolic_2x2___024root____VbeforeTrig_he01733b1__0(Vtb_systolic_2x2___024root* vlSelf, const char* __VeventDescription);
void Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(Vtb_systolic_2x2___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__1(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_systolic_2x2__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_systolic_2x2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_systolic_2x2__DOT__rst = 1U;
    vlSelfRef.tb_systolic_2x2__DOT__a0_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__a1_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__b0_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__b1_in = 0U;
    tb_systolic_2x2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_systolic_2x2__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_systolic_2x2___024root____VbeforeTrig_he01733b1__0(vlSelf, 
                                                               "@(posedge tb_systolic_2x2.clk)");
        co_await vlSelfRef.__VtrigSched_he01733b1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_systolic_2x2.clk)", 
                                                             "tb_systolic_2x2.sv", 
                                                             45);
        tb_systolic_2x2__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_systolic_2x2__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(vlSelf, 
                                                           "@(negedge tb_systolic_2x2.clk)");
    co_await vlSelfRef.__VtrigSched_he0173300__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_systolic_2x2.clk)", 
                                                         "tb_systolic_2x2.sv", 
                                                         48);
    vlSelfRef.tb_systolic_2x2__DOT__rst = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__a0_in = 1U;
    vlSelfRef.tb_systolic_2x2__DOT__a1_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__b0_in = 5U;
    vlSelfRef.tb_systolic_2x2__DOT__b1_in = 0U;
    Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(vlSelf, 
                                                           "@(negedge tb_systolic_2x2.clk)");
    co_await vlSelfRef.__VtrigSched_he0173300__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_systolic_2x2.clk)", 
                                                         "tb_systolic_2x2.sv", 
                                                         58);
    vlSelfRef.tb_systolic_2x2__DOT__a0_in = 2U;
    vlSelfRef.tb_systolic_2x2__DOT__a1_in = 3U;
    vlSelfRef.tb_systolic_2x2__DOT__b0_in = 7U;
    vlSelfRef.tb_systolic_2x2__DOT__b1_in = 6U;
    Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(vlSelf, 
                                                           "@(negedge tb_systolic_2x2.clk)");
    co_await vlSelfRef.__VtrigSched_he0173300__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_systolic_2x2.clk)", 
                                                         "tb_systolic_2x2.sv", 
                                                         67);
    vlSelfRef.tb_systolic_2x2__DOT__a0_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__a1_in = 4U;
    vlSelfRef.tb_systolic_2x2__DOT__b0_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__b1_in = 8U;
    Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(vlSelf, 
                                                           "@(negedge tb_systolic_2x2.clk)");
    co_await vlSelfRef.__VtrigSched_he0173300__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_systolic_2x2.clk)", 
                                                         "tb_systolic_2x2.sv", 
                                                         76);
    vlSelfRef.tb_systolic_2x2__DOT__a0_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__a1_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__b0_in = 0U;
    vlSelfRef.tb_systolic_2x2__DOT__b1_in = 0U;
    Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(vlSelf, 
                                                           "@(negedge tb_systolic_2x2.clk)");
    co_await vlSelfRef.__VtrigSched_he0173300__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_systolic_2x2.clk)", 
                                                         "tb_systolic_2x2.sv", 
                                                         85);
    VL_WRITEF_NX("C =\n[%0d %0d]\n[%0d %0d]\n",4, '~',32,vlSelfRef.tb_systolic_2x2__DOT__c00
                 , '~',32,vlSelfRef.tb_systolic_2x2__DOT__c01
                 , '~',32,vlSelfRef.tb_systolic_2x2__DOT__c10
                 , '~',32,vlSelfRef.tb_systolic_2x2__DOT__c11);
    if (((((0x00000013U == vlSelfRef.tb_systolic_2x2__DOT__c00) 
           & (0x00000016U == vlSelfRef.tb_systolic_2x2__DOT__c01)) 
          & (0x0000002bU == vlSelfRef.tb_systolic_2x2__DOT__c10)) 
         & (0x00000032U == vlSelfRef.tb_systolic_2x2__DOT__c11))) {
        VL_WRITEF_NX("PASS\n",0);
    } else {
        VL_WRITEF_NX("FAIL\n",0);
    }
    VL_FINISH_MT("tb_systolic_2x2.sv", 102, "");
    co_return;
}

bool Vtb_systolic_2x2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___trigger_anySet__act\n"); );
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

void Vtb_systolic_2x2___024root___timing_ready(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___timing_ready\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he01733b1__0.ready("@(posedge tb_systolic_2x2.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he0173300__0.ready("@(negedge tb_systolic_2x2.clk)");
    }
}

void Vtb_systolic_2x2___024root___timing_resume(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___timing_resume\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he01733b1__0.moveToResumeQueue(
                                                          "@(posedge tb_systolic_2x2.clk)");
    vlSelfRef.__VtrigSched_he0173300__0.moveToResumeQueue(
                                                          "@(negedge tb_systolic_2x2.clk)");
    vlSelfRef.__VtrigSched_he01733b1__0.resume("@(posedge tb_systolic_2x2.clk)");
    vlSelfRef.__VtrigSched_he0173300__0.resume("@(negedge tb_systolic_2x2.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_systolic_2x2___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_systolic_2x2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_systolic_2x2___024root___eval_phase__act(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_phase__act\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.tb_systolic_2x2__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0)) 
                                                          << 2U) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_systolic_2x2__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0 
            = vlSelfRef.tb_systolic_2x2__DOT__clk;
    }
    Vtb_systolic_2x2___024root___timing_ready(vlSelf);
    Vtb_systolic_2x2___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolic_2x2___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_systolic_2x2___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_systolic_2x2___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_systolic_2x2___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
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
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_systolic_2x2___024root___eval_phase__inact(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_phase__inact\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_systolic_2x2.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_systolic_2x2___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_systolic_2x2___024root___eval_phase__nba(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_phase__nba\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_systolic_2x2___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.tb_systolic_2x2__DOT__rst) {
                        vlSelfRef.tb_systolic_2x2__DOT__c11 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__c10 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__c01 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__c00 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a10_to_11 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b01_to_11 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b00_to_10 = 0U;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a00_to_01 = 0U;
                    } else {
                        vlSelfRef.tb_systolic_2x2__DOT__c11 
                            = (vlSelfRef.tb_systolic_2x2__DOT__c11 
                               + (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe11__DOT__product) 
                                                >> 0x0000000fU)))) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe11__DOT__product)));
                        vlSelfRef.tb_systolic_2x2__DOT__c10 
                            = (vlSelfRef.tb_systolic_2x2__DOT__c10 
                               + (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe10__DOT__product) 
                                                >> 0x0000000fU)))) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe10__DOT__product)));
                        vlSelfRef.tb_systolic_2x2__DOT__c01 
                            = (vlSelfRef.tb_systolic_2x2__DOT__c01 
                               + (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe01__DOT__product) 
                                                >> 0x0000000fU)))) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe01__DOT__product)));
                        vlSelfRef.tb_systolic_2x2__DOT__c00 
                            = (vlSelfRef.tb_systolic_2x2__DOT__c00 
                               + (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe00__DOT__product) 
                                                >> 0x0000000fU)))) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe00__DOT__product)));
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a10_to_11 
                            = vlSelfRef.tb_systolic_2x2__DOT__a1_in;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b01_to_11 
                            = vlSelfRef.tb_systolic_2x2__DOT__b1_in;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b00_to_10 
                            = vlSelfRef.tb_systolic_2x2__DOT__b0_in;
                        vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a00_to_01 
                            = vlSelfRef.tb_systolic_2x2__DOT__a0_in;
                    }
                    vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__pe11__DOT__product 
                        = (0x0000ffffU & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__a10_to_11))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tb_systolic_2x2__DOT__dut__DOT__b01_to_11)))));
                }
            }
            if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
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
                }
            }
        }
        Vtb_systolic_2x2___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_systolic_2x2___024root___eval(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolic_2x2___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_systolic_2x2.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_systolic_2x2.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_systolic_2x2___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_systolic_2x2.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_systolic_2x2___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_systolic_2x2___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_systolic_2x2___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_systolic_2x2___024root____VbeforeTrig_he01733b1__0(Vtb_systolic_2x2___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root____VbeforeTrig_he01733b1__0\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_systolic_2x2__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_systolic_2x2__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0 
        = vlSelfRef.tb_systolic_2x2__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he01733b1__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0(Vtb_systolic_2x2___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root____VbeforeTrig_he0173300__0\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_systolic_2x2__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_systolic_2x2__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0 
        = vlSelfRef.tb_systolic_2x2__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he01733b1__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he0173300__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_systolic_2x2___024root___eval_debug_assertions(Vtb_systolic_2x2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_2x2___024root___eval_debug_assertions\n"); );
    Vtb_systolic_2x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
