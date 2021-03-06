// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__304(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__304\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___16_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2)) 
                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U] 
                    & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                          >> 0x1fU)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___27_ 
        = (1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U] 
                  >> 1U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U] 
                            >> 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__s 
        = (((0x2cU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xbU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xaU] 
                                              >> 8U)))) 
            << 1U) | (0x2dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xbU] 
                                          << 0x18U) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xaU] 
                                            >> 8U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__a 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[4U] 
                 >> 1U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__Vfuncout 
        = ((1U != (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__s))) 
           & ((2U != (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__s))) 
              & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__a)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0739_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038681__116__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0732_ 
        = (1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xaU] 
                  >> 5U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xaU] 
                            >> 6U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0735_ 
        = (1U & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xaU] 
                   >> 5U) & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[0U]) 
                 | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xaU] 
                     >> 6U) & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT___65_[0U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0162_ 
        = ((0x8000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U])
            ? ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])
                ? VL_ULL(0x900) : (((QData)((IData)(
                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[7U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[6U])) 
                                                    >> 2U))))
            : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[7U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[6U])) 
                                           >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
        = ((0x20000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])) 
                << 0x37U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[1U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U])) 
                                           >> 9U)))
            : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U])) 
                << 0x25U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[7U])) 
                              << 5U) | ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[6U])) 
                                        >> 0x1bU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
        = ((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                   >> 0x1eU) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U] 
                                >> 9U))) ? ((0xf0000000U 
                                             & (((0x20000U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                  ? 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[4U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                     >> 0xeU))
                                                  : 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                   << 6U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                     >> 0x1aU))) 
                                                << 0x1cU)) 
                                            | ((0xf000000U 
                                                & (((0x10000U 
                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                     ? 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[4U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      << 0xaU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                        >> 0x16U))) 
                                                   << 0x18U)) 
                                               | ((0xf00000U 
                                                   & (((0x8000U 
                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                        ? 
                                                       ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[4U] 
                                                         << 0x1aU) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                           >> 6U))
                                                        : 
                                                       ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         << 0xeU) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                           >> 0x12U))) 
                                                      << 0x14U)) 
                                                  | ((0xf0000U 
                                                      & (((0x4000U 
                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                           ? 
                                                          ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[4U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                            << 0x12U) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                              >> 0xeU))) 
                                                         << 0x10U)) 
                                                     | ((0xf000U 
                                                         & (((0x2000U 
                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                              ? 
                                                             ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                               << 2U) 
                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U] 
                                                                 >> 0x1eU))
                                                              : 
                                                             ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                               << 0x16U) 
                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                                 >> 0xaU))) 
                                                            << 0xcU)) 
                                                        | ((0xf00U 
                                                            & (((0x1000U 
                                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                                 ? 
                                                                ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                                  << 6U) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U] 
                                                                    >> 0x1aU))
                                                                 : 
                                                                ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                                  << 0x1aU) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                                    >> 6U))) 
                                                               << 8U)) 
                                                           | ((0xf0U 
                                                               & (((0x800U 
                                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                                    ? 
                                                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                                     << 0xaU) 
                                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U] 
                                                                       >> 0x16U))
                                                                    : 
                                                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                                     << 0x1eU) 
                                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                                       >> 2U))) 
                                                                  << 4U)) 
                                                              | (0xfU 
                                                                 & ((0x400U 
                                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])
                                                                     ? 
                                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                                                      << 0xeU) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U] 
                                                                        >> 0x12U))
                                                                     : 
                                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                                      << 2U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U] 
                                                                        >> 0x1eU)))))))))))
            : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                << 2U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U] 
                          >> 0x1eU)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
        = ((0x10000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])) 
                << 0x37U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[1U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U])) 
                                           >> 9U)))
            : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[6U])) 
                << 0x25U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[5U])) 
                              << 5U) | ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[4U])) 
                                        >> 0x1bU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_ 
        = (0x1fU & ((0x40000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U])
                     ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[4U] 
                         << 0xdU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[3U] 
                                     >> 0x13U)) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                    << 1U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                      >> 0x1fU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
        = ((0x8000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[2U])) 
                << 0x37U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[1U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U])) 
                                           >> 9U)))
            : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[4U])) 
                << 0x25U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U])) 
                              << 5U) | ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                        >> 0x1bU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0663_) 
            << 0x17U) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0658_) 
                          << 0x16U) | (((0x19U == (0x3fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                       << 0x1dU) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                         >> 3U)))) 
                                        << 0x15U) | 
                                       (((0x1cU == 
                                          (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                             << 0x1dU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                               >> 3U)))) 
                                         << 0x14U) 
                                        | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0651_) 
                                            << 0x13U) 
                                           | (((0x2aU 
                                                == 
                                                (0x3fU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                       >> 3U)))) 
                                               << 0x12U) 
                                              | (((0x29U 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                        << 0x1dU) 
                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                          >> 3U)))) 
                                                  << 0x11U) 
                                                 | (((0x28U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                           << 0x1dU) 
                                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                             >> 3U)))) 
                                                     << 0x10U) 
                                                    | (((0x24U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                              << 0x1dU) 
                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                >> 3U)))) 
                                                        << 0xfU) 
                                                       | (((0x26U 
                                                            == 
                                                            (0x3fU 
                                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                 << 0x1dU) 
                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                   >> 3U)))) 
                                                           << 0xeU) 
                                                          | (((0x25U 
                                                               == 
                                                               (0x3fU 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                    << 0x1dU) 
                                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                      >> 3U)))) 
                                                              << 0xdU) 
                                                             | (((0xeU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                       << 0x1dU) 
                                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                         >> 3U)))) 
                                                                 << 0xcU) 
                                                                | (((0x1bU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                          << 0x1dU) 
                                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                            >> 3U)))) 
                                                                    << 0xbU) 
                                                                   | (((0xdU 
                                                                        == 
                                                                        (0x3fU 
                                                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                             << 0x1dU) 
                                                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                               >> 3U)))) 
                                                                       << 0xaU) 
                                                                      | (((0x31U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                          << 9U) 
                                                                         | (((7U 
                                                                              == 
                                                                              (0x3fU 
                                                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                             << 8U) 
                                                                            | (((6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                                << 7U) 
                                                                               | (((5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0288_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0275_) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                                << 3U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                                                >> 3U)))))))))))))))))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
        = (1U | ((((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
                       >> 0xeU)) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0632_)) 
                  << 0x12U) | ((((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
                                     >> 0x14U)) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0450_)) 
                                << 0xeU) | (((0x100U 
                                              != (0x3ffU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      << 0xfU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                        >> 0x11U)))) 
                                             << 2U) 
                                            | (2U & 
                                               ((~ 
                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                  >> 0x11U)) 
                                                << 1U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__Vfuncout 
        = (1U & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s)) 
                        | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                       | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                      | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                     | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                    | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                   | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                  | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s)))
                  ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                      ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b
                      : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                             >> 1U) : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                  >> 6U)
                                                  : 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                  >> 7U))))))))
                  : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s)) 
                            | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                           | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                          | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                         | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                        | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                       | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                      | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s)))
                      ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                             >> 8U) : ((0x200U == (0x200U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                           >> 9U) : 
                                       ((0x400U == 
                                         (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                            >> 0xaU)
                                         : ((0x800U 
                                             == (0x800U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                             ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                >> 0xbU)
                                             : ((0x1000U 
                                                 == 
                                                 (0x1000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                 ? 
                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                 >> 0xcU)
                                                 : 
                                                ((0x2000U 
                                                  == 
                                                  (0x2000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                  >> 0xdU)
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0x4000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                   >> 0xeU)
                                                   : 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                   >> 0xfU))))))))
                      : (((((((((0x10000U == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s)) 
                                | (0x20000U == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                               | (0x40000U == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                              | (0x80000U == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                             | (0x100000U == (0x100000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                            | (0x200000U == (0x200000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                           | (0x400000U == (0x400000U 
                                            & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                          | (0x800000U == (0x800000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))) 
                         & ((0x10000U == (0x10000U 
                                          & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                             ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                >> 0x10U) : ((0x20000U 
                                              == (0x20000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                 >> 0x11U)
                                              : ((0x40000U 
                                                  == 
                                                  (0x40000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                  >> 0x12U)
                                                  : 
                                                 ((0x80000U 
                                                   == 
                                                   (0x80000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                   >> 0x13U)
                                                   : 
                                                  ((0x100000U 
                                                    == 
                                                    (0x100000U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                    ? 
                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                    >> 0x14U)
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0x200000U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                     ? 
                                                    (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                     >> 0x15U)
                                                     : 
                                                    ((0x400000U 
                                                      == 
                                                      (0x400000U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__s))
                                                      ? 
                                                     (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                      >> 0x16U)
                                                      : 
                                                     (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__b 
                                                      >> 0x17U))))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0706_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038565__111__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__305(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__305\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0479_ 
        = ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_) 
               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_)))) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0562_ 
        = ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0553_) 
               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0553_)))) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0553_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2307_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2274_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2308_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2274_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2309_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2275_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2310_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2275_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2311_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2276_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2312_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2276_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2313_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2277_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2314_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2277_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2315_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2278_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2316_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2278_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2317_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2279_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2318_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2279_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2319_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2280_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2320_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2280_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2321_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2281_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2322_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2281_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2323_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2282_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2324_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2282_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2325_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2283_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2326_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2283_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2327_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2284_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2328_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2284_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2329_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2285_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2330_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2285_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2331_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2286_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2332_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2286_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2333_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2287_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2334_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2287_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2335_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2288_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2336_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2288_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2337_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2289_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2338_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2289_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2339_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2290_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2340_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2290_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2341_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2291_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2342_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2291_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2343_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2292_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2344_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2292_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2345_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2293_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2346_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2293_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2347_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2294_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2348_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2294_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2349_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2295_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2350_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2295_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2351_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2296_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2352_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2296_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__306(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__306\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2353_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2297_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2354_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2297_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2355_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2298_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2356_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2298_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2357_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2299_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2358_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2299_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2359_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2300_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2360_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2300_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2361_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2301_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2362_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2301_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2363_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2302_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2364_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2302_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2365_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2303_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2366_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2303_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2367_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2304_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2368_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2304_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2369_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2305_) 
           & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2370_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2305_) 
           & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                             >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Ewr_data 
        = ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U])) 
                << 0x24U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[2U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U])) 
                                        >> 0x1cU)))
            : ((0x40000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                ? VL_ULL(0) : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[0U])))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Ewr_sel_m 
        = ((1U & ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                   ? (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                         >> 4U)) : (((1U == (3U & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                    << 4U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                      >> 0x1cU)))) 
                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U]) 
                                    & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                          >> 0x19U)))))
            ? ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                ? (0xffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                             << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U] 
                                       >> 0x1cU))) : 0xffU)
            : 0U);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Ewr_data 
        = ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U])) 
                << 0x24U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[2U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U])) 
                                        >> 0x1cU)))
            : ((0x40000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                ? VL_ULL(0) : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[0U])))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Ewr_sel_m 
        = ((1U & ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                   ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                      >> 4U) : (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                << 4U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                  >> 0x1cU)))) 
                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U]) 
                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                   >> 0x19U)))) ? (
                                                   (0x80000000U 
                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                                                    ? 
                                                   (0xffU 
                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                                                        << 4U) 
                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U] 
                                                          >> 0x1cU)))
                                                    : 0xffU)
            : 0U);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1048_ 
        = ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U])) 
                << 0x24U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[2U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U])) 
                                        >> 0x1cU)))
            : ((0x40000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                ? VL_ULL(0) : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[0U])))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b 
        = ((0xcU & (VL_NEGATE_I((IData)((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                               >> 0x1fU)))) 
                    << 2U)) | ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                                      << 1U)) | (1U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1fU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1186_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316275__16__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__307(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__307\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1178_ 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
            ? 0U : ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                              >> 2U))) | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1102_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                     >> 1U)) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1136_ 
        = (0xffU & ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
                     ? ((0x80U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2223_) 
                                    & ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                          >> 0x1aU))) 
                                   << 7U) | (0xfff80U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                >> 0xcU)))) 
                        | ((0x40U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2223_) 
                                       & (~ ((IData)(1U) 
                                             - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                >> 0x1aU)))) 
                                      << 6U) | (0xfffc0U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                   >> 0xcU)))) 
                           | ((0x20U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2222_) 
                                          & ((IData)(1U) 
                                             - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                >> 0x1aU))) 
                                         << 5U) | (0xfffe0U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                      >> 0xcU)))) 
                              | ((0x10U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2222_) 
                                             & (~ ((IData)(1U) 
                                                   - 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                    >> 0x1aU)))) 
                                            << 4U) 
                                           | (0xffff0U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                 >> 0xcU)))) 
                                 | ((8U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2221_) 
                                             & ((IData)(1U) 
                                                - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                   >> 0x1aU))) 
                                            << 3U) 
                                           | (0xffff8U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                 >> 0xcU)))) 
                                    | ((4U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2221_) 
                                                & (~ 
                                                   ((IData)(1U) 
                                                    - 
                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                     >> 0x1aU)))) 
                                               << 2U) 
                                              | (0xffffcU 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                    >> 0xcU)))) 
                                       | ((2U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2220_) 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                       >> 0x1aU))) 
                                                  << 1U) 
                                                 | (0xffffeU 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                       >> 0xcU)))) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2220_) 
                                                    & (~ 
                                                       ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                         >> 0x1aU)))) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                      >> 0xcU))))))))))
                     : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                        >> 0xcU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s 
        = (((6U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                           << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                     >> 0x1fU)))) << 6U) 
           | (((3U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                              << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                        >> 0x1fU)))) 
               << 5U) | (((5U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                         << 1U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                   >> 0x1fU)))) 
                          << 4U) | (((4U == (7U & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                    << 1U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                      >> 0x1fU)))) 
                                     << 3U) | (((2U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                      << 1U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                        >> 0x1fU)))) 
                                                << 2U) 
                                               | (((1U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                         << 1U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                           >> 0x1fU)))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                          << 1U) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                            >> 0x1fU))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b 
        = ((0x40U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                     << 4U)) | ((0x20U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                          << 3U)) | 
                                ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                           << 2U)) 
                                 | ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                           << 1U)) 
                                    | ((4U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___177_) 
                                              >> 1U)) 
                                       | ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                 >> 1U)) 
                                          | (1U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                   >> 2U))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__Vfuncout 
        = (1U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 6U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b) 
                                             >> 1U))
                                      : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__s) 
                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__b)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___230_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310532__157__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__308(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__308\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp4136[5];
    WData/*159:0*/ __Vtemp4137[5];
    WData/*95:0*/ __Vtemp4141[3];
    WData/*95:0*/ __Vtemp4144[3];
    WData/*159:0*/ __Vtemp4149[5];
    WData/*95:0*/ __Vtemp4153[3];
    WData/*127:0*/ __Vtemp4154[4];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___225_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___221_) 
           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
               >> 0x13U) & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                             >> 2U) | (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                          >> 2U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[0U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfffffff0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[0U] 
                               << 4U)) | ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                           ? 9U : (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                         << 5U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                           >> 0x1bU))))
                                                    ? 9U
                                                    : 5U)))
            : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                             >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[1U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[0U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[1U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[2U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[1U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[2U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[8U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[3U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[2U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[3U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[8U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[3U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[4U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[5U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[4U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[5U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[6U] 
        = (0x1ffU & ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                      ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[5U] 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[6U] 
                                                   << 4U)))
                      : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                          << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                       >> 5U))));
    __Vtemp4136[0U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                     >> 0xbU));
    __Vtemp4136[1U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                     >> 0xbU));
    __Vtemp4136[2U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                     >> 0xbU));
    __Vtemp4136[3U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                     >> 0xbU));
    __Vtemp4136[4U] = (7U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                             >> 0xbU));
    VL_EXTEND_WW(132,131, __Vtemp4137, __Vtemp4136);
    __Vtemp4141[1U] = ((0xfffffff8U & ((0xf8000000U 
                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                           << 0x10U)) 
                                       | ((0x7f80000U 
                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U]) 
                                          | ((0x7f800U 
                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                  << 0x10U) 
                                                 | (0xf800U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                       >> 0x10U)))) 
                                             | (0x7f8U 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U]))))) 
                       | (IData)(((((QData)((IData)(
                                                    (0xffU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                         << 0x15U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                           >> 0xbU))))) 
                                    << 0x1bU) | (QData)((IData)(
                                                                ((0x7f80000U 
                                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U]) 
                                                                 | ((0x7c0U 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                         << 0xbU) 
                                                                        | (0x7c0U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                              >> 0x15U)))) 
                                                                    | (0x3fU 
                                                                       & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                            << 0x15U) 
                                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                              >> 0xbU)) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                               << 5U) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))) 
                                  >> 0x20U)));
    __Vtemp4144[0U] = ((0x200U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                        ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                            << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                         >> 0xbU)) : 
                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                         ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                             << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                          >> 0xbU))
                         : (IData)((((QData)((IData)(
                                                     (0xffU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                          << 0x15U) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                            >> 0xbU))))) 
                                     << 0x1bU) | (QData)((IData)(
                                                                 ((0x7f80000U 
                                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U]) 
                                                                  | ((0x7c0U 
                                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                          << 0xbU) 
                                                                         | (0x7c0U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x3fU 
                                                                        & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                             << 0x15U) 
                                                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                               >> 0xbU)) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))))));
    __Vtemp4149[2U] = ((0xfffffff8U & ((IData)((((QData)((IData)(
                                                                 ((0xff000000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                      << 0x15U)) 
                                                                  | ((0xff0000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                         << 5U)) 
                                                                     | ((0xff00U 
                                                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                             << 0x15U) 
                                                                            | (0x1fff00U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0xbU)))) 
                                                                        | (0xffU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                               << 5U) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0x1bU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0xff000000U 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                       << 0x15U)) 
                                                                   | ((0xff0000U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                          << 5U)) 
                                                                      | ((0xff00U 
                                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                              << 0x15U) 
                                                                             | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                         | (0xffU 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))) 
                                       << 3U)) | (7U 
                                                  & ((0x400U 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                      ? 
                                                     ((0x200U 
                                                       & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                       ? 
                                                      ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                        << 0x15U) 
                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                          >> 0xbU))
                                                       : 
                                                      ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                                                        ? 
                                                       ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                         << 0x15U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                           >> 0xbU))
                                                        : 
                                                       (7U 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                           >> 0x10U))))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                       << 0x15U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                         >> 0xbU)))));
    __Vtemp4149[3U] = ((7U & ((IData)((((QData)((IData)(
                                                        ((0xff000000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                             << 0x15U)) 
                                                         | ((0xff0000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                << 5U)) 
                                                            | ((0xff00U 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                    << 0x15U) 
                                                                   | (0x1fff00U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                         >> 0xbU)))) 
                                                               | (0xffU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                      << 5U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                        >> 0x1bU)))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                         << 0x15U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                            << 5U)) 
                                                                        | ((0xff00U 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 0x15U) 
                                                                               | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                           | (0xffU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))) 
                              >> 0x1dU)) | (0xfffffff8U 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((0xff000000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                               << 0x15U)) 
                                                                           | ((0xff0000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                << 5U)) 
                                                                              | ((0xff00U 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 0x15U) 
                                                                                | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0xbU)))) 
                                                                                | (0xffU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0x1bU)))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0xff000000U 
                                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 0x15U)) 
                                                                            | ((0xff0000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 5U)) 
                                                                               | ((0xff00U 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 0x15U) 
                                                                                | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                                | (0xffU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU))))))))) 
                                                        >> 0x20U)) 
                                               << 3U)));
    __Vtemp4149[4U] = (7U & ((IData)(((((QData)((IData)(
                                                        ((0xff000000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                             << 0x15U)) 
                                                         | ((0xff0000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                << 5U)) 
                                                            | ((0xff00U 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                    << 0x15U) 
                                                                   | (0x1fff00U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                         >> 0xbU)))) 
                                                               | (0xffU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                      << 5U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                        >> 0x1bU)))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                         << 0x15U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                            << 5U)) 
                                                                        | ((0xff00U 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 0x15U) 
                                                                               | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                           | (0xffU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU))))))))) 
                                      >> 0x20U)) >> 0x1dU));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[0U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp4137[0U] : ((0x400U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                  ? __Vtemp4144[0U]
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                   >> 0xbU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[1U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp4137[1U] : ((0x400U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                  ? ((0x200U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                      ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                          << 0x15U) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                            >> 0xbU))
                                      : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                                          ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                >> 0xbU))
                                          : __Vtemp4141[1U]))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                   >> 0xbU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[2U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp4137[2U] : __Vtemp4149[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[3U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp4137[3U] : __Vtemp4149[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[4U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp4137[4U] : ((8U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                            >> 0xaU)) 
                                        << 3U)) | __Vtemp4149[4U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__do_reset) 
           | (IData)(vlTOPp->sim__DOT____Vcellinp__microwatt_wrapper__rst));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1966_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                                                >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1967_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1968_ 
        = (1U & ((((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                  >> 5U) & (~ (3U & (((IData)(0x3fU) 
                                      - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                                     >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1969_ 
        = (1U & ((((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                  >> 5U) & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                            >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2160_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                                                >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2161_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2162_ 
        = (1U & ((((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                  >> 5U) & (~ (3U & (((IData)(0x3fU) 
                                      - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                                     >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2163_ 
        = (1U & ((((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                  >> 5U) & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                            >> 4U)));
    __Vtemp4153[0U] = ((0x80000000U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1361_) 
                                            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                        << 0x1fU) & 
                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                       | ((0x40000000U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1361_) 
                                               & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                           << 0x1eU) 
                                          & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                          | ((0x20000000U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1360_) 
                                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                              << 0x1dU) 
                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                             | ((0x10000000U & (((~ 
                                                  ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1360_) 
                                                   & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                 << 0x1cU) 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                | ((0x8000000U & ((
                                                   (~ 
                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1359_) 
                                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                   << 0x1bU) 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                   | ((0x4000000U & 
                                       (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1359_) 
                                             & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                         << 0x1aU) 
                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                      | ((0x2000000U 
                                          & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1358_) 
                                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                              << 0x19U) 
                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                         | ((0x1000000U 
                                             & (((~ 
                                                  ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1358_) 
                                                   & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                 << 0x18U) 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                            | ((0x800000U 
                                                & (((~ 
                                                     ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1357_) 
                                                      & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                    << 0x17U) 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                               | ((0x400000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1357_) 
                                                         & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                       << 0x16U) 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                  | ((0x200000U 
                                                      & (((~ 
                                                           ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1356_) 
                                                            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                          << 0x15U) 
                                                         & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                     | ((0x100000U 
                                                         & (((~ 
                                                              ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1356_) 
                                                               & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                             << 0x14U) 
                                                            & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                        | ((0x80000U 
                                                            & (((~ 
                                                                 ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1355_) 
                                                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                << 0x13U) 
                                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                           | ((0x40000U 
                                                               & (((~ 
                                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1355_) 
                                                                     & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                   << 0x12U) 
                                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                              | ((0x20000U 
                                                                  & (((~ 
                                                                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1354_) 
                                                                        & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                      << 0x11U) 
                                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                 | ((0x10000U 
                                                                     & (((~ 
                                                                          ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1354_) 
                                                                           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                         << 0x10U) 
                                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                    | ((0x8000U 
                                                                        & (((~ 
                                                                             ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1353_) 
                                                                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                            << 0xfU) 
                                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                       | ((0x4000U 
                                                                           & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1353_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                               << 0xeU) 
                                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                          | ((0x2000U 
                                                                              & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1352_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xdU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                             | ((0x1000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1352_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xcU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1351_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xbU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1351_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xaU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1350_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 9U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1350_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 8U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1349_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 7U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1349_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 6U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1348_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 5U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1348_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 4U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1347_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 3U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1347_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 2U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1346_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 1U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1346_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U])))))))))))))))))))))))))))))))));
    __Vtemp4153[1U] = (IData)((((QData)((IData)(((0x80000000U 
                                                  & (((~ 
                                                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1393_) 
                                                        & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                      << 0x1fU) 
                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                 | ((0x40000000U 
                                                     & (((~ 
                                                          ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1393_) 
                                                           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                         << 0x1eU) 
                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                    | ((0x20000000U 
                                                        & (((~ 
                                                             ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1392_) 
                                                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                            << 0x1dU) 
                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                       | ((0x10000000U 
                                                           & (((~ 
                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1392_) 
                                                                 & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                               << 0x1cU) 
                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                          | ((0x8000000U 
                                                              & (((~ 
                                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1391_) 
                                                                    & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                  << 0x1bU) 
                                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                             | ((0x4000000U 
                                                                 & (((~ 
                                                                      ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1391_) 
                                                                       & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                     << 0x1aU) 
                                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                | ((0x2000000U 
                                                                    & (((~ 
                                                                         ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1390_) 
                                                                          & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                        << 0x19U) 
                                                                       & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                   | ((0x1000000U 
                                                                       & (((~ 
                                                                            ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1390_) 
                                                                             & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                           << 0x18U) 
                                                                          & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                      | ((0x800000U 
                                                                          & (((~ 
                                                                               ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1389_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                              << 0x17U) 
                                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                         | ((0x400000U 
                                                                             & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1389_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x16U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                            | ((0x200000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1388_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x15U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                               | ((0x100000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1388_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x14U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x80000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1387_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x13U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x40000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1387_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x12U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x20000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1386_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x11U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x10000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1386_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x10U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x8000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1385_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xfU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x4000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1385_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xeU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x2000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1384_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xdU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x1000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1384_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xcU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1383_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xbU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1383_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xaU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1382_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 9U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1382_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 8U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1381_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 7U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1381_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 6U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1380_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 5U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1380_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 4U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1379_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 3U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1379_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 2U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1378_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 1U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1378_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U]))))))))))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (((~ 
                                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1377_) 
                                                                    & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                  << 0x1fU) 
                                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                             | ((0x40000000U 
                                                                 & (((~ 
                                                                      ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1377_) 
                                                                       & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                     << 0x1eU) 
                                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                | ((0x20000000U 
                                                                    & (((~ 
                                                                         ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1376_) 
                                                                          & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                        << 0x1dU) 
                                                                       & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                   | ((0x10000000U 
                                                                       & (((~ 
                                                                            ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1376_) 
                                                                             & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                           << 0x1cU) 
                                                                          & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                      | ((0x8000000U 
                                                                          & (((~ 
                                                                               ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1375_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                              << 0x1bU) 
                                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                         | ((0x4000000U 
                                                                             & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1375_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x1aU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                            | ((0x2000000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1374_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x19U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                               | ((0x1000000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1374_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x18U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x800000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1373_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x17U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x400000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1373_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x16U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x200000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1372_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x15U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x100000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1372_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x14U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x80000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1371_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x13U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x40000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1371_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x12U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x20000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1370_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x11U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x10000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1370_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x10U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x8000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1369_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xfU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x4000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1369_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xeU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x2000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1368_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xdU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x1000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1368_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xcU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1367_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xbU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1367_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xaU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1366_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 9U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1366_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 8U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1365_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 7U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1365_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 6U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1364_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 5U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1364_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 4U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1363_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 3U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1363_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 2U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1362_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 1U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1362_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])))))))))))))))))))))))))))))))))))));
    __Vtemp4153[2U] = (IData)(((((QData)((IData)(((0x80000000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1393_) 
                                                         & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                       << 0x1fU) 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                  | ((0x40000000U 
                                                      & (((~ 
                                                           ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1393_) 
                                                            & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                          << 0x1eU) 
                                                         & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                     | ((0x20000000U 
                                                         & (((~ 
                                                              ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1392_) 
                                                               & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                             << 0x1dU) 
                                                            & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                        | ((0x10000000U 
                                                            & (((~ 
                                                                 ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1392_) 
                                                                  & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                << 0x1cU) 
                                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                           | ((0x8000000U 
                                                               & (((~ 
                                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1391_) 
                                                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                   << 0x1bU) 
                                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                              | ((0x4000000U 
                                                                  & (((~ 
                                                                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1391_) 
                                                                        & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                      << 0x1aU) 
                                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                 | ((0x2000000U 
                                                                     & (((~ 
                                                                          ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1390_) 
                                                                           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                         << 0x19U) 
                                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                    | ((0x1000000U 
                                                                        & (((~ 
                                                                             ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1390_) 
                                                                              & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                            << 0x18U) 
                                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                       | ((0x800000U 
                                                                           & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1389_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                               << 0x17U) 
                                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                          | ((0x400000U 
                                                                              & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1389_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x16U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                             | ((0x200000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1388_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x15U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x100000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1388_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x14U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x80000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1387_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x13U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x40000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1387_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x12U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x20000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1386_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x11U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x10000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1386_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x10U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x8000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1385_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xfU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x4000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1385_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xeU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x2000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1384_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xdU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x1000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1384_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xcU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1383_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xbU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1383_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xaU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1382_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 9U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1382_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 8U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1381_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 7U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1381_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 6U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1380_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 5U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1380_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 4U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1379_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 3U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1379_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 2U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1378_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 1U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U])) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1378_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U]))))))))))))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (((~ 
                                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1377_) 
                                                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                   << 0x1fU) 
                                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                              | ((0x40000000U 
                                                                  & (((~ 
                                                                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1377_) 
                                                                        & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                      << 0x1eU) 
                                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                 | ((0x20000000U 
                                                                     & (((~ 
                                                                          ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1376_) 
                                                                           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                         << 0x1dU) 
                                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                    | ((0x10000000U 
                                                                        & (((~ 
                                                                             ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1376_) 
                                                                              & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                            << 0x1cU) 
                                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                       | ((0x8000000U 
                                                                           & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1375_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                               << 0x1bU) 
                                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                          | ((0x4000000U 
                                                                              & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1375_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x1aU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                             | ((0x2000000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1374_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x19U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x1000000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1374_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x18U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x800000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1373_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x17U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x400000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1373_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x16U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x200000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1372_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x15U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x100000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1372_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x14U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x80000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1371_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x13U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x40000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1371_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x12U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x20000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1370_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0x11U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x10000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1370_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0x10U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x8000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1369_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xfU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x4000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1369_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xeU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x2000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1368_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xdU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x1000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1368_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xcU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1367_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xbU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1367_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xaU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1366_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 9U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1366_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 8U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1365_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 7U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1365_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 6U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1364_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 5U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1364_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 4U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1363_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 3U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1363_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 2U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1362_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 1U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1362_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U])))))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp4154[0U] = ((0x80000000U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1345_) 
                                            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                        << 0x1fU) & 
                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                       | ((0x40000000U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1345_) 
                                               & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                           << 0x1eU) 
                                          & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                          | ((0x20000000U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1344_) 
                                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                              << 0x1dU) 
                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                             | ((0x10000000U & (((~ 
                                                  ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1344_) 
                                                   & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                 << 0x1cU) 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                | ((0x8000000U & ((
                                                   (~ 
                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1343_) 
                                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                   << 0x1bU) 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                   | ((0x4000000U & 
                                       (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1343_) 
                                             & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                         << 0x1aU) 
                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                      | ((0x2000000U 
                                          & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1342_) 
                                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                              << 0x19U) 
                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                         | ((0x1000000U 
                                             & (((~ 
                                                  ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1342_) 
                                                   & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                 << 0x18U) 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                            | ((0x800000U 
                                                & (((~ 
                                                     ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1341_) 
                                                      & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                    << 0x17U) 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                               | ((0x400000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1341_) 
                                                         & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                       << 0x16U) 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                  | ((0x200000U 
                                                      & (((~ 
                                                           ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1340_) 
                                                            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                          << 0x15U) 
                                                         & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                     | ((0x100000U 
                                                         & (((~ 
                                                              ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1340_) 
                                                               & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                             << 0x14U) 
                                                            & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                        | ((0x80000U 
                                                            & (((~ 
                                                                 ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1339_) 
                                                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                << 0x13U) 
                                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                           | ((0x40000U 
                                                               & (((~ 
                                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1339_) 
                                                                     & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                   << 0x12U) 
                                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                              | ((0x20000U 
                                                                  & (((~ 
                                                                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1338_) 
                                                                        & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                      << 0x11U) 
                                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                 | ((0x10000U 
                                                                     & (((~ 
                                                                          ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1338_) 
                                                                           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                         << 0x10U) 
                                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                    | ((0x8000U 
                                                                        & (((~ 
                                                                             ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1337_) 
                                                                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                            << 0xfU) 
                                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                       | ((0x4000U 
                                                                           & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1337_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                               << 0xeU) 
                                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                          | ((0x2000U 
                                                                              & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1336_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xdU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                             | ((0x1000U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1336_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xcU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x800U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1335_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 0xbU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x400U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1335_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 0xaU) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x200U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1334_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 9U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x100U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1334_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 8U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x80U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1333_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 7U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x40U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1333_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 6U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x20U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1332_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 5U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((0x10U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1332_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 4U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((8U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1331_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 3U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((4U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1331_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                << 2U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1330_) 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))) 
                                                                                << 1U) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1330_) 
                                                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_)))) 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U])))))))))))))))))))))))))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0542_[0U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit)
            ? __Vtemp4154[0U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0542_[1U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit)
            ? __Vtemp4153[0U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0542_[2U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit)
            ? __Vtemp4153[1U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0542_[3U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit)
            ? __Vtemp4153[2U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__dtlb_valids[3U]);
}
