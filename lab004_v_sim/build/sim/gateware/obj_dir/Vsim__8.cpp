// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_settle__TOP__86(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__86\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0U] 
        = (IData)((((QData)((IData)((0x1fffffffU & 
                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                       << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                 >> 0x1fU))))) 
                    << 0x1dU) | (QData)((IData)((0x1fffffffU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                     << 1U) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                       >> 0x1fU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[1U] 
        = ((0xfc000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x1bU) | (0x4000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 5U)))) 
           | (IData)(((((QData)((IData)((0x1fffffffU 
                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                             << 1U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                               >> 0x1fU))))) 
                        << 0x1dU) | (QData)((IData)(
                                                    (0x1fffffffU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                         << 1U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                           >> 0x1fU)))))) 
                      >> 0x20U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[2U] 
        = ((0xff800000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x18U) | (0x800000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 8U)))) 
           | (0x7fffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                           >> 5U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[3U] 
        = ((0xfff00000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x15U) | (0x100000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 0xbU)))) 
           | (0xfffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                          >> 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[4U] 
        = ((0xfffe0000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x12U) | (0x20000U & 
                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                          >> 0xeU)))) 
           | (0x1ffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                          >> 0xbU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[5U] 
        = ((0xffffc000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0xfU) | (0x4000U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                   >> 0x11U)))) 
           | (0x3fffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                         >> 0xeU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[6U] 
        = ((0xfffff800U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0xcU) | (0x800U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                  >> 0x14U)))) 
           | (0x7ffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                        >> 0x11U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[7U] 
        = ((0xffffff00U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 9U) | (0x100U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                >> 0x17U)))) 
           | (0xffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                       >> 0x14U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[8U] 
        = ((0xffffffe0U & ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                    >> 0x1fU)) << 5U)) 
           | (0x1fU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                       >> 0x17U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[9U] 
        = ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]) 
           | ((0x7ffffffcU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                               << 3U) | (4U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                               >> 0x1dU)))) 
              | (3U & ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                >> 0x1fU)) >> 0x1bU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xaU] 
        = ((0xf0000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x1dU) | (0x10000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 3U)))) 
           | (0xfffffffU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U]));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xbU] 
        = ((0xfe000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x1aU) | (0x2000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 6U)))) 
           | (0x1ffffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            >> 3U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xcU] 
        = ((0xffc00000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x17U) | (0x400000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 9U)))) 
           | (0x3fffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                           >> 6U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xdU] 
        = ((0xfff80000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x14U) | (0x80000U & 
                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                          >> 0xcU)))) 
           | (0x7ffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                          >> 9U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xeU] 
        = ((0xffff0000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x11U) | (0x10000U & 
                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                          >> 0xfU)))) 
           | (0xffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                         >> 0xcU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xfU] 
        = ((0xffffe000U & ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0622_ 
                                    >> 0xfU)) << 0xdU)) 
           | (0x1fffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                         >> 0xfU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x10U] 
        = ((0xfffffc00U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0xbU) | (0x400U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                  >> 0x15U)))) 
           | (0x3ffU & ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0622_ 
                                 >> 0xfU)) >> 0x13U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x11U] 
        = ((0xffffff80U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 8U) | (0x80U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                               >> 0x18U)))) 
           | (0x7fU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                       >> 0x15U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x12U] 
        = ((0xfffffff0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 5U) | (0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                               >> 0x1bU)))) 
           | (0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                      >> 0x18U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x13U] 
        = ((0xc0000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x1fU) | (0x40000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 1U)))) 
           | ((0x3ffffffeU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                               << 2U) | (2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                               >> 0x1eU)))) 
              | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                       >> 0x1bU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x14U] 
        = ((0xf8000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            << 0x1cU) | (0x8000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                            >> 4U)))) 
           | (0x7ffffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                            >> 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x15U] 
        = (0xffffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                        >> 4U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__a 
        = (0x1fffffffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                           << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                     >> 0x1fU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__Vfuncout 
        = (0x1fffffffU & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s)) 
                                 | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                               | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                              | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                             | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                            | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                           | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s)))
                           ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                               ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0U]
                               : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                   ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[1U] 
                                       << 3U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0U] 
                                                 >> 0x1dU))
                                   : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[2U] 
                                           << 6U) | 
                                          (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[1U] 
                                           >> 0x1aU))
                                       : ((8U == (8U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[3U] 
                                               << 9U) 
                                              | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[2U] 
                                                 >> 0x17U))
                                           : ((0x10U 
                                               == (0x10U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                               ? ((
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[4U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[3U] 
                                                     >> 0x14U))
                                               : ((0x20U 
                                                   == 
                                                   (0x20U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                   ? 
                                                  ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[5U] 
                                                    << 0xfU) 
                                                   | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[4U] 
                                                      >> 0x11U))
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0x40U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                    ? 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[6U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[7U] 
                                                     << 0x15U) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[6U] 
                                                       >> 0xbU)))))))))
                           : (((((((((0x100U == (0x100U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s)) 
                                     | (0x200U == (0x200U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                    | (0x400U == (0x400U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                   | (0x800U == (0x800U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                  | (0x1000U == (0x1000U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                 | (0x2000U == (0x2000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                | (0x4000U == (0x4000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                               | (0x8000U == (0x8000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s)))
                               ? ((0x100U == (0x100U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                   ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[8U] 
                                       << 0x18U) | 
                                      (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[7U] 
                                       >> 8U)) : ((0x200U 
                                                   == 
                                                   (0x200U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                   ? 
                                                  ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[9U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[8U] 
                                                      >> 5U))
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                    ? 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xaU] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[9U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0x800U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                     ? 
                                                    ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xaU] 
                                                      << 1U) 
                                                     | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[9U] 
                                                        >> 0x1fU))
                                                     : 
                                                    ((0x1000U 
                                                      == 
                                                      (0x1000U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                      ? 
                                                     ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xbU] 
                                                       << 4U) 
                                                      | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xaU] 
                                                         >> 0x1cU))
                                                      : 
                                                     ((0x2000U 
                                                       == 
                                                       (0x2000U 
                                                        & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                       ? 
                                                      ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xcU] 
                                                        << 7U) 
                                                       | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xbU] 
                                                          >> 0x19U))
                                                       : 
                                                      ((0x4000U 
                                                        == 
                                                        (0x4000U 
                                                         & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                        ? 
                                                       ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xdU] 
                                                         << 0xaU) 
                                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xcU] 
                                                           >> 0x16U))
                                                        : 
                                                       ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xeU] 
                                                         << 0xdU) 
                                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xdU] 
                                                           >> 0x13U)))))))))
                               : (((((((((0x10000U 
                                          == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s)) 
                                         | (0x20000U 
                                            == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                        | (0x40000U 
                                           == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                       | (0x80000U 
                                          == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                      | (0x100000U 
                                         == (0x100000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                     | (0x200000U == 
                                        (0x200000U 
                                         & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                    | (0x400000U == 
                                       (0x400000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))) 
                                   | (0x800000U == 
                                      (0x800000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s)))
                                   ? ((0x10000U == 
                                       (0x10000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xfU] 
                                           << 0x10U) 
                                          | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xeU] 
                                             >> 0x10U))
                                       : ((0x20000U 
                                           == (0x20000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x10U] 
                                               << 0x13U) 
                                              | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0xfU] 
                                                 >> 0xdU))
                                           : ((0x40000U 
                                               == (0x40000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                               ? ((
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x11U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x10U] 
                                                     >> 0xaU))
                                               : ((0x80000U 
                                                   == 
                                                   (0x80000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                   ? 
                                                  ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x12U] 
                                                    << 0x19U) 
                                                   | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x11U] 
                                                      >> 7U))
                                                   : 
                                                  ((0x100000U 
                                                    == 
                                                    (0x100000U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                    ? 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x13U] 
                                                     << 0x1cU) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x12U] 
                                                       >> 4U))
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0x200000U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                     ? 
                                                    ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x14U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x13U] 
                                                        >> 1U))
                                                     : 
                                                    ((0x400000U 
                                                      == 
                                                      (0x400000U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__s))
                                                      ? 
                                                     ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x14U] 
                                                       << 2U) 
                                                      | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x13U] 
                                                         >> 0x1eU))
                                                      : 
                                                     ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x15U] 
                                                       << 5U) 
                                                      | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__b[0x14U] 
                                                         >> 0x1bU)))))))))
                                   : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__a))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0677_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038458__82__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__87(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__87\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___058_ 
        = (0x3fU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___048_) 
                      + (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___049_)) 
                     + (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___050_)) 
                    + (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___051_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___061_ 
        = (0x3fU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___052_) 
                      + (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___053_)) 
                     + (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___054_)) 
                    + (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___055_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___001_ 
        = ((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in)
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___000_);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0961_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x16U)))))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0080_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                    >> 0x16U)))))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      << 0xaU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                        >> 0x16U)))))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       << 0xaU) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         >> 0x16U)))))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                           >> 6U)) : 
                         ((1U & ((IData)(1U) - (0x1fU 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x16U)))))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 5U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 4U))) : 
                     ((2U & ((IData)(0x1fU) - (0x1fU 
                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                   << 0xaU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                     >> 0x16U)))))
                       ? ((1U & ((IData)(1U) - (0x1fU 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x16U)))))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 2U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                            << 0xaU) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                              >> 0x16U)))))
                                                    ? 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                    >> 1U)
                                                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0962_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x16U)))))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0081_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                  << 0xaU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                    >> 0x16U)))))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      << 0xaU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                        >> 0x16U)))))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       << 0xaU) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         >> 0x16U)))))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x16U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       << 0xaU) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         >> 0x16U)))))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x15U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x14U)))
                      : ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      << 0xaU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                        >> 0x16U)))))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       << 0xaU) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         >> 0x16U)))))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x12U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       << 0xaU) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         >> 0x16U)))))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x11U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x10U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0939_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0060_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                           >> 6U)) : 
                         ((1U & ((IData)(1U) - (0x1fU 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 5U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 4U))) : 
                     ((2U & ((IData)(0x1fU) - (0x1fU 
                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                       ? ((1U & ((IData)(1U) - (0x1fU 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 2U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                                                    ? 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                    >> 1U)
                                                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0940_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0061_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x16U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x15U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x14U)))
                      : ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x12U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x11U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x10U))))));
}

