// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mac_pe.h for the primary calling header

#ifndef VERILATED_VTB_MAC_PE___024ROOT_H_
#define VERILATED_VTB_MAC_PE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mac_pe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mac_pe___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_mac_pe__DOT__clk;
    CData/*0:0*/ tb_mac_pe__DOT__rst;
    CData/*7:0*/ tb_mac_pe__DOT__a;
    CData/*7:0*/ tb_mac_pe__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mac_pe__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_mac_pe__DOT__acc;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_mac_pe__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mac_pe___024root(Vtb_mac_pe__Syms* symsp, const char* namep);
    ~Vtb_mac_pe___024root();
    VL_UNCOPYABLE(Vtb_mac_pe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
