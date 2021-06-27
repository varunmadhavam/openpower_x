// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_settle__TOP__137(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__137\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
        = (0x10U | ((((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U])
                       ? 0U : (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                      << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                >> 0x1fU)))) 
                     << 0xcU) | ((0xe00U & (((1U & 
                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U])
                                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___197_)
                                                  ? 
                                                 ((0x80000U 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0xaU])
                                                   ? 0U
                                                   : 
                                                  (((0U 
                                                     != 
                                                     (0xffU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[8U] 
                                                          << 0x15U) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                            >> 0xbU)))) 
                                                    & (~ 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 2U))
                                                  : 0U)
                                              : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                  << 1U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                    >> 0x1fU))) 
                                            << 9U)) 
                                 | ((0x1c0U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___177_) 
                                               << 6U)) 
                                    | (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                              << 1U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                >> 0x1fU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__Vfuncout 
        = (7U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0xfU))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0x12U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0xfU))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__b
                                          : 0U))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___229_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310528__156__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__138(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__138\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b 
        = (2U | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                  & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___197_) 
                     & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0xaU] 
                           >> 0x13U)))) << 3U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__Vfuncout 
        = (1U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 6U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b) 
                                             >> 1U))
                                      : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__s) 
                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__b)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___232_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310545__159__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__139(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__139\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b 
        = ((8U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                   & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___197_))) 
                  << 3U)) | (4U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U] 
                                    << 2U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                                                 >> 1U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__Vfuncout 
        = (1U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 6U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b) 
                                             >> 1U))
                                      : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__s) 
                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__b)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___237_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310566__164__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__140(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__140\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b 
        = (0x60U | ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                              << 4U)) | ((0xfff8U & 
                                          ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                                            << 3U) 
                                           & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___197_) 
                                               << 3U) 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0xaU] 
                                                 >> 0x10U)))) 
                                         | (4U & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U] 
                                                   & ((~ 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                                                        >> 2U)) 
                                                      & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___153_)) 
                                                         & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___155_))))) 
                                                  << 2U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__Vfuncout 
        = (1U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 6U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 5U))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 4U)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 3U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 2U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s))
                                          ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)
                                          : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b) 
                                             >> 1U))
                                      : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__s) 
                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__b)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___236_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310562__163__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__153(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__153\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
        = ((((2U != (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                               << 0x1dU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                            >> 3U)))) 
             & ((9U != (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                  << 0x1dU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                               >> 3U)))) 
                & (0U != (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0255_)))) 
            << 4U) | (2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                            >> 0x10U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__Vfuncout 
        = (1U & (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s)) 
                        | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                       | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                      | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                     | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                    | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                   | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                  | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s)))
                  ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                      ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b
                      : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                             >> 1U) : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                  >> 6U)
                                                  : 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                  >> 7U))))))))
                  : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s)) 
                            | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                           | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                          | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                         | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                        | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                       | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                      | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s)))
                      ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                             >> 8U) : ((0x200U == (0x200U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                           >> 9U) : 
                                       ((0x400U == 
                                         (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                            >> 0xaU)
                                         : ((0x800U 
                                             == (0x800U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                             ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                >> 0xbU)
                                             : ((0x1000U 
                                                 == 
                                                 (0x1000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                 ? 
                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                 >> 0xcU)
                                                 : 
                                                ((0x2000U 
                                                  == 
                                                  (0x2000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                  >> 0xdU)
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0x4000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                   >> 0xeU)
                                                   : 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                   >> 0xfU))))))))
                      : (((((((((0x10000U == (0x10000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s)) 
                                | (0x20000U == (0x20000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                               | (0x40000U == (0x40000U 
                                               & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                              | (0x80000U == (0x80000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                             | (0x100000U == (0x100000U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                            | (0x200000U == (0x200000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                           | (0x400000U == (0x400000U 
                                            & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                          | (0x800000U == (0x800000U 
                                           & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))) 
                         & ((0x10000U == (0x10000U 
                                          & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                             ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                >> 0x10U) : ((0x20000U 
                                              == (0x20000U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                 >> 0x11U)
                                              : ((0x40000U 
                                                  == 
                                                  (0x40000U 
                                                   & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                  >> 0x12U)
                                                  : 
                                                 ((0x80000U 
                                                   == 
                                                   (0x80000U 
                                                    & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                   ? 
                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                   >> 0x13U)
                                                   : 
                                                  ((0x100000U 
                                                    == 
                                                    (0x100000U 
                                                     & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                    ? 
                                                   (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                    >> 0x14U)
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0x200000U 
                                                      & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                     ? 
                                                    (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                     >> 0x15U)
                                                     : 
                                                    ((0x400000U 
                                                      == 
                                                      (0x400000U 
                                                       & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__s))
                                                      ? 
                                                     (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                      >> 0x16U)
                                                      : 
                                                     (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__b 
                                                      >> 0x17U))))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0704_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038559__109__Vfuncout;
}
