// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

void Vsim::_settle__TOP__123(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__123\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
        = (((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
             ? ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                 ? 0U : ((0x400U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                          ? ((0x200U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___225_)
                                  ? 0U : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___221_) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___221_)))))
                              : 0U) : 0U)) : 0U) << 0xeU);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__Vfuncout 
        = (3U & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s))) 
                        | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))) 
                       | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))) 
                      | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))) 
                     | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))) 
                    | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))) 
                   | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))) 
                  | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s))))
                  ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                      ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b
                      : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                             >> 2U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                                        ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                           >> 4U) : 
                                       ((8U == (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                                         ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                            >> 6U) : 
                                        ((0x10U == 
                                          (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                                          ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                             >> 8U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                                              ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                                 >> 0xaU)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                                                  ? 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                                  >> 0xcU)
                                                  : 
                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                                  >> 0xeU))))))))
                  : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                      ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                         >> 0x10U) : ((0x200U == (0x200U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__s)))
                                       ? (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__b 
                                          >> 0x12U)
                                       : 0U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___276_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312484__203__Vfuncout;
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
}

void Vsim::_settle__TOP__124(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__124\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
        = (((QData)((IData)((0x70040U | ((((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U])
                                            ? 0U : 2U) 
                                          << 0x18U) 
                                         | ((0xf00000U 
                                             & (((2U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                  ? 
                                                 ((4U 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                   ? 9U
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                    ? 
                                                   ((0x200U 
                                                     & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                     ? 
                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___225_)
                                                      ? 8U
                                                      : 9U)
                                                     : 
                                                    ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                                                      ? 9U
                                                      : 6U))
                                                    : 9U))
                                                  : 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                   << 0x1bU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                     >> 5U))) 
                                                << 0x14U)) 
                                            | ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___197_)
                                                  ? 9U
                                                  : 
                                                 ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___203_)
                                                   ? 9U
                                                   : 6U)) 
                                                << 0xcU) 
                                               | ((0xf00U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[0U] 
                                                      << 8U)) 
                                                  | ((2U 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                      ? 0U
                                                      : 
                                                     (0xfU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                          << 0x1bU) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                                                            >> 5U))))))))))) 
            << 8U) | (QData)((IData)((0x20U | (0xfU 
                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___166_[3U] 
                                                  >> 1U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__Vfuncout 
        = (0xfU & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s))) 
                          | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))) 
                         | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))) 
                        | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))) 
                       | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))) 
                      | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))) 
                     | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))) 
                    | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s))))
                    ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                        ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b)
                        : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                            ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                       >> 4U)) : ((4U 
                                                   == 
                                                   (4U 
                                                    & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                                                   ? (IData)(
                                                             (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                              >> 8U))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (8U 
                                                     & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                                                    ? (IData)(
                                                              (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                               >> 0xcU))
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                                                     ? (IData)(
                                                               (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                                >> 0x10U))
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x20U 
                                                       & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                                                      ? (IData)(
                                                                (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                                 >> 0x14U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x40U 
                                                        & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                                                       ? (IData)(
                                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                                  >> 0x18U))
                                                       : (IData)(
                                                                 (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                                  >> 0x1cU)))))))))
                    : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                        ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                   >> 0x20U)) : ((0x200U 
                                                  == 
                                                  (0x200U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__s)))
                                                  ? (IData)(
                                                            (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__b 
                                                             >> 0x24U))
                                                  : 0U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___264_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312436__191__Vfuncout;
}

