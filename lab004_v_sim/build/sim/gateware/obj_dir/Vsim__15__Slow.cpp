// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

void Vsim::_settle__TOP__112(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__112\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1263[5];
    WData/*159:0*/ __Vtemp1264[5];
    WData/*95:0*/ __Vtemp1268[3];
    WData/*95:0*/ __Vtemp1271[3];
    WData/*159:0*/ __Vtemp1276[5];
    WData/*95:0*/ __Vtemp1280[3];
    WData/*191:0*/ __Vtemp1305[6];
    WData/*287:0*/ __Vtemp1306[9];
    WData/*351:0*/ __Vtemp1307[11];
    WData/*191:0*/ __Vtemp1332[6];
    WData/*287:0*/ __Vtemp1333[9];
    WData/*351:0*/ __Vtemp1334[11];
    WData/*191:0*/ __Vtemp1360[6];
    WData/*287:0*/ __Vtemp1361[9];
    WData/*351:0*/ __Vtemp1362[11];
    WData/*191:0*/ __Vtemp1388[6];
    WData/*287:0*/ __Vtemp1389[9];
    WData/*351:0*/ __Vtemp1390[11];
    WData/*191:0*/ __Vtemp1416[6];
    WData/*287:0*/ __Vtemp1417[9];
    WData/*351:0*/ __Vtemp1418[11];
    WData/*191:0*/ __Vtemp1444[6];
    WData/*287:0*/ __Vtemp1445[9];
    WData/*351:0*/ __Vtemp1446[11];
    WData/*191:0*/ __Vtemp1472[6];
    WData/*287:0*/ __Vtemp1473[9];
    WData/*351:0*/ __Vtemp1474[11];
    WData/*191:0*/ __Vtemp1500[6];
    WData/*287:0*/ __Vtemp1501[9];
    WData/*351:0*/ __Vtemp1502[11];
    WData/*191:0*/ __Vtemp1528[6];
    WData/*287:0*/ __Vtemp1529[9];
    WData/*351:0*/ __Vtemp1530[11];
    WData/*191:0*/ __Vtemp1556[6];
    WData/*287:0*/ __Vtemp1557[9];
    WData/*351:0*/ __Vtemp1558[11];
    WData/*191:0*/ __Vtemp1584[6];
    WData/*287:0*/ __Vtemp1585[9];
    WData/*351:0*/ __Vtemp1586[11];
    WData/*191:0*/ __Vtemp1612[6];
    WData/*287:0*/ __Vtemp1613[9];
    WData/*351:0*/ __Vtemp1614[11];
    WData/*191:0*/ __Vtemp1640[6];
    WData/*287:0*/ __Vtemp1641[9];
    WData/*351:0*/ __Vtemp1642[11];
    WData/*191:0*/ __Vtemp1668[6];
    WData/*287:0*/ __Vtemp1669[9];
    WData/*351:0*/ __Vtemp1670[11];
    WData/*191:0*/ __Vtemp1696[6];
    WData/*287:0*/ __Vtemp1697[9];
    WData/*351:0*/ __Vtemp1698[11];
    WData/*191:0*/ __Vtemp1724[6];
    WData/*287:0*/ __Vtemp1725[9];
    WData/*351:0*/ __Vtemp1726[11];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___061_ 
        = (1U & (((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                     >> 0xcU) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___359_) 
                                 >> 7U)) | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                             >> 0xbU) 
                                            & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___347_) 
                                               >> 7U))) 
                  | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                      >> 0xaU) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___341_) 
                                  >> 7U))) | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___338_) 
                                                 >> 7U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___225_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___221_) 
           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
               >> 0x13U) & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                             >> 2U) | (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                          >> 2U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[0U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfffffff0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[0U] 
                               << 4U)) | ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                           ? 9U : (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                         << 5U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                           >> 0x1bU))))
                                                    ? 9U
                                                    : 5U)))
            : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                             >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[1U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[0U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[1U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[6U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[2U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[1U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[2U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[8U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[7U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[3U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[2U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[3U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[8U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[4U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[3U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[4U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[5U] 
        = ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[4U] 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[5U] 
                                       << 4U))) : (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                      >> 5U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___188_[6U] 
        = (0x1ffU & ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                      ? ((0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[5U] 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___185_[6U] 
                                                   << 4U)))
                      : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                          << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                       >> 5U))));
    __Vtemp1263[0U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                     >> 0xbU));
    __Vtemp1263[1U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                     >> 0xbU));
    __Vtemp1263[2U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                     >> 0xbU));
    __Vtemp1263[3U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                        << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                     >> 0xbU));
    __Vtemp1263[4U] = (7U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU] 
                             >> 0xbU));
    VL_EXTEND_WW(132,131, __Vtemp1264, __Vtemp1263);
    __Vtemp1268[1U] = ((0xfffffff8U & ((0xf8000000U 
                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                           << 0x10U)) 
                                       | ((0x7f80000U 
                                           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U]) 
                                          | ((0x7f800U 
                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                  << 0x10U) 
                                                 | (0xf800U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                       >> 0x10U)))) 
                                             | (0x7f8U 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U]))))) 
                       | (IData)(((((QData)((IData)(
                                                    (0xffU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                         << 0x15U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                           >> 0xbU))))) 
                                    << 0x1bU) | (QData)((IData)(
                                                                ((0x7f80000U 
                                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U]) 
                                                                 | ((0x7c0U 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                         << 0xbU) 
                                                                        | (0x7c0U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                              >> 0x15U)))) 
                                                                    | (0x3fU 
                                                                       & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                            << 0x15U) 
                                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                              >> 0xbU)) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                               << 5U) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))) 
                                  >> 0x20U)));
    __Vtemp1271[0U] = ((0x200U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                        ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                            << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                         >> 0xbU)) : 
                       ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                         ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                             << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                          >> 0xbU))
                         : (IData)((((QData)((IData)(
                                                     (0xffU 
                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                          << 0x15U) 
                                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                            >> 0xbU))))) 
                                     << 0x1bU) | (QData)((IData)(
                                                                 ((0x7f80000U 
                                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U]) 
                                                                  | ((0x7c0U 
                                                                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                          << 0xbU) 
                                                                         | (0x7c0U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x3fU 
                                                                        & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                             << 0x15U) 
                                                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                               >> 0xbU)) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))))));
    __Vtemp1276[2U] = ((0xfffffff8U & ((IData)((((QData)((IData)(
                                                                 ((0xff000000U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                      << 0x15U)) 
                                                                  | ((0xff0000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                         << 5U)) 
                                                                     | ((0xff00U 
                                                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                             << 0x15U) 
                                                                            | (0x1fff00U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0xbU)))) 
                                                                        | (0xffU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                               << 5U) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0x1bU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0xff000000U 
                                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                       << 0x15U)) 
                                                                   | ((0xff0000U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                          << 5U)) 
                                                                      | ((0xff00U 
                                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                              << 0x15U) 
                                                                             | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                         | (0xffU 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))) 
                                       << 3U)) | (7U 
                                                  & ((0x400U 
                                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                      ? 
                                                     ((0x200U 
                                                       & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                                       ? 
                                                      ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                        << 0x15U) 
                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                          >> 0xbU))
                                                       : 
                                                      ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                                                        ? 
                                                       ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                         << 0x15U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                           >> 0xbU))
                                                        : 
                                                       (7U 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                           >> 0x10U))))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                       << 0x15U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                         >> 0xbU)))));
    __Vtemp1276[3U] = ((7U & ((IData)((((QData)((IData)(
                                                        ((0xff000000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                             << 0x15U)) 
                                                         | ((0xff0000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                << 5U)) 
                                                            | ((0xff00U 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                    << 0x15U) 
                                                                   | (0x1fff00U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                         >> 0xbU)))) 
                                                               | (0xffU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                      << 5U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                        >> 0x1bU)))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                         << 0x15U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                            << 5U)) 
                                                                        | ((0xff00U 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 0x15U) 
                                                                               | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                           | (0xffU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU)))))))))) 
                              >> 0x1dU)) | (0xfffffff8U 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((0xff000000U 
                                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                               << 0x15U)) 
                                                                           | ((0xff0000U 
                                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                << 5U)) 
                                                                              | ((0xff00U 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 0x15U) 
                                                                                | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0xbU)))) 
                                                                                | (0xffU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                                >> 0x1bU)))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0xff000000U 
                                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 0x15U)) 
                                                                            | ((0xff0000U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                << 5U)) 
                                                                               | ((0xff00U 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 0x15U) 
                                                                                | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                                | (0xffU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU))))))))) 
                                                        >> 0x20U)) 
                                               << 3U)));
    __Vtemp1276[4U] = (7U & ((IData)(((((QData)((IData)(
                                                        ((0xff000000U 
                                                          & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                             << 0x15U)) 
                                                         | ((0xff0000U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                << 5U)) 
                                                            | ((0xff00U 
                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                    << 0x15U) 
                                                                   | (0x1fff00U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                         >> 0xbU)))) 
                                                               | (0xffU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                      << 5U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                                                        >> 0x1bU)))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                         << 0x15U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                            << 5U)) 
                                                                        | ((0xff00U 
                                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 0x15U) 
                                                                               | (0x1fff00U 
                                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0xbU)))) 
                                                                           | (0xffU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[2U] 
                                                                                << 5U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[1U] 
                                                                                >> 0x1bU))))))))) 
                                      >> 0x20U)) >> 0x1dU));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[0U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp1264[0U] : ((0x400U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                  ? __Vtemp1271[0U]
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                   >> 0xbU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[1U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp1264[1U] : ((0x400U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                  ? ((0x200U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
                                      ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                          << 0x15U) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                            >> 0xbU))
                                      : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___233_)
                                          ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                >> 0xbU))
                                          : __Vtemp1268[1U]))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                   >> 0xbU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[2U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp1264[2U] : __Vtemp1276[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[3U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp1264[3U] : __Vtemp1276[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___248_[4U] 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U])
            ? __Vtemp1264[4U] : ((8U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu[0U] 
                                            >> 0xaU)) 
                                        << 3U)) | __Vtemp1276[4U]));
    __Vtemp1280[1U] = ((0x3fU & ((IData)(((0x10000U 
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
        = __Vtemp1280[1U];
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_ 
        = ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_) 
               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                   >> 0x1eU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_)))) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_));
    __Vtemp1305[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U])));
    __Vtemp1305[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1305[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1306[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1306[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1306[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1306[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1307[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1307[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU] 
                                                      >> 8U)) 
                                                    << 8U)));
    __Vtemp1332[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU])));
    __Vtemp1332[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1332[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1333[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1333[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1333[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1333[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1334[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1334[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1360[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U])));
    __Vtemp1360[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1360[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1361[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1361[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1361[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1361[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1362[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1362[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1388[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U])));
    __Vtemp1388[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1388[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1389[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1389[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1389[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1389[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1390[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1390[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1416[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU])));
    __Vtemp1416[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1416[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1417[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1417[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1417[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1417[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1418[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1418[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1444[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U])));
    __Vtemp1444[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1444[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1445[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1445[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1445[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1445[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1446[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1446[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1472[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U])));
    __Vtemp1472[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1472[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1473[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1473[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1473[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1473[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1474[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1474[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1500[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU])));
    __Vtemp1500[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1500[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1501[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1501[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1501[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1501[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1502[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1502[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1528[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU])));
    __Vtemp1528[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1528[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1529[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1529[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1529[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1529[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1530[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1530[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1556[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U])));
    __Vtemp1556[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1556[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1557[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1557[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1557[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1557[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1558[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1558[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1584[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U])));
    __Vtemp1584[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1584[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1585[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1585[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1585[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1585[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1586[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1586[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1612[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU])));
    __Vtemp1612[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1612[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1613[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1613[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1613[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1613[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1614[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1614[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1640[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U])));
    __Vtemp1640[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1640[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1641[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1641[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1641[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1641[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1642[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1642[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1668[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U])));
    __Vtemp1668[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1668[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1669[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1669[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1669[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1669[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1670[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1670[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1696[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU])));
    __Vtemp1696[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1696[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1697[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1697[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1697[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1697[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1698[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1698[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                                         >> 8U))) 
                                                    << 8U)));
    __Vtemp1724[2U] = ((0xff000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                         & ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU)))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                             << 8U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U] 
                                               >> 0x18U))) 
                                       << 0x18U)) | 
                       (0xffffffU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                      & (~ ((IData)(1U) 
                                            - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                               >> 0xeU))))
                                      ? ((0xfffU & 
                                          ((IData)(
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                          >> 0xcU)))) 
                                           >> 0x14U)) 
                                         | (0xfffff000U 
                                            & ((IData)(
                                                       ((VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                                      : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U])));
    __Vtemp1724[3U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? (IData)((VL_ULL(0xfffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                           >> 0x1dU)))))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         << 0xcU)) 
                                                     | (IData)(
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
                                                                >> 0x20U)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1724[4U] = ((0xffffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                       & ((IData)(1U) 
                                          - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                             >> 0xeU)))
                                       ? ((0xfffff000U 
                                           & ((IData)(
                                                      (VL_ULL(0xfffffffffff) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                             >> 0xcU)))) 
                                              << 0xcU)) 
                                          | (IData)(
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
                                                     >> 0x20U)))
                                       : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                           << 8U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                           >> 0x18U))) 
                                     >> 8U)) | (0xff000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                                     & ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    ((0xfffU 
                                                      & ((IData)(
                                                                 (VL_ULL(0xfffffffffff) 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                      << 0x14U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                        >> 0xcU)))) 
                                                         >> 0x14U)) 
                                                     | (0xfffff000U 
                                                        & ((IData)(
                                                                   ((VL_ULL(0xfffffffffff) 
                                                                     & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                         << 0x14U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                           >> 0xcU))) 
                                                                    >> 0x20U)) 
                                                           << 0xcU)))
                                                     : 
                                                    ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                                      << 8U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    __Vtemp1725[5U] = ((0xffff0000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                         & (~ ((IData)(1U) 
                                               - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                                         ? (IData)(
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
                                         : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                               >> 0x10U))) 
                                       << 0x10U)) | 
                       (0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffU & ((IData)(
                                                           (VL_ULL(0xfffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                  >> 0xcU)))) 
                                                   >> 0x14U)) 
                                        | (0xfffff000U 
                                           & ((IData)(
                                                      ((VL_ULL(0xfffffffffff) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                              >> 0xcU))) 
                                                       >> 0x20U)) 
                                              << 0xcU)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                         << 8U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                                   >> 0x18U))) 
                                   >> 8U)));
    __Vtemp1725[6U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? (IData)((VL_ULL(0xfffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                         >> 0x1dU)))))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
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
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          << 0xcU)) 
                                                      | (IData)(
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
                                                                 >> 0x20U)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1725[7U] = ((0xffffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                     & (~ ((IData)(1U) 
                                           - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                              >> 0xeU))))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                         << 0x10U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                           >> 0x10U))) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                           >> 0xeU))))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                                         >> 0x10U))) 
                                                    << 0x10U)));
    __Vtemp1725[8U] = (0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                  & (~ ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                                  ? ((0xfffU & ((IData)(
                                                        (VL_ULL(0xfffffffffff) 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                             << 0x14U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                               >> 0xcU)))) 
                                                >> 0x14U)) 
                                     | (0xfffff000U 
                                        & ((IData)(
                                                   ((VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0xcU)))
                                  : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                      << 0x10U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                                   >> 0x10U))) 
                                >> 0x10U));
    __Vtemp1726[9U] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                   & ((IData)(1U) - 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                       >> 0xeU))) ? (IData)(
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
                                   : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                       << 0x18U) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                       >> 8U))) >> 0x18U)) 
                       | (0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                           & ((IData)(1U) 
                                              - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU)))
                                           ? ((0xfffff000U 
                                               & ((IData)(
                                                          (VL_ULL(0xfffffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                 >> 0xcU)))) 
                                                  << 0xcU)) 
                                              | (IData)(
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
                                                         >> 0x20U)))
                                           : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                               << 0x18U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                                 >> 8U))) 
                                         << 8U)));
    __Vtemp1726[0xaU] = ((0xffU & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                     & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU)))
                                     ? ((0xfffff000U 
                                         & ((IData)(
                                                    (VL_ULL(0xfffffffffff) 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                           >> 0xcU)))) 
                                            << 0xcU)) 
                                        | (IData)((
                                                   (VL_ULL(0xfffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                             >> 0x1dU)))) 
                                                   >> 0x20U)))
                                     : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                         << 0x18U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                           >> 8U))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((0xfffU 
                                                       & ((IData)(
                                                                  (VL_ULL(0xfffffffffff) 
                                                                   & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                         >> 0xcU)))) 
                                                          >> 0x14U)) 
                                                      | (0xfffff000U 
                                                         & ((IData)(
                                                                    ((VL_ULL(0xfffffffffff) 
                                                                      & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                                                          << 0x14U) 
                                                                         | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                                                            >> 0xcU))) 
                                                                     >> 0x20U)) 
                                                            << 0xcU)))
                                                      : 
                                                     ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU] 
                                                       << 0x18U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                                         >> 8U))) 
                                                    << 8U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[1U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[1U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0881_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[1U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[2U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U]
            : __Vtemp1724[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[3U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U]
            : __Vtemp1724[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[4U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U]
            : __Vtemp1724[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[5U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U]
            : __Vtemp1725[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[6U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U]
            : __Vtemp1725[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[7U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U]
            : __Vtemp1725[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[8U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0882_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1725[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[9U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U]
            : __Vtemp1726[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU]
            : __Vtemp1726[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xbU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xcU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xcU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0884_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xcU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xdU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU]
            : __Vtemp1696[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xeU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU]
            : __Vtemp1696[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xfU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU]
            : __Vtemp1696[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x10U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U]
            : __Vtemp1697[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x11U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U]
            : __Vtemp1697[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x12U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U]
            : __Vtemp1697[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x13U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0885_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1697[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x14U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U]
            : __Vtemp1698[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x15U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U]
            : __Vtemp1698[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x16U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x17U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x17U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0886_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x17U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x18U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U]
            : __Vtemp1668[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x19U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U]
            : __Vtemp1668[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU]
            : __Vtemp1668[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU]
            : __Vtemp1669[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU]
            : __Vtemp1669[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU]
            : __Vtemp1669[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0887_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1669[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x1fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU]
            : __Vtemp1670[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x20U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U]
            : __Vtemp1670[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x21U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x22U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x22U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0888_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x22U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x23U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U]
            : __Vtemp1640[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x24U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U]
            : __Vtemp1640[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x25U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U]
            : __Vtemp1640[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x26U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U]
            : __Vtemp1641[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x27U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U]
            : __Vtemp1641[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x28U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U]
            : __Vtemp1641[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x29U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0889_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1641[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU]
            : __Vtemp1642[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU]
            : __Vtemp1642[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2dU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0890_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2dU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU]
            : __Vtemp1612[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x2fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU]
            : __Vtemp1612[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x30U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U]
            : __Vtemp1612[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x31U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U]
            : __Vtemp1613[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x32U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U]
            : __Vtemp1613[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x33U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U]
            : __Vtemp1613[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x34U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0891_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1613[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x35U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U]
            : __Vtemp1614[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x36U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U]
            : __Vtemp1614[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x37U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x38U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x38U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0892_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x38U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x39U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U]
            : __Vtemp1584[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU]
            : __Vtemp1584[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU]
            : __Vtemp1584[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU]
            : __Vtemp1585[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU]
            : __Vtemp1585[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU]
            : __Vtemp1585[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x3fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0893_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1585[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x40U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U]
            : __Vtemp1586[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x41U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U]
            : __Vtemp1586[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x42U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x43U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x43U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0895_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x43U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x44U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U]
            : __Vtemp1556[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x45U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U]
            : __Vtemp1556[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x46U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U]
            : __Vtemp1556[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x47U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U]
            : __Vtemp1557[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x48U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U]
            : __Vtemp1557[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x49U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U]
            : __Vtemp1557[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0896_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1557[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU]
            : __Vtemp1558[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU]
            : __Vtemp1558[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4eU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0897_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4eU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x4fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU]
            : __Vtemp1528[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x50U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U]
            : __Vtemp1528[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x51U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U]
            : __Vtemp1528[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x52U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U]
            : __Vtemp1529[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x53U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U]
            : __Vtemp1529[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x54U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U]
            : __Vtemp1529[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x55U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0898_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1529[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x56U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U]
            : __Vtemp1530[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x57U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U]
            : __Vtemp1530[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x58U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x59U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x59U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0899_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x59U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5aU]
            : __Vtemp1500[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5bU]
            : __Vtemp1500[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5cU]
            : __Vtemp1500[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5dU]
            : __Vtemp1501[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5eU]
            : __Vtemp1501[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x5fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x5fU]
            : __Vtemp1501[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x60U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0900_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x60U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1501[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x61U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x61U]
            : __Vtemp1502[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x62U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x62U]
            : __Vtemp1502[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x63U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x63U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x64U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x64U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0901_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x64U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x65U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x65U]
            : __Vtemp1472[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x66U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x66U]
            : __Vtemp1472[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x67U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x67U]
            : __Vtemp1472[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x68U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x68U]
            : __Vtemp1473[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x69U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x69U]
            : __Vtemp1473[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6aU]
            : __Vtemp1473[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0902_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6bU] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1473[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6cU]
            : __Vtemp1474[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6dU]
            : __Vtemp1474[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6eU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x6fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6fU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0903_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x6fU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x70U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x70U]
            : __Vtemp1444[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x71U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x71U]
            : __Vtemp1444[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x72U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x72U]
            : __Vtemp1444[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x73U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x73U]
            : __Vtemp1445[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x74U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x74U]
            : __Vtemp1445[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x75U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x75U]
            : __Vtemp1445[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x76U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0904_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x76U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1445[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x77U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x77U]
            : __Vtemp1446[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x78U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x78U]
            : __Vtemp1446[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x79U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x79U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7aU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0905_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7aU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7bU]
            : __Vtemp1416[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7cU]
            : __Vtemp1416[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7dU]
            : __Vtemp1416[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7eU]
            : __Vtemp1417[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x7fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x7fU]
            : __Vtemp1417[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x80U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x80U]
            : __Vtemp1417[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x81U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0906_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x81U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1417[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x82U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x82U]
            : __Vtemp1418[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x83U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x83U]
            : __Vtemp1418[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x84U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x84U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x85U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x85U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0907_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x85U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x86U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x86U]
            : __Vtemp1388[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x87U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x87U]
            : __Vtemp1388[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x88U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x88U]
            : __Vtemp1388[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x89U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x89U]
            : __Vtemp1389[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8aU]
            : __Vtemp1389[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8bU]
            : __Vtemp1389[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0908_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8cU] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1389[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8dU]
            : __Vtemp1390[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8eU]
            : __Vtemp1390[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x8fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x8fU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x90U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x90U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0909_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x90U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x91U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x91U]
            : __Vtemp1360[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x92U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x92U]
            : __Vtemp1360[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x93U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x93U]
            : __Vtemp1360[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x94U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x94U]
            : __Vtemp1361[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x95U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x95U]
            : __Vtemp1361[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x96U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x96U]
            : __Vtemp1361[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x97U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0910_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x97U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1361[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x98U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x98U]
            : __Vtemp1362[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x99U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x99U]
            : __Vtemp1362[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9aU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9aU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9bU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9bU]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0911_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9bU]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9cU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9cU]
            : __Vtemp1332[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9dU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9dU]
            : __Vtemp1332[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9eU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9eU]
            : __Vtemp1332[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0x9fU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x9fU]
            : __Vtemp1333[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa0U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa0U]
            : __Vtemp1333[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa1U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa1U]
            : __Vtemp1333[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa2U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0912_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa2U] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1333[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa3U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa3U]
            : __Vtemp1334[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa4U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa4U]
            : __Vtemp1334[0xaU]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa5U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? (IData)(
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
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa5U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa6U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa6U]
            : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0913_) 
                & (~ ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 0xeU)))) ? 
               ((0xfffff000U & ((IData)((VL_ULL(0xfffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[2U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0846_[1U])) 
                                               >> 0xcU)))) 
                                << 0xcU)) | (IData)(
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
                                                     >> 0x20U)))
                : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa6U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa7U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa7U]
            : __Vtemp1305[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa8U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa8U]
            : __Vtemp1305[3U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xa9U] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xa9U]
            : __Vtemp1305[4U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaaU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaaU]
            : __Vtemp1306[5U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xabU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xabU]
            : __Vtemp1306[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xacU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xacU]
            : __Vtemp1306[7U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xadU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU]
            : ((0xffffff00U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0914_) 
                                 & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU)))
                                 ? (IData)((VL_ULL(0xfffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U])) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])) 
                                                     >> 0x1dU)))))
                                 : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU] 
                                     << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xadU] 
                                                  >> 8U))) 
                               << 8U)) | __Vtemp1306[8U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xaeU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaeU]
            : __Vtemp1307[9U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1866_[0xafU] 
        = ((0x2000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U])
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xafU]
            : __Vtemp1307[0xaU]);
}
