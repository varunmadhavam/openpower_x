// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__408(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__408\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp5313[10];
    WData/*575:0*/ __Vtemp5317[18];
    WData/*639:0*/ __Vtemp5318[20];
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b 
        = ((8U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1178_) 
                  << 3U)) | ((4U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1169_) 
                                    << 2U)) | ((2U 
                                                & (((~ 
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                                                      & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1124_))) 
                                                    << 1U) 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                      >> 1U))) 
                                               | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1093_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1195_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316306__25__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b 
        = ((8U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1178_) 
                  << 2U)) | ((4U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1169_) 
                                    << 1U)) | ((2U 
                                                & (((~ 
                                                     ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1102_) 
                                                      & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1103_))) 
                                                    << 1U) 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                      >> 2U))) 
                                               | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1094_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1196_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316310__26__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s 
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
    VL_EXTEND_WQ(320,64, __Vtemp5313, vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___305_);
    __Vtemp5317[0U] = (IData)(((0x10U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])
                                ? (((QData)((IData)(
                                                    ((0U 
                                                      == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                      ? 
                                                     (0xfU 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                         >> 0x1cU))
                                                      : 0U))) 
                                    << 0x1cU) | (QData)((IData)(
                                                                ((((1U 
                                                                    == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                    ? 
                                                                   (0xfU 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                       >> 0x18U))
                                                                    : 0U) 
                                                                  << 0x18U) 
                                                                 | ((((2U 
                                                                       == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                       ? 
                                                                      (0xfU 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                          >> 0x14U))
                                                                       : 0U) 
                                                                     << 0x14U) 
                                                                    | ((((3U 
                                                                          == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                          ? 
                                                                         (0xfU 
                                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                             >> 0x10U))
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((4U 
                                                                             == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                             ? 
                                                                            (0xfU 
                                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                                >> 0xcU))
                                                                             : 0U) 
                                                                           << 0xcU) 
                                                                          | ((((5U 
                                                                                == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                                ? 
                                                                               (0xfU 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                                >> 8U))
                                                                                : 0U) 
                                                                              << 8U) 
                                                                             | ((((6U 
                                                                                == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                                 ? 
                                                                                (0xfU 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                                >> 4U))
                                                                                 : 0U) 
                                                                                << 4U) 
                                                                                | ((7U 
                                                                                == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                                 ? 
                                                                                (0xfU 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)
                                                                                 : 0U))))))))))
                                : (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in))));
    __Vtemp5317[1U] = (IData)((((0x10U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])
                                 ? (((QData)((IData)(
                                                     ((0U 
                                                       == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                       ? 
                                                      (0xfU 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                          >> 0x1cU))
                                                       : 0U))) 
                                     << 0x1cU) | (QData)((IData)(
                                                                 ((((1U 
                                                                     == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                     ? 
                                                                    (0xfU 
                                                                     & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                        >> 0x18U))
                                                                     : 0U) 
                                                                   << 0x18U) 
                                                                  | ((((2U 
                                                                        == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                        ? 
                                                                       (0xfU 
                                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                           >> 0x14U))
                                                                        : 0U) 
                                                                      << 0x14U) 
                                                                     | ((((3U 
                                                                           == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                           ? 
                                                                          (0xfU 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                              >> 0x10U))
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((4U 
                                                                              == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                              ? 
                                                                             (0xfU 
                                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                                >> 0xcU))
                                                                              : 0U) 
                                                                            << 0xcU) 
                                                                           | ((((5U 
                                                                                == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                                 ? 
                                                                                (0xfU 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                                >> 8U))
                                                                                 : 0U) 
                                                                               << 8U) 
                                                                              | ((((6U 
                                                                                == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                                 ? 
                                                                                (0xfU 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in 
                                                                                >> 4U))
                                                                                 : 0U) 
                                                                                << 4U) 
                                                                                | ((7U 
                                                                                == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_))
                                                                                 ? 
                                                                                (0xfU 
                                                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in)
                                                                                 : 0U))))))))))
                                 : (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in))) 
                               >> 0x20U));
    __Vtemp5318[0U] = (IData)(((0x100000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])
                                ? ((VL_ULL(0xfffffffffffc0000) 
                                    & (((1U == ((0x3e0U 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                     << 0xaU) 
                                                    | (0x3e0U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                          >> 0x16U)))) 
                                                | (0x1fU 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                                         ? (((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                 >> 4U)))) 
                                             << 0xdU) 
                                            | (QData)((IData)(
                                                              ((0x1000U 
                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                   << 0xaU)) 
                                                               | ((0x800U 
                                                                   & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                      << 0xbU)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                           >> 1U))))))))
                                         : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                            >> 0x12U)) 
                                       << 0x12U)) | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in)))))
                                : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0452_)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0451_)))));
    __Vtemp5318[1U] = (IData)((((0x100000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])
                                 ? ((VL_ULL(0xfffffffffffc0000) 
                                     & (((1U == ((0x3e0U 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      << 0xaU) 
                                                     | (0x3e0U 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                           >> 0x16U)))) 
                                                 | (0x1fU 
                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])))
                                          ? (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                  >> 4U)))) 
                                              << 0xdU) 
                                             | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                    << 0xaU)) 
                                                                | ((0x800U 
                                                                    & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                       << 0xbU)) 
                                                                   | ((2U 
                                                                       & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                                            >> 1U))))))))
                                          : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                             >> 0x12U)) 
                                        << 0x12U)) 
                                    | (QData)((IData)(
                                                      (0x3ffffU 
                                                       & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in)))))
                                 : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0452_)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0451_)))) 
                               >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[1U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[2U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[3U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[4U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[5U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[6U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[7U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[8U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0206_[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0206_[0U]))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[9U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0206_[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0206_[0U]))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xaU] 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___129_) 
            << 0x10U) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___128_) 
                          << 8U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___127_)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xbU] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___130_;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xcU] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xdU] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xeU] 
        = (IData)(((0x80U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])
                    ? VL_ULL(0) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                   - VL_ULL(1))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xfU] 
        = (IData)((((0x80U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])
                     ? VL_ULL(0) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                                    - VL_ULL(1))) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x10U] 
        = (IData)(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0307_)
                    ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                       - VL_ULL(1)) : VL_ULL(0)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x11U] 
        = (IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0307_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in 
                        - VL_ULL(1)) : VL_ULL(0)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x12U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x13U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x14U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x15U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x16U] 
        = (IData)((((0x10U & ((IData)(0x1fU) - (0x1fU 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    << 0xaU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                      >> 0x16U)))))
                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0962_)
                     : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0961_))
                    ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in
                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x17U] 
        = (IData)(((((0x10U & ((IData)(0x1fU) - (0x1fU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                     << 0xaU) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                       >> 0x16U)))))
                      ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0962_)
                      : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0961_))
                     ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in
                     : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x18U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x19U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1aU] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1bU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U]))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1cU] 
        = __Vtemp5318[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1dU] 
        = __Vtemp5318[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1eU] 
        = __Vtemp5317[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1fU] 
        = __Vtemp5317[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x20U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x21U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x22U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x23U] = 0U;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x24U] 
        = (IData)(((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])
                    ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in
                    : VL_ULL(0)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x25U] 
        = (IData)((((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])
                     ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in
                     : VL_ULL(0)) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x26U] 
        = __Vtemp5313[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x27U] 
        = __Vtemp5313[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x28U] 
        = __Vtemp5313[2U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x29U] 
        = __Vtemp5313[3U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2aU] 
        = __Vtemp5313[4U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2bU] 
        = __Vtemp5313[5U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2cU] 
        = __Vtemp5313[6U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2dU] 
        = __Vtemp5313[7U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2eU] 
        = __Vtemp5313[8U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2fU] 
        = __Vtemp5313[9U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__Vfuncout 
        = (((((((((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s)) 
                  | (2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                 | (4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                | (8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
               | (0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
              | (0x20U == (0x20U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
             | (0x40U == (0x40U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
            | (0x80U == (0x80U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s)))
            ? ((1U == (1U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0U])))
                : ((2U == (2U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[2U])))
                    : ((4U == (4U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[4U])))
                        : ((8U == (8U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[6U])))
                            : ((0x10U == (0x10U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[8U])))
                                : ((0x20U == (0x20U 
                                              & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xaU])))
                                    : ((0x40U == (0x40U 
                                                  & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xcU])))
                                        : (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xfU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0xeU]))))))))))
            : (((((((((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s)) 
                      | (0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                     | (0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                    | (0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                   | (0x1000U == (0x1000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                  | (0x2000U == (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                 | (0x4000U == (0x4000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                | (0x8000U == (0x8000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s)))
                ? ((0x100U == (0x100U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x11U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x10U])))
                    : ((0x200U == (0x200U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x12U])))
                        : ((0x400U == (0x400U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x14U])))
                            : ((0x800U == (0x800U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x16U])))
                                : ((0x1000U == (0x1000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x19U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x18U])))
                                    : ((0x2000U == 
                                        (0x2000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1bU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1aU])))
                                        : ((0x4000U 
                                            == (0x4000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                            ? (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1cU])))
                                            : (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x1eU]))))))))))
                : (((((((((0x10000U == (0x10000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s)) 
                          | (0x20000U == (0x20000U 
                                          & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                         | (0x40000U == (0x40000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                        | (0x80000U == (0x80000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                       | (0x100000U == (0x100000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                      | (0x200000U == (0x200000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                     | (0x400000U == (0x400000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))) 
                    | (0x800000U == (0x800000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s)))
                    ? ((0x10000U == (0x10000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x20U])))
                        : ((0x20000U == (0x20000U & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x23U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x22U])))
                            : ((0x40000U == (0x40000U 
                                             & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x25U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x24U])))
                                : ((0x80000U == (0x80000U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x27U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x26U])))
                                    : ((0x100000U == 
                                        (0x100000U 
                                         & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x29U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x28U])))
                                        : ((0x200000U 
                                            == (0x200000U 
                                                & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                            ? (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2aU])))
                                            : ((0x400000U 
                                                == 
                                                (0x400000U 
                                                 & vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__s))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2dU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2cU])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2fU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__b[0x2eU]))))))))))
                    : VL_ULL(0))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0702_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT____038519__107__Vfuncout;
}

