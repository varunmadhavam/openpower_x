// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_combo__TOP__410(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_combo__TOP__410\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp5524[5];
    WData/*95:0*/ __Vtemp5542[3];
    WData/*95:0*/ __Vtemp5544[3];
    WData/*95:0*/ __Vtemp5545[3];
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s 
        = ((2U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                      >> 0x1dU)) << 1U)) | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                  >> 0x1dU)));
    VL_EXTEND_WQ(135,64, __Vtemp5524, (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4U]))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[0U] 
        = (1U | ((0xffffff80U & (__Vtemp5524[0U] << 7U)) 
                 | (0x3eU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                              << 0xaU) | (0x3feU & 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                           >> 0x16U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[1U] 
        = ((0x7fU & (__Vtemp5524[0U] >> 0x19U)) | (0xffffff80U 
                                                   & (__Vtemp5524[1U] 
                                                      << 7U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[2U] 
        = ((0x7fU & (__Vtemp5524[1U] >> 0x19U)) | (0xffffff80U 
                                                   & (__Vtemp5524[2U] 
                                                      << 7U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[3U] 
        = ((0x7fU & (__Vtemp5524[2U] >> 0x19U)) | (0xffffff80U 
                                                   & (__Vtemp5524[3U] 
                                                      << 7U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[4U] 
        = ((0x7fU & (__Vtemp5524[3U] >> 0x19U)) | (0xffffff80U 
                                                   & (__Vtemp5524[4U] 
                                                      << 7U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__Vfuncout[0U] 
        = ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s)))
            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[0U]
            : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s)))
                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[3U] 
                    << 0x19U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[2U] 
                                 >> 7U)) : 0U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__Vfuncout[1U] 
        = ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s)))
            ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[1U]
            : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s)))
                ? ((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[4U] 
                    << 0x19U) | (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[3U] 
                                 >> 7U)) : 0U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__Vfuncout[2U] 
        = (0x7fU & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s)))
                     ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[2U]
                     : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__s)))
                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__b[4U] 
                            >> 7U) : 0U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__Vfuncout[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[1U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__Vfuncout[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[2U] 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035802__49__Vfuncout[2U];
    __Vtemp5542[0U] = ((3U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                      << 0xaU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                  >> 0x16U))))
                        ? ((0xffffff80U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U])))) 
                                           << 7U)) 
                           | ((0x7eU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                         << 0x1fU) 
                                        | (0x7ffffffeU 
                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                              >> 1U)))) 
                              | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                       >> 7U)))) : 
                       ((4U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                       << 0xaU) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                   >> 0x16U))))
                         ? (0xffffff80U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U])) 
                                                          >> 2U)))) 
                                           << 7U)) : 0U));
    __Vtemp5542[1U] = ((3U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                      << 0xaU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                  >> 0x16U))))
                        ? ((0x7fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U])))) 
                                     >> 0x19U)) | (0xffffff80U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U]))) 
                                                               >> 0x20U)) 
                                                      << 7U)))
                        : ((4U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                          << 0xaU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                            >> 0x16U))))
                            ? ((0x7fU & ((IData)((((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U])) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U])) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U])) 
                                                        >> 2U)))) 
                                         >> 0x19U)) 
                               | (0xffffff80U & ((IData)(
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
                                                 << 7U)))
                            : 0U));
    __Vtemp5542[2U] = ((3U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                      << 0xaU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                  >> 0x16U))))
                        ? (0x7fU & ((IData)(((((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U]))) 
                                             >> 0x20U)) 
                                    >> 0x19U)) : ((4U 
                                                   == 
                                                   (7U 
                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                        << 0xaU) 
                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                          >> 0x16U))))
                                                   ? 
                                                  (0x7fU 
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
                                                      >> 0x19U))
                                                   : 0U));
    __Vtemp5544[0U] = (((1U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                       << 0xaU) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                   >> 0x16U)))) 
                        | ((2U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                          << 0xaU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                            >> 0x16U)))) 
                           & (0U != (0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                               << 0xeU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 >> 0x12U))))))
                        ? (1U | ((0xffffff80U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U])))) 
                                                 << 7U)) 
                                 | (0x3eU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                              << 0xfU) 
                                             | (0x7ffeU 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                   >> 0x11U))))))
                        : __Vtemp5542[0U]);
    __Vtemp5544[1U] = (((1U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                       << 0xaU) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                   >> 0x16U)))) 
                        | ((2U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                          << 0xaU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                            >> 0x16U)))) 
                           & (0U != (0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                               << 0xeU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                 >> 0x12U))))))
                        ? ((0x7fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U])))) 
                                     >> 0x19U)) | (0xffffff80U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U]))) 
                                                               >> 0x20U)) 
                                                      << 7U)))
                        : __Vtemp5542[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U] 
        = __Vtemp5544[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[1U] 
        = __Vtemp5544[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[2U] 
        = (((1U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                           << 0xaU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                       >> 0x16U)))) 
            | ((2U == (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                              << 0xaU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                          >> 0x16U)))) 
               & (0U != (0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                   << 0xeU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                               >> 0x12U))))))
            ? (0x7fU & ((IData)(((((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U]))) 
                                 >> 0x20U)) >> 0x19U))
            : __Vtemp5542[2U]);
    __Vtemp5545[1U] = ((0x3fU & ((IData)(((0x10000U 
                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                           ? (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                    >> 5U)))
                                           : (QData)((IData)(
                                                             ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                               << 0x1bU) 
                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                                 >> 5U)))))) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          (((0x10000U 
                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                                                 << 0x1bU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                                   >> 5U)))
                                                             : (QData)((IData)(
                                                                               ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                                                << 0x1bU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
        = ((0xffffffc0U & ((IData)(((0x10000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                     ? (((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                            << 0x1bU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                              >> 5U)))
                                     : (QData)((IData)(
                                                       ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                         << 0x1bU) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                           >> 5U)))))) 
                           << 6U)) | ((0x3eU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                                                >> 0xdU)) 
                                      | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___278_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[1U] 
        = __Vtemp5545[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[2U] 
        = (0x3fU & ((IData)((((0x10000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                               ? (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                                 << 0x1bU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                   >> 5U)))
                               : (QData)((IData)(((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                   << 0x1bU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                     >> 5U))))) 
                             >> 0x20U)) >> 0x1aU));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b 
        = ((0x200U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U]) 
           | ((0x100U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                         >> 1U)) | ((0x80U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                              >> 2U)) 
                                    | ((0x40U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                 >> 3U)) 
                                       | ((0x20U & 
                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                            >> 4U)) 
                                          | ((0x10U 
                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[2U]) 
                                             | ((8U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                    >> 6U)) 
                                                | ((4U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                       >> 7U)) 
                                                   | ((2U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                          >> 8U)) 
                                                      | (1U 
                                                         & ((~ 
                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                              >> 3U)) 
                                                            & ((~ 
                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                                     >> 1U) 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                                       >> 0xaU)))) 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                                  >> 9U)))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__Vfuncout 
        = (1U & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s))) 
                        | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))) 
                       | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))) 
                      | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))) 
                     | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))) 
                    | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))) 
                   | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))) 
                  | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s))))
                  ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b)
                      : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                             >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                                        ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                                         ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                                              ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                                  >> 7U))))))))
                  : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                         >> 8U) : ((0x200U == (0x200U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__b) 
                                      >> 9U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___266_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312444__193__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b 
        = ((0x200U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                      >> 1U)) | ((0x100U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                            >> 2U)) 
                                 | ((0x80U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                              >> 3U)) 
                                    | ((0x40U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                 >> 4U)) 
                                       | ((0x20U & 
                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                            >> 5U)) 
                                          | ((0x10U 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U] 
                                                 >> 1U)) 
                                             | ((8U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                    >> 7U)) 
                                                | ((4U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                       >> 8U)) 
                                                   | ((2U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & ((8U 
                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                                             ? 
                                                            ((~ 
                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                               >> 0x10U)) 
                                                             & ((1U 
                                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                                                 ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___142_)
                                                                 : 
                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                 >> 0xaU)))
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                                              ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___142_)
                                                              : 
                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                              >> 0xaU)))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__Vfuncout 
        = (1U & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s))) 
                        | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))) 
                       | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))) 
                      | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))) 
                     | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))) 
                    | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))) 
                   | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))) 
                  | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s))))
                  ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b)
                      : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                             >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                                        ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                                         ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                                              ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                                  >> 7U))))))))
                  : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                         >> 8U) : ((0x200U == (0x200U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__b) 
                                      >> 9U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___268_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312452__195__Vfuncout;
}

VL_INLINE_OPT void Vsim::_combo__TOP__411(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_combo__TOP__411\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp5547[4];
    WData/*127:0*/ __Vtemp5553[4];
    WData/*575:0*/ __Vtemp5562[18];
    // Body
    __Vtemp5547[1U] = ((1U & ((IData)(((0x10000U & 
                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                        ? (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4U])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                                 >> 0x11U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                 >> 5U))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((0x10000U 
                                                          & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4U])) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U])) 
                                                              << 0xfU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                                                >> 0x11U)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                                >> 5U)))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp5547[2U] = ((1U & ((IData)((((0x10000U & 
                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                         ? (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4U])) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U])) 
                                                << 0xfU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                                  >> 0x11U)))
                                         : (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                  >> 5U)))) 
                                       >> 0x20U)) >> 0x1fU)) 
                       | (0xfffffffeU & (((0x10000U 
                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                           ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                               << 0x1bU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                 >> 5U))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U] 
                                               << 0xfU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U] 
                                                 >> 0x11U))) 
                                         << 1U)));
    __Vtemp5553[0U] = ((8U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                        ? (1U | (0xfffffffeU & ((IData)(
                                                        ((0x10000U 
                                                          & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4U])) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U])) 
                                                              << 0xfU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U])) 
                                                                >> 0x11U)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U])) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                                >> 5U))))) 
                                                << 1U)))
                        : ((0xfffffffeU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U] 
                                            << 0x1cU) 
                                           | (0xffffffeU 
                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                                 >> 4U)))) 
                           | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                        >> 1U) & ((
                                                   ((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                       >> 2U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                         >> 0x1cU)) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                        >> 0x1bU)) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                       >> 0x18U)) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                      >> 0x17U)) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
                                                     >> 0x16U)))))));
    __Vtemp5553[3U] = ((8U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                        ? (2U | (1U & (((0x10000U & 
                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                         ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                             << 0x1bU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                               >> 5U))
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U] 
                                             << 0xfU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U] 
                                               >> 0x11U))) 
                                       >> 0x1fU))) : 
                       ((0x1eU & (((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                    ? ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
                                        ? 1U : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___132_)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___133_)))
                                                  ? 9U
                                                  : 5U)
                                                 : 3U))
                                    : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                        << 0x1bU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                        >> 5U))) << 1U)) 
                        | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                 >> 4U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___166_[0U] 
        = __Vtemp5553[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___166_[1U] 
        = ((8U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
            ? __Vtemp5547[1U] : ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                       << 0x1cU) 
                                                      | (0xffffffeU 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U] 
                                                            >> 4U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___166_[2U] 
        = ((8U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U])
            ? __Vtemp5547[2U] : ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                       << 0x1cU) 
                                                      | (0xffffffeU 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                                            >> 4U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___166_[3U] 
        = __Vtemp5553[3U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
        = (((QData)((IData)((0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                       << 0xfU) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                   >> 0x11U))))) 
            << 0x2dU) | (((QData)((IData)((0x1fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                             << 0xfU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                               >> 0x11U))))) 
                          << 0x28U) | (((QData)((IData)(
                                                        (0x1fU 
                                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U] 
                                                             << 0x1aU) 
                                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U] 
                                                               >> 6U))))) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         (0x1fU 
                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                              << 0xfU) 
                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                >> 0x11U))))) 
                                         << 0x1eU) 
                                        | (QData)((IData)(
                                                          ((0x3e000000U 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                               << 8U)) 
                                                           | ((0x1f00000U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U] 
                                                                  << 8U)) 
                                                              | ((0xf8000U 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                      << 0x1eU) 
                                                                     | (0x3fff8000U 
                                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                           >> 2U)))) 
                                                                 | ((0x7c00U 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                         << 0x19U) 
                                                                        | (0x1fffc00U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                              >> 7U)))) 
                                                                    | ((0x3e0U 
                                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                            << 0x14U) 
                                                                           | (0xfffe0U 
                                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xcU)))) 
                                                                       | (0x1fU 
                                                                          & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___133_)))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__Vfuncout 
        = (0x1fU & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s))) 
                           | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))) 
                          | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))) 
                         | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))) 
                        | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))) 
                       | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))) 
                      | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))) 
                     | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s))))
                     ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                         ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b)
                         : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                             ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                        >> 5U)) : (
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                                                    ? (IData)(
                                                              (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                               >> 0xaU))
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (8U 
                                                      & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                                                     ? (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                                >> 0xfU))
                                                     : 
                                                    ((0x10U 
                                                      == 
                                                      (0x10U 
                                                       & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                                                      ? (IData)(
                                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                                 >> 0x14U))
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x20U 
                                                        & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                                                       ? (IData)(
                                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                                  >> 0x19U))
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x40U 
                                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                                                        ? (IData)(
                                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                                   >> 0x1eU))
                                                        : (IData)(
                                                                  (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                                   >> 0x23U)))))))))
                     : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                         ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                    >> 0x28U)) : ((0x200U 
                                                   == 
                                                   (0x200U 
                                                    & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__s)))
                                                   ? (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__b 
                                                              >> 0x2dU))
                                                   : 0U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___270_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312462__197__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s 
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
    __Vtemp5562[4U] = ((0xffffU & ((IData)((VL_ULL(0xffffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                     >> 0x16U))))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((IData)(
                                                            ((VL_ULL(0xffffffffffffff) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                  << 0x2aU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                     << 0xaU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                       >> 0x16U)))) 
                                                             >> 0x20U)) 
                                                    << 0x10U)));
    __Vtemp5562[5U] = ((0xffffU & ((0xff00U & ((IData)(
                                                       (VL_ULL(0xffffffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                            << 0x2aU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                               << 0xaU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                 >> 0x16U))))) 
                                               << 8U)) 
                                   | ((IData)(((VL_ULL(0xffffffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                       << 0xaU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                         >> 0x16U)))) 
                                               >> 0x20U)) 
                                      >> 0x10U))) | 
                       (0xffff0000U & ((IData)((VL_ULL(0xffffffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                       << 0xaU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                         >> 0x16U))))) 
                                       << 8U)));
    __Vtemp5562[6U] = ((0xffffU & ((0xffU & ((IData)(
                                                     (VL_ULL(0xffffffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                             << 0xaU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                               >> 0x16U))))) 
                                             >> 0x18U)) 
                                   | (0xff00U & ((IData)(
                                                         ((VL_ULL(0xffffffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                               << 0x2aU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                  << 0xaU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                    >> 0x16U)))) 
                                                          >> 0x20U)) 
                                                 << 8U)))) 
                       | (0xffff0000U & ((IData)(((VL_ULL(0xffffffffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                          << 0xaU) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                            >> 0x16U)))) 
                                                  >> 0x20U)) 
                                         << 8U)));
    __Vtemp5562[7U] = ((0xffffU & ((0xffffU & (IData)(
                                                      (VL_ULL(0xffffffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[6U])) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[5U])) 
                                                              << 0xfU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U])) 
                                                                >> 0x11U)))))) 
                                   | (0xffU & ((IData)(
                                                       ((VL_ULL(0xffffffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                << 0xaU) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                  >> 0x16U)))) 
                                                        >> 0x20U)) 
                                               >> 0x18U)))) 
                       | (0xffff0000U & (IData)((VL_ULL(0xffffffffffffff) 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[6U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[5U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U])) 
                                                          >> 0x11U)))))));
    __Vtemp5562[8U] = ((0xffffU & (IData)(((VL_ULL(0xffffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[6U])) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[5U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U])) 
                                                     >> 0x11U)))) 
                                           >> 0x20U))) 
                       | (0xffff0000U & ((0xff000000U 
                                          & ((IData)(
                                                     (VL_ULL(0xffffffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                             << 0xaU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                               >> 0x16U))))) 
                                             << 0x18U)) 
                                         | (0xffff0000U 
                                            & (IData)(
                                                      ((VL_ULL(0xffffffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[6U])) 
                                                            << 0x2fU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[5U])) 
                                                               << 0xfU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U])) 
                                                                 >> 0x11U)))) 
                                                       >> 0x20U))))));
    __Vtemp5562[9U] = ((0xffffU & ((IData)((VL_ULL(0xffffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                     >> 0x16U))))) 
                                   >> 8U)) | (0xffff0000U 
                                              & ((0xff0000U 
                                                  & ((IData)(
                                                             (VL_ULL(0xffffffffffffff) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                  << 0x2aU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                     << 0xaU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                       >> 0x16U))))) 
                                                     >> 8U)) 
                                                 | (0xff000000U 
                                                    & ((IData)(
                                                               ((VL_ULL(0xffffffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                        << 0xaU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                          >> 0x16U)))) 
                                                                >> 0x20U)) 
                                                       << 0x18U)))));
    __Vtemp5562[0xaU] = ((0xffffU & ((IData)(((VL_ULL(0xffffffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                        >> 0x16U)))) 
                                              >> 0x20U)) 
                                     >> 8U)) | (0xffff0000U 
                                                & ((IData)(
                                                           (VL_ULL(0xffffffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                   << 0xaU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                     >> 0x16U))))) 
                                                   << 0x10U)));
    __Vtemp5562[0xbU] = ((0xffffU & ((IData)((VL_ULL(0xffffffffffffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                     << 0xaU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                       >> 0x16U))))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & ((IData)(
                                                              ((VL_ULL(0xffffffffffffff) 
                                                                & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                       << 0xaU) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                         >> 0x16U)))) 
                                                               >> 0x20U)) 
                                                      << 0x10U)));
    __Vtemp5562[0xcU] = ((0xffffU & ((0xff00U & ((IData)(
                                                         (VL_ULL(0xffffffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U])) 
                                                                 << 0x15U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U])) 
                                                                   >> 0xbU))))) 
                                                 << 8U)) 
                                     | ((IData)(((VL_ULL(0xffffffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                         << 0xaU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                           >> 0x16U)))) 
                                                 >> 0x20U)) 
                                        >> 0x10U))) 
                         | (0xffff0000U & ((IData)(
                                                   (VL_ULL(0xffffffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U])) 
                                                             >> 0xbU))))) 
                                           << 8U)));
    __Vtemp5562[0xdU] = ((0xffffU & ((0xffU & ((IData)(
                                                       (VL_ULL(0xffffffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U])) 
                                                               << 0x15U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U])) 
                                                                 >> 0xbU))))) 
                                               >> 0x18U)) 
                                     | (0xff00U & ((IData)(
                                                           ((VL_ULL(0xffffffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U])) 
                                                                    << 0x15U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U])) 
                                                                      >> 0xbU)))) 
                                                            >> 0x20U)) 
                                                   << 8U)))) 
                         | (0xffff0000U & ((IData)(
                                                   ((VL_ULL(0xffffffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U])) 
                                                              >> 0xbU)))) 
                                                    >> 0x20U)) 
                                           << 8U)));
    __Vtemp5562[0xeU] = ((0xffffU & ((0xffffU & (IData)(
                                                        (VL_ULL(0xffffffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                << 0xaU) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                  >> 0x16U)))))) 
                                     | (0xffU & ((IData)(
                                                         ((VL_ULL(0xffffffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U])) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U])) 
                                                                  << 0x15U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U])) 
                                                                    >> 0xbU)))) 
                                                          >> 0x20U)) 
                                                 >> 0x18U)))) 
                         | (0xffff0000U & (IData)((VL_ULL(0xffffffffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                          << 0xaU) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                            >> 0x16U)))))));
    __Vtemp5562[0xfU] = ((0xffffU & (IData)(((VL_ULL(0xffffffffffffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                     << 0xaU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                       >> 0x16U)))) 
                                             >> 0x20U))) 
                         | (0xffff0000U & ((0xff000000U 
                                            & ((IData)(
                                                       (VL_ULL(0xffffffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                            << 0x2aU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                               << 0xaU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                 >> 0x16U))))) 
                                               << 0x18U)) 
                                           | (0xffff0000U 
                                              & (IData)(
                                                        ((VL_ULL(0xffffffffffffff) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                 << 0xaU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                   >> 0x16U)))) 
                                                         >> 0x20U))))));
    __Vtemp5562[0x10U] = ((0xffffU & ((IData)((VL_ULL(0xffffffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                        >> 0x16U))))) 
                                      >> 8U)) | (0xffff0000U 
                                                 & ((0xff0000U 
                                                     & ((IData)(
                                                                (VL_ULL(0xffffffffffffff) 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                        << 0xaU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                          >> 0x16U))))) 
                                                        >> 8U)) 
                                                    | (0xff000000U 
                                                       & ((IData)(
                                                                  ((VL_ULL(0xffffffffffffff) 
                                                                    & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                             >> 0x16U)))) 
                                                                   >> 0x20U)) 
                                                          << 0x18U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0U] 
        = (IData)((VL_ULL(0xffffffffffff00) & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___133_));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[1U] 
        = ((0xff000000U & ((IData)((VL_ULL(0xffffffffffffff) 
                                    & (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                         >> 0x16U))))) 
                           << 0x18U)) | (IData)(((VL_ULL(0xffffffffffff00) 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___133_) 
                                                 >> 0x20U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[2U] 
        = ((0xffffffU & ((IData)((VL_ULL(0xffffffffffffff) 
                                  & (((QData)((IData)(
                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                      >> 0x16U))))) 
                         >> 8U)) | (0xff000000U & ((IData)(
                                                           ((VL_ULL(0xffffffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                                    << 0xaU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                                      >> 0x16U)))) 
                                                            >> 0x20U)) 
                                                   << 0x18U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[3U] 
        = ((0xffff0000U & ((IData)((VL_ULL(0xffffffffffffff) 
                                    & (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                         >> 0x16U))))) 
                           << 0x10U)) | (0xffffffU 
                                         & ((IData)(
                                                    ((VL_ULL(0xffffffffffffff) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                             << 0xaU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                               >> 0x16U)))) 
                                                     >> 0x20U)) 
                                            >> 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[4U] 
        = __Vtemp5562[4U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[5U] 
        = __Vtemp5562[5U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[6U] 
        = __Vtemp5562[6U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[7U] 
        = __Vtemp5562[7U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[8U] 
        = __Vtemp5562[8U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[9U] 
        = __Vtemp5562[9U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xaU] 
        = __Vtemp5562[0xaU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xbU] 
        = __Vtemp5562[0xbU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xcU] 
        = __Vtemp5562[0xcU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xdU] 
        = __Vtemp5562[0xdU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xeU] 
        = __Vtemp5562[0xeU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xfU] 
        = __Vtemp5562[0xfU];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0x10U] 
        = __Vtemp5562[0x10U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0x11U] 
        = (0xffffU & ((IData)(((VL_ULL(0xffffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                    << 0x2aU) | (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                  << 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U])) 
                                                    >> 0x16U)))) 
                               >> 0x20U)) >> 8U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__Vfuncout 
        = (VL_ULL(0xffffffffffffff) & (((((((((1U == 
                                               (1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s))) 
                                              | (2U 
                                                 == 
                                                 (2U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))) 
                                             | (4U 
                                                == 
                                                (4U 
                                                 & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))) 
                                            | (8U == 
                                               (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))) 
                                           | (0x10U 
                                              == (0x10U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))) 
                                          | (0x20U 
                                             == (0x20U 
                                                 & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))) 
                                         | (0x40U == 
                                            (0x40U 
                                             & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))) 
                                        | (0x80U == 
                                           (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s))))
                                        ? ((1U == (1U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                            ? (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0U])))
                                            : ((2U 
                                                == 
                                                (2U 
                                                 & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[3U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[2U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[1U])) 
                                                         >> 0x18U)))
                                                : (
                                                   (4U 
                                                    == 
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[5U])) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[4U])) 
                                                        << 0x10U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[3U])) 
                                                          >> 0x10U)))
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (8U 
                                                      & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[7U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[6U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[5U])) 
                                                           >> 8U)))
                                                     : 
                                                    ((0x10U 
                                                      == 
                                                      (0x10U 
                                                       & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[8U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[7U])))
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x20U 
                                                        & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xaU])) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[9U])) 
                                                           << 8U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[8U])) 
                                                             >> 0x18U)))
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x40U 
                                                         & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xcU])) 
                                                         << 0x30U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xbU])) 
                                                            << 0x10U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xaU])) 
                                                              >> 0x10U)))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xeU])) 
                                                         << 0x38U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xdU])) 
                                                            << 0x18U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xcU])) 
                                                              >> 8U))))))))))
                                        : ((0x100U 
                                            == (0x100U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                            ? (((QData)((IData)(
                                                                vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xeU])))
                                            : ((0x200U 
                                                == 
                                                (0x200U 
                                                 & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__s)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0x11U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0x10U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__b[0xfU])) 
                                                         >> 0x18U)))
                                                : VL_ULL(0)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___271_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312467__198__Vfuncout;
}
