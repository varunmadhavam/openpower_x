// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_settle__TOP__18(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__18\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0167_ 
        = (1U & ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                              << 0x13U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU))))
                  ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 1U)))))
                  : ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 1U)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2191_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                        >> 1U))))));
}

VL_INLINE_OPT void Vsim::_settle__TOP__19(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__19\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2192_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                        >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0083_ 
        = (1U & ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                              << 0x13U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU))))
                  ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 1U)))))
                  : ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 1U)))))));
}

VL_INLINE_OPT void Vsim::_settle__TOP__20(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__20\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0125_ 
        = (1U & ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                              << 0x13U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU))))
                  ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 1U)))))
                  : ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 1U)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2104_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                        >> 1U))))));
}

VL_INLINE_OPT void Vsim::_settle__TOP__21(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__21\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2105_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                        >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2146_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[2U] 
                                        >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2147_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xdU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0xdU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[3U] 
                                        >> 1U))))));
}

VL_INLINE_OPT void Vsim::_settle__TOP__31(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__31\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp697[3];
    WData/*95:0*/ __Vtemp719[3];
    WData/*95:0*/ __Vtemp743[3];
    WData/*95:0*/ __Vtemp765[3];
    // Body
    __Vtemp697[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U])));
    __Vtemp697[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4eU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x43U])));
    __Vtemp697[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U])));
    __Vtemp719[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU])));
    __Vtemp719[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x38U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2dU])));
    __Vtemp719[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU])));
    __Vtemp743[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U])));
    __Vtemp743[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x22U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x17U])));
    __Vtemp743[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U])));
    __Vtemp765[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0U])));
    __Vtemp765[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xcU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[1U])));
    __Vtemp765[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0108_[0U] 
        = ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
            ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                         << 0x15U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU))))
                ? __Vtemp697[0U] : __Vtemp719[0U]) : 
           ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU))))
             ? __Vtemp743[0U] : __Vtemp765[0U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0108_[1U] 
        = ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
            ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                         << 0x15U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU))))
                ? __Vtemp697[1U] : __Vtemp719[1U]) : 
           ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU))))
             ? __Vtemp743[1U] : __Vtemp765[1U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0108_[2U] 
        = (0xffffffU & ((0x10U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                    << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 0xbU))))
                         ? ((8U & ((IData)(0x3fU) - 
                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                     << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                             ? __Vtemp697[2U] : __Vtemp719[2U])
                         : ((8U & ((IData)(0x3fU) - 
                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                     << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                             ? __Vtemp743[2U] : __Vtemp765[2U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0371_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                           << 0x15U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                             >> 0xbU))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                               << 0x15U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 0xbU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x1dU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x19U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x15U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x11U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                               << 0x15U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 0xbU))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                             >> 0xdU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                             >> 9U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                           >> 5U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                              >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                        >> 1U))))));
}
