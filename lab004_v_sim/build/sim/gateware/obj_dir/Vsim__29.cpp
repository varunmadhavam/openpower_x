// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__267(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__267\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3814[3];
    WData/*95:0*/ __Vtemp3836[3];
    WData/*95:0*/ __Vtemp3862[3];
    WData/*95:0*/ __Vtemp3884[3];
    // Body
    __Vtemp3814[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU])));
    __Vtemp3814[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7aU]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6fU])));
    __Vtemp3814[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U])));
    __Vtemp3836[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U])));
    __Vtemp3836[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x64U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x59U])));
    __Vtemp3836[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0844_[0U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                     << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
            ? __Vtemp3814[0U] : __Vtemp3836[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0844_[1U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                     << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
            ? __Vtemp3814[1U] : __Vtemp3836[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0844_[2U] 
        = (0xffffffU & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                    >> 0xeU))))
                         ? __Vtemp3814[2U] : __Vtemp3836[2U]));
    __Vtemp3862[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU])));
    __Vtemp3862[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa6U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9bU])));
    __Vtemp3862[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                                >> 8U) : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                           << 0x10U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                             >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU])));
    __Vtemp3884[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U])));
    __Vtemp3884[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x90U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x85U])));
    __Vtemp3884[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
                        ? ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U]))
                        : ((2U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                            ? ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU] 
                                 << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                              >> 8U))
                                : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                    << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                                 >> 0x10U)))
                            : ((1U & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? 
                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                 << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                           >> 0x18U))
                                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0845_[0U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                     << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
            ? __Vtemp3862[0U] : __Vtemp3884[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0845_[1U] 
        = ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                     << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
            ? __Vtemp3862[1U] : __Vtemp3884[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0845_[2U] 
        = (0xffffffU & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                    >> 0xeU))))
                         ? __Vtemp3862[2U] : __Vtemp3884[2U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1902_ 
        = ((1U == (3U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U])) 
           | (2U == (3U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1279_ 
        = (1U & ((~ (1U & (((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                            << 0xcU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0x14U))) 
                           >> 2U))) & (~ (3U & (((IData)(7U) 
                                                 - 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                     >> 0x14U))) 
                                                >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1280_ 
        = (1U & ((~ (1U & (((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                            << 0xcU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0x14U))) 
                           >> 2U))) & (((IData)(7U) 
                                        - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                            << 0xcU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0x14U))) 
                                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1281_ 
        = (1U & ((((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                   << 0xcU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0x14U))) 
                  >> 2U) & (~ (3U & (((IData)(7U) - 
                                      ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                        << 0xcU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                        >> 0x14U))) 
                                     >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1282_ 
        = (1U & ((((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                   << 0xcU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0x14U))) 
                  >> 2U) & (((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                             << 0xcU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0x14U))) 
                            >> 1U)));
    vlTOPp->sim__DOT__interface0_converted_interface_we = 0U;
    if (vlTOPp->sim__DOT__converter0_state) {
        if ((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                    >> 3U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                              >> 2U)))) {
            vlTOPp->sim__DOT__interface0_converted_interface_we 
                = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                         >> 0xcU));
        }
    }
}