void Vsim::_settle__TOP__126(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__126\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1799[5];
    WData/*159:0*/ __Vtemp1800[5];
    WData/*95:0*/ __Vtemp1807[3];
    WData/*95:0*/ __Vtemp1813[3];
    WData/*95:0*/ __Vtemp1819[3];
    WData/*95:0*/ __Vtemp1825[3];
    WData/*191:0*/ __Vtemp1827[6];
    WData/*287:0*/ __Vtemp1828[9];
    WData/*351:0*/ __Vtemp1829[11];
    WData/*95:0*/ __Vtemp1834[3];
    WData/*95:0*/ __Vtemp1840[3];
    WData/*95:0*/ __Vtemp1846[3];
    WData/*95:0*/ __Vtemp1852[3];
    WData/*191:0*/ __Vtemp1854[6];
    WData/*287:0*/ __Vtemp1855[9];
    WData/*351:0*/ __Vtemp1856[11];
    WData/*95:0*/ __Vtemp1862[3];
    WData/*95:0*/ __Vtemp1868[3];
    WData/*95:0*/ __Vtemp1874[3];
    WData/*95:0*/ __Vtemp1880[3];
    WData/*191:0*/ __Vtemp1882[6];
    WData/*287:0*/ __Vtemp1883[9];
    WData/*351:0*/ __Vtemp1884[11];
    WData/*95:0*/ __Vtemp1890[3];
    WData/*95:0*/ __Vtemp1896[3];
    WData/*95:0*/ __Vtemp1902[3];
    WData/*95:0*/ __Vtemp1908[3];
    WData/*191:0*/ __Vtemp1910[6];
    WData/*287:0*/ __Vtemp1911[9];
    WData/*351:0*/ __Vtemp1912[11];
    WData/*95:0*/ __Vtemp1918[3];
    WData/*95:0*/ __Vtemp1924[3];
    WData/*95:0*/ __Vtemp1930[3];
    WData/*95:0*/ __Vtemp1936[3];
    WData/*191:0*/ __Vtemp1938[6];
    WData/*287:0*/ __Vtemp1939[9];
    WData/*351:0*/ __Vtemp1940[11];
    WData/*95:0*/ __Vtemp1946[3];
    WData/*95:0*/ __Vtemp1952[3];
    WData/*95:0*/ __Vtemp1958[3];
    WData/*95:0*/ __Vtemp1964[3];
    WData/*191:0*/ __Vtemp1966[6];
    WData/*287:0*/ __Vtemp1967[9];
    WData/*351:0*/ __Vtemp1968[11];
    WData/*95:0*/ __Vtemp1974[3];
    WData/*95:0*/ __Vtemp1980[3];
    WData/*95:0*/ __Vtemp1986[3];
    WData/*95:0*/ __Vtemp1992[3];
    WData/*191:0*/ __Vtemp1994[6];
    WData/*287:0*/ __Vtemp1995[9];
    WData/*351:0*/ __Vtemp1996[11];
    WData/*95:0*/ __Vtemp2002[3];
    WData/*95:0*/ __Vtemp2008[3];
    WData/*95:0*/ __Vtemp2014[3];
    WData/*95:0*/ __Vtemp2020[3];
    WData/*191:0*/ __Vtemp2022[6];
    WData/*287:0*/ __Vtemp2023[9];
    WData/*351:0*/ __Vtemp2024[11];
    WData/*95:0*/ __Vtemp2030[3];
    WData/*95:0*/ __Vtemp2036[3];
    WData/*95:0*/ __Vtemp2042[3];
    WData/*95:0*/ __Vtemp2048[3];
    WData/*191:0*/ __Vtemp2050[6];
    WData/*287:0*/ __Vtemp2051[9];
    WData/*351:0*/ __Vtemp2052[11];
    WData/*95:0*/ __Vtemp2058[3];
    WData/*95:0*/ __Vtemp2064[3];
    WData/*95:0*/ __Vtemp2070[3];
    WData/*95:0*/ __Vtemp2076[3];
    WData/*191:0*/ __Vtemp2078[6];
    WData/*287:0*/ __Vtemp2079[9];
    WData/*351:0*/ __Vtemp2080[11];
    WData/*95:0*/ __Vtemp2086[3];
    WData/*95:0*/ __Vtemp2092[3];
    WData/*95:0*/ __Vtemp2098[3];
    WData/*95:0*/ __Vtemp2104[3];
    WData/*191:0*/ __Vtemp2106[6];
    WData/*287:0*/ __Vtemp2107[9];
    WData/*351:0*/ __Vtemp2108[11];
    WData/*95:0*/ __Vtemp2114[3];
    WData/*95:0*/ __Vtemp2120[3];
    WData/*95:0*/ __Vtemp2126[3];
    WData/*95:0*/ __Vtemp2132[3];
    WData/*191:0*/ __Vtemp2134[6];
    WData/*287:0*/ __Vtemp2135[9];
    WData/*351:0*/ __Vtemp2136[11];
    WData/*95:0*/ __Vtemp2142[3];
    WData/*95:0*/ __Vtemp2148[3];
    WData/*95:0*/ __Vtemp2154[3];
    WData/*95:0*/ __Vtemp2160[3];
    WData/*191:0*/ __Vtemp2162[6];
    WData/*287:0*/ __Vtemp2163[9];
    WData/*351:0*/ __Vtemp2164[11];
    WData/*95:0*/ __Vtemp2170[3];
    WData/*95:0*/ __Vtemp2176[3];
    WData/*95:0*/ __Vtemp2182[3];
    WData/*95:0*/ __Vtemp2188[3];
    WData/*191:0*/ __Vtemp2190[6];
    WData/*287:0*/ __Vtemp2191[9];
    WData/*351:0*/ __Vtemp2192[11];
    WData/*95:0*/ __Vtemp2198[3];
    WData/*95:0*/ __Vtemp2204[3];
    WData/*95:0*/ __Vtemp2210[3];
    WData/*95:0*/ __Vtemp2216[3];
    WData/*191:0*/ __Vtemp2218[6];
    WData/*287:0*/ __Vtemp2219[9];
    WData/*351:0*/ __Vtemp2220[11];
    WData/*95:0*/ __Vtemp2226[3];
    WData/*95:0*/ __Vtemp2232[3];
    WData/*95:0*/ __Vtemp2238[3];
    WData/*95:0*/ __Vtemp2244[3];
    WData/*191:0*/ __Vtemp2246[6];
    WData/*287:0*/ __Vtemp2247[9];
    WData/*351:0*/ __Vtemp2248[11];
    // Body
    __Vtemp1799[0U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                     >> 0xbU));
    __Vtemp1799[1U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                     >> 0xbU));
    __Vtemp1799[2U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                     >> 0xbU));
    __Vtemp1799[3U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                     >> 0xbU));
    __Vtemp1799[4U] = (7U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                             >> 0xbU));
    VL_EXTEND_WW(133,131, __Vtemp1800, __Vtemp1799);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[0U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[0U]
            : __Vtemp1800[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[1U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[1U]
            : __Vtemp1800[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[2U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[2U]
            : __Vtemp1800[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[3U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[3U]
            : __Vtemp1800[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___252_[4U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0x10U & ((0xfffffff0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                         << 2U)) | 
                         (0x3fffff0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                         >> 6U) & (
                                                   ((~ 
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                      >> 9U)) 
                                                    & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)) 
                                                   << 4U))))) 
               | vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[4U])
            : __Vtemp1800[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___197_ 
        = (1U & (((((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                        >> 1U)) & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                                      >> 4U))) & (~ 
                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                                                   >> 5U))) 
                  & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                        >> 2U))) & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0506_ 
        = ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_) 
               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                   >> 0x1dU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_)))) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_));
    __Vtemp1807[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
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
    __Vtemp1813[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
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
    __Vtemp1819[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
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
    __Vtemp1825[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
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
    __Vtemp1827[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
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
    __Vtemp1827[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1139_) 
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
                                                & (__Vtemp1819[2U] 
                                                   << 0x18U)));
    __Vtemp1828[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
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
    __Vtemp1828[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
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
                                                 & (__Vtemp1813[2U] 
                                                    << 0x10U)));
    __Vtemp1829[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
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
    __Vtemp1829[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1140_) 
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
                                                 & (__Vtemp1807[2U] 
                                                    << 8U)));
    __Vtemp1834[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
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
    __Vtemp1840[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
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
    __Vtemp1846[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
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
    __Vtemp1852[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
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
    __Vtemp1854[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
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
    __Vtemp1854[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1137_) 
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
                                                & (__Vtemp1846[2U] 
                                                   << 0x18U)));
    __Vtemp1855[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
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
    __Vtemp1855[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
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
                                                 & (__Vtemp1840[2U] 
                                                    << 0x10U)));
    __Vtemp1856[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
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
    __Vtemp1856[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1138_) 
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
                                                 & (__Vtemp1834[2U] 
                                                    << 8U)));
    __Vtemp1862[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
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
    __Vtemp1868[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
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
    __Vtemp1874[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
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
    __Vtemp1880[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
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
    __Vtemp1882[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
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
    __Vtemp1882[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1134_) 
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
                                                & (__Vtemp1874[2U] 
                                                   << 0x18U)));
    __Vtemp1883[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
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
    __Vtemp1883[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
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
                                                 & (__Vtemp1868[2U] 
                                                    << 0x10U)));
    __Vtemp1884[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
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
    __Vtemp1884[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1136_) 
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
                                                 & (__Vtemp1862[2U] 
                                                    << 8U)));
    __Vtemp1890[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
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
    __Vtemp1896[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
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
    __Vtemp1902[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
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
    __Vtemp1908[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
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
    __Vtemp1910[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
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
    __Vtemp1910[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1132_) 
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
                                                & (__Vtemp1902[2U] 
                                                   << 0x18U)));
    __Vtemp1911[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
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
    __Vtemp1911[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
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
                                                 & (__Vtemp1896[2U] 
                                                    << 0x10U)));
    __Vtemp1912[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
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
    __Vtemp1912[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1133_) 
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
                                                 & (__Vtemp1890[2U] 
                                                    << 8U)));
    __Vtemp1918[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
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
    __Vtemp1924[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
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
    __Vtemp1930[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
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
    __Vtemp1936[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
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
    __Vtemp1938[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
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
    __Vtemp1938[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1130_) 
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
                                                & (__Vtemp1930[2U] 
                                                   << 0x18U)));
    __Vtemp1939[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
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
    __Vtemp1939[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
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
                                                 & (__Vtemp1924[2U] 
                                                    << 0x10U)));
    __Vtemp1940[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
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
    __Vtemp1940[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1131_) 
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
                                                 & (__Vtemp1918[2U] 
                                                    << 8U)));
    __Vtemp1946[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
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
    __Vtemp1952[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
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
    __Vtemp1958[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
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
    __Vtemp1964[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
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
    __Vtemp1966[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
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
    __Vtemp1966[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1128_) 
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
                                                & (__Vtemp1958[2U] 
                                                   << 0x18U)));
    __Vtemp1967[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
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
    __Vtemp1967[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
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
                                                 & (__Vtemp1952[2U] 
                                                    << 0x10U)));
    __Vtemp1968[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
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
    __Vtemp1968[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1129_) 
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
                                                 & (__Vtemp1946[2U] 
                                                    << 8U)));
    __Vtemp1974[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
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
    __Vtemp1980[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
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
    __Vtemp1986[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
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
    __Vtemp1992[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
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
    __Vtemp1994[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
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
    __Vtemp1994[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1126_) 
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
                                                & (__Vtemp1986[2U] 
                                                   << 0x18U)));
    __Vtemp1995[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
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
    __Vtemp1995[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
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
                                                 & (__Vtemp1980[2U] 
                                                    << 0x10U)));
    __Vtemp1996[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
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
    __Vtemp1996[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1127_) 
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
                                                 & (__Vtemp1974[2U] 
                                                    << 8U)));
    __Vtemp2002[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
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
    __Vtemp2008[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
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
    __Vtemp2014[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
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
    __Vtemp2020[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
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
    __Vtemp2022[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
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
    __Vtemp2022[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1124_) 
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
                                                & (__Vtemp2014[2U] 
                                                   << 0x18U)));
    __Vtemp2023[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
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
    __Vtemp2023[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
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
                                                 & (__Vtemp2008[2U] 
                                                    << 0x10U)));
    __Vtemp2024[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
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
    __Vtemp2024[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1125_) 
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
                                                 & (__Vtemp2002[2U] 
                                                    << 8U)));
    __Vtemp2030[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
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
    __Vtemp2036[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
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
    __Vtemp2042[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
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
    __Vtemp2048[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
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
    __Vtemp2050[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
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
    __Vtemp2050[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1122_) 
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
                                                & (__Vtemp2042[2U] 
                                                   << 0x18U)));
    __Vtemp2051[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
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
    __Vtemp2051[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
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
                                                 & (__Vtemp2036[2U] 
                                                    << 0x10U)));
    __Vtemp2052[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
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
    __Vtemp2052[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1123_) 
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
                                                 & (__Vtemp2030[2U] 
                                                    << 8U)));
    __Vtemp2058[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
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
    __Vtemp2064[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
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
    __Vtemp2070[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
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
    __Vtemp2076[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
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
    __Vtemp2078[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
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
    __Vtemp2078[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1120_) 
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
                                                & (__Vtemp2070[2U] 
                                                   << 0x18U)));
    __Vtemp2079[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
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
    __Vtemp2079[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
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
                                                 & (__Vtemp2064[2U] 
                                                    << 0x10U)));
    __Vtemp2080[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
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
    __Vtemp2080[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1121_) 
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
                                                 & (__Vtemp2058[2U] 
                                                    << 8U)));
    __Vtemp2086[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
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
    __Vtemp2092[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
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
    __Vtemp2098[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
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
    __Vtemp2104[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
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
    __Vtemp2106[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
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
    __Vtemp2106[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1118_) 
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
                                                & (__Vtemp2098[2U] 
                                                   << 0x18U)));
    __Vtemp2107[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
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
    __Vtemp2107[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
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
                                                 & (__Vtemp2092[2U] 
                                                    << 0x10U)));
    __Vtemp2108[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
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
    __Vtemp2108[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1119_) 
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
                                                 & (__Vtemp2086[2U] 
                                                    << 8U)));
    __Vtemp2114[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
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
    __Vtemp2120[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
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
    __Vtemp2126[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
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
    __Vtemp2132[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
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
    __Vtemp2134[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
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
    __Vtemp2134[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1116_) 
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
                                                & (__Vtemp2126[2U] 
                                                   << 0x18U)));
    __Vtemp2135[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
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
    __Vtemp2135[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
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
                                                 & (__Vtemp2120[2U] 
                                                    << 0x10U)));
    __Vtemp2136[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
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
    __Vtemp2136[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1117_) 
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
                                                 & (__Vtemp2114[2U] 
                                                    << 8U)));
    __Vtemp2142[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
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
    __Vtemp2148[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
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
    __Vtemp2154[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
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
    __Vtemp2160[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
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
    __Vtemp2162[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
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
    __Vtemp2162[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1114_) 
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
                                                & (__Vtemp2154[2U] 
                                                   << 0x18U)));
    __Vtemp2163[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
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
    __Vtemp2163[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
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
                                                 & (__Vtemp2148[2U] 
                                                    << 0x10U)));
    __Vtemp2164[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
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
    __Vtemp2164[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1115_) 
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
                                                 & (__Vtemp2142[2U] 
                                                    << 8U)));
    __Vtemp2170[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
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
    __Vtemp2176[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
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
    __Vtemp2182[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
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
    __Vtemp2188[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
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
    __Vtemp2190[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
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
    __Vtemp2190[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1112_) 
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
                                                & (__Vtemp2182[2U] 
                                                   << 0x18U)));
    __Vtemp2191[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
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
    __Vtemp2191[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
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
                                                 & (__Vtemp2176[2U] 
                                                    << 0x10U)));
    __Vtemp2192[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
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
    __Vtemp2192[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1113_) 
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
                                                 & (__Vtemp2170[2U] 
                                                    << 8U)));
    __Vtemp2198[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
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
    __Vtemp2204[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
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
    __Vtemp2210[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
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
    __Vtemp2216[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
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
    __Vtemp2218[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
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
    __Vtemp2218[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1110_) 
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
                                                & (__Vtemp2210[2U] 
                                                   << 0x18U)));
    __Vtemp2219[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
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
    __Vtemp2219[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
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
                                                 & (__Vtemp2204[2U] 
                                                    << 0x10U)));
    __Vtemp2220[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
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
    __Vtemp2220[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1111_) 
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
                                                 & (__Vtemp2198[2U] 
                                                    << 8U)));
    __Vtemp2226[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
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
    __Vtemp2232[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
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
    __Vtemp2238[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
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
    __Vtemp2244[2U] = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
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
    __Vtemp2246[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
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
    __Vtemp2246[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1108_) 
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
                                                & (__Vtemp2238[2U] 
                                                   << 0x18U)));
    __Vtemp2247[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
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
    __Vtemp2247[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
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
                                                 & (__Vtemp2232[2U] 
                                                    << 0x10U)));
    __Vtemp2248[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
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
    __Vtemp2248[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1109_) 
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
                                                 & (__Vtemp2226[2U] 
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
                                             & __Vtemp2244[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[3U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2246[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[4U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2246[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[4U]);
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
                                             & (__Vtemp2238[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[6U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2247[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[7U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2247[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[7U]);
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
                                                   __Vtemp2232[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[8U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[9U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2248[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xaU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2248[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaU]);
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
                                             & __Vtemp2216[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xdU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xeU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2218[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xfU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2218[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xfU]);
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
                                             & (__Vtemp2210[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x10U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x11U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2219[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x12U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2219[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x12U]);
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
                                                   __Vtemp2204[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x13U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x14U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2220[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x15U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2220[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x15U]);
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
                                             & __Vtemp2188[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x18U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x19U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2190[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2190[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1aU]);
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
                                             & (__Vtemp2182[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2191[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2191[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1dU]);
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
                                                   __Vtemp2176[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x1fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2192[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x20U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2192[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x20U]);
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
                                             & __Vtemp2160[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x23U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x24U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2162[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x25U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2162[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x25U]);
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
                                             & (__Vtemp2154[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x26U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x27U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2163[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x28U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2163[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x28U]);
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
                                                   __Vtemp2148[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x29U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2164[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2164[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2bU]);
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
                                             & __Vtemp2132[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x2fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2134[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x30U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2134[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x30U]);
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
                                             & (__Vtemp2126[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x31U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x32U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2135[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x33U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2135[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x33U]);
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
                                                   __Vtemp2120[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x34U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x35U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2136[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x36U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2136[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x36U]);
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
                                             & __Vtemp2104[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x39U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2106[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2106[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3bU]);
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
                                             & (__Vtemp2098[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2107[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x3eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2107[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3eU]);
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
                                                   __Vtemp2092[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x40U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2108[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x41U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2108[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x41U]);
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
                                             & __Vtemp2076[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x44U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x45U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2078[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x46U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2078[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x46U]);
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
                                             & (__Vtemp2070[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x47U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x48U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2079[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x49U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2079[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x49U]);
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
                                                   __Vtemp2064[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2080[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x4cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2080[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4cU]);
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
                                             & __Vtemp2048[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x50U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2050[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x51U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2050[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x51U]);
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
                                             & (__Vtemp2042[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x52U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x53U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2051[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x54U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2051[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x54U]);
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
                                                   __Vtemp2036[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x55U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x56U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2052[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x57U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2052[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x57U]);
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
                                             & __Vtemp2020[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2022[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2022[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5cU]);
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
                                             & (__Vtemp2014[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2023[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x5fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2023[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5fU]);
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
                                                   __Vtemp2008[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x60U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x61U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2024[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x62U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp2024[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x62U]);
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
                                             & __Vtemp1992[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x65U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x66U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1994[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x67U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1994[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x67U]);
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
                                             & (__Vtemp1986[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x68U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x69U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1995[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1995[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6aU]);
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
                                                   __Vtemp1980[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1996[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x6dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1996[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6dU]);
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
                                             & __Vtemp1964[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x70U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x71U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1966[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x72U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1966[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x72U]);
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
                                             & (__Vtemp1958[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x73U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x74U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1967[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x75U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1967[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x75U]);
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
                                                   __Vtemp1952[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x76U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x77U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1968[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x78U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1968[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x78U]);
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
                                             & __Vtemp1936[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7bU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1938[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1938[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7dU]);
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
                                             & (__Vtemp1930[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7eU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x7fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1939[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x80U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1939[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x80U]);
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
                                                   __Vtemp1924[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x81U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x82U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1940[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x83U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1940[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x83U]);
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
                                             & __Vtemp1908[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x86U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x87U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1910[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x88U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1910[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x88U]);
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
                                             & (__Vtemp1902[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x89U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1911[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1911[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8bU]);
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
                                                   __Vtemp1896[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1912[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x8eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1912[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8eU]);
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
                                             & __Vtemp1880[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x91U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x92U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1882[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x93U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1882[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x93U]);
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
                                             & (__Vtemp1874[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x94U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x95U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1883[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x96U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1883[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x96U]);
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
                                                   __Vtemp1868[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x97U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x98U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1884[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x99U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1884[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x99U]);
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
                                             & __Vtemp1852[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9cU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1854[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0x9eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1854[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9eU]);
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
                                             & (__Vtemp1846[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9fU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa0U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1855[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa1U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1855[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa1U]);
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
                                                   __Vtemp1840[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa3U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1856[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa4U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1856[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa4U]);
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
                                             & __Vtemp1825[2U]))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa8U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1827[3U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xa9U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1827[4U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa9U]);
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
                                             & (__Vtemp1819[2U] 
                                                >> 8U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xabU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1828[6U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xacU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1828[7U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xacU]);
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
                                                   __Vtemp1813[2U] 
                                                   >> 0x10U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xadU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xaeU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1829[9U] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1870_[0xafU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? __Vtemp1829[0xaU] : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xafU]);
}
