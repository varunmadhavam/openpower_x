// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

void Vsim::_settle__TOP__29(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__29\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp601[3];
    WData/*95:0*/ __Vtemp623[3];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2370_ 
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
                                 >> 0x1eU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x1cU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x1aU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x18U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x16U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x14U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0x12U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                              >> 0x10U))))
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
                                 >> 0xeU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                             >> 0xcU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 0xaU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                             >> 8U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                 >> 6U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                                           >> 4U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U] 
                              >> 2U) : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[2U])))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2371_ 
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
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 0x1eU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                              >> 0x1cU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 0x1aU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                              >> 0x18U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 0x16U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                              >> 0x14U))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 0x12U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                              >> 0x10U))))
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
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 0xeU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                             >> 0xcU))
                          : ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 0xaU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                             >> 8U)))
                      : ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                   >> 0xbU)))
                              ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                 >> 6U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                                           >> 4U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U] 
                              >> 2U) : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[3U])))));
    __Vtemp601[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU])));
    __Vtemp601[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7aU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6fU])));
    __Vtemp601[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U])));
    __Vtemp623[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U])));
    __Vtemp623[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x64U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x59U])));
    __Vtemp623[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0350_[0U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                     << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
            ? __Vtemp601[0U] : __Vtemp623[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0350_[1U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                     << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
            ? __Vtemp601[1U] : __Vtemp623[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0350_[2U] 
        = (0xffffffU & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                  << 0x15U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                    >> 0xbU))))
                         ? __Vtemp601[2U] : __Vtemp623[2U]));
}

void Vsim::_settle__TOP__30(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__30\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp649[3];
    WData/*95:0*/ __Vtemp671[3];
    // Body
    __Vtemp649[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU])));
    __Vtemp649[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa6U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9bU])));
    __Vtemp649[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                               >> 8U) : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                          << 0x10U) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                            >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU])));
    __Vtemp671[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U])));
    __Vtemp671[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x90U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x85U])));
    __Vtemp671[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
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
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                      >> 0xbU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                      >> 0xbU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0351_[0U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                     << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
            ? __Vtemp649[0U] : __Vtemp671[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0351_[1U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                     << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
            ? __Vtemp649[1U] : __Vtemp671[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0351_[2U] 
        = (0xffffffU & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                  << 0x15U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                    >> 0xbU))))
                         ? __Vtemp649[2U] : __Vtemp671[2U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1813_ 
        = ((((2U == (3U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U])) 
             & ((0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                           << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))) 
                == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                              << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))) 
            & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                  >> 0xdU))) & ((4U & ((IData)(7U) 
                                       - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                             >> 8U))))
                                 ? ((2U & ((IData)(7U) 
                                           - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 8U))))
                                     ? ((1U & ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 8U)))
                                         ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0x14U)
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0x13U))
                                     : ((1U & ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 8U)))
                                         ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0x12U)
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0x11U)))
                                 : ((2U & ((IData)(7U) 
                                           - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 8U))))
                                     ? ((1U & ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 8U)))
                                         ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0x10U)
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0xfU))
                                     : ((1U & ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 8U)))
                                         ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0xeU)
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                            >> 0xdU)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0441_ 
        = (0x10cU == ((0x3e0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                  << 0xaU) | (0x3e0U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                 >> 0x16U)))) 
                      | (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0442_ 
        = (0x10dU == ((0x3e0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                  << 0xaU) | (0x3e0U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                 >> 0x16U)))) 
                      | (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0443_ 
        = (0x16U == ((0x3e0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                 << 0xaU) | (0x3e0U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                >> 0x16U)))) 
                     | (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0444_ 
        = (0x1cU == ((0x3e0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                 << 0xaU) | (0x3e0U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                >> 0x16U)))) 
                     | (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0445_ 
        = (0x2d4U == ((0x3e0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                  << 0xaU) | (0x3e0U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                 >> 0x16U)))) 
                      | (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0447_ 
        = (0x2d5U == ((0x3e0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                  << 0xaU) | (0x3e0U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                 >> 0x16U)))) 
                      | (0x1fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1075_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                     >> 0xeU))) 
                                                >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1076_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                            << 0x12U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1077_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))) 
                  >> 5U) & (~ (3U & (((IData)(0x3fU) 
                                      - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                          << 0x12U) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                            >> 0xeU))) 
                                     >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1078_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))) 
                  >> 5U) & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))) 
                            >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0085_ 
        = (1U & ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))
                  ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                               << 0x15U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 0xbU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[1U] 
                                               >> 1U)))))
                  : ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                               << 0x15U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                 >> 0xbU))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 0x1fU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                                  >> 0x1dU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 0x1bU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                                  >> 0x19U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 0x17U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                                  >> 0x15U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 0x13U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                                  >> 0x11U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 0xfU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                                 >> 0xdU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 0xbU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                                 >> 9U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                        << 0x15U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 7U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                               >> 5U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                           >> 0xbU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                     >> 3U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_valids[0U] 
                                               >> 1U)))))));
}