VL_INLINE_OPT void Vsim::_sequent__TOP__268(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__268\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->sim__DOT__interface0_converted_interface_adr = 0U;
    if (vlTOPp->sim__DOT__converter0_state) {
        vlTOPp->sim__DOT__interface0_converted_interface_adr 
            = ((0x3ffffffeU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[1U] 
                                << 0x1cU) | (0xffffffeU 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U] 
                                                >> 4U)))) 
               | (IData)(vlTOPp->sim__DOT__converter0_counter));
    }
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1302_ 
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1304_ 
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1305_ 
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1306_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))) 
                  >> 5U) & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))) 
                            >> 4U)));
    vlTOPp->sim__DOT__interface0_converted_interface_sel = 0U;
    if (vlTOPp->sim__DOT__converter0_state) {
        if (vlTOPp->sim__DOT__converter0_counter) {
            if (vlTOPp->sim__DOT__converter0_counter) {
                vlTOPp->sim__DOT__interface0_converted_interface_sel 
                    = (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 8U)));
            }
        } else {
            vlTOPp->sim__DOT__interface0_converted_interface_sel 
                = (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                            << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                         >> 4U)));
        }
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0418_ 
        = ((1U & ((IData)(1U) - vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[0U]))
            ? (((QData)((IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___23_) 
                                  << 0x18U) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___22_) 
                                                << 0x10U) 
                                               | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___21_) 
                                                   << 8U) 
                                                  | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___20_)))))) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___19_) 
                                              << 0x18U) 
                                             | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___18_) 
                                                 << 0x10U) 
                                                | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___17_) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT___16_)))))))
            : (((QData)((IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___23_) 
                                  << 0x18U) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___22_) 
                                                << 0x10U) 
                                               | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___21_) 
                                                   << 8U) 
                                                  | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___20_)))))) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___19_) 
                                              << 0x18U) 
                                             | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___18_) 
                                                 << 0x10U) 
                                                | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___17_) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT___16_))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_ls1 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
        = (((QData)((IData)((0xffU & ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U])
                                       ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[8U] 
                                           << 0x15U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                             >> 0xbU))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[8U] 
                                           << 0x1dU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                             >> 3U)))))) 
            << 0x18U) | (QData)((IData)((0xff00U & 
                                         ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[8U] 
                                           << 0x1dU) 
                                          | (0x1fffff00U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                >> 3U)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__Vfuncout 
        = (0xffU & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                     ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                         ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                             ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x20U))))))
                             : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x28U)))))))
                         : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                             ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x20U))))))
                             : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x30U))))))))
                     : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                         ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                             ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x20U))))))
                             : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x28U)))))))
                         : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                             ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x20U))))))
                             : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                 ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x18U)))))
                                 : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                     ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 0x10U))))
                                     : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                         ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : (IData)(
                                                       (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b 
                                                        >> 8U)))
                                         : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__b)
                                             : 0U))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___231_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310540__158__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__269(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__269\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___038_ 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U])
            ? (7U & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                       << 0x17U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                    >> 9U)) - (IData)(1U)))
            : 0U);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___155_ 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U] 
                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                    >> 0xfU)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___153_ 
        = ((0U != (0xffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[8U] 
                             << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                          >> 0xbU)))) 
           & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                 >> 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__s 
        = (((2U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)) 
            << 2U) | (((1U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)) 
                       << 1U) | (0U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__b 
        = (4U | (1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__Vfuncout 
        = (1U & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__s)))
                  ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__b)
                  : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__b) 
                         >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__b) 
                                      >> 2U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___22_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03216__129__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__s 
        = (((2U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)) 
            << 2U) | (((1U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)) 
                       << 1U) | (0U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__b 
        = ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_)
              ? 1U : 0U) << 4U) | ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_)
                                      ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)
                                      : 2U) << 2U) 
                                   | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_)
                                       ? 1U : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__Vfuncout 
        = (3U & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__s)))
                  ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__b)
                  : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__b) 
                         >> 2U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__s)))
                                    ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__b) 
                                       >> 4U) : 0U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___21_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT____03212__128__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[0U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[1U] 
                << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[0U] 
                             >> 1U)) : (IData)((((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[2U])) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U])) 
                                                      >> 5U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[1U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[2U] 
                << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[1U] 
                             >> 1U)) : (IData)(((((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[2U])) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U])) 
                                                     << 0x1bU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U])) 
                                                       >> 5U))) 
                                                >> 0x20U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[2U] 
        = (1U & ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[2U] 
                     >> 1U) : (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                     >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__use_previous 
        = (1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                  >> 7U) & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                             >> 4U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[2U] 
                                       >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0416_ 
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A16__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A17__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A18__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A19__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A20__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A21__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                        >> 0xbU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A22__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A23__02Eplru__DOT__tree) 
                                                    >> 1U))))
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A24__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A25__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A26__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A27__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A28__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A29__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                        >> 0xbU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A30__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A31__02Eplru__DOT__tree) 
                                                    >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0417_ 
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A0__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A1__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A2__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A3__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A4__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A5__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                        >> 0xbU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A6__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A7__02Eplru__DOT__tree) 
                                                    >> 1U))))
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A8__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A9__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A10__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A11__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                << 0x15U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                  >> 0xbU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A12__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A13__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                        >> 0xbU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A14__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__maybe_plrus__02Eplrus__03A15__02Eplru__DOT__tree) 
                                                    >> 1U))))));
}