VL_INLINE_OPT void Vsim::_combo__TOP__409(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_combo__TOP__409\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5356[3];
    WData/*95:0*/ __Vtemp5357[3];
    WData/*159:0*/ __Vtemp5358[5];
    WData/*159:0*/ __Vtemp5359[5];
    WData/*223:0*/ __Vtemp5360[7];
    WData/*223:0*/ __Vtemp5361[7];
    WData/*287:0*/ __Vtemp5362[9];
    WData/*287:0*/ __Vtemp5363[9];
    WData/*351:0*/ __Vtemp5364[11];
    WData/*351:0*/ __Vtemp5365[11];
    WData/*415:0*/ __Vtemp5366[13];
    WData/*415:0*/ __Vtemp5367[13];
    WData/*479:0*/ __Vtemp5368[15];
    WData/*479:0*/ __Vtemp5369[15];
    WData/*95:0*/ __Vtemp5380[3];
    WData/*95:0*/ __Vtemp5381[3];
    WData/*703:0*/ __Vtemp5383[22];
    WData/*95:0*/ __Vtemp5402[3];
    WData/*95:0*/ __Vtemp5415[3];
    WData/*159:0*/ __Vtemp5417[5];
    WData/*95:0*/ __Vtemp5421[3];
    WData/*159:0*/ __Vtemp5422[5];
    WData/*255:0*/ __Vtemp5426[8];
    WData/*447:0*/ __Vtemp5428[14];
    WData/*511:0*/ __Vtemp5429[16];
    WData/*543:0*/ __Vtemp5430[17];
    WData/*95:0*/ __Vtemp5433[3];
    WData/*127:0*/ __Vtemp5440[4];
    WData/*127:0*/ __Vtemp5444[4];
    WData/*159:0*/ __Vtemp5450[5];
    WData/*159:0*/ __Vtemp5456[5];
    WData/*799:0*/ __Vtemp5458[25];
    WData/*95:0*/ __Vtemp5459[3];
    WData/*95:0*/ __Vtemp5469[3];
    WData/*95:0*/ __Vtemp5470[3];
    WData/*191:0*/ __Vtemp5472[6];
    WData/*191:0*/ __Vtemp5473[6];
    WData/*1023:0*/ __Vtemp5478[32];
    WData/*95:0*/ __Vtemp5497[3];
    WData/*95:0*/ __Vtemp5520[3];
    WData/*95:0*/ __Vtemp5522[3];
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s 
        = (((9U == (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                             << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                          >> 5U)))) 
            << 9U) | (((8U == (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                        << 0x1bU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                        >> 5U)))) << 8U) 
                      | (((7U == (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                           << 0x1bU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                             >> 5U)))) 
                          << 7U) | (((6U == (0xfU & 
                                             ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                               << 0x1bU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                 >> 5U)))) 
                                     << 6U) | (((5U 
                                                 == 
                                                 (0xfU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                        >> 5U)))) 
                                                << 5U) 
                                               | (((4U 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                         << 0x1bU) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                           >> 5U)))) 
                                                   << 4U) 
                                                  | (((3U 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                            << 0x1bU) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                              >> 5U)))) 
                                                      << 3U) 
                                                     | (((2U 
                                                          == 
                                                          (0xfU 
                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                               << 0x1bU) 
                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                                 >> 5U)))) 
                                                         << 2U) 
                                                        | (((1U 
                                                             == 
                                                             (0xfU 
                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                                    >> 5U)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0xfU 
                                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                                   << 0x1bU) 
                                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                                     >> 5U)))))))))))));
    __Vtemp5356[0U] = (0xfffffffeU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U]);
    __Vtemp5356[1U] = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U]) 
                       | (0xfffffffeU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U]));
    __Vtemp5356[2U] = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U]) 
                       | (0xeU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U]));
    VL_EXTEND_WW(69,68, __Vtemp5357, __Vtemp5356);
    __Vtemp5358[0U] = __Vtemp5357[0U];
    __Vtemp5358[1U] = __Vtemp5357[1U];
    __Vtemp5358[2U] = ((0xffffffe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                       << 4U)) | __Vtemp5357[2U]);
    __Vtemp5358[3U] = ((0x1fU & ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                           << 4U)) 
                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                    >> 0x1cU))) | (0xffffffe0U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                                      << 4U)));
    __Vtemp5358[4U] = ((0x1fU & ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                           << 4U)) 
                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                    >> 0x1cU))) | (0xe0U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                                      << 4U)));
    VL_EXTEND_WW(137,136, __Vtemp5359, __Vtemp5358);
    __Vtemp5360[0U] = __Vtemp5359[0U];
    __Vtemp5360[1U] = __Vtemp5359[1U];
    __Vtemp5360[2U] = __Vtemp5359[2U];
    __Vtemp5360[3U] = __Vtemp5359[3U];
    __Vtemp5360[4U] = ((0xfffffe00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                       << 8U)) | __Vtemp5359[4U]);
    __Vtemp5360[5U] = ((0x1ffU & ((0x100U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                             << 8U)) 
                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                     >> 0x18U))) | 
                       (0xfffffe00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                       << 8U)));
    __Vtemp5360[6U] = ((0x1ffU & ((0x100U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                             << 8U)) 
                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                     >> 0x18U))) | 
                       (0xe00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                  << 8U)));
    VL_EXTEND_WW(205,204, __Vtemp5361, __Vtemp5360);
    __Vtemp5362[0U] = __Vtemp5361[0U];
    __Vtemp5362[1U] = __Vtemp5361[1U];
    __Vtemp5362[2U] = __Vtemp5361[2U];
    __Vtemp5362[3U] = __Vtemp5361[3U];
    __Vtemp5362[4U] = __Vtemp5361[4U];
    __Vtemp5362[5U] = __Vtemp5361[5U];
    __Vtemp5362[6U] = ((0xffffe000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                       << 0xcU)) | 
                       __Vtemp5361[6U]);
    __Vtemp5362[7U] = ((0x1fffU & ((0x1000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                               << 0xcU)) 
                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                      >> 0x14U))) | 
                       (0xffffe000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                       << 0xcU)));
    __Vtemp5362[8U] = ((0x1fffU & ((0x1000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                               << 0xcU)) 
                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                      >> 0x14U))) | 
                       (0xe000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                   << 0xcU)));
    VL_EXTEND_WW(273,272, __Vtemp5363, __Vtemp5362);
    __Vtemp5364[0U] = __Vtemp5363[0U];
    __Vtemp5364[1U] = __Vtemp5363[1U];
    __Vtemp5364[2U] = __Vtemp5363[2U];
    __Vtemp5364[3U] = __Vtemp5363[3U];
    __Vtemp5364[4U] = __Vtemp5363[4U];
    __Vtemp5364[5U] = __Vtemp5363[5U];
    __Vtemp5364[6U] = __Vtemp5363[6U];
    __Vtemp5364[7U] = __Vtemp5363[7U];
    __Vtemp5364[8U] = ((0xfffe0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                       << 0x10U)) | 
                       __Vtemp5363[8U]);
    __Vtemp5364[9U] = ((0x1ffffU & ((0x10000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                                 << 0x10U)) 
                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                       >> 0x10U))) 
                       | (0xfffe0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                         << 0x10U)));
    __Vtemp5364[0xaU] = ((0x1ffffU & ((0x10000U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                                   << 0x10U)) 
                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                         >> 0x10U))) 
                         | (0xe0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                        << 0x10U)));
    VL_EXTEND_WW(341,340, __Vtemp5365, __Vtemp5364);
    __Vtemp5366[0U] = __Vtemp5365[0U];
    __Vtemp5366[1U] = __Vtemp5365[1U];
    __Vtemp5366[2U] = __Vtemp5365[2U];
    __Vtemp5366[3U] = __Vtemp5365[3U];
    __Vtemp5366[4U] = __Vtemp5365[4U];
    __Vtemp5366[5U] = __Vtemp5365[5U];
    __Vtemp5366[6U] = __Vtemp5365[6U];
    __Vtemp5366[7U] = __Vtemp5365[7U];
    __Vtemp5366[8U] = __Vtemp5365[8U];
    __Vtemp5366[9U] = __Vtemp5365[9U];
    __Vtemp5366[0xaU] = ((0xffe00000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                         << 0x14U)) 
                         | __Vtemp5365[0xaU]);
    __Vtemp5366[0xbU] = ((0x1fffffU & ((0x100000U & 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                         << 0x14U)) 
                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                          >> 0xcU))) 
                         | (0xffe00000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                           << 0x14U)));
    __Vtemp5366[0xcU] = ((0x1fffffU & ((0x100000U & 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                         << 0x14U)) 
                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                          >> 0xcU))) 
                         | (0xe00000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                         << 0x14U)));
    VL_EXTEND_WW(409,408, __Vtemp5367, __Vtemp5366);
    __Vtemp5368[0U] = __Vtemp5367[0U];
    __Vtemp5368[1U] = __Vtemp5367[1U];
    __Vtemp5368[2U] = __Vtemp5367[2U];
    __Vtemp5368[3U] = __Vtemp5367[3U];
    __Vtemp5368[4U] = __Vtemp5367[4U];
    __Vtemp5368[5U] = __Vtemp5367[5U];
    __Vtemp5368[6U] = __Vtemp5367[6U];
    __Vtemp5368[7U] = __Vtemp5367[7U];
    __Vtemp5368[8U] = __Vtemp5367[8U];
    __Vtemp5368[9U] = __Vtemp5367[9U];
    __Vtemp5368[0xaU] = __Vtemp5367[0xaU];
    __Vtemp5368[0xbU] = __Vtemp5367[0xbU];
    __Vtemp5368[0xcU] = ((0xfe000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                         << 0x18U)) 
                         | __Vtemp5367[0xcU]);
    __Vtemp5368[0xdU] = ((0x1ffffffU & ((0x1000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                            << 0x18U)) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                           >> 8U))) 
                         | (0xfe000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                           << 0x18U)));
    __Vtemp5368[0xeU] = ((0x1ffffffU & ((0x1000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                            << 0x18U)) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                           >> 8U))) 
                         | (0xe000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                          << 0x18U)));
    VL_EXTEND_WW(477,476, __Vtemp5369, __Vtemp5368);
    __Vtemp5380[0U] = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                        ? ((0xfffffff0U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])) 
                                                          >> 0x11U)))) 
                                           << 4U)) 
                           | ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                     >> 3U)) | ((4U 
                                                 & ((~ 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                       >> 5U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                         >> 4U))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                          >> 1U)))))))
                        : (0xfffffffeU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U]));
    __Vtemp5380[1U] = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                        ? ((0xfU & ((IData)((((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1U])) 
                                                 << 0xfU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])) 
                                                   >> 0x11U)))) 
                                    >> 0x1cU)) | (0xfffffff0U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                                                << 0x2fU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1U])) 
                                                                   << 0xfU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])) 
                                                                     >> 0x11U))) 
                                                              >> 0x20U)) 
                                                     << 4U)))
                        : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U]) 
                           | (0xfffffffeU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U])));
    __Vtemp5380[2U] = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                        ? (0xfU & ((IData)(((((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1U])) 
                                                 << 0xfU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])) 
                                                   >> 0x11U))) 
                                            >> 0x20U)) 
                                   >> 0x1cU)) : ((1U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U]) 
                                                 | (0xeU 
                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])));
    VL_EXTEND_WW(69,68, __Vtemp5381, __Vtemp5380);
    __Vtemp5383[0x14U] = ((0xffU & ((0x1fU & ((0x10U 
                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                                  << 4U)) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                                 >> 0x1cU))) 
                                    | (0xe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                                << 4U)))) 
                          | (0xffffff00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                            << 4U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0U] 
        = __Vtemp5381[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[1U] 
        = __Vtemp5381[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[2U] 
        = ((0xffffffe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                           << 4U)) | __Vtemp5381[2U]);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[3U] 
        = ((0x1fU & ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                               << 4U)) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                          >> 0x1cU))) 
           | (0xffffffe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                             << 4U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[4U] 
        = ((0xffffff00U & (__Vtemp5369[0U] << 8U)) 
           | ((0x1fU & ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                  << 4U)) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                             >> 0x1cU))) 
              | (0xe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                          << 4U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[5U] 
        = ((0xffU & (__Vtemp5369[0U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[1U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[6U] 
        = ((0xffU & (__Vtemp5369[1U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[2U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[7U] 
        = ((0xffU & (__Vtemp5369[2U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[3U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[8U] 
        = ((0xffU & (__Vtemp5369[3U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[4U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[9U] 
        = ((0xffU & (__Vtemp5369[4U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[5U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xaU] 
        = ((0xffU & (__Vtemp5369[5U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[6U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xbU] 
        = ((0xffU & (__Vtemp5369[6U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[7U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xcU] 
        = ((0xffU & (__Vtemp5369[7U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[8U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xdU] 
        = ((0xffU & (__Vtemp5369[8U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[9U] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xeU] 
        = ((0xffU & (__Vtemp5369[9U] >> 0x18U)) | (0xffffff00U 
                                                   & (__Vtemp5369[0xaU] 
                                                      << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xfU] 
        = ((0xffU & (__Vtemp5369[0xaU] >> 0x18U)) | 
           (0xffffff00U & (__Vtemp5369[0xbU] << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x10U] 
        = ((0xffU & (__Vtemp5369[0xbU] >> 0x18U)) | 
           (0xffffff00U & (__Vtemp5369[0xcU] << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x11U] 
        = ((0xffU & (__Vtemp5369[0xcU] >> 0x18U)) | 
           (0xffffff00U & (__Vtemp5369[0xdU] << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x12U] 
        = ((0xffU & (__Vtemp5369[0xdU] >> 0x18U)) | 
           (0xffffff00U & (__Vtemp5369[0xeU] << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x13U] 
        = ((0xffU & ((0xe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                               << 4U)) | (__Vtemp5369[0xeU] 
                                          >> 0x18U))) 
           | (0xffffff00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                             << 4U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x14U] 
        = __Vtemp5383[0x14U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x15U] 
        = (0xffU & ((0x1fU & ((0x10U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                        << 4U)) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                                   >> 0x1cU))) 
                    | (0xe0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                << 4U))));
    __Vtemp5402[0U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[5U] 
                            << 0x18U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[4U] 
                                         >> 8U)) : 
                       ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[7U] 
                             << 0x14U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[6U] 
                                          >> 0xcU))
                         : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                             ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[9U] 
                                 << 0x10U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[8U] 
                                              >> 0x10U))
                             : ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                 ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xbU] 
                                     << 0xcU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xaU] 
                                                 >> 0x14U))
                                 : ((0x40U == (0x40U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                     ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xdU] 
                                         << 8U) | (
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xcU] 
                                                   >> 0x18U))
                                     : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xfU] 
                                         << 4U) | (
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xeU] 
                                                   >> 0x1cU)))))));
    __Vtemp5402[1U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[6U] 
                            << 0x18U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[5U] 
                                         >> 8U)) : 
                       ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[8U] 
                             << 0x14U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[7U] 
                                          >> 0xcU))
                         : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                             ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xaU] 
                                 << 0x10U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[9U] 
                                              >> 0x10U))
                             : ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                 ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xcU] 
                                     << 0xcU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xbU] 
                                                 >> 0x14U))
                                 : ((0x40U == (0x40U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                     ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xeU] 
                                         << 8U) | (
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xdU] 
                                                   >> 0x18U))
                                     : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x10U] 
                                         << 4U) | (
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xfU] 
                                                   >> 0x1cU)))))));
    __Vtemp5402[2U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[7U] 
                            << 0x18U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[6U] 
                                         >> 8U)) : 
                       ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[9U] 
                             << 0x14U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[8U] 
                                          >> 0xcU))
                         : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                             ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xbU] 
                                 << 0x10U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xaU] 
                                              >> 0x10U))
                             : ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                 ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xdU] 
                                     << 0xcU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xcU] 
                                                 >> 0x14U))
                                 : ((0x40U == (0x40U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                     ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xfU] 
                                         << 8U) | (
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0xeU] 
                                                   >> 0x18U))
                                     : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x11U] 
                                         << 4U) | (
                                                   vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x10U] 
                                                   >> 0x1cU)))))));
    __Vtemp5415[0U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s))) 
                              | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                             | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                            | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                           | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                          | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                         | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                        | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s))))
                        ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0U]
                            : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[3U] 
                                    << 0x1cU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[2U] 
                                                 >> 4U))
                                : __Vtemp5402[0U]))
                        : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x11U]
                            : ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x14U] 
                                    << 0x1cU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x13U] 
                                                 >> 4U))
                                : 0U)));
    __Vtemp5415[1U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s))) 
                              | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                             | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                            | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                           | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                          | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                         | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                        | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s))))
                        ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[1U]
                            : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[4U] 
                                    << 0x1cU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[3U] 
                                                 >> 4U))
                                : __Vtemp5402[1U]))
                        : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x12U]
                            : ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x15U] 
                                    << 0x1cU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x14U] 
                                                 >> 4U))
                                : 0U)));
    __Vtemp5415[2U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s))) 
                              | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                             | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                            | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                           | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                          | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                         | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))) 
                        | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s))))
                        ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[2U]
                            : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[5U] 
                                    << 0x1cU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[4U] 
                                                 >> 4U))
                                : __Vtemp5402[2U]))
                        : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x13U]
                            : ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__s)))
                                ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__b[0x15U] 
                                   >> 4U) : 0U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__Vfuncout[0U] 
        = __Vtemp5415[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__Vfuncout[1U] 
        = __Vtemp5415[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__Vfuncout[2U] 
        = (0xfU & __Vtemp5415[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___262_[0U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__Vfuncout[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___262_[1U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__Vfuncout[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___262_[2U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312427__189__Vfuncout[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___142_ 
        = (1U & ((~ ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                      >> 1U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                >> 0xaU))) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                              >> 0xaU)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___132_ 
        = (1U & ((0x10000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])
                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                     >> 0xaU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                 >> 9U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___133_ 
        = ((0x10000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                << 0x36U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[8U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U])) 
                                           >> 0xaU)))
            : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U])) 
                << 0x37U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U])) 
                                           >> 9U))));
    vlTOPp->sim__DOT__uart_tx_fifo_syncfifo_re = ((0U 
                                                   != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0)) 
                                                  & ((~ (IData)(vlTOPp->sim__DOT__uart_tx_fifo_readable)) 
                                                     | (IData)(vlTOPp->serial_source_ready)));
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
    VL_EXTEND_WQ(135,64, __Vtemp5417, (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U]))));
    __Vtemp5421[0U] = (0xfffff800U | ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                             >> 0xeU)) 
                                      | ((4U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                >> 0xfU)) 
                                         | ((2U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                   >> 0x10U)) 
                                            | (1U & 
                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                >> 0x11U))))));
    __Vtemp5421[1U] = 0xffffffffU;
    __Vtemp5421[2U] = (0x7ffU | ((0x800000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                               << 0x14U)) 
                                 | (0x7c0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 << 5U))));
    VL_EXTEND_WW(153,88, __Vtemp5422, __Vtemp5421);
    __Vtemp5426[0U] = ((0xfe000000U & (__Vtemp5422[0U] 
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
    __Vtemp5426[5U] = ((0x1ffffffU & ((0x1fc0000U & 
                                       ((IData)((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                     << 0x13U) 
                                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                       >> 0xdU)))))) 
                                        << 0x12U)) 
                                      | (__Vtemp5422[4U] 
                                         >> 7U))) | 
                       (0xfe000000U & ((IData)((QData)((IData)(
                                                               (0x1fU 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                    << 0x13U) 
                                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      >> 0xdU)))))) 
                                       << 0x12U)));
    __Vtemp5426[6U] = ((0x1ffffffU & ((0x3ffffU & ((IData)((QData)((IData)(
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
    __Vtemp5428[0U] = (IData)((((QData)((IData)((1U 
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
    __Vtemp5428[1U] = (IData)(((((QData)((IData)((1U 
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
    __Vtemp5429[0U] = (IData)((((QData)((IData)((1U 
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
    __Vtemp5429[1U] = (IData)(((((QData)((IData)((1U 
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
    __Vtemp5430[0U] = ((0x80000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                       << 0xeU)) | 
                       ((0x40000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                        << 0xdU)) | 
                        ((0x20000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                         << 0xcU)) 
                         | ((0x10000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                            << 0xbU)) 
                            | ((0x8000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                              << 0xaU)) 
                               | ((0x4000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 << 9U)) 
                                  | ((0x2000000U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
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
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    __Vtemp5433[2U] = ((0x2000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
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
    __Vtemp5440[2U] = ((0x7fffffU & ((0x7f0000U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                   << 0xcU)) 
                                     | ((IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                      << 0x1eU) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                        >> 2U))))) 
                                                 >> 0x20U)) 
                                        >> 9U))) | 
                       (0xff800000U & (__Vtemp5433[2U] 
                                       << 0x17U)));
    __Vtemp5444[3U] = ((0x4000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
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
                                                                            | (__Vtemp5433[2U] 
                                                                               >> 9U))))))))))));
    __Vtemp5450[0U] = ((0x2000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
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
    __Vtemp5450[1U] = ((0x3fe0000U & ((IData)((QData)((IData)(
                                                              (0xffffU 
                                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                     >> 2U)))))) 
                                      << 0x11U)) | 
                       (0xfc000000U & ((IData)((QData)((IData)(
                                                               (0xffffU 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                                      >> 2U)))))) 
                                       << 0x11U)));
    __Vtemp5456[4U] = ((0x80000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
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
                                                                                | (__Vtemp5444[3U] 
                                                                                >> 6U)))))))))))));
    __Vtemp5458[0U] = (IData)((((QData)((IData)((1U 
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
    __Vtemp5458[1U] = (IData)(((((QData)((IData)((1U 
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
    __Vtemp5459[2U] = (0x7fffffU & ((0x400000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                  << 5U)) 
                                    | ((0x200000U & 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                         << 4U)) | 
                                       ((0x100000U 
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
    __Vtemp5469[0U] = ((0xffffffc0U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U])))) 
                                       << 6U)) | (0x1fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                        >> 0xdU))));
    __Vtemp5469[1U] = ((0x3fU & ((IData)((((QData)((IData)(
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
    __Vtemp5469[2U] = (0x3fU & ((IData)(((((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U]))) 
                                         >> 0x20U)) 
                                >> 0x1aU));
    VL_EXTEND_WW(77,70, __Vtemp5470, __Vtemp5469);
    __Vtemp5472[4U] = ((0x1ff00000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                       << 0x12U)) | 
                       (0xe0000000U & (__Vtemp5459[2U] 
                                       << 0x1dU)));
    __Vtemp5473[5U] = ((0x20000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                       << 0xcU)) | 
                       (0x1fffffffU & ((0x10000000U 
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
                                                               | (__Vtemp5459[2U] 
                                                                  >> 3U))))))))))));
    __Vtemp5478[0xaU] = ((3U & (__Vtemp5450[1U] >> 0x1eU)) 
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
                                              & (__Vtemp5440[2U] 
                                                 << 0x1cU)))));
    __Vtemp5478[0xbU] = ((3U & (__Vtemp5440[2U] >> 4U)) 
                         | (0xfffffffcU & ((0xffffffcU 
                                            & (__Vtemp5440[2U] 
                                               >> 4U)) 
                                           | (0xf0000000U 
                                              & (__Vtemp5444[3U] 
                                                 << 0x1cU)))));
    __Vtemp5478[0xdU] = ((3U & (__Vtemp5456[4U] >> 0x1eU)) 
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
    __Vtemp5478[0xeU] = ((3U & ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                       >> 0x10U)) | 
                                (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                       >> 0x11U)))) 
                         | (0xfffffffcU & (__Vtemp5430[0U] 
                                           << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0U] 
        = (1U | (0xfffffffeU & (__Vtemp5470[0U] << 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[1U] 
        = ((1U & (__Vtemp5470[0U] >> 0x1fU)) | (0xfffffffeU 
                                                & (__Vtemp5470[1U] 
                                                   << 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[2U] 
        = ((1U & (__Vtemp5470[1U] >> 0x1fU)) | (0xfffffffeU 
                                                & ((0x3fffc000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       << 0xcU)) 
                                                   | (__Vtemp5470[2U] 
                                                      << 1U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[3U] 
        = (1U & (__Vtemp5470[2U] >> 0x1fU));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[4U] 
        = (0xfffffffeU & (__Vtemp5472[4U] << 1U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
        = ((1U & (__Vtemp5472[4U] >> 0x1fU)) | (0xfffffffeU 
                                                & ((0x80000000U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                       << 0xeU)) 
                                                   | (__Vtemp5473[5U] 
                                                      << 1U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
        = ((0xfffffffcU & (__Vtemp5458[0U] << 2U)) 
           | ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                     >> 0x10U)) | (1U & ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                >> 0x11U)) 
                                         | (__Vtemp5473[5U] 
                                            >> 0x1fU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
        = ((3U & (__Vtemp5458[0U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5458[1U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
        = ((3U & (__Vtemp5458[1U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5450[0U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
        = ((3U & (__Vtemp5450[0U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5450[1U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xaU] 
        = __Vtemp5478[0xaU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xbU] 
        = __Vtemp5478[0xbU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xcU] 
        = ((3U & (__Vtemp5444[3U] >> 4U)) | (0xfffffffcU 
                                             & (__Vtemp5456[4U] 
                                                << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
        = __Vtemp5478[0xdU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
        = __Vtemp5478[0xeU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
        = ((3U & (__Vtemp5430[0U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5429[0U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
        = ((3U & (__Vtemp5429[0U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5429[1U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
        = ((3U & (__Vtemp5429[1U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5428[0U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
        = ((3U & (__Vtemp5428[0U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5428[1U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
        = ((3U & (__Vtemp5428[1U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5426[0U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
        = ((3U & (__Vtemp5426[0U] >> 0x1eU)) | (0xfffffffcU 
                                                & ((0x7fffffcU 
                                                    & (__Vtemp5422[0U] 
                                                       >> 5U)) 
                                                   | (0xf8000000U 
                                                      & (__Vtemp5422[1U] 
                                                         << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x15U] 
        = ((3U & (__Vtemp5422[1U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5422[1U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5422[2U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x16U] 
        = ((3U & (__Vtemp5422[2U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5422[2U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5422[3U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x17U] 
        = ((3U & (__Vtemp5422[3U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5422[3U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5422[4U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
        = ((3U & (__Vtemp5422[4U] >> 5U)) | (0xfffffffcU 
                                             & (__Vtemp5426[5U] 
                                                << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
        = ((3U & (__Vtemp5426[5U] >> 0x1eU)) | (0xfffffffcU 
                                                & (__Vtemp5426[6U] 
                                                   << 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
        = ((3U & (__Vtemp5426[6U] >> 0x1eU)) | (0xfffffffcU 
                                                & ((0xf8000000U 
                                                    & (__Vtemp5417[0U] 
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
        = ((3U & (__Vtemp5417[0U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5417[0U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5417[1U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
        = ((3U & (__Vtemp5417[1U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5417[1U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5417[2U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
        = ((3U & (__Vtemp5417[2U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5417[2U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5417[3U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1eU] 
        = ((3U & (__Vtemp5417[3U] >> 5U)) | (0xfffffffcU 
                                             & ((0x7fffffcU 
                                                 & (__Vtemp5417[3U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp5417[4U] 
                                                      << 0x1bU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1fU] 
        = (3U & (__Vtemp5417[4U] >> 5U));
    __Vtemp5497[0U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
                            << 0x12U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[4U] 
                                         >> 0xeU)) : 
                       ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
                             << 0xbU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
                                         >> 0x15U))
                         : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                             ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
                                 << 4U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
                                           >> 0x1cU))
                             : ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                 ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xcU] 
                                     << 0x1dU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xbU] 
                                                  >> 3U))
                                 : ((0x40U == (0x40U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                     ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
                                         << 0x16U) 
                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
                                           >> 0xaU))
                                     : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
                                         << 0xfU) | 
                                        (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
                                         >> 0x11U)))))));
    __Vtemp5497[1U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
                            << 0x12U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[5U] 
                                         >> 0xeU)) : 
                       ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
                             << 0xbU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
                                         >> 0x15U))
                         : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                             ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xaU] 
                                 << 4U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
                                           >> 0x1cU))
                             : ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                 ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
                                     << 0x1dU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xcU] 
                                                  >> 3U))
                                 : ((0x40U == (0x40U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                     ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
                                         << 0x16U) 
                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
                                           >> 0xaU))
                                     : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
                                         << 0xfU) | 
                                        (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
                                         >> 0x11U)))))));
    __Vtemp5497[2U] = ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[7U] 
                            << 0x12U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[6U] 
                                         >> 0xeU)) : 
                       ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[9U] 
                             << 0xbU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[8U] 
                                         >> 0x15U))
                         : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                             ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xbU] 
                                 << 4U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xaU] 
                                           >> 0x1cU))
                             : ((0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                 ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xeU] 
                                     << 0x1dU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xdU] 
                                                  >> 3U))
                                 : ((0x40U == (0x40U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                     ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x10U] 
                                         << 0x16U) 
                                        | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0xfU] 
                                           >> 0xaU))
                                     : ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
                                         << 0xfU) | 
                                        (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
                                         >> 0x11U)))))));
    __Vtemp5520[0U] = ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
                            << 8U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x11U] 
                                      >> 0x18U)) : 
                       ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
                             << 1U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
                                       >> 0x1fU)) : 
                        ((0x400U == (0x400U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                          ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x17U] 
                              << 0x1aU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x16U] 
                                           >> 6U)) : 
                         ((0x800U == (0x800U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
                               << 0x13U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
                                            >> 0xdU))
                           : ((0x1000U == (0x1000U 
                                           & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                               ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
                                   << 0xcU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
                                               >> 0x14U))
                               : ((0x2000U == (0x2000U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                   ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
                                       << 5U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
                                                 >> 0x1bU))
                                   : 0U))))));
    __Vtemp5520[1U] = ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
                            << 8U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x12U] 
                                      >> 0x18U)) : 
                       ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x15U] 
                             << 1U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
                                       >> 0x1fU)) : 
                        ((0x400U == (0x400U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                          ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
                              << 0x1aU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x17U] 
                                           >> 6U)) : 
                         ((0x800U == (0x800U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
                               << 0x13U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
                                            >> 0xdU))
                           : ((0x1000U == (0x1000U 
                                           & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                               ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
                                   << 0xcU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
                                               >> 0x14U))
                               : ((0x2000U == (0x2000U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                   ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1eU] 
                                       << 5U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
                                                 >> 0x1bU))
                                   : 0U))))));
    __Vtemp5520[2U] = ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                        ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x14U] 
                            << 8U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x13U] 
                                      >> 0x18U)) : 
                       ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                         ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x16U] 
                             << 1U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x15U] 
                                       >> 0x1fU)) : 
                        ((0x400U == (0x400U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                          ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x19U] 
                              << 0x1aU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x18U] 
                                           >> 6U)) : 
                         ((0x800U == (0x800U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                           ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1bU] 
                               << 0x13U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1aU] 
                                            >> 0xdU))
                           : ((0x1000U == (0x1000U 
                                           & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                               ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1dU] 
                                   << 0xcU) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1cU] 
                                               >> 0x14U))
                               : ((0x2000U == (0x2000U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s)))
                                   ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1fU] 
                                       << 5U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__b[0x1eU] 
                                                 >> 0x1bU))
                                   : 0U))))));
    __Vtemp5522[0U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))) 
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
                                : __Vtemp5497[0U]))
                        : __Vtemp5520[0U]);
    __Vtemp5522[1U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))) 
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
                                : __Vtemp5497[1U]))
                        : __Vtemp5520[1U]);
    __Vtemp5522[2U] = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__s))) 
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
                                : __Vtemp5497[2U]))
                        : __Vtemp5520[2U]);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[0U] 
        = __Vtemp5522[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[1U] 
        = __Vtemp5522[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[2U] 
        = (0x7fU & __Vtemp5522[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[2U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035765__48__Vfuncout[2U];
}
