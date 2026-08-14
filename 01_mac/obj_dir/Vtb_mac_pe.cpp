// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mac_pe__pch.h"

//============================================================
// Constructors

Vtb_mac_pe::Vtb_mac_pe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mac_pe__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mac_pe::Vtb_mac_pe(const char* _vcname__)
    : Vtb_mac_pe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mac_pe::~Vtb_mac_pe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mac_pe___024root___eval_debug_assertions(Vtb_mac_pe___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mac_pe___024root___eval_static(Vtb_mac_pe___024root* vlSelf);
void Vtb_mac_pe___024root___eval_initial(Vtb_mac_pe___024root* vlSelf);
void Vtb_mac_pe___024root___eval_settle(Vtb_mac_pe___024root* vlSelf);
void Vtb_mac_pe___024root___eval(Vtb_mac_pe___024root* vlSelf);

void Vtb_mac_pe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mac_pe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mac_pe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_mac_pe___024root___eval_static(&(vlSymsp->TOP));
        Vtb_mac_pe___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_mac_pe___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_mac_pe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_mac_pe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_mac_pe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mac_pe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_mac_pe___024root___eval_final(Vtb_mac_pe___024root* vlSelf);

VL_ATTR_COLD void Vtb_mac_pe::final() {
    contextp()->executingFinal(true);
    Vtb_mac_pe___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mac_pe::hierName() const { return vlSymsp->name(); }
const char* Vtb_mac_pe::modelName() const { return "Vtb_mac_pe"; }
unsigned Vtb_mac_pe::threads() const { return 1; }
void Vtb_mac_pe::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mac_pe::atClone() const {
    contextp()->threadPoolpOnClone();
}
