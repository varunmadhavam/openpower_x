// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_settle__TOP__208(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__208\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s 
        = (((0x3dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                 << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                              >> 1U)))) 
            << 6U) | (((0x2aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                            << 0x1fU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                              >> 1U)))) 
                       << 5U) | (((0x26U == (0x3fU 
                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                   >> 1U)))) 
                                  << 4U) | (((0x3aU 
                                              == (0x3fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                        >> 1U)))) 
                                             << 3U) 
                                            | (((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                        >> 1U)))) 
                                                << 2U) 
                                               | (((0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                         << 0x1fU) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                           >> 1U)))) 
                                                   << 1U) 
                                                  | (0x1eU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                          << 0x1fU) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                            >> 1U))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
        = (0x106a00U | ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___288_)
                           ? 6U : 5U) << 0xfU) | (0x1ffU 
                                                  & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___229_) 
                                                      << 6U) 
                                                     | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___229_) 
                                                         << 3U) 
                                                        | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___229_))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__a 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___229_;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__Vfuncout 
        = (7U & ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                  ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0xfU))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0x12U)))))))
                  : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                      ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0xfU))))))
                      : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                          ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 0xcU)))))
                          : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                              ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 9U))))
                              : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                  ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 6U)))
                                  : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                      ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b 
                                             >> 3U))
                                      : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__s))
                                          ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__b
                                          : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__a)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___304_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310847__177__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__209(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__209\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s 
        = (((0x3dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                 << 0x1fU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                              >> 1U)))) 
            << 6U) | (((0x2aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                            << 0x1fU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                              >> 1U)))) 
                       << 5U) | (((0x26U == (0x3fU 
                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                   >> 1U)))) 
                                  << 4U) | (((0x3aU 
                                              == (0x3fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                        >> 1U)))) 
                                             << 3U) 
                                            | (((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                        >> 1U)))) 
                                                << 2U) 
                                               | (((0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                         << 0x1fU) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                           >> 1U)))) 
                                                   << 1U) 
                                                  | (0x1eU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U] 
                                                          << 0x1fU) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U] 
                                                            >> 1U))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[8U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[9U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xaU] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xbU] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xcU] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[2U])) 
                    << 0x39U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U])) 
                                  << 0x19U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U])) 
                                               >> 7U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xdU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[2U])) 
                     << 0x39U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[1U])) 
                                   << 0x19U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0U])) 
                                                >> 7U))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__a 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__Vfuncout 
        = ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
            ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xaU]))))))))
                : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xdU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xcU])))))))))
            : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0xaU]))))))))
                : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__b[0U])))
                                    : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__a)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___303_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310846__176__Vfuncout;
}

VL_INLINE_OPT void Vsim::_settle__TOP__210(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__210\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___250_ 
        = (1U & (((0xcU == (0xfU & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                                            >> 0x1cU)))) 
                  & (~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[0xaU])) 
                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_to_loadstore1[9U] 
                    >> 0x10U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U] 
        = (IData)((VL_ULL(0xfffffffffffffff8) & ((VL_ULL(1) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                                       << 0x19U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                         >> 7U)))) 
                                                 << 3U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U] 
        = (IData)(((VL_ULL(0xfffffffffffffff8) & ((VL_ULL(1) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                          >> 7U)))) 
                                                  << 3U)) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U] 
        = (IData)(((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U] 
                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                             >> 2U))) ? ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U])
                                          ? (VL_ULL(0xfffffffffffffff8) 
                                             & ((VL_ULL(1) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                        >> 7U)))) 
                                                << 3U))
                                          : (((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                   >> 4U))))
                    : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U] 
        = (IData)((((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[0U] 
                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1[2U] 
                              >> 2U))) ? ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U])
                                           ? (VL_ULL(0xfffffffffffffff8) 
                                              & ((VL_ULL(1) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                                       << 0x19U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                         >> 7U)))) 
                                                 << 3U))
                                           : (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                    >> 4U))))
                     : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U] 
        = (IData)(((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U])
                    ? (VL_ULL(0xfffffffffffffff8) & 
                       ((VL_ULL(1) + (((QData)((IData)(
                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                        >> 7U)))) << 3U))
                    : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                                   >> 4U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U] 
        = (IData)((((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U])
                     ? (VL_ULL(0xfffffffffffffff8) 
                        & ((VL_ULL(1) + (((QData)((IData)(
                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                          << 0x39U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                               >> 7U)))) 
                           << 3U)) : (((QData)((IData)(
                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U])) 
                                        >> 4U)))) >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[8U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[9U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xaU] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xbU] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xcU] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xdU] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__lsu_sum 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__Vfuncout 
        = ((0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
            ? ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xaU]))))))))
                : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xdU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xcU])))))))))
            : ((0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                ? ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0xaU]))))))))
                : ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                    ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[8U])))))))
                    : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                        ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[6U]))))))
                        : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                            ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[4U])))))
                            : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[2U]))))
                                : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__s))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__b[0U])))
                                    : VL_ULL(0))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___233_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT____0310548__160__Vfuncout;
}
