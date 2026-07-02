// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink_led.h for the primary calling header

#include "Vblink_led__pch.h"

void Vblink_led___024root___eval_triggers_vec__act(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___eval_triggers_vec__act\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

bool Vblink_led___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___trigger_anySet__act\n"); );
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

void Vblink_led___024root___nba_sequent__TOP__0(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___nba_sequent__TOP__0\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__blink_led__DOT__counter;
    __Vdly__blink_led__DOT__counter = 0;
    CData/*0:0*/ __Vdly__led;
    __Vdly__led = 0;
    // Body
    __Vdly__led = vlSelfRef.led;
    __Vdly__blink_led__DOT__counter = vlSelfRef.blink_led__DOT__counter;
    if (vlSelfRef.reset) {
        __Vdly__blink_led__DOT__counter = 0U;
        __Vdly__led = 0U;
    } else if (VL_UNLIKELY((vlSelfRef.blink_led__DOT__s))) {
        __Vdly__led = (1U & ((IData)(vlSelfRef.blink_led__DOT__s)
                              ? (~ (IData)(vlSelfRef.led))
                              : (IData)(vlSelfRef.led)));
        VL_WRITEF_NX("LED: [%b]\n",0,1,(1U & (~ (IData)(vlSelfRef.led))));
        __Vdly__blink_led__DOT__counter = 0U;
    } else {
        __Vdly__blink_led__DOT__counter = ((IData)(1U) 
                                           + vlSelfRef.blink_led__DOT__counter);
    }
    vlSelfRef.led = __Vdly__led;
    vlSelfRef.blink_led__DOT__counter = __Vdly__blink_led__DOT__counter;
    vlSelfRef.blink_led__DOT__s = (0x00989680U <= vlSelfRef.blink_led__DOT__counter);
}

void Vblink_led___024root___eval_nba(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___eval_nba\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter;
    __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__led;
    __Vinline__nba_sequent__TOP__0___Vdly__led = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__led 
            = vlSelfRef.led;
        __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter 
            = vlSelfRef.blink_led__DOT__counter;
        if (vlSelfRef.reset) {
            __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__led = 0U;
        } else if (VL_UNLIKELY((vlSelfRef.blink_led__DOT__s))) {
            __Vinline__nba_sequent__TOP__0___Vdly__led 
                = (1U & ((IData)(vlSelfRef.blink_led__DOT__s)
                          ? (~ (IData)(vlSelfRef.led))
                          : (IData)(vlSelfRef.led)));
            VL_WRITEF_NX("LED: [%b]\n",0,1,(1U & (~ (IData)(vlSelfRef.led))));
            __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter = 0U;
        } else {
            __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter 
                = ((IData)(1U) + vlSelfRef.blink_led__DOT__counter);
        }
        vlSelfRef.led = __Vinline__nba_sequent__TOP__0___Vdly__led;
        vlSelfRef.blink_led__DOT__counter = __Vinline__nba_sequent__TOP__0___Vdly__blink_led__DOT__counter;
        vlSelfRef.blink_led__DOT__s = (0x00989680U 
                                       <= vlSelfRef.blink_led__DOT__counter);
    }
}

void Vblink_led___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vblink_led___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vblink_led___024root___eval_phase__act(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___eval_phase__act\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vblink_led___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vblink_led___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vblink_led___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vblink_led___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vblink_led___024root___eval_phase__nba(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___eval_phase__nba\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vblink_led___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vblink_led___024root___eval_nba(vlSelf);
        Vblink_led___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vblink_led___024root___eval(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___eval\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vblink_led___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("blink_led.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vblink_led___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("blink_led.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vblink_led___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vblink_led___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vblink_led___024root___eval_debug_assertions(Vblink_led___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_led___024root___eval_debug_assertions\n"); );
    Vblink_led__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
