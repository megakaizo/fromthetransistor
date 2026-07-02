// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vblink_led__pch.h"

//============================================================
// Constructors

Vblink_led::Vblink_led(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vblink_led__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vblink_led::Vblink_led(const char* _vcname__)
    : Vblink_led(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vblink_led::~Vblink_led() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vblink_led___024root___eval_debug_assertions(Vblink_led___024root* vlSelf);
#endif  // VL_DEBUG
void Vblink_led___024root___eval_static(Vblink_led___024root* vlSelf);
void Vblink_led___024root___eval_initial(Vblink_led___024root* vlSelf);
void Vblink_led___024root___eval_settle(Vblink_led___024root* vlSelf);
void Vblink_led___024root___eval(Vblink_led___024root* vlSelf);

void Vblink_led::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vblink_led::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vblink_led___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vblink_led___024root___eval_static(&(vlSymsp->TOP));
        Vblink_led___024root___eval_initial(&(vlSymsp->TOP));
        Vblink_led___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vblink_led___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vblink_led::eventsPending() { return false; }

uint64_t Vblink_led::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vblink_led::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vblink_led___024root___eval_final(Vblink_led___024root* vlSelf);

VL_ATTR_COLD void Vblink_led::final() {
    Vblink_led___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vblink_led::hierName() const { return vlSymsp->name(); }
const char* Vblink_led::modelName() const { return "Vblink_led"; }
unsigned Vblink_led::threads() const { return 1; }
void Vblink_led::prepareClone() const { contextp()->prepareClone(); }
void Vblink_led::atClone() const {
    contextp()->threadPoolpOnClone();
}
