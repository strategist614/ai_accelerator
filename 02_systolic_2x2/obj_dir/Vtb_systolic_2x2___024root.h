// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_systolic_2x2.h for the primary calling header

#ifndef VERILATED_VTB_SYSTOLIC_2X2___024ROOT_H_
#define VERILATED_VTB_SYSTOLIC_2X2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_systolic_2x2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_systolic_2x2___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_systolic_2x2__DOT__clk;
    CData/*0:0*/ tb_systolic_2x2__DOT__rst;
    CData/*7:0*/ tb_systolic_2x2__DOT__a0_in;
    CData/*7:0*/ tb_systolic_2x2__DOT__a1_in;
    CData/*7:0*/ tb_systolic_2x2__DOT__b0_in;
    CData/*7:0*/ tb_systolic_2x2__DOT__b1_in;
    CData/*7:0*/ tb_systolic_2x2__DOT__dut__DOT__a00_to_01;
    CData/*7:0*/ tb_systolic_2x2__DOT__dut__DOT__a10_to_11;
    CData/*7:0*/ tb_systolic_2x2__DOT__dut__DOT__b00_to_10;
    CData/*7:0*/ tb_systolic_2x2__DOT__dut__DOT__b01_to_11;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_systolic_2x2__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_systolic_2x2__DOT__dut__DOT__pe11__DOT__product;
    SData/*15:0*/ tb_systolic_2x2__DOT__dut__DOT__pe10__DOT__product;
    SData/*15:0*/ tb_systolic_2x2__DOT__dut__DOT__pe01__DOT__product;
    SData/*15:0*/ tb_systolic_2x2__DOT__dut__DOT__pe00__DOT__product;
    IData/*31:0*/ tb_systolic_2x2__DOT__c00;
    IData/*31:0*/ tb_systolic_2x2__DOT__c01;
    IData/*31:0*/ tb_systolic_2x2__DOT__c10;
    IData/*31:0*/ tb_systolic_2x2__DOT__c11;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he01733b1__0;
    VlTriggerScheduler __VtrigSched_he0173300__0;

    // INTERNAL VARIABLES
    Vtb_systolic_2x2__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_systolic_2x2___024root(Vtb_systolic_2x2__Syms* symsp, const char* namep);
    ~Vtb_systolic_2x2___024root();
    VL_UNCOPYABLE(Vtb_systolic_2x2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
