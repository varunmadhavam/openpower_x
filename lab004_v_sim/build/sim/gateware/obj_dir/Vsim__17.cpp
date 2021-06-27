// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_settle__TOP__198(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__198\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp2794[5];
    WData/*287:0*/ __Vtemp2813[9];
    WData/*287:0*/ __Vtemp2815[9];
    WData/*351:0*/ __Vtemp2823[11];
    WData/*351:0*/ __Vtemp2824[11];
    WData/*95:0*/ __Vtemp2834[3];
    WData/*127:0*/ __Vtemp2835[4];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1859_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_miss)
            ? (VL_ULL(0x1000000000000000) | (((QData)((IData)(
                                                              (7U 
                                                               & ((IData)(
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__real_addr 
                                                                           >> 3U)) 
                                                                  - (IData)(1U))))) 
                                              << 0x3dU) 
                                             | ((VL_ULL(0xfffffffffffff80) 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__real_addr 
                                                    << 4U)) 
                                                | (QData)((IData)(
                                                                  ((0x7eU 
                                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                                        << 0x16U) 
                                                                       | (0x3ffffeU 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                                             >> 0xaU)))) 
                                                                   | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__replace_way)))))))
            : (((QData)((IData)((7U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                       >> 0xaU)))) 
                << 0x3dU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1855_)) 
                              << 0x3cU) | (VL_ULL(0xfffffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                    >> 0xdU)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0881_ 
        = (VL_ULL(0x7fffffffffff) & ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[8U])
                                      ? ((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_)) 
                                         << 0x2aU) : 
                                     ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0175_)
                                       ? ((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_)) 
                                          << 0x2aU)
                                       : (((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0819_[4U])) 
                                           << 0x37U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0819_[3U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0819_[2U])) 
                                                >> 9U))))));
    __Vtemp2794[0U] = ((0xfffffffeU & (((0x80000000U 
                                         & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                         ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U] 
                                               >> 1U))
                                         : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                             ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U] 
                                                   >> 1U))
                                             : ((0xfffffffeU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                                     << 0x1eU) 
                                                    | (0x3ffffffeU 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U] 
                                                          >> 2U)))) 
                                                | (1U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U] 
                                                      >> 1U))))) 
                                       << 1U)) | ((~ 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                                                    >> 0x1fU)) 
                                                  & ((1U 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                                      ? 
                                                     ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_) 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                                      : 
                                                     (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___093_) 
                                                       & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]) 
                                                      & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_)))));
    __Vtemp2794[1U] = ((1U & (((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                    << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U] 
                                                 >> 1U))
                                : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                    ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U] 
                                        >> 1U)) : (
                                                   (0xfffffffeU 
                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                                        << 0x1eU) 
                                                       | (0x3ffffffeU 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U] 
                                                             >> 2U)))) 
                                                   | (1U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U] 
                                                         >> 1U))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & (((0x80000000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                                 ? 
                                                ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                                    >> 1U))
                                                 : 
                                                ((1U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                                  ? 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                                     >> 1U))
                                                  : 
                                                 ((1U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                                      >> 2U)) 
                                                  | (0xfffffffeU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                         << 0x1eU) 
                                                        | (0x3ffffffeU 
                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                                              >> 2U))))))) 
                                               << 1U)));
    __Vtemp2794[2U] = ((1U & (((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                    << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                                 >> 1U))
                                : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                    ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                        << 0x1fU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U] 
                                        >> 1U)) : (
                                                   (1U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                                       >> 2U)) 
                                                   | (0xfffffffeU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                          << 0x1eU) 
                                                         | (0x3ffffffeU 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                                               >> 2U))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & (((0x80000000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                                 ? 
                                                ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                                    >> 1U))
                                                 : 
                                                ((1U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                                  ? 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                                     >> 1U))
                                                  : 
                                                 ((1U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                      >> 2U)) 
                                                  | (0xfffffffeU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                         << 0x1eU) 
                                                        | (0x3ffffffeU 
                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                              >> 2U))))))) 
                                               << 1U)));
    __Vtemp2794[3U] = ((1U & (((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                    << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                                 >> 1U))
                                : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                    ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                        << 0x1fU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U] 
                                        >> 1U)) : (
                                                   (1U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                       >> 2U)) 
                                                   | (0xfffffffeU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                          << 0x1eU) 
                                                         | (0x3ffffffeU 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                               >> 2U))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & (((0x80000000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                                 ? 
                                                ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                                    >> 1U))
                                                 : 
                                                ((1U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                                  ? 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                                     >> 1U))
                                                  : 
                                                 ((0xffffe000U 
                                                   & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_) 
                                                      << 0xdU)) 
                                                  | ((0xfffffffeU 
                                                      & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___094_) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                           >> 2U)))))) 
                                               << 1U)));
    __Vtemp2794[4U] = ((1U & (((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U] 
                                    << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                                 >> 1U))
                                : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                    ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U] 
                                        << 0x1fU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U] 
                                        >> 1U)) : (
                                                   (0xffffe000U 
                                                    & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_) 
                                                       << 0xdU)) 
                                                   | ((0xfffffffeU 
                                                       & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___094_) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                            >> 2U)))))) 
                              >> 0x1fU)) | (0x1ffffeU 
                                            & (((0x80000000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                                 ? 
                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U] 
                                                 >> 1U)
                                                 : 
                                                ((1U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
                                                  ? 
                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U] 
                                                  >> 1U)
                                                  : 
                                                 ((0xfff80000U 
                                                   & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___100_) 
                                                      << 0x13U)) 
                                                  | ((0x1fffU 
                                                      & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_) 
                                                         >> 0x13U)) 
                                                     | (0xffffe000U 
                                                        & ((IData)(
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_ 
                                                                    >> 0x20U)) 
                                                           << 0xdU)))))) 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___017_[0U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec1)
            ? 0U : __Vtemp2794[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___017_[1U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec1)
            ? 0U : __Vtemp2794[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___017_[2U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec1)
            ? 0U : __Vtemp2794[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___017_[3U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec1)
            ? 0U : __Vtemp2794[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___017_[4U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec1)
            ? 0U : __Vtemp2794[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___009_[0U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_)
                ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            : ((1U & ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]) 
                      | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_))))
                ? ((0xfffffffcU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                    << 0x1fU) | (0x7ffffffcU 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U] 
                                                    >> 1U)))) 
                   | ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U]) 
                      | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___093_)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___009_[1U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_)
                ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U]
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[1U])
            : ((1U & ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]) 
                      | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_))))
                ? ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                          >> 1U)) | (0xfffffffcU & 
                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                       << 0x1fU) | 
                                      (0x7ffffffcU 
                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[1U] 
                                          >> 1U)))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___009_[2U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_)
                ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[2U])
            : ((1U & ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]) 
                      | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_))))
                ? ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                          >> 1U)) | (0xfffffffcU & 
                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                       << 0x1fU) | 
                                      (0x7ffffffcU 
                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                          >> 1U)))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___009_[3U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_)
                ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U]
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[3U])
            : ((1U & ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]) 
                      | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_))))
                ? ((0xffffc000U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_) 
                                   << 0xeU)) | ((0xfffffffcU 
                                                 & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___094_) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                      >> 1U))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___009_[4U] 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])
            ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_)
                ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U]
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[4U])
            : ((1U & ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]) 
                      | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_))))
                ? ((0xfff00000U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___100_) 
                                   << 0x14U)) | ((0x3fffU 
                                                  & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_) 
                                                     >> 0x12U)) 
                                                 | (0xffffc000U 
                                                    & ((IData)(
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_ 
                                                                >> 0x20U)) 
                                                       << 0xeU))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___60_ 
        = (7U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_) 
                  & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred)))
                  ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___59_
                  : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___55_)));
    __Vtemp2813[2U] = ((0xf8000000U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[2U])) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[1U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U])) 
                                                      >> 7U)))) 
                                       << 0x1bU)) | 
                       ((0x7e00000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U] 
                                       << 0x14U)) | 
                        ((0x1f8000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U] 
                                       << 0xeU)) | 
                         ((0x7e00U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___54_) 
                                      << 8U)) | (0x1ffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U])) 
                                                               << 0x3eU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U])) 
                                                                  << 0x1eU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U])) 
                                                                    >> 2U))) 
                                                             >> 0x20U)) 
                                                    >> 0x17U))))));
    __Vtemp2815[8U] = ((0xf0000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U] 
                                        << 0x1cU) & 
                                       ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___12_) 
                                          << 0x1cU) 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                                            << 0x1bU)) 
                                        | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___03_) 
                                            << 0x1cU) 
                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                                              << 0xcU))))) 
                       | ((0xf8000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U] 
                                           << 0x1bU) 
                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___12_) 
                                               << 0x1bU) 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                                                 << 0x1aU)) 
                                             | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___03_) 
                                                 << 0x1bU) 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                                                   << 0xbU))))) 
                          | (0x7ffffffU & ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[2U])) 
                                                      << 0x39U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[1U])) 
                                                         << 0x19U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U])) 
                                                           >> 7U))) 
                                                    >> 0x20U)) 
                                           >> 5U))));
    __Vtemp2823[0U] = ((0xfffffe00U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U])) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U])) 
                                                      >> 2U)))) 
                                       << 9U)) | ((
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                          << 0x12U) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                            >> 0xeU))))
                                                     ? 0U
                                                     : 
                                                    (0x3fU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                           >> 0x10U)))) 
                                                   << 3U) 
                                                  | ((6U 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                          << 0x13U) 
                                                         | (0x7fffeU 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                               >> 0xdU)))) 
                                                     | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_))));
    __Vtemp2823[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U])) 
                                                 >> 2U)))) 
                                  >> 0x17U)) | (0xfffffe00U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U])) 
                                                              << 0x3eU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U])) 
                                                                   >> 2U))) 
                                                            >> 0x20U)) 
                                                   << 9U)));
    __Vtemp2823[2U] = __Vtemp2813[2U];
    __Vtemp2823[3U] = ((0x7ffffffU & ((IData)((((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U])) 
                                                     >> 7U)))) 
                                      >> 5U)) | (0xf8000000U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[2U])) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[1U])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 0x1bU)));
    __Vtemp2823[4U] = ((0x7ffffffU & ((IData)(((((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[2U])) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[1U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U])) 
                                                      >> 7U))) 
                                               >> 0x20U)) 
                                      >> 5U)) | (0xf8000000U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[2U])) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U])) 
                                                                 << 0x19U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U])) 
                                                                   >> 7U)))) 
                                                    << 0x1bU)));
    __Vtemp2823[5U] = ((0x7ffffffU & ((IData)((((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U])) 
                                                     >> 7U)))) 
                                      >> 5U)) | (0xf8000000U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[2U])) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 0x1bU)));
    __Vtemp2823[6U] = ((0x7ffffffU & ((IData)(((((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[2U])) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U])) 
                                                      >> 7U))) 
                                               >> 0x20U)) 
                                      >> 5U)) | (0xf8000000U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[2U])) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[1U])) 
                                                                 << 0x19U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U])) 
                                                                   >> 7U)))) 
                                                    << 0x1bU)));
    __Vtemp2823[7U] = ((0x7ffffffU & ((IData)((((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U])) 
                                                     >> 7U)))) 
                                      >> 5U)) | (0xf8000000U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[2U])) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[1U])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 0x1bU)));
    __Vtemp2823[8U] = ((0xc0000000U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_to_decode2) 
                                       << 0x1eU)) | 
                       ((0xe0000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U] 
                                         << 0x1dU) 
                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___12_) 
                                             << 0x1dU) 
                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                                               << 0x1cU)) 
                                           | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___03_) 
                                               << 0x1dU) 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                                                 << 0xdU))))) 
                        | __Vtemp2815[8U]));
    __Vtemp2823[9U] = ((0x80000000U & ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_to_decode2 
                                                >> 0x20U)) 
                                       << 0x1fU)) | 
                       ((0x40000000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                         << 0x1eU) 
                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___00_) 
                                             << 0x1eU) 
                                            & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                                               << 0x1dU)) 
                                           | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                                               << 0x1cU) 
                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                                                 << 0x1bU))))) 
                        | (0x3fffffffU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_to_decode2) 
                                          >> 2U))));
    __Vtemp2823[0xaU] = ((0xf80U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                    << 5U)) | ((0xffffffc0U 
                                                & (((~ 
                                                     ((0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                              >> 0x10U)))) 
                                                      | (0x2cU 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                >> 0x10U)))))) 
                                                    & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___73_)) 
                                                   << 6U)) 
                                               | ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___67_) 
                                                      << 5U)) 
                                                  | ((0xfffffff0U 
                                                      & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___75_) 
                                                         << 4U)) 
                                                     | (0xfU 
                                                        & ((IData)(
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_to_decode2 
                                                                    >> 0x20U)) 
                                                           >> 1U))))));
    VL_EXTEND_WW(334,332, __Vtemp2824, __Vtemp2823);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[0U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[0U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[1U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[1U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[2U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[2U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[3U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[3U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[4U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[4U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[5U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[5U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[6U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[6U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[7U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[7U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[8U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[8U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[9U] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : __Vtemp2824[9U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[0xaU] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : ((0xffff0000U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 << 0xeU)) 
                                             | ((0xc000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U]) 
                                                | __Vtemp2824[0xaU])))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[0xbU] 
        = ((1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                      >> 0x1fU)) | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred))))
            ? ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2) 
                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                         >> 0x1fU))) ? 0U : ((0x1000000U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                 << 4U)) 
                                             | ((0xf00000U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                    << 0xaU)) 
                                                | ((0xffff0000U 
                                                    & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___63_) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & ((0xc000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                             << 0xeU)) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                            >> 0x12U)))))))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___13_ 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_write_valid 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___54_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___25_ 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___25_ 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___25_ 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___57_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0915_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0913_)
            ? 5U : (7U & ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[8U])
                           ? ((4U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                         >> 0xeU)) 
                                     << 2U)) | (2U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                   >> 4U)))
                           : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0175_)
                               ? ((4U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                             >> 0xeU)) 
                                         << 2U)) | 
                                  (2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                         >> 4U))) : 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0819_[6U] 
                                << 1U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0819_[5U] 
                                          >> 0x1fU))))));
    __Vtemp2834[0U] = ((0x80000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1403_) 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                            >> 0xdU))
                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                            >> 0x1fU)) 
                                       << 0x1fU)) | 
                       ((0x40000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1403_) 
                                          & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                >> 0xdU)))
                                          ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                          : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                             >> 0x1eU)) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1402_) 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                >> 0xdU))
                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                             : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                >> 0x1dU)) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1402_) 
                                                & (~ 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                    >> 0xdU)))
                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                : (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                   >> 0x1cU)) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1401_) 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                     >> 0xdU))
                                                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                  : 
                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                  >> 0x1bU)) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1401_) 
                                                     & (~ 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xdU)))
                                                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                     : 
                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                     >> 0x1aU)) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1400_) 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                >> 0xdU))
                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                             : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                >> 0x19U)) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1400_) 
                                                & (~ 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                    >> 0xdU)))
                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                : (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                   >> 0x18U)) 
                                              << 0x18U)) 
                                          | ((0x800000U 
                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1399_) 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xdU))
                                                   ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                   : 
                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                             | ((0x400000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1399_) 
                                                      & (~ 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xdU)))
                                                      ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                      : 
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                      >> 0x16U)) 
                                                    << 0x16U)) 
                                                | ((0x200000U 
                                                    & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1397_) 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                            >> 0xdU))
                                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                         : 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                         >> 0x15U)) 
                                                       << 0x15U)) 
                                                   | ((0x100000U 
                                                       & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1397_) 
                                                            & (~ 
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                >> 0xdU)))
                                                            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                            : 
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                            >> 0x14U)) 
                                                          << 0x14U)) 
                                                      | ((0x80000U 
                                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1396_) 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                  >> 0xdU))
                                                               ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                               : 
                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                               >> 0x13U)) 
                                                             << 0x13U)) 
                                                         | ((0x40000U 
                                                             & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1396_) 
                                                                  & (~ 
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                      >> 0xdU)))
                                                                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                  : 
                                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                  >> 0x12U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1395_) 
                                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                        >> 0xdU))
                                                                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                     : 
                                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                     >> 0x11U)) 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1395_) 
                                                                        & (~ 
                                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                            >> 0xdU)))
                                                                        ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                        : 
                                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                        >> 0x10U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1394_) 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                              >> 0xdU))
                                                                           ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                           : 
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                           >> 0xfU)) 
                                                                         << 0xfU)) 
                                                                     | ((0x4000U 
                                                                         & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1394_) 
                                                                              & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                              ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                              : 
                                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                              >> 0xeU)) 
                                                                            << 0xeU)) 
                                                                        | ((0x2000U 
                                                                            & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1393_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 0xdU)) 
                                                                               << 0xdU)) 
                                                                           | ((0x1000U 
                                                                               & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1393_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                              | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1392_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1392_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1391_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1391_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1390_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1390_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1389_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1389_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1388_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1388_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1386_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1386_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U])))))))))))))))))))))))))))))))));
    __Vtemp2834[1U] = (IData)((((QData)((IData)(((0x80000000U 
                                                  & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1436_) 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xdU))
                                                       ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                       : 
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | ((0x40000000U 
                                                     & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1436_) 
                                                          & (~ 
                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                              >> 0xdU)))
                                                          ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                          : 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                          >> 0x1eU)) 
                                                        << 0x1eU)) 
                                                    | ((0x20000000U 
                                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1435_) 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                >> 0xdU))
                                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                             : 
                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                             >> 0x1dU)) 
                                                           << 0x1dU)) 
                                                       | ((0x10000000U 
                                                           & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1435_) 
                                                                & (~ 
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                    >> 0xdU)))
                                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                : 
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                >> 0x1cU)) 
                                                              << 0x1cU)) 
                                                          | ((0x8000000U 
                                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1434_) 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                      >> 0xdU))
                                                                   ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                   : 
                                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                   >> 0x1bU)) 
                                                                 << 0x1bU)) 
                                                             | ((0x4000000U 
                                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1434_) 
                                                                      & (~ 
                                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                          >> 0xdU)))
                                                                      ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                      : 
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                      >> 0x1aU)) 
                                                                    << 0x1aU)) 
                                                                | ((0x2000000U 
                                                                    & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1433_) 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                            >> 0xdU))
                                                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                         : 
                                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                         >> 0x19U)) 
                                                                       << 0x19U)) 
                                                                   | ((0x1000000U 
                                                                       & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1433_) 
                                                                            & (~ 
                                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                            : 
                                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                            >> 0x18U)) 
                                                                          << 0x18U)) 
                                                                      | ((0x800000U 
                                                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1432_) 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                               ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                               : 
                                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                               >> 0x17U)) 
                                                                             << 0x17U)) 
                                                                         | ((0x400000U 
                                                                             & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1432_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                            | ((0x200000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1431_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                               | ((0x100000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1431_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1430_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1430_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1428_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1428_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1427_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1427_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1426_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1426_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1425_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1425_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1424_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1424_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1423_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1423_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1422_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1422_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1421_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1421_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1420_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1420_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U]))))))))))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1419_) 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                      >> 0xdU))
                                                                   ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                   : 
                                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                   >> 0x1fU)) 
                                                                 << 0x1fU)) 
                                                             | ((0x40000000U 
                                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1419_) 
                                                                      & (~ 
                                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                          >> 0xdU)))
                                                                      ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                      : 
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                      >> 0x1eU)) 
                                                                    << 0x1eU)) 
                                                                | ((0x20000000U 
                                                                    & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1418_) 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                            >> 0xdU))
                                                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                         : 
                                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                         >> 0x1dU)) 
                                                                       << 0x1dU)) 
                                                                   | ((0x10000000U 
                                                                       & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1418_) 
                                                                            & (~ 
                                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                            : 
                                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                            >> 0x1cU)) 
                                                                          << 0x1cU)) 
                                                                      | ((0x8000000U 
                                                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1417_) 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                               ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                               : 
                                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                               >> 0x1bU)) 
                                                                             << 0x1bU)) 
                                                                         | ((0x4000000U 
                                                                             & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1417_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                            | ((0x2000000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1416_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                               | ((0x1000000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1416_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1415_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1415_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1414_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1414_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1413_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1413_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1412_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1412_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1411_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1411_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1410_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1410_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1409_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1409_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1408_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1408_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1407_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1407_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1406_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1406_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1405_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1405_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1404_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1404_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U])))))))))))))))))))))))))))))))))))));
    __Vtemp2834[2U] = (IData)(((((QData)((IData)(((0x80000000U 
                                                   & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1436_) 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xdU))
                                                        ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                        : 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                        >> 0x1fU)) 
                                                      << 0x1fU)) 
                                                  | ((0x40000000U 
                                                      & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1436_) 
                                                           & (~ 
                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                               >> 0xdU)))
                                                           ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                           : 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                           >> 0x1eU)) 
                                                         << 0x1eU)) 
                                                     | ((0x20000000U 
                                                         & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1435_) 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                 >> 0xdU))
                                                              ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                              : 
                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                              >> 0x1dU)) 
                                                            << 0x1dU)) 
                                                        | ((0x10000000U 
                                                            & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1435_) 
                                                                 & (~ 
                                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                     >> 0xdU)))
                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                 : 
                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                 >> 0x1cU)) 
                                                               << 0x1cU)) 
                                                           | ((0x8000000U 
                                                               & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1434_) 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                       >> 0xdU))
                                                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                    : 
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                    >> 0x1bU)) 
                                                                  << 0x1bU)) 
                                                              | ((0x4000000U 
                                                                  & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1434_) 
                                                                       & (~ 
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                           >> 0xdU)))
                                                                       ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                       : 
                                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                       >> 0x1aU)) 
                                                                     << 0x1aU)) 
                                                                 | ((0x2000000U 
                                                                     & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1433_) 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                             >> 0xdU))
                                                                          ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                          : 
                                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                          >> 0x19U)) 
                                                                        << 0x19U)) 
                                                                    | ((0x1000000U 
                                                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1433_) 
                                                                             & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                             : 
                                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                             >> 0x18U)) 
                                                                           << 0x18U)) 
                                                                       | ((0x800000U 
                                                                           & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1432_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                : 
                                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x17U)) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1432_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1431_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1431_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1430_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1430_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1428_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1428_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1427_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1427_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1426_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1426_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1425_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1425_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1424_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1424_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1423_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1423_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1422_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1422_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1421_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1421_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1420_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1420_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U]))))))))))))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1419_) 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                       >> 0xdU))
                                                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                    : 
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                    >> 0x1fU)) 
                                                                  << 0x1fU)) 
                                                              | ((0x40000000U 
                                                                  & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1419_) 
                                                                       & (~ 
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                           >> 0xdU)))
                                                                       ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                       : 
                                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                       >> 0x1eU)) 
                                                                     << 0x1eU)) 
                                                                 | ((0x20000000U 
                                                                     & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1418_) 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                             >> 0xdU))
                                                                          ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                          : 
                                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                          >> 0x1dU)) 
                                                                        << 0x1dU)) 
                                                                    | ((0x10000000U 
                                                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1418_) 
                                                                             & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                             : 
                                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                             >> 0x1cU)) 
                                                                           << 0x1cU)) 
                                                                       | ((0x8000000U 
                                                                           & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1417_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                : 
                                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x1bU)) 
                                                                              << 0x1bU)) 
                                                                          | ((0x4000000U 
                                                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1417_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                             | ((0x2000000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1416_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1416_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1415_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1415_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1414_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1414_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1413_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1413_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1412_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1412_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1411_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1411_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1410_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1410_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1409_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1409_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1408_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1408_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1407_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1407_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1406_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1406_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1405_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1405_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1404_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1404_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U])))))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp2835[0U] = ((0x80000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1385_) 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                            >> 0xdU))
                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                            >> 0x1fU)) 
                                       << 0x1fU)) | 
                       ((0x40000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1385_) 
                                          & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                >> 0xdU)))
                                          ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                          : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                             >> 0x1eU)) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1384_) 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                >> 0xdU))
                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                             : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                >> 0x1dU)) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1384_) 
                                                & (~ 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                    >> 0xdU)))
                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                : (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                   >> 0x1cU)) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1383_) 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                     >> 0xdU))
                                                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                  : 
                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                  >> 0x1bU)) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1383_) 
                                                     & (~ 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xdU)))
                                                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                     : 
                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                     >> 0x1aU)) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1382_) 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                >> 0xdU))
                                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                             : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                >> 0x19U)) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1382_) 
                                                & (~ 
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                    >> 0xdU)))
                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                : (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                   >> 0x18U)) 
                                              << 0x18U)) 
                                          | ((0x800000U 
                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1381_) 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xdU))
                                                   ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                   : 
                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                             | ((0x400000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1381_) 
                                                      & (~ 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xdU)))
                                                      ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                      : 
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                      >> 0x16U)) 
                                                    << 0x16U)) 
                                                | ((0x200000U 
                                                    & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1380_) 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                            >> 0xdU))
                                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                         : 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                         >> 0x15U)) 
                                                       << 0x15U)) 
                                                   | ((0x100000U 
                                                       & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1380_) 
                                                            & (~ 
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                >> 0xdU)))
                                                            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                            : 
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                            >> 0x14U)) 
                                                          << 0x14U)) 
                                                      | ((0x80000U 
                                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1379_) 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                  >> 0xdU))
                                                               ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                               : 
                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                               >> 0x13U)) 
                                                             << 0x13U)) 
                                                         | ((0x40000U 
                                                             & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1379_) 
                                                                  & (~ 
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                      >> 0xdU)))
                                                                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                  : 
                                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                  >> 0x12U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1378_) 
                                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                        >> 0xdU))
                                                                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                     : 
                                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                     >> 0x11U)) 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1378_) 
                                                                        & (~ 
                                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                            >> 0xdU)))
                                                                        ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                        : 
                                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                        >> 0x10U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1377_) 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                              >> 0xdU))
                                                                           ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                           : 
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                           >> 0xfU)) 
                                                                         << 0xfU)) 
                                                                     | ((0x4000U 
                                                                         & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1377_) 
                                                                              & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                              ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                              : 
                                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                              >> 0xeU)) 
                                                                            << 0xeU)) 
                                                                        | ((0x2000U 
                                                                            & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1376_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 0xdU)) 
                                                                               << 0xdU)) 
                                                                           | ((0x1000U 
                                                                               & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1376_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                              | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1375_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1375_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1374_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1374_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1373_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1373_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1372_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1372_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1371_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1371_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1370_) 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1370_) 
                                                                                & (~ 
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                                                >> 0xdU)))
                                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1890_)
                                                                                 : 
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U])))))))))))))))))))))))))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1891_[0U] 
        = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[2U] 
            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1887_))
            ? __Vtemp2835[0U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1891_[1U] 
        = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[2U] 
            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1887_))
            ? __Vtemp2834[0U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1891_[2U] 
        = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[2U] 
            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1887_))
            ? __Vtemp2834[1U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1891_[3U] 
        = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[2U] 
            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1887_))
            ? __Vtemp2834[2U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1872_[3U]);
}
