// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__352(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__352\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___006_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst)
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U])) 
                << 0x37U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U])) 
                                           >> 9U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___265_);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___008_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst)
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                << 0x36U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[8U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U])) 
                                           >> 0xaU)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___267_);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[2U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[4U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[5U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[6U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[7U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[8U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[9U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xaU] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xbU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xcU] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xdU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xeU] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[4U])) 
                    << 0x3dU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[3U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                               >> 3U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xfU] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[4U])) 
                     << 0x3dU) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[3U])) 
                                   << 0x1dU) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                >> 3U))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x10U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x11U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x12U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                    << 0x32U) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                               >> 0xeU))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x13U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__Vfuncout 
        = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s))) 
                  | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))) 
                 | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))) 
                | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))) 
               | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))) 
              | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))) 
             | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))) 
            | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s))))
            ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0U])))
                : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[2U])))
                    : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[4U])))
                        : ((8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[6U])))
                            : ((0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                                ? (((QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[8U])))
                                : ((0x20U == (0x20U 
                                              & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                                    ? (((QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xaU])))
                                    : ((0x40U == (0x40U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                                        ? (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xcU])))
                                        : (((QData)((IData)(
                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xfU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0xeU]))))))))))
            : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x11U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x10U])))
                : ((0x200U == (0x200U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__s)))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x13U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__b[0x12U])))
                    : VL_ULL(0))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___272_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312471__199__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b 
        = ((0x80U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[4U] 
                     << 3U)) | ((((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___197_)) 
                                  & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___203_)) 
                                 << 5U) | (0x10U & 
                                           ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___189_) 
                                            << 3U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__Vfuncout 
        = (1U & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s))) 
                        | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))) 
                       | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))) 
                      | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))) 
                     | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))) 
                    | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))) 
                   | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))) 
                  | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s))))
                  ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b)
                      : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                             >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                                        ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                                         ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                                              ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                                  >> 7U))))))))
                  : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                         >> 8U) : ((0x200U == (0x200U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__b) 
                                      >> 9U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___274_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312479__201__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__353(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__353\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1980_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1971_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1981_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1971_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1982_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1972_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1983_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1972_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1984_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1973_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1985_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1973_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1986_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1974_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1987_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1974_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1988_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1975_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1989_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1975_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1990_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1976_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1991_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1976_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1992_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1977_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1993_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1977_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1994_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1978_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1995_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1978_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2174_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2165_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2175_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2165_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2176_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2166_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2177_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2166_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2178_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2167_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2179_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2167_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2180_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2168_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2181_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2168_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2182_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2169_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2183_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2169_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2184_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2170_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2185_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2170_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2186_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2171_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2187_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2171_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2188_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2172_) 
           & (~ (0xfU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2189_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2172_) 
                   & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1176_ 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
            ? 0x1ffU : ((0x600U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                    << 0xdU) | (0x1e00U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x13U)))) 
                        | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1046_) 
                            << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__use_forward1_next))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1132_ 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
            ? ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1124_)
                  ? 0U : (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                 << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                           >> 0x1cU)))) 
                << 9U) | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1119_)
                           ? 0x1ffU : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1046_) 
                                        << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__use_forward1_next))))
            : ((0x600U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 0xdU) | (0x1e00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                  >> 0x13U)))) 
               | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1046_) 
                   << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__use_forward1_next))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1033_ 
        = (1U & ((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))
                  ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way)
                  : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1043_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A0__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A0__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A1__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (1U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A1__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A10__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0xaU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A10__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A11__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0xbU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A11__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A12__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0xcU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A12__02Eplru__DOT__tree) 
                        >> 1U))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__354(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__354\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A13__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0xdU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A13__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A14__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0xeU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A14__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A15__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0xfU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A15__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A16__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x10U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A16__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A17__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x11U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A17__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A18__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x12U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A18__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A19__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x13U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A19__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A2__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (2U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A2__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A20__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x14U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A20__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A21__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x15U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A21__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A22__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x16U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A22__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A23__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x17U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A23__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A24__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x18U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A24__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A25__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x19U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A25__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A26__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x1aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A26__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A27__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x1bU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A27__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A28__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x1cU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A28__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A29__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x1dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A29__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A3__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (3U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A3__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A30__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x1eU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A30__02Eplru__DOT__tree) 
                        >> 1U))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__355(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__355\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A31__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x1fU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A31__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A32__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x20U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A32__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A33__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x21U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A33__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A34__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x22U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A34__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A35__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x23U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A35__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A36__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x24U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A36__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A37__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x25U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A37__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A38__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x26U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A38__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A39__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x27U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A39__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A4__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (4U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A4__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A40__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x28U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A40__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A41__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x29U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A41__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A42__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x2aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A42__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A43__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x2bU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A43__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A44__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x2cU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A44__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A45__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x2dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A45__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A46__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x2eU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A46__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A47__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x2fU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A47__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A48__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x30U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A48__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A49__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x31U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A49__02Eplru__DOT__tree) 
                        >> 1U))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__356(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__356\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A5__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (5U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A5__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A50__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x32U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A50__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A51__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x33U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A51__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A52__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x34U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A52__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A53__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x35U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A53__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A54__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x36U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A54__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A55__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x37U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A55__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A56__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x38U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A56__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A57__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x39U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A57__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A58__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x3aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A58__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A59__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x3bU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A59__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A6__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (6U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A6__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A60__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x3cU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A60__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A61__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x3dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A61__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A62__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x3eU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A62__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A63__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (0x3fU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A63__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A7__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (7U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A7__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A8__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (8U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A8__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A9__02Eplru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & ((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                      | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                     & (9U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0x13U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A9__02Eplru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1058_ 
        = ((((4U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
             | (5U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
            | (7U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
           | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__357(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__357\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp4690[3];
    WData/*95:0*/ __Vtemp4696[3];
    WData/*95:0*/ __Vtemp4702[3];
    WData/*95:0*/ __Vtemp4708[3];
    WData/*191:0*/ __Vtemp4710[6];
    WData/*287:0*/ __Vtemp4711[9];
    WData/*351:0*/ __Vtemp4712[11];
    WData/*95:0*/ __Vtemp4717[3];
    WData/*95:0*/ __Vtemp4723[3];
    WData/*95:0*/ __Vtemp4729[3];
    WData/*95:0*/ __Vtemp4735[3];
    WData/*191:0*/ __Vtemp4737[6];
    WData/*287:0*/ __Vtemp4738[9];
    WData/*351:0*/ __Vtemp4739[11];
    WData/*95:0*/ __Vtemp4745[3];
    WData/*95:0*/ __Vtemp4751[3];
    WData/*95:0*/ __Vtemp4757[3];
    WData/*95:0*/ __Vtemp4763[3];
    WData/*191:0*/ __Vtemp4765[6];
    WData/*287:0*/ __Vtemp4766[9];
    WData/*351:0*/ __Vtemp4767[11];
    WData/*95:0*/ __Vtemp4773[3];
    WData/*95:0*/ __Vtemp4779[3];
    WData/*95:0*/ __Vtemp4785[3];
    WData/*95:0*/ __Vtemp4791[3];
    WData/*191:0*/ __Vtemp4793[6];
    WData/*287:0*/ __Vtemp4794[9];
    WData/*351:0*/ __Vtemp4795[11];
    WData/*95:0*/ __Vtemp4801[3];
    WData/*95:0*/ __Vtemp4807[3];
    WData/*95:0*/ __Vtemp4813[3];
    WData/*95:0*/ __Vtemp4819[3];
    WData/*191:0*/ __Vtemp4821[6];
    WData/*287:0*/ __Vtemp4822[9];
    WData/*351:0*/ __Vtemp4823[11];
    WData/*95:0*/ __Vtemp4829[3];
    WData/*95:0*/ __Vtemp4835[3];
    WData/*95:0*/ __Vtemp4841[3];
    WData/*95:0*/ __Vtemp4847[3];
    WData/*191:0*/ __Vtemp4849[6];
    WData/*287:0*/ __Vtemp4850[9];
    WData/*351:0*/ __Vtemp4851[11];
    WData/*95:0*/ __Vtemp4857[3];
    WData/*95:0*/ __Vtemp4863[3];
    WData/*95:0*/ __Vtemp4869[3];
    WData/*95:0*/ __Vtemp4875[3];
    WData/*191:0*/ __Vtemp4877[6];
    WData/*287:0*/ __Vtemp4878[9];
    WData/*351:0*/ __Vtemp4879[11];
    WData/*95:0*/ __Vtemp4885[3];
    WData/*95:0*/ __Vtemp4891[3];
    WData/*95:0*/ __Vtemp4897[3];
    WData/*95:0*/ __Vtemp4903[3];
    WData/*191:0*/ __Vtemp4905[6];
    WData/*287:0*/ __Vtemp4906[9];
    WData/*351:0*/ __Vtemp4907[11];
    WData/*95:0*/ __Vtemp4913[3];
    WData/*95:0*/ __Vtemp4919[3];
    WData/*95:0*/ __Vtemp4925[3];
    WData/*95:0*/ __Vtemp4931[3];
    WData/*191:0*/ __Vtemp4933[6];
    WData/*287:0*/ __Vtemp4934[9];
    WData/*351:0*/ __Vtemp4935[11];
    WData/*95:0*/ __Vtemp4941[3];
    WData/*95:0*/ __Vtemp4947[3];
    WData/*95:0*/ __Vtemp4953[3];
    WData/*95:0*/ __Vtemp4959[3];
    WData/*191:0*/ __Vtemp4961[6];
    WData/*287:0*/ __Vtemp4962[9];
    WData/*351:0*/ __Vtemp4963[11];
    WData/*95:0*/ __Vtemp4969[3];
    WData/*95:0*/ __Vtemp4975[3];
    WData/*95:0*/ __Vtemp4981[3];
    WData/*95:0*/ __Vtemp4987[3];
    WData/*191:0*/ __Vtemp4989[6];
    WData/*287:0*/ __Vtemp4990[9];
    WData/*351:0*/ __Vtemp4991[11];
    WData/*95:0*/ __Vtemp4997[3];
    WData/*95:0*/ __Vtemp5003[3];
    WData/*95:0*/ __Vtemp5009[3];
    WData/*95:0*/ __Vtemp5015[3];
    WData/*191:0*/ __Vtemp5017[6];
    WData/*287:0*/ __Vtemp5018[9];
    WData/*351:0*/ __Vtemp5019[11];
    WData/*95:0*/ __Vtemp5025[3];
    WData/*95:0*/ __Vtemp5031[3];
    WData/*95:0*/ __Vtemp5037[3];
    WData/*95:0*/ __Vtemp5043[3];
    WData/*191:0*/ __Vtemp5045[6];
    WData/*287:0*/ __Vtemp5046[9];
    WData/*351:0*/ __Vtemp5047[11];
    WData/*95:0*/ __Vtemp5053[3];
    WData/*95:0*/ __Vtemp5059[3];
    WData/*95:0*/ __Vtemp5065[3];
    WData/*95:0*/ __Vtemp5071[3];
    WData/*191:0*/ __Vtemp5073[6];
    WData/*287:0*/ __Vtemp5074[9];
    WData/*351:0*/ __Vtemp5075[11];
    WData/*95:0*/ __Vtemp5081[3];
    WData/*95:0*/ __Vtemp5087[3];
    WData/*95:0*/ __Vtemp5093[3];
    WData/*95:0*/ __Vtemp5099[3];
    WData/*191:0*/ __Vtemp5101[6];
    WData/*287:0*/ __Vtemp5102[9];
    WData/*351:0*/ __Vtemp5103[11];
    WData/*95:0*/ __Vtemp5109[3];
    WData/*95:0*/ __Vtemp5115[3];
    WData/*95:0*/ __Vtemp5121[3];
    WData/*95:0*/ __Vtemp5127[3];
    WData/*191:0*/ __Vtemp5129[6];
    WData/*287:0*/ __Vtemp5130[9];
    WData/*351:0*/ __Vtemp5131[11];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[0U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U]
            : ((0xfffffff0U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__ra) 
                               << 4U)) | ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[1U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U]
            : ((0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__ra) 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      ((0xf0000000U 
                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U] 
                                           << 0x15U)) 
                                       | ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__ra 
                                                   >> 0x20U)) 
                                          << 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[2U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[2U]
            : ((0xfU & ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U] 
                                 >> 0xbU)) | ((IData)(
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__ra 
                                                       >> 0x20U)) 
                                              >> 0x1cU))) 
               | (0xfffffff0U & ((0xffffff0U & ((0xfe00000U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[3U] 
                                                    << 0x15U)) 
                                                | (0x1ffff0U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U] 
                                                      >> 0xbU)))) 
                                 | (0xf0000000U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[3U] 
                                                   << 0x15U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[3U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U]
            : ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[3U] 
                        >> 0xbU)) | (0xfffffff0U & 
                                     ((0xffffff0U & 
                                       ((0xfe00000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                                            << 0x15U)) 
                                        | (0x1ffff0U 
                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[3U] 
                                              >> 0xbU)))) 
                                      | (0xf0000000U 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                                            << 0x15U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[4U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U]
            : ((0xffffffc0U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_same_tag) 
                               << 6U)) | ((0xffffffe0U 
                                           & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__replace_way) 
                                              << 5U)) 
                                          | ((0xfffffff0U 
                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way) 
                                                 << 4U)) 
                                             | (0xfU 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                                                   >> 0xbU))))));
    __Vtemp4690[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xafU] 
                           >> 8U));
    __Vtemp4696[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xadU] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xacU] 
                                         >> 0x10U)));
    __Vtemp4702[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaaU] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa9U] 
                                      >> 0x18U)));
    __Vtemp4708[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa7U]);
    __Vtemp4710[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa7U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa9U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4710[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa9U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4702[2U] 
                                                   << 0x18U)));
    __Vtemp4711[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaaU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xacU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4711[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xacU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4696[2U] 
                                                    << 0x10U)));
    __Vtemp4712[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xadU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xafU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4712[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xafU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4690[2U] 
                                                    << 8U)));
    __Vtemp4717[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa5U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa4U] 
                                         >> 8U)));
    __Vtemp4723[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa2U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa1U] 
                                         >> 0x10U)));
    __Vtemp4729[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9fU] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9eU] 
                                      >> 0x18U)));
    __Vtemp4735[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9cU]);
    __Vtemp4737[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9cU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9eU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4737[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9eU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4729[2U] 
                                                   << 0x18U)));
    __Vtemp4738[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9fU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4738[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa1U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4723[2U] 
                                                    << 0x10U)));
    __Vtemp4739[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa2U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa4U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4739[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa4U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4717[2U] 
                                                    << 8U)));
    __Vtemp4745[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9aU] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x99U] 
                                         >> 8U)));
    __Vtemp4751[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x97U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x96U] 
                                         >> 0x10U)));
    __Vtemp4757[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x94U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x93U] 
                                      >> 0x18U)));
    __Vtemp4763[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x91U]);
    __Vtemp4765[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x91U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x93U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4765[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x93U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4757[2U] 
                                                   << 0x18U)));
    __Vtemp4766[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x94U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x96U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4766[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x96U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4751[2U] 
                                                    << 0x10U)));
    __Vtemp4767[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x97U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x99U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4767[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x99U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4745[2U] 
                                                    << 8U)));
    __Vtemp4773[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8fU] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8eU] 
                                         >> 8U)));
    __Vtemp4779[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8cU] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8bU] 
                                         >> 0x10U)));
    __Vtemp4785[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x89U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x88U] 
                                      >> 0x18U)));
    __Vtemp4791[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x86U]);
    __Vtemp4793[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x86U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x88U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4793[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x88U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4785[2U] 
                                                   << 0x18U)));
    __Vtemp4794[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x89U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8bU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4794[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8bU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4779[2U] 
                                                    << 0x10U)));
    __Vtemp4795[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8cU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8eU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4795[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8eU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4773[2U] 
                                                    << 8U)));
    __Vtemp4801[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x84U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x83U] 
                                         >> 8U)));
    __Vtemp4807[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x81U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x80U] 
                                         >> 0x10U)));
    __Vtemp4813[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7eU] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7dU] 
                                      >> 0x18U)));
    __Vtemp4819[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7bU]);
    __Vtemp4821[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7bU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7dU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4821[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7dU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4813[2U] 
                                                   << 0x18U)));
    __Vtemp4822[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7eU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x80U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4822[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x80U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4807[2U] 
                                                    << 0x10U)));
    __Vtemp4823[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x81U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x83U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4823[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x83U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4801[2U] 
                                                    << 8U)));
    __Vtemp4829[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x79U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x78U] 
                                         >> 8U)));
    __Vtemp4835[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x76U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x75U] 
                                         >> 0x10U)));
    __Vtemp4841[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x73U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x72U] 
                                      >> 0x18U)));
    __Vtemp4847[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x70U]);
    __Vtemp4849[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x70U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x72U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4849[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x72U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4841[2U] 
                                                   << 0x18U)));
    __Vtemp4850[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x73U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x75U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4850[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x75U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4835[2U] 
                                                    << 0x10U)));
    __Vtemp4851[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x76U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x78U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4851[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x78U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4829[2U] 
                                                    << 8U)));
    __Vtemp4857[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6eU] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6dU] 
                                         >> 8U)));
    __Vtemp4863[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6bU] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6aU] 
                                         >> 0x10U)));
    __Vtemp4869[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x68U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x67U] 
                                      >> 0x18U)));
    __Vtemp4875[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x65U]);
    __Vtemp4877[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x65U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x67U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4877[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x67U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4869[2U] 
                                                   << 0x18U)));
    __Vtemp4878[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x68U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6aU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4878[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6aU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4863[2U] 
                                                    << 0x10U)));
    __Vtemp4879[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6bU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6dU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4879[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6dU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4857[2U] 
                                                    << 8U)));
    __Vtemp4885[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x63U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x62U] 
                                         >> 8U)));
    __Vtemp4891[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x60U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5fU] 
                                         >> 0x10U)));
    __Vtemp4897[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5dU] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5cU] 
                                      >> 0x18U)));
    __Vtemp4903[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5aU]);
    __Vtemp4905[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5aU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5cU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4905[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5cU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4897[2U] 
                                                   << 0x18U)));
    __Vtemp4906[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5dU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5fU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4906[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5fU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4891[2U] 
                                                    << 0x10U)));
    __Vtemp4907[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x60U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x62U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4907[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x62U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4885[2U] 
                                                    << 8U)));
    __Vtemp4913[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x58U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x57U] 
                                         >> 8U)));
    __Vtemp4919[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x55U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x54U] 
                                         >> 0x10U)));
    __Vtemp4925[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x52U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x51U] 
                                      >> 0x18U)));
    __Vtemp4931[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4fU]);
    __Vtemp4933[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4fU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x51U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4933[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x51U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4925[2U] 
                                                   << 0x18U)));
    __Vtemp4934[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x52U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x54U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4934[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x54U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4919[2U] 
                                                    << 0x10U)));
    __Vtemp4935[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x55U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x57U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4935[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x57U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4913[2U] 
                                                    << 8U)));
    __Vtemp4941[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4dU] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4cU] 
                                         >> 8U)));
    __Vtemp4947[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4aU] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x49U] 
                                         >> 0x10U)));
    __Vtemp4953[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x47U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x46U] 
                                      >> 0x18U)));
    __Vtemp4959[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x44U]);
    __Vtemp4961[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x44U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x46U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4961[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x46U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4953[2U] 
                                                   << 0x18U)));
    __Vtemp4962[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x47U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x49U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4962[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x49U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4947[2U] 
                                                    << 0x10U)));
    __Vtemp4963[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4aU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4cU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4963[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4cU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4941[2U] 
                                                    << 8U)));
    __Vtemp4969[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x42U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x41U] 
                                         >> 8U)));
    __Vtemp4975[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3fU] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3eU] 
                                         >> 0x10U)));
    __Vtemp4981[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3cU] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3bU] 
                                      >> 0x18U)));
    __Vtemp4987[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x39U]);
    __Vtemp4989[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x39U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3bU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp4989[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3bU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp4981[2U] 
                                                   << 0x18U)));
    __Vtemp4990[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3cU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3eU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp4990[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3eU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp4975[2U] 
                                                    << 0x10U)));
    __Vtemp4991[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3fU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x41U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp4991[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x41U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4969[2U] 
                                                    << 8U)));
    __Vtemp4997[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x37U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x36U] 
                                         >> 8U)));
    __Vtemp5003[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x34U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x33U] 
                                         >> 0x10U)));
    __Vtemp5009[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x31U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x30U] 
                                      >> 0x18U)));
    __Vtemp5015[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2eU]);
    __Vtemp5017[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2eU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x30U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp5017[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x30U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp5009[2U] 
                                                   << 0x18U)));
    __Vtemp5018[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x31U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x33U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp5018[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x33U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp5003[2U] 
                                                    << 0x10U)));
    __Vtemp5019[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x34U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x36U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp5019[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x36U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp4997[2U] 
                                                    << 8U)));
    __Vtemp5025[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2cU] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2bU] 
                                         >> 8U)));
    __Vtemp5031[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x29U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x28U] 
                                         >> 0x10U)));
    __Vtemp5037[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x26U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x25U] 
                                      >> 0x18U)));
    __Vtemp5043[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x23U]);
    __Vtemp5045[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x23U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x25U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp5045[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x25U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp5037[2U] 
                                                   << 0x18U)));
    __Vtemp5046[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x26U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x28U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp5046[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x28U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp5031[2U] 
                                                    << 0x10U)));
    __Vtemp5047[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x29U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2bU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp5047[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2bU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp5025[2U] 
                                                    << 8U)));
    __Vtemp5053[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x21U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x20U] 
                                         >> 8U)));
    __Vtemp5059[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1eU] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1dU] 
                                         >> 0x10U)));
    __Vtemp5065[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1bU] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1aU] 
                                      >> 0x18U)));
    __Vtemp5071[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x18U]);
    __Vtemp5073[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x18U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1aU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp5073[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1aU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp5065[2U] 
                                                   << 0x18U)));
    __Vtemp5074[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1bU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1dU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp5074[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1dU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp5059[2U] 
                                                    << 0x10U)));
    __Vtemp5075[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1eU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x20U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp5075[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x20U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp5053[2U] 
                                                    << 8U)));
    __Vtemp5081[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x16U] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x15U] 
                                         >> 8U)));
    __Vtemp5087[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x13U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x12U] 
                                         >> 0x10U)));
    __Vtemp5093[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x10U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xfU] 
                                      >> 0x18U)));
    __Vtemp5099[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xdU]);
    __Vtemp5101[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xdU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xfU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp5101[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xfU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp5093[2U] 
                                                   << 0x18U)));
    __Vtemp5102[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x10U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x12U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp5102[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x12U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp5087[2U] 
                                                    << 0x10U)));
    __Vtemp5103[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x13U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x15U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp5103[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x15U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp5081[2U] 
                                                    << 8U)));
    __Vtemp5109[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xbU] 
                            << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaU] 
                                         >> 8U)));
    __Vtemp5115[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[8U] 
                            << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[7U] 
                                         >> 0x10U)));
    __Vtemp5121[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                        & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU)))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[5U] 
                            << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[4U] 
                                      >> 0x18U)));
    __Vtemp5127[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                        & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU))))
                        ? ((0xfffU & ((IData)((VL_ULL(0xfffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                      << 3U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                        >> 0x1dU))))) 
                                      >> 0x14U)) | 
                           (0xfffff000U & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                        : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[2U]);
    __Vtemp5129[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[2U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                         << 3U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                           >> 0x1dU))))) 
                                                         << 0xcU)) 
                                                     | (IData)(
                                                               ((VL_ULL(0xfffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[4U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp5129[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                              << 3U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                >> 0x1dU))))) 
                                              << 0xcU)) 
                                          | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[4U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & (__Vtemp5121[2U] 
                                                   << 0x18U)));
    __Vtemp5130[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[5U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffff000U 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                          << 3U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                            >> 0x1dU))))) 
                                                          << 0xcU)) 
                                                      | (IData)(
                                                                ((VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[7U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp5130[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[7U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & (__Vtemp5115[2U] 
                                                    << 0x10U)));
    __Vtemp5131[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
                                                            (VL_ULL(0xfffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[8U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                                  << 3U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                                    >> 0x1dU))))) 
                                                  << 0xcU)) 
                                              | (IData)(
                                                        ((VL_ULL(0xfffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp5131[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                              >> 0x1dU))))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (__Vtemp5109[2U] 
                                                    << 8U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[1U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[1U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[2U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[2U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp5127[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[3U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5129[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[4U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5129[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[5U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[5U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp5121[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[6U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5130[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[7U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5130[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[8U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[8U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp5115[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[8U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[9U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5131[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xaU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5131[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xbU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xbU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xbU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xcU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xcU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xcU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xdU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xdU] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp5099[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xdU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xeU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5101[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xfU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5101[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xfU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x10U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x10U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp5093[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x10U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x11U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5102[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x12U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5102[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x12U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x13U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x13U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp5087[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x13U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x14U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5103[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x15U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5103[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x15U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x16U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x16U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x16U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x17U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x17U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x17U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x18U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x18U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp5071[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x18U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x19U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5073[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5073[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1bU] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp5065[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5074[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5074[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1eU] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp5059[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5075[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x20U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5075[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x20U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x21U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x21U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x21U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x22U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x22U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x22U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x23U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x23U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp5043[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x23U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x24U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5045[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x25U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5045[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x25U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x26U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x26U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp5037[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x26U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x27U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5046[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x28U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5046[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x28U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x29U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x29U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp5031[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x29U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5047[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5047[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2cU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2dU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2eU] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp5015[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5017[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x30U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5017[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x30U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x31U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x31U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp5009[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x31U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x32U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5018[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x33U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5018[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x33U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x34U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x34U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp5003[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x34U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x35U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5019[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x36U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp5019[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x36U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x37U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x37U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x37U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x38U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x38U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x38U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x39U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x39U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4987[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x39U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4989[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4989[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3cU] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4981[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4990[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4990[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3fU] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4975[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x40U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4991[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x41U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4991[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x41U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x42U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x42U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x42U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x43U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x43U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x43U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x44U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x44U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4959[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x44U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x45U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4961[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x46U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4961[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x46U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x47U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x47U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4953[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x47U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x48U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4962[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x49U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4962[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x49U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4aU] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4947[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4963[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4963[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4dU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4eU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4fU] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4931[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x50U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4933[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x51U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4933[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x51U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x52U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x52U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4925[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x52U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x53U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4934[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x54U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4934[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x54U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x55U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x55U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4919[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x55U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x56U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4935[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x57U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4935[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x57U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x58U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x58U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x58U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x59U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x59U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x59U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5aU] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4903[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4905[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4905[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5dU] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4897[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4906[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4906[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x60U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x60U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4891[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x60U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x61U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4907[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x62U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4907[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x62U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x63U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x63U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x63U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x64U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x64U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x64U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x65U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x65U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4875[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x65U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x66U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4877[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x67U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4877[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x67U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x68U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x68U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4869[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x68U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x69U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4878[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4878[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6bU] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4863[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4879[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4879[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6eU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6fU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x70U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x70U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4847[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x70U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x71U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4849[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x72U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4849[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x72U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x73U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x73U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4841[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x73U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x74U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4850[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x75U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4850[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x75U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x76U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x76U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4835[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x76U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x77U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4851[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x78U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4851[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x78U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x79U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x79U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x79U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7aU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7bU] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4819[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4821[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4821[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7eU] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4813[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4822[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x80U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4822[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x80U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x81U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x81U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4807[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x81U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x82U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4823[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x83U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4823[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x83U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x84U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x84U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x84U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x85U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x85U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x85U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x86U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x86U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4791[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x86U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x87U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4793[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x88U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4793[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x88U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x89U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x89U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4785[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x89U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4794[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4794[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8cU] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4779[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4795[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4795[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8fU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x90U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x90U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x90U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x91U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x91U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4763[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x91U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x92U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4765[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x93U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4765[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x93U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x94U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x94U] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4757[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x94U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x95U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4766[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x96U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4766[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x96U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x97U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x97U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4751[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x97U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x98U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4767[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x99U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4767[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x99U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9aU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9bU])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9cU] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4735[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4737[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4737[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9fU] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4729[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa0U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4738[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa1U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4738[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa2U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa2U] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4723[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa3U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4739[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa4U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4739[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa5U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa5U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa6U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                  >> 0x1dU))))) 
                                << 0xcU)) | (IData)(
                                                    ((VL_ULL(0xfffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))) 
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa6U])
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa7U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U] 
                                     << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa7U] 
                                               >> 0x18U))) 
                               << 0x18U)) | (0xffffffU 
                                             & __Vtemp4708[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa8U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4710[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa9U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4710[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xaaU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                 & (~ ((IData)(1U) 
                                       - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                          >> 0xeU))))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU] 
                                     << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaaU] 
                                                  >> 0x10U))) 
                               << 0x10U)) | (0xffffU 
                                             & (__Vtemp4702[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xabU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4711[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xacU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4711[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xacU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xadU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1072_[0U])))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xadU] 
                                                  >> 8U))) 
                               << 8U)) | (0xffU & (
                                                   __Vtemp4696[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xadU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xaeU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4712[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xafU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp4712[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xafU]);
}