VL_INLINE_OPT void Vsim::_settle__TOP__88(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__88\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0950_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0070_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                           >> 6U)) : 
                         ((1U & ((IData)(1U) - (0x1fU 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 5U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 4U))) : 
                     ((2U & ((IData)(0x1fU) - (0x1fU 
                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                       ? ((1U & ((IData)(1U) - (0x1fU 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 2U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                                                    ? 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                    >> 1U)
                                                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0951_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0071_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x16U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x15U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x14U)))
                      : ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x12U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x11U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x10U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0972_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0090_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                           >> 6U)) : 
                         ((1U & ((IData)(1U) - (0x1fU 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 5U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 4U))) : 
                     ((2U & ((IData)(0x1fU) - (0x1fU 
                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                       ? ((1U & ((IData)(1U) - (0x1fU 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 2U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                                                    ? 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                    >> 1U)
                                                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0973_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0091_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x16U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x15U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x14U)))
                      : ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x12U))
                          : ((1U & ((IData)(1U) - (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 0x11U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                              >> 0x10U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0983_ 
        = (1U & ((8U & ((IData)(0x1fU) - (0x1fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 5U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x1bU)))))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0100_)
                  : ((4U & ((IData)(0x1fU) - (0x1fU 
                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                  << 5U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                    >> 0x1bU)))))
                      ? ((2U & ((IData)(0x1fU) - (0x1fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      << 5U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                        >> 0x1bU)))))
                          ? ((1U & ((IData)(1U) - (0x1fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       << 5U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                         >> 0x1bU)))))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                           >> 6U)) : 
                         ((1U & ((IData)(1U) - (0x1fU 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 5U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x1bU)))))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 5U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 4U))) : 
                     ((2U & ((IData)(0x1fU) - (0x1fU 
                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                   << 5U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                     >> 0x1bU)))))
                       ? ((1U & ((IData)(1U) - (0x1fU 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 5U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x1bU)))))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                        >> 2U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                            << 5U) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                              >> 0x1bU)))))
                                                    ? 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                    >> 1U)
                                                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)))));
}

VL_INLINE_OPT void Vsim::_settle__TOP__94(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__94\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b 
        = (4U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U] 
                  << 2U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                            & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                                   >> 3U)) << 2U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__Vfuncout 
        = (1U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 6U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b) 
                                             >> 1U))
                                      : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__s) 
                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__b)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___238_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310570__165__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__95(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__95\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___177_ 
        = (0xfU & ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U])
                    ? ((8U & (((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U])
                                ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                   >> 2U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___153_) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                >> 2U))) 
                              << 3U)) | (7U & ((4U 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U])
                                                ? (
                                                   (8U 
                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U])
                                                    ? 0U
                                                    : 4U)
                                                : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___153_)
                                                    ? 
                                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                     << 1U) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                       >> 0x1fU))
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___155_)
                                                     ? 3U
                                                     : 0U)))))
                    : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                        << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                  >> 0x1fU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b 
        = (4U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U] 
                  & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                         >> 2U)) & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___153_)) 
                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U]))) 
                 << 2U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__Vfuncout 
        = (1U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 6U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b) 
                                             >> 1U))
                                      : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__s) 
                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__b)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___234_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310551__161__Vfuncout;
}