void Vsim::_settle__TOP__33(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__33\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp867[5];
    WData/*95:0*/ __Vtemp871[3];
    WData/*159:0*/ __Vtemp872[5];
    WData/*255:0*/ __Vtemp876[8];
    WData/*447:0*/ __Vtemp878[14];
    WData/*511:0*/ __Vtemp879[16];
    WData/*543:0*/ __Vtemp880[17];
    WData/*95:0*/ __Vtemp883[3];
    WData/*127:0*/ __Vtemp890[4];
    WData/*127:0*/ __Vtemp894[4];
    WData/*159:0*/ __Vtemp900[5];
    WData/*159:0*/ __Vtemp906[5];
    WData/*799:0*/ __Vtemp908[25];
    WData/*95:0*/ __Vtemp909[3];
    WData/*95:0*/ __Vtemp919[3];
    WData/*95:0*/ __Vtemp920[3];
    WData/*191:0*/ __Vtemp922[6];
    WData/*191:0*/ __Vtemp923[6];
    WData/*1023:0*/ __Vtemp928[32];
    WData/*95:0*/ __Vtemp947[3];
    WData/*95:0*/ __Vtemp970[3];
    WData/*95:0*/ __Vtemp972[3];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1827_ 
        = ((((2U == (3U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U])) 
             & ((0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                           << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 0xbU))) 
                == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                              << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))) 
            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
               >> 0xdU)) & ((4U & ((IData)(7U) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 8U))))
                             ? ((2U & ((IData)(7U) 
                                       - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                             >> 8U))))
                                 ? ((1U & ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                              >> 8U)))
                                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                        >> 0x14U) : 
                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                     >> 0x13U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                        >> 8U)))
                                                    ? 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                                    >> 0x12U)
                                                    : 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                                    >> 0x11U)))
                             : ((2U & ((IData)(7U) 
                                       - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                             >> 8U))))
                                 ? ((1U & ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                              >> 8U)))
                                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                        >> 0x10U) : 
                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                     >> 0xfU)) : ((1U 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                       >> 8U)))
                                                   ? 
                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                                   >> 0xeU)
                                                   : 
                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                                   >> 0xdU)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0461_ 
        = (1U & ((~ ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                         >> 3U)) & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                     >> 2U) & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                  >> 3U))))) 
                 & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0849_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                     >> 0xeU))) 
                                                >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0850_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                            << 0x12U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0851_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))) 
                  >> 5U) & (~ (3U & (((IData)(0x3fU) 
                                      - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                          << 0x12U) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                            >> 0xeU))) 
                                     >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0853_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))) 
                  >> 5U) & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))) 
                            >> 4U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s 
        = (((0U == (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                             << 7U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                       >> 0x19U)))) 
            << 0xdU) | (((0xdU == (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                            << 7U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                              >> 0x19U)))) 
                         << 0xcU) | (((0xcU == (0xfU 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                    << 7U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                      >> 0x19U)))) 
                                      << 0xbU) | ((
                                                   (0xbU 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                         << 7U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                           >> 0x19U)))) 
                                                   << 0xaU) 
                                                  | (((0xaU 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                            << 7U) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                              >> 0x19U)))) 
                                                      << 9U) 
                                                     | (((8U 
                                                          == 
                                                          (0xfU 
                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                               << 7U) 
                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                 >> 0x19U)))) 
                                                         << 8U) 
                                                        | (((9U 
                                                             == 
                                                             (0xfU 
                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                  << 7U) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                    >> 0x19U)))) 
                                                            << 7U) 
                                                           | (((7U 
                                                                == 
                                                                (0xfU 
                                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                     << 7U) 
                                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                       >> 0x19U)))) 
                                                               << 6U) 
                                                              | (((6U 
                                                                   == 
                                                                   (0xfU 
                                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                        << 7U) 
                                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                          >> 0x19U)))) 
                                                                  << 5U) 
                                                                 | (((5U 
                                                                      == 
                                                                      (0xfU 
                                                                       & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                           << 7U) 
                                                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                             >> 0x19U)))) 
                                                                     << 4U) 
                                                                    | (((4U 
                                                                         == 
                                                                         (0xfU 
                                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                              << 7U) 
                                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                >> 0x19U)))) 
                                                                        << 3U) 
                                                                       | (((3U 
                                                                            == 
                                                                            (0xfU 
                                                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                                << 7U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                >> 0x19U)))) 
                                                                           << 2U) 
                                                                          | (((2U 
                                                                               == 
                                                                               (0xfU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                                << 7U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                >> 0x19U)))) 
                                                                              << 1U) 
                                                                             | (1U 
                                                                                == 
                                                                                (0xfU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                                                << 7U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                >> 0x19U)))))))))))))))));
    VL_EXTEND_WQ(135,64, __Vtemp867, (((QData)((IData)(
                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U]))));
    __Vtemp871[0U] = (0xfffff800U | ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                            >> 0xeU)) 
                                     | ((4U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                               >> 0xfU)) 
                                        | ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                  >> 0x10U)) 
                                           | (1U & 
                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                               >> 0x11U))))));
    __Vtemp871[1U] = 0xffffffffU;
    __Vtemp871[2U] = (0x7ffU | ((0x800000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                              << 0x14U)) 
                                | (0x7c0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                << 5U))));
    VL_EXTEND_WW(153,88, __Vtemp872, __Vtemp871);
    __Vtemp876[0U] = ((0xfe000000U & (__Vtemp872[0U] 
                                      << 0x19U)) | 
                      ((0x1000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      << 7U)) | ((0x800000U 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                     << 6U)) 
                                                 | ((0x400000U 
                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                        << 5U)) 
                                                    | ((0x200000U 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                           << 4U)) 
                                                       | ((0x100000U 
                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                              << 3U)) 
                                                          | ((0x80000U 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                 << 2U)) 
                                                             | ((0x40000U 
                                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                    << 1U)) 
                                                                | ((0x20000U 
                                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                   | ((0x10000U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                          >> 1U)) 
                                                                      | ((0x8000U 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                             >> 2U)) 
                                                                         | ((0x4000U 
                                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                            | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                               | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))))))))))))))))))))))))));
    __Vtemp876[5U] = ((0x1ffffffU & ((0x1fc0000U & 
                                      ((IData)((QData)((IData)(
                                                               (0x1fU 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                    << 0x13U) 
                                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      >> 0xdU)))))) 
                                       << 0x12U)) | 
                                     (__Vtemp872[4U] 
                                      >> 7U))) | (0xfe000000U 
                                                  & ((IData)((QData)((IData)(
                                                                             (0x1fU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)))))) 
                                                     << 0x12U)));
    __Vtemp876[6U] = ((0x1ffffffU & ((0x3ffffU & ((IData)((QData)((IData)(
                                                                          (0x1fU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                               << 0x13U) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)))))) 
                                                  >> 0xeU)) 
                                     | (0x1fc0000U 
                                        & ((IData)(
                                                   ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                         << 0x13U) 
                                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                           >> 0xdU))))) 
                                                    >> 0x20U)) 
                                           << 0x12U)))) 
                      | (0xfe000000U & ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                      << 0x13U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                        >> 0xdU))))) 
                                                 >> 0x20U)) 
                                        << 0x12U)));
    __Vtemp878[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                   >> 0x11U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                 >> 0x11U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                    >> 0x11U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                        << 0x18U) 
                                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                          >> 8U))))) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(
                                                                      (0x1000U 
                                                                       | ((0xf8000000U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                              << 9U)) 
                                                                          | ((0x4000000U 
                                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0x18U)) 
                                                                             | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))) 
                                                      << 0x13U) 
                                                     | (QData)((IData)(
                                                                       ((0x40000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            << 1U)) 
                                                                        | ((0x20000U 
                                                                            & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                           | ((0x10000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 1U)) 
                                                                              | ((0x8000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))))))))))))))))))))));
    __Vtemp878[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                    >> 0x11U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                  >> 0x11U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                     >> 0x11U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                         << 0x18U) 
                                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                           >> 8U))))) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(
                                                                       (0x1000U 
                                                                        | ((0xf8000000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                               << 9U)) 
                                                                           | ((0x4000000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0x18U)) 
                                                                              | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x40000U 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                             << 1U)) 
                                                                         | ((0x20000U 
                                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                            | ((0x10000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 1U)) 
                                                                               | ((0x8000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp879[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                   >> 0x11U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                 >> 0x11U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                    >> 0x11U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                       >> 0x11U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                          >> 0x11U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                             >> 0x11U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xdU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xbU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xaU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 9U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 8U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 7U)) 
                                                                                | ((0x800000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 6U)) 
                                                                                | ((0x400000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 5U)) 
                                                                                | ((0x200000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 4U)) 
                                                                                | ((0x100000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 3U)) 
                                                                                | ((0x80000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 2U)) 
                                                                                | ((0x40000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 1U)) 
                                                                                | ((0x20000U 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                                | ((0x10000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | (0x3fffU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x1cU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U))))))))))))))))))))))) 
                                                                  << 0x18U) 
                                                                 | (QData)((IData)(
                                                                                ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))))))))))))))))))))));
    __Vtemp879[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                    >> 0x11U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                  >> 0x11U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                     >> 0x11U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                        >> 0x11U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                           >> 0x11U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                              >> 0x11U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xdU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xbU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 0xaU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 9U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 8U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 7U)) 
                                                                                | ((0x800000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 6U)) 
                                                                                | ((0x400000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 5U)) 
                                                                                | ((0x200000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 4U)) 
                                                                                | ((0x100000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 3U)) 
                                                                                | ((0x80000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 2U)) 
                                                                                | ((0x40000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 1U)) 
                                                                                | ((0x20000U 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                                | ((0x10000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | (0x3fffU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x1cU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U))))))))))))))))))))))) 
                                                                   << 0x18U) 
                                                                  | (QData)((IData)(
                                                                                ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp880[0U] = ((0x80000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      << 0xeU)) | (
                                                   (0x40000000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       << 0xdU)) 
                                                   | ((0x20000000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          << 0xcU)) 
                                                      | ((0x10000000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                             << 0xbU)) 
                                                         | ((0x8000000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                << 0xaU)) 
                                                            | ((0x4000000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   << 9U)) 
                                                               | ((0x2000000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      << 8U)) 
                                                                  | ((0x1000000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                         << 7U)) 
                                                                     | ((0x800000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            << 6U)) 
                                                                        | ((0x400000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                               << 5U)) 
                                                                           | ((0x200000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 4U)) 
                                                                              | ((0x100000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 3U)) 
                                                                                | ((0x80000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 2U)) 
                                                                                | ((0x40000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 1U)) 
                                                                                | ((0x20000U 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                                | ((0x10000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    __Vtemp883[2U] = ((0x2000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                     >> 2U)) | (0x1ffffffU 
                                                & ((0x1000000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       >> 3U)) 
                                                   | ((0x800000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          >> 4U)) 
                                                      | ((0x400000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                             >> 5U)) 
                                                         | ((0x200000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                >> 6U)) 
                                                            | ((0x100000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   >> 7U)) 
                                                               | ((0x80000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      >> 8U)) 
                                                                  | ((0x40000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                         >> 9U)) 
                                                                     | ((0x20000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            >> 0xaU)) 
                                                                        | (0x1ffffU 
                                                                           & ((0x1e00000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x15U)) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)))))))))))));
    __Vtemp890[2U] = ((0x7fffffU & ((0x7f0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                  << 0xcU)) 
                                    | ((IData)(((QData)((IData)(
                                                                (0xffffU 
                                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                     << 0x1eU) 
                                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                       >> 2U))))) 
                                                >> 0x20U)) 
                                       >> 9U))) | (0xff800000U 
                                                   & (__Vtemp883[2U] 
                                                      << 0x17U)));
    __Vtemp894[3U] = ((0x4000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                     >> 1U)) | ((0x2000000U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                    >> 2U)) 
                                                | ((0x1000000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       >> 3U)) 
                                                   | ((0x800000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          >> 4U)) 
                                                      | (0x7fffffU 
                                                         & ((0x400000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                >> 5U)) 
                                                            | ((0x200000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   >> 6U)) 
                                                               | ((0x100000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      >> 7U)) 
                                                                  | ((0x80000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                         >> 8U)) 
                                                                     | ((0x40000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            >> 9U)) 
                                                                        | ((0x20000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                               >> 0xaU)) 
                                                                           | (__Vtemp883[2U] 
                                                                              >> 9U))))))))))));
    __Vtemp900[0U] = ((0x2000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                     << 8U)) | ((0x1000000U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                    << 7U)) 
                                                | ((0x800000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       << 6U)) 
                                                   | ((0x400000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          << 5U)) 
                                                      | ((0x200000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                             << 4U)) 
                                                         | ((0x100000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                << 3U)) 
                                                            | ((0x80000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   << 2U)) 
                                                               | ((0x40000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      << 1U)) 
                                                                  | ((0x20000U 
                                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                                     | ((0x10000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            >> 1U)) 
                                                                        | ((0x8000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                               >> 2U)) 
                                                                           | ((0x4000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 3U)) 
                                                                              | ((0x2000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))))))))))))))))))))))))));
    __Vtemp900[1U] = ((0x3fe0000U & ((IData)((QData)((IData)(
                                                             (0xffffU 
                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                    >> 2U)))))) 
                                     << 0x11U)) | (0xfc000000U 
                                                   & ((IData)((QData)((IData)(
                                                                              (0xffffU 
                                                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x1eU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)))))) 
                                                      << 0x11U)));
    __Vtemp906[4U] = ((0x80000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      << 4U)) | ((0x40000000U 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                     << 3U)) 
                                                 | ((0x20000000U 
                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                        << 2U)) 
                                                    | ((0x10000000U 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                           << 1U)) 
                                                       | ((0x8000000U 
                                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                          | ((0x4000000U 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                 >> 1U)) 
                                                             | (0x3ffffffU 
                                                                & ((0x2000000U 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                       >> 2U)) 
                                                                   | ((0x1000000U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                          >> 3U)) 
                                                                      | ((0x800000U 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                             >> 4U)) 
                                                                         | ((0x400000U 
                                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 5U)) 
                                                                            | ((0x200000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                               | (__Vtemp894[3U] 
                                                                                >> 6U)))))))))))));
    __Vtemp908[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                   >> 0x11U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                 >> 0x11U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                    >> 0x11U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                       >> 0x11U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                          >> 0x11U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                             >> 0x11U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x1eU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U))))) 
                                                            << 0x2aU) 
                                                           | (((QData)((IData)(
                                                                               ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))))))))))) 
                                                               << 0xaU) 
                                                              | (QData)((IData)(
                                                                                ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))))))))))))))));
    __Vtemp908[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                    >> 0x11U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                  >> 0x11U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                     >> 0x11U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                        >> 0x11U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                           >> 0x11U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                              >> 0x11U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x1eU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U))))) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U)))))))))))) 
                                                                << 0xaU) 
                                                               | (QData)((IData)(
                                                                                ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0x11U))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp909[2U] = (0x7fffffU & ((0x400000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 << 5U)) 
                                   | ((0x200000U & 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                        << 4U)) | (
                                                   (0x100000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       << 3U)) 
                                                   | ((0x80000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          << 2U)) 
                                                      | ((0x40000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                             << 1U)) 
                                                         | ((0x20000U 
                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]) 
                                                            | ((0x10000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   >> 1U)) 
                                                               | ((0x8000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      >> 2U)) 
                                                                  | ((0x4000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                         >> 3U)) 
                                                                     | ((0x2000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            >> 4U)) 
                                                                        | ((0x1000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                               >> 5U)) 
                                                                           | ((0x800U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 6U)) 
                                                                              | ((0x400U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xaU)) 
                                                                                | (0x7fU 
                                                                                & ((0x600000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x15U)) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xbU))))))))))))))))))));
    __Vtemp919[0U] = ((0xffffffc0U & ((IData)((((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U])))) 
                                      << 6U)) | (0x1fU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                     << 0x13U) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       >> 0xdU))));
    __Vtemp919[1U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U])))) 
                                >> 0x1aU)) | (0xffffffc0U 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U]))) 
                                                          >> 0x20U)) 
                                                 << 6U)));
    __Vtemp919[2U] = (0x3fU & ((IData)(((((QData)((IData)(
                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U]))) 
                                        >> 0x20U)) 
                               >> 0x1aU));
    VL_EXTEND_WW(77,70, __Vtemp920, __Vtemp919);
    __Vtemp922[4U] = ((0x1ff00000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      << 0x12U)) | 
                      (0xe0000000U & (__Vtemp909[2U] 
                                      << 0x1dU)));
    __Vtemp923[5U] = ((0x20000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      << 0xcU)) | (0x1fffffffU 
                                                   & ((0x10000000U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          << 0xbU)) 
                                                      | ((0x8000000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                             << 0xaU)) 
                                                         | ((0x4000000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                << 9U)) 
                                                            | ((0x2000000U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   << 8U)) 
                                                               | ((0x1000000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      << 7U)) 
                                                                  | ((0x800000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                         << 6U)) 
                                                                     | ((0x400000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                            << 5U)) 
                                                                        | ((0x200000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                               << 4U)) 
                                                                           | ((0x100000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                << 3U)) 
                                                                              | (__Vtemp909[2U] 
                                                                                >> 3U))))))))))));
    __Vtemp928[0xaU] = ((3U & (__Vtemp900[1U] >> 0x1eU)) 
                        | (0xfffffffcU & ((0xffffffcU 
                                           & ((0x7fffcU 
                                               & ((IData)((QData)((IData)(
                                                                          (0xffffU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                               << 0x1eU) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U)))))) 
                                                  >> 0xdU)) 
                                              | (0xff80000U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffffU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x1eU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 2U))))) 
                                                             >> 0x20U)) 
                                                    << 0x13U)))) 
                                          | (0xf0000000U 
                                             & (__Vtemp890[2U] 
                                                << 0x1cU)))));
    __Vtemp928[0xbU] = ((3U & (__Vtemp890[2U] >> 4U)) 
                        | (0xfffffffcU & ((0xffffffcU 
                                           & (__Vtemp890[2U] 
                                              >> 4U)) 
                                          | (0xf0000000U 
                                             & (__Vtemp894[3U] 
                                                << 0x1cU)))));
    __Vtemp928[0xdU] = ((3U & (__Vtemp906[4U] >> 0x1eU)) 
                        | (0xfffffffcU & ((0xfff80000U 
                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                              << 0xfU)) 
                                          | ((0x200U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 >> 0x12U)) 
                                             | ((0x100U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                    >> 0x13U)) 
                                                | ((0x80U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       >> 0x14U)) 
                                                   | ((0x40U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                          >> 0x15U)) 
                                                      | ((0x20U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                             >> 0x16U)) 
                                                         | ((0x10U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                >> 0x17U)) 
                                                            | ((8U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                   >> 0x18U)) 
                                                               | (4U 
                                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                     >> 0x19U))))))))))));
    __Vtemp928[0xeU] = ((3U & ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      >> 0x10U)) | 
                               (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                      >> 0x11U)))) 
                        | (0xfffffffcU & (__Vtemp880[0U] 
                                          << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0U] 
        = (1U | (0xfffffffeU & (__Vtemp920[0U] << 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[1U] 
        = ((1U & (__Vtemp920[0U] >> 0x1fU)) | (0xfffffffeU 
                                               & (__Vtemp920[1U] 
                                                  << 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[2U] 
        = ((1U & (__Vtemp920[1U] >> 0x1fU)) | (0xfffffffeU 
                                               & ((0x3fffc000U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                      << 0xcU)) 
                                                  | (__Vtemp920[2U] 
                                                     << 1U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[3U] 
        = (1U & (__Vtemp920[2U] >> 0x1fU));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[4U] 
        = (0xfffffffeU & (__Vtemp922[4U] << 1U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
        = ((1U & (__Vtemp922[4U] >> 0x1fU)) | (0xfffffffeU 
                                               & ((0x80000000U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                      << 0xeU)) 
                                                  | (__Vtemp923[5U] 
                                                     << 1U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
        = ((0xfffffffcU & (__Vtemp908[0U] << 2U)) | 
           ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                   >> 0x10U)) | (1U & ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                              >> 0x11U)) 
                                       | (__Vtemp923[5U] 
                                          >> 0x1fU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
        = ((3U & (__Vtemp908[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp908[1U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
        = ((3U & (__Vtemp908[1U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp900[0U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
        = ((3U & (__Vtemp900[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp900[1U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xaU] 
        = __Vtemp928[0xaU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xbU] 
        = __Vtemp928[0xbU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xcU] 
        = ((3U & (__Vtemp894[3U] >> 4U)) | (0xfffffffcU 
                                            & (__Vtemp906[4U] 
                                               << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
        = __Vtemp928[0xdU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
        = __Vtemp928[0xeU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
        = ((3U & (__Vtemp880[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp879[0U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
        = ((3U & (__Vtemp879[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp879[1U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
        = ((3U & (__Vtemp879[1U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp878[0U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
        = ((3U & (__Vtemp878[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp878[1U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
        = ((3U & (__Vtemp878[1U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp876[0U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
        = ((3U & (__Vtemp876[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & ((0x7fffffcU 
                                                   & (__Vtemp872[0U] 
                                                      >> 5U)) 
                                                  | (0xf8000000U 
                                                     & (__Vtemp872[1U] 
                                                        << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x15U] 
        = ((3U & (__Vtemp872[1U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp872[1U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp872[2U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x16U] 
        = ((3U & (__Vtemp872[2U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp872[2U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp872[3U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x17U] 
        = ((3U & (__Vtemp872[3U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp872[3U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp872[4U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
        = ((3U & (__Vtemp872[4U] >> 5U)) | (0xfffffffcU 
                                            & (__Vtemp876[5U] 
                                               << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
        = ((3U & (__Vtemp876[5U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp876[6U] 
                                                  << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
        = ((3U & (__Vtemp876[6U] >> 0x1eU)) | (0xfffffffcU 
                                               & ((0xf8000000U 
                                                   & (__Vtemp867[0U] 
                                                      << 0x1bU)) 
                                                  | (0x7fffffcU 
                                                     & ((0x7e00000U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                            << 0xdU)) 
                                                        | ((0x100000U 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                               << 7U)) 
                                                           | (0xffffcU 
                                                              & ((IData)(
                                                                         ((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                                << 0x13U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                                >> 0xdU))))) 
                                                                          >> 0x20U)) 
                                                                 >> 0xcU))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
        = ((3U & (__Vtemp867[0U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp867[0U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp867[1U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
        = ((3U & (__Vtemp867[1U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp867[1U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp867[2U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
        = ((3U & (__Vtemp867[2U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp867[2U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp867[3U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1eU] 
        = ((3U & (__Vtemp867[3U] >> 5U)) | (0xfffffffcU 
                                            & ((0x7fffffcU 
                                                & (__Vtemp867[3U] 
                                                   >> 5U)) 
                                               | (0xf8000000U 
                                                  & (__Vtemp867[4U] 
                                                     << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1fU] 
        = (3U & (__Vtemp867[4U] >> 5U));
    __Vtemp947[0U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
                           << 0x12U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[4U] 
                                        >> 0xeU)) : 
                      ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
                            << 0xbU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
                                        >> 0x15U)) : 
                       ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
                             << 4U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
                                       >> 0x1cU)) : 
                        ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                          ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xcU] 
                              << 0x1dU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xbU] 
                                           >> 3U)) : 
                         ((0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
                               << 0x16U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
                                            >> 0xaU))
                           : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
                               << 0xfU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
                                           >> 0x11U)))))));
    __Vtemp947[1U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
                           << 0x12U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
                                        >> 0xeU)) : 
                      ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
                            << 0xbU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
                                        >> 0x15U)) : 
                       ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xaU] 
                             << 4U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
                                       >> 0x1cU)) : 
                        ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                          ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
                              << 0x1dU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xcU] 
                                           >> 3U)) : 
                         ((0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
                               << 0x16U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
                                            >> 0xaU))
                           : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
                               << 0xfU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
                                           >> 0x11U)))))));
    __Vtemp947[2U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
                           << 0x12U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
                                        >> 0xeU)) : 
                      ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
                            << 0xbU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
                                        >> 0x15U)) : 
                       ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xbU] 
                             << 4U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xaU] 
                                       >> 0x1cU)) : 
                        ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                          ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
                              << 0x1dU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
                                           >> 3U)) : 
                         ((0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
                               << 0x16U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
                                            >> 0xaU))
                           : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
                               << 0xfU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
                                           >> 0x11U)))))));
    __Vtemp970[0U] = ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
                           << 8U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
                                     >> 0x18U)) : (
                                                   (0x200U 
                                                    == 
                                                    (0x200U 
                                                     & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                    ? 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
                                                     << 1U) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
                                                       >> 0x1fU))
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x400U 
                                                      & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                     ? 
                                                    ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x17U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x16U] 
                                                        >> 6U))
                                                     : 
                                                    ((0x800U 
                                                      == 
                                                      (0x800U 
                                                       & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                      ? 
                                                     ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
                                                       << 0x13U) 
                                                      | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
                                                         >> 0xdU))
                                                      : 
                                                     ((0x1000U 
                                                       == 
                                                       (0x1000U 
                                                        & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                       ? 
                                                      ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
                                                        << 0xcU) 
                                                       | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
                                                          >> 0x14U))
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0x2000U 
                                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                        ? 
                                                       ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
                                                         << 5U) 
                                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
                                                           >> 0x1bU))
                                                        : 0U))))));
    __Vtemp970[1U] = ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
                           << 8U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
                                     >> 0x18U)) : (
                                                   (0x200U 
                                                    == 
                                                    (0x200U 
                                                     & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                    ? 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x15U] 
                                                     << 1U) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
                                                       >> 0x1fU))
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x400U 
                                                      & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                     ? 
                                                    ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x17U] 
                                                        >> 6U))
                                                     : 
                                                    ((0x800U 
                                                      == 
                                                      (0x800U 
                                                       & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                      ? 
                                                     ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
                                                       << 0x13U) 
                                                      | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
                                                         >> 0xdU))
                                                      : 
                                                     ((0x1000U 
                                                       == 
                                                       (0x1000U 
                                                        & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                       ? 
                                                      ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
                                                        << 0xcU) 
                                                       | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
                                                          >> 0x14U))
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0x2000U 
                                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                        ? 
                                                       ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1eU] 
                                                         << 5U) 
                                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
                                                           >> 0x1bU))
                                                        : 0U))))));
    __Vtemp970[2U] = ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                       ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
                           << 8U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
                                     >> 0x18U)) : (
                                                   (0x200U 
                                                    == 
                                                    (0x200U 
                                                     & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                    ? 
                                                   ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x16U] 
                                                     << 1U) 
                                                    | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x15U] 
                                                       >> 0x1fU))
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x400U 
                                                      & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                     ? 
                                                    ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
                                                        >> 6U))
                                                     : 
                                                    ((0x800U 
                                                      == 
                                                      (0x800U 
                                                       & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                      ? 
                                                     ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
                                                       << 0x13U) 
                                                      | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
                                                         >> 0xdU))
                                                      : 
                                                     ((0x1000U 
                                                       == 
                                                       (0x1000U 
                                                        & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                       ? 
                                                      ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
                                                        << 0xcU) 
                                                       | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
                                                          >> 0x14U))
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0x2000U 
                                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                                        ? 
                                                       ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1fU] 
                                                         << 5U) 
                                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1eU] 
                                                           >> 0x1bU))
                                                        : 0U))))));
    __Vtemp972[0U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))) 
                             | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                            | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                           | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                          | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                         | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                        | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                       | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))))
                       ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0U]
                           : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                               ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[3U] 
                                   << 0x19U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[2U] 
                                                >> 7U))
                               : __Vtemp947[0U])) : 
                      __Vtemp970[0U]);
    __Vtemp972[1U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))) 
                             | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                            | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                           | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                          | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                         | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                        | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                       | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))))
                       ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[1U]
                           : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                               ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[4U] 
                                   << 0x19U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[3U] 
                                                >> 7U))
                               : __Vtemp947[1U])) : 
                      __Vtemp970[1U]);
    __Vtemp972[2U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))) 
                             | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                            | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                           | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                          | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                         | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                        | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))) 
                       | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))))
                       ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[2U]
                           : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                               ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
                                   << 0x19U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[4U] 
                                                >> 7U))
                               : __Vtemp947[2U])) : 
                      __Vtemp970[2U]);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[0U] 
        = __Vtemp972[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[1U] 
        = __Vtemp972[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[2U] 
        = (0x7fU & __Vtemp972[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[2U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[2U];
}
