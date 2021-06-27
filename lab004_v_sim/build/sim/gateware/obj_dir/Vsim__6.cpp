// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_settle__TOP__68(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__68\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0134_ 
        = (1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                  >> 0xfU) & ((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                               ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                          >> 0x1fU))
                               : (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                          >> 0x3fU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
        = ((0x800000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                         << 0x12U)) | ((0x400000U & 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                         << 0x11U)) 
                                       | ((0x200000U 
                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                              << 0x10U)) 
                                          | ((0x100000U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                 << 0xfU)) 
                                             | ((0x80000U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                    << 0xeU)) 
                                                | ((0x40000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                       << 0xdU)) 
                                                   | ((0x20000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                          << 0xcU)) 
                                                      | ((0x10000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                             << 0xbU)) 
                                                         | ((0x8000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                << 0xaU)) 
                                                            | ((0x4000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                   << 9U)) 
                                                               | ((0x2000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                      << 8U)) 
                                                                  | ((0x1000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                         << 7U)) 
                                                                     | ((0x800U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                            << 6U)) 
                                                                        | ((0x400U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                               << 5U)) 
                                                                           | ((0x200U 
                                                                               & (((IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                                                                >> 5U)) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                                                                >> 0xeU))) 
                                                                                << 9U)) 
                                                                              | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 5U)))))))))))))))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__a 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                 >> 5U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__Vfuncout 
        = (1U & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s)) 
                        | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                       | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                      | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                     | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                    | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                   | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                  | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s)))
                  ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                      ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b
                      : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                             >> 1U) : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                  >> 6U)
                                                  : 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                  >> 7U))))))))
                  : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s)) 
                            | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                           | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                          | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                         | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                        | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                       | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                      | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s)))
                      ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                             >> 8U) : ((0x200U == (0x200U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                           >> 9U) : 
                                       ((0x400U == 
                                         (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                            >> 0xaU)
                                         : ((0x800U 
                                             == (0x800U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                             ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                >> 0xbU)
                                             : ((0x1000U 
                                                 == 
                                                 (0x1000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                 ? 
                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                 >> 0xcU)
                                                 : 
                                                ((0x2000U 
                                                  == 
                                                  (0x2000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                  >> 0xdU)
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0x4000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                   >> 0xeU)
                                                   : 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                   >> 0xfU))))))))
                      : (((((((((0x10000U == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s)) 
                                | (0x20000U == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                               | (0x40000U == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                              | (0x80000U == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                             | (0x100000U == (0x100000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                            | (0x200000U == (0x200000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                           | (0x400000U == (0x400000U 
                                            & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))) 
                          | (0x800000U == (0x800000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s)))
                          ? ((0x10000U == (0x10000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                 >> 0x10U) : ((0x20000U 
                                               == (0x20000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                               ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                  >> 0x11U)
                                               : ((0x40000U 
                                                   == 
                                                   (0x40000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                   >> 0x12U)
                                                   : 
                                                  ((0x80000U 
                                                    == 
                                                    (0x80000U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                    ? 
                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                    >> 0x13U)
                                                    : 
                                                   ((0x100000U 
                                                     == 
                                                     (0x100000U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                     ? 
                                                    (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                     >> 0x14U)
                                                     : 
                                                    ((0x200000U 
                                                      == 
                                                      (0x200000U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                      ? 
                                                     (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                      >> 0x15U)
                                                      : 
                                                     ((0x400000U 
                                                       == 
                                                       (0x400000U 
                                                        & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__s))
                                                       ? 
                                                      (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                       >> 0x16U)
                                                       : 
                                                      (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__b 
                                                       >> 0x17U))))))))
                          : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__a)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0693_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038508__98__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__69(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__69\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
        = ((0xfffc00U & (VL_NEGATE_I((IData)((1U & 
                                              (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                  >> 0xeU))))) 
                         << 0xaU)) | ((0x200U & ((~ (IData)(
                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                                             >> 0xeU))) 
                                                 << 9U)) 
                                      | (0x1ffU & VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                           >> 0xeU))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__a 
        = (1U & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                    >> 0xeU)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__Vfuncout 
        = (1U & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s)) 
                        | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                       | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                      | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                     | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                    | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                   | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                  | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s)))
                  ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                      ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b
                      : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                             >> 1U) : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                  >> 6U)
                                                  : 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                  >> 7U))))))))
                  : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s)) 
                            | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                           | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                          | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                         | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                        | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                       | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                      | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s)))
                      ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                             >> 8U) : ((0x200U == (0x200U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                           >> 9U) : 
                                       ((0x400U == 
                                         (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                            >> 0xaU)
                                         : ((0x800U 
                                             == (0x800U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                             ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                >> 0xbU)
                                             : ((0x1000U 
                                                 == 
                                                 (0x1000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                 ? 
                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                 >> 0xcU)
                                                 : 
                                                ((0x2000U 
                                                  == 
                                                  (0x2000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                  >> 0xdU)
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0x4000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                   >> 0xeU)
                                                   : 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                   >> 0xfU))))))))
                      : (((((((((0x10000U == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s)) 
                                | (0x20000U == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                               | (0x40000U == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                              | (0x80000U == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                             | (0x100000U == (0x100000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                            | (0x200000U == (0x200000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                           | (0x400000U == (0x400000U 
                                            & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))) 
                          | (0x800000U == (0x800000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s)))
                          ? ((0x10000U == (0x10000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                 >> 0x10U) : ((0x20000U 
                                               == (0x20000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                               ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                  >> 0x11U)
                                               : ((0x40000U 
                                                   == 
                                                   (0x40000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                   >> 0x12U)
                                                   : 
                                                  ((0x80000U 
                                                    == 
                                                    (0x80000U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                    ? 
                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                    >> 0x13U)
                                                    : 
                                                   ((0x100000U 
                                                     == 
                                                     (0x100000U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                     ? 
                                                    (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                     >> 0x14U)
                                                     : 
                                                    ((0x200000U 
                                                      == 
                                                      (0x200000U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                      ? 
                                                     (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                      >> 0x15U)
                                                      : 
                                                     ((0x400000U 
                                                       == 
                                                       (0x400000U 
                                                        & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__s))
                                                       ? 
                                                      (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                       >> 0x16U)
                                                       : 
                                                      (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__b 
                                                       >> 0x17U))))))))
                          : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__a)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0694_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038509__99__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__79(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__79\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[1U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[3U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[4U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[5U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[6U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[7U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[8U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[9U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xaU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xbU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xcU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xdU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xeU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xfU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x10U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x11U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x12U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x13U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x14U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x15U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x16U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x17U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x18U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x19U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1aU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1bU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1cU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1dU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1eU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1fU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x20U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x21U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x22U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x23U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x24U] 
        = (IData)(((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])
                    ? ((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                       - VL_ULL(1)) : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0630_));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x25U] 
        = (IData)((((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])
                     ? ((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                        - VL_ULL(1)) : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0630_) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x26U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x27U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x28U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x29U] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2aU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2bU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2cU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2dU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2eU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                   - VL_ULL(1)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2fU] 
        = (IData)((((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
                    - VL_ULL(1)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__a 
        = ((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U]))) 
           - VL_ULL(1));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__Vfuncout 
        = (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s)) 
                  | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                 | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
               | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
              | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
             | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
            | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s)))
            ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0U])))
                : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[2U])))
                    : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[4U])))
                        : ((8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[6U])))
                            : ((0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[8U])))
                                : ((0x20U == (0x20U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xaU])))
                                    : ((0x40U == (0x40U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xcU])))
                                        : (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xfU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0xeU]))))))))))
            : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s)) 
                      | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                     | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                    | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                   | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                  | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                 | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s)))
                ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x11U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x10U])))
                    : ((0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x12U])))
                        : ((0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x14U])))
                            : ((0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x16U])))
                                : ((0x1000U == (0x1000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x19U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x18U])))
                                    : ((0x2000U == 
                                        (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1bU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1aU])))
                                        : ((0x4000U 
                                            == (0x4000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                            ? (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1cU])))
                                            : (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x1eU]))))))))))
                : (((((((((0x10000U == (0x10000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s)) 
                          | (0x20000U == (0x20000U 
                                          & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                         | (0x40000U == (0x40000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                        | (0x80000U == (0x80000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                       | (0x100000U == (0x100000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                      | (0x200000U == (0x200000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                     | (0x400000U == (0x400000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))) 
                    | (0x800000U == (0x800000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s)))
                    ? ((0x10000U == (0x10000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x20U])))
                        : ((0x20000U == (0x20000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x23U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x22U])))
                            : ((0x40000U == (0x40000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x25U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x24U])))
                                : ((0x80000U == (0x80000U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x27U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x26U])))
                                    : ((0x100000U == 
                                        (0x100000U 
                                         & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x29U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x28U])))
                                        : ((0x200000U 
                                            == (0x200000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                            ? (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2aU])))
                                            : ((0x400000U 
                                                == 
                                                (0x400000U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__s))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2dU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2cU])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2fU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__b[0x2eU]))))))))))
                    : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__a)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0665_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038420__70__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__80(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__80\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
        = (((QData)((IData)(((0xc0000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                             << 0x1cU)) 
                             | ((0x30000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                << 0x1aU)) 
                                | ((0xc000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                  << 0x18U)) 
                                   | ((0x3000000U & 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                        << 0x16U)) 
                                      | ((0xc00000U 
                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                             << 0x14U)) 
                                         | ((0x300000U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                << 0x12U)) 
                                            | ((0xc0000U 
                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0619_) 
                                                   << 0x12U)) 
                                               | ((0x30000U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                      << 0xeU)) 
                                                  | ((0xc000U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                         << 0xcU)) 
                                                     | ((0x3000U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                            << 0xaU)) 
                                                        | ((0xc00U 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                               << 8U)) 
                                                           | ((0x300U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                  << 6U)) 
                                                              | ((0xc0U 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                     << 4U)) 
                                                                 | ((0x30U 
                                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                        << 2U)) 
                                                                    | ((0xcU 
                                                                        & ((IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                                                                >> 2U)) 
                                                                           << 2U)) 
                                                                       | (3U 
                                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                                              << 0x1eU) 
                                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 2U)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0xc000U & 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                           << 0xcU)) 
                                         | ((0x3000U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                << 0xaU)) 
                                            | ((0xc00U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                   << 8U)) 
                                               | ((0x300U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                      << 6U)) 
                                                  | ((0xc0U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                         << 4U)) 
                                                     | ((0x30U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                            << 2U)) 
                                                        | ((0xcU 
                                                            & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]) 
                                                           | (3U 
                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                    >> 2U)))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__a 
        = (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                  << 0x1eU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                               >> 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__Vfuncout 
        = (3U & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s)) 
                        | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                       | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                      | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                     | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                    | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                   | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                  | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s)))
                  ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b)
                      : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                          ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                     >> 2U)) : ((4U 
                                                 == 
                                                 (4U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                 ? (IData)(
                                                           (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                            >> 4U))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (8U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                  ? (IData)(
                                                            (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                             >> 6U))
                                                  : 
                                                 ((0x10U 
                                                   == 
                                                   (0x10U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                   ? (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                              >> 8U))
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0x20U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                    ? (IData)(
                                                              (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                               >> 0xaU))
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0x40U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                     ? (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                >> 0xcU))
                                                     : (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                >> 0xeU)))))))))
                  : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s)) 
                            | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                           | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                          | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                         | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                        | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                       | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                      | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s)))
                      ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                          ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                     >> 0x10U)) : (
                                                   (0x200U 
                                                    == 
                                                    (0x200U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                    ? (IData)(
                                                              (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                               >> 0x12U))
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x400U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                     ? (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                >> 0x14U))
                                                     : 
                                                    ((0x800U 
                                                      == 
                                                      (0x800U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                      ? (IData)(
                                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                 >> 0x16U))
                                                      : 
                                                     ((0x1000U 
                                                       == 
                                                       (0x1000U 
                                                        & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                       ? (IData)(
                                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                  >> 0x18U))
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0x2000U 
                                                         & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                        ? (IData)(
                                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                   >> 0x1aU))
                                                        : 
                                                       ((0x4000U 
                                                         == 
                                                         (0x4000U 
                                                          & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                         ? (IData)(
                                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                    >> 0x1cU))
                                                         : (IData)(
                                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                                    >> 0x1eU)))))))))
                      : (((((((((0x10000U == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s)) 
                                | (0x20000U == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                               | (0x40000U == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                              | (0x80000U == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                             | (0x100000U == (0x100000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                            | (0x200000U == (0x200000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                           | (0x400000U == (0x400000U 
                                            & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))) 
                          | (0x800000U == (0x800000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s)))
                          ? ((0x10000U == (0x10000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                              ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                         >> 0x20U))
                              : ((0x20000U == (0x20000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                  ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                             >> 0x22U))
                                  : ((0x40000U == (0x40000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                      ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                 >> 0x24U))
                                      : ((0x80000U 
                                          == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                          ? (IData)(
                                                    (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                     >> 0x26U))
                                          : ((0x100000U 
                                              == (0x100000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                              ? (IData)(
                                                        (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                         >> 0x28U))
                                              : ((0x200000U 
                                                  == 
                                                  (0x200000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                  ? (IData)(
                                                            (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                             >> 0x2aU))
                                                  : 
                                                 ((0x400000U 
                                                   == 
                                                   (0x400000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__s))
                                                   ? (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                              >> 0x2cU))
                                                   : (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__b 
                                                              >> 0x2eU)))))))))
                          : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__a)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0668_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038430__73__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__81(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__81\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
        = (((QData)((IData)(((0xc0000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                             << 0x1aU)) 
                             | ((0x30000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                << 0x18U)) 
                                | ((0xc000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                  << 0x16U)) 
                                   | ((0x3000000U & 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                        << 0x14U)) 
                                      | ((0xc00000U 
                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                             << 0x12U)) 
                                         | ((0x300000U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                << 0x10U)) 
                                            | ((0xc0000U 
                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0619_) 
                                                   << 0x10U)) 
                                               | ((0x30000U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                      << 0xcU)) 
                                                  | ((0xc000U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                         << 0xaU)) 
                                                     | ((0x3000U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                            << 8U)) 
                                                        | ((0xc00U 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                               << 6U)) 
                                                           | ((0x300U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                  << 4U)) 
                                                              | ((0xc0U 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                     << 2U)) 
                                                                 | ((0x30U 
                                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                                                                >> 0xeU)))
                                                                          ? 3U
                                                                          : 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                                                                >> 4U)))) 
                                                                        << 2U) 
                                                                       | (3U 
                                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                                              << 0x1cU) 
                                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                                >> 4U)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0xc000U & 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                           << 0xaU)) 
                                         | ((0x3000U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                << 8U)) 
                                            | ((0xc00U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                   << 6U)) 
                                               | ((0x300U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                      << 4U)) 
                                                  | ((0xc0U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                         << 2U)) 
                                                     | ((0x30U 
                                                         & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]) 
                                                        | ((0xcU 
                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                                << 0x1eU) 
                                                               | (0x3ffffffcU 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                     >> 2U)))) 
                                                           | (3U 
                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                                                                  << 0x1cU) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                                    >> 4U)))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__a 
        = (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                  << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                               >> 4U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__Vfuncout 
        = (3U & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s)) 
                        | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                       | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                      | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                     | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                    | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                   | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                  | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s)))
                  ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b)
                      : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                          ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                     >> 2U)) : ((4U 
                                                 == 
                                                 (4U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                 ? (IData)(
                                                           (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                            >> 4U))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (8U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                  ? (IData)(
                                                            (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                             >> 6U))
                                                  : 
                                                 ((0x10U 
                                                   == 
                                                   (0x10U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                   ? (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                              >> 8U))
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0x20U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                    ? (IData)(
                                                              (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                               >> 0xaU))
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0x40U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                     ? (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                >> 0xcU))
                                                     : (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                >> 0xeU)))))))))
                  : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s)) 
                            | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                           | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                          | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                         | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                        | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                       | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                      | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s)))
                      ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                          ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                     >> 0x10U)) : (
                                                   (0x200U 
                                                    == 
                                                    (0x200U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                    ? (IData)(
                                                              (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                               >> 0x12U))
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x400U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                     ? (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                >> 0x14U))
                                                     : 
                                                    ((0x800U 
                                                      == 
                                                      (0x800U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                      ? (IData)(
                                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                 >> 0x16U))
                                                      : 
                                                     ((0x1000U 
                                                       == 
                                                       (0x1000U 
                                                        & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                       ? (IData)(
                                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                  >> 0x18U))
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0x2000U 
                                                         & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                        ? (IData)(
                                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                   >> 0x1aU))
                                                        : 
                                                       ((0x4000U 
                                                         == 
                                                         (0x4000U 
                                                          & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                         ? (IData)(
                                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                    >> 0x1cU))
                                                         : (IData)(
                                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                                    >> 0x1eU)))))))))
                      : (((((((((0x10000U == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s)) 
                                | (0x20000U == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                               | (0x40000U == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                              | (0x80000U == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                             | (0x100000U == (0x100000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                            | (0x200000U == (0x200000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                           | (0x400000U == (0x400000U 
                                            & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))) 
                          | (0x800000U == (0x800000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s)))
                          ? ((0x10000U == (0x10000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                              ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                         >> 0x20U))
                              : ((0x20000U == (0x20000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                  ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                             >> 0x22U))
                                  : ((0x40000U == (0x40000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                      ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                 >> 0x24U))
                                      : ((0x80000U 
                                          == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                          ? (IData)(
                                                    (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                     >> 0x26U))
                                          : ((0x100000U 
                                              == (0x100000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                              ? (IData)(
                                                        (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                         >> 0x28U))
                                              : ((0x200000U 
                                                  == 
                                                  (0x200000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                  ? (IData)(
                                                            (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                             >> 0x2aU))
                                                  : 
                                                 ((0x400000U 
                                                   == 
                                                   (0x400000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__s))
                                                   ? (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                              >> 0x2cU))
                                                   : (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__b 
                                                              >> 0x2eU)))))))))
                          : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__a)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0669_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038433__74__Vfuncout;
}
