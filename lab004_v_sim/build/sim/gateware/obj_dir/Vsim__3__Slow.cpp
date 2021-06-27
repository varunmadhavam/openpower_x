// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

void Vsim::_settle__TOP__11(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__11\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_stall 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_full) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Ewr_addr 
        = (0x1ffU & ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                      ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U] 
                          << 0x19U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U] 
                                       >> 7U)) : ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                   << 6U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                     >> 0x1aU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Ewr_addr 
        = (0x1ffU & ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                      ? ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U] 
                          << 0x19U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U] 
                                       >> 7U)) : ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                   << 6U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                     >> 0x1aU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1227_ 
        = (0x3ffU & ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                      ? ((0x3feU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U] 
                                     << 0x1aU) | (0x3fffffeU 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U] 
                                                     >> 6U)))) 
                         | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                                  >> 4U))) : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                               << 7U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                 >> 0x19U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1228_ 
        = ((0x80000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
            ? (0xffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                         << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[3U] 
                                   >> 0x1cU))) : 0xffU);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__result 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_modulus)
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[4U])) 
                << 0x3fU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[2U])) 
                                           >> 1U)))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__quot);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT___10_ 
        = ((0U == ((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[2U] 
                      << 7U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[1U] 
                                >> 0x19U)) | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[3U] 
                                               << 7U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[2U] 
                                                 >> 0x19U))) 
                   | (0xffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[4U] 
                                << 7U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[3U] 
                                          >> 0x19U))))) 
           & (7U != (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__count) 
                             >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1051_ 
        = (1U & ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U]) 
                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1119_ 
        = ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_) 
             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                >> 6U)) & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                             >> 0x1eU) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U] 
                                          >> 3U)) | 
                           ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                >> 0x1eU)) & (4U == 
                                              (7U & 
                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U]))))) 
           & ((0x1ffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                          << 6U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                    >> 0x1aU))) == 
              (0x1ffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[1U] 
                          << 0x19U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[0U] 
                                       >> 7U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1669_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0x13U)))
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A16__02Etlb_plru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A17__02Etlb_plru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A18__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A19__02Etlb_plru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0xdU) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A20__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A21__02Etlb_plru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0x13U)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A22__02Etlb_plru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A23__02Etlb_plru__DOT__tree) 
                                                    >> 1U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0x13U)))
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A24__02Etlb_plru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A25__02Etlb_plru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A26__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A27__02Etlb_plru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0xdU) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A28__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A29__02Etlb_plru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0x13U)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A30__02Etlb_plru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A31__02Etlb_plru__DOT__tree) 
                                                    >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1670_ 
        = (1U & ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))))
                  ? ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0x13U)))
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A0__02Etlb_plru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A1__02Etlb_plru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A2__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A3__02Etlb_plru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0xdU) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A4__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A5__02Etlb_plru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0x13U)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A6__02Etlb_plru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A7__02Etlb_plru__DOT__tree) 
                                                    >> 1U))))
                  : ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))))
                      ? ((2U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((1U & ((IData)(1U) - (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0x13U)))
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A8__02Etlb_plru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A9__02Etlb_plru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A10__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A11__02Etlb_plru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0xdU) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A12__02Etlb_plru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A13__02Etlb_plru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0x13U)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A14__02Etlb_plru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A15__02Etlb_plru__DOT__tree) 
                                                    >> 1U))))));
}

void Vsim::_settle__TOP__12(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__12\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0041_ 
        = (1U & ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                              << 0xdU) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0x13U))))
                  ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A32__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A33__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A34__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A35__02Etlb_plru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A36__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A37__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A38__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A39__02Etlb_plru__DOT__tree) 
                                               >> 1U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A40__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A41__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A42__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A43__02Etlb_plru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A44__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A45__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A46__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A47__02Etlb_plru__DOT__tree) 
                                               >> 1U)))))
                  : ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))))
                      ? ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A48__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A49__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A50__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A51__02Etlb_plru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A52__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A53__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A54__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A55__02Etlb_plru__DOT__tree) 
                                               >> 1U))))
                      : ((4U & ((IData)(0x3fU) - ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))))
                          ? ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A56__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A57__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A58__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A59__02Etlb_plru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A60__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A61__02Etlb_plru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0x13U)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A62__02Etlb_plru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A63__02Etlb_plru__DOT__tree) 
                                               >> 1U)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1103_ 
        = ((7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                   << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                >> 5U))) == (7U & (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                   >> 9U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2220_ 
        = (1U & ((~ (1U & (((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                            << 6U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                              >> 0x1aU))) 
                           >> 2U))) & (~ (3U & (((IData)(7U) 
                                                 - 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                   << 6U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                     >> 0x1aU))) 
                                                >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2221_ 
        = (1U & ((~ (1U & (((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                            << 6U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                              >> 0x1aU))) 
                           >> 2U))) & (((IData)(7U) 
                                        - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                            << 6U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                              >> 0x1aU))) 
                                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2222_ 
        = (1U & ((((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                   << 6U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                             >> 0x1aU))) 
                  >> 2U) & (~ (3U & (((IData)(7U) - 
                                      ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                        << 6U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                  >> 0x1aU))) 
                                     >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2223_ 
        = (1U & ((((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                   << 6U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                             >> 0x1aU))) 
                  >> 2U) & (((IData)(7U) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                             << 6U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                               >> 0x1aU))) 
                            >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1266_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))) 
                                                >> 4U)))));
}

void Vsim::_settle__TOP__13(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__13\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1267_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U))) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1268_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                      << 0xdU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))) 
                  >> 5U) & (~ (3U & (((IData)(0x3fU) 
                                      - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                                     >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1269_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                      << 0xdU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))) 
                  >> 5U) & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0xdU) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))) 
                            >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1680_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - 
                                                 ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                     >> 0x13U))) 
                                                >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1681_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0xdU) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0x13U))) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U))) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1682_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                      << 0xdU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))) 
                  >> 5U) & (~ (3U & (((IData)(0x3fU) 
                                      - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                                     >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1683_ 
        = (1U & ((((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                      << 0xdU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))) 
                  >> 5U) & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0xdU) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0x13U))) 
                            >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2215_ 
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A16__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A17__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A18__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A19__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0x13U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0xdU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A20__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A21__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A22__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A23__02Eplru__DOT__tree) 
                                                    >> 1U))))
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A24__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A25__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A26__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A27__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0x13U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0xdU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A28__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A29__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A30__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A31__02Eplru__DOT__tree) 
                                                    >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2216_ 
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A0__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A1__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A2__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A3__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0x13U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0xdU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A4__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A5__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A6__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A7__02Eplru__DOT__tree) 
                                                    >> 1U))))
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
                              ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A8__02Eplru__DOT__tree) 
                                 >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A9__02Eplru__DOT__tree) 
                                           >> 1U)) : 
                         ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A10__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A11__02Eplru__DOT__tree) 
                                        >> 1U))) : 
                     ((2U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0x13U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0xdU))))
                       ? ((1U & ((IData)(1U) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                >> 0xdU)))
                           ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A12__02Eplru__DOT__tree) 
                              >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A13__02Eplru__DOT__tree) 
                                        >> 1U)) : (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       - 
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A14__02Eplru__DOT__tree) 
                                                    >> 1U)
                                                    : 
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A15__02Eplru__DOT__tree) 
                                                    >> 1U))))));
}

void Vsim::_settle__TOP__14(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__14\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0190_ 
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
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A32__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A33__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A34__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A35__02Eplru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A36__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A37__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A38__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A39__02Eplru__DOT__tree) 
                                               >> 1U))))
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
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A40__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A41__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A42__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A43__02Eplru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A44__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A45__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A46__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A47__02Eplru__DOT__tree) 
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
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A48__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A49__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A50__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A51__02Eplru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A52__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A53__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A54__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A55__02Eplru__DOT__tree) 
                                               >> 1U))))
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
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A56__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A57__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A58__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A59__02Eplru__DOT__tree) 
                                               >> 1U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A60__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A61__02Eplru__DOT__tree) 
                                               >> 1U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A62__02Eplru__DOT__tree) 
                                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A63__02Eplru__DOT__tree) 
                                               >> 1U)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2243_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                              >> 3U)) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - 
                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                  >> 3U)) 
                                                >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2244_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                              >> 3U)) 
                           >> 5U))) & (((IData)(0x3fU) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                           >> 3U)) 
                                       >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2245_ 
        = (1U & ((((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                     >> 3U)) >> 5U) 
                 & (~ (3U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                >> 3U)) 
                             >> 4U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2246_ 
        = (1U & ((((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                     >> 3U)) >> 5U) 
                 & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                       >> 3U)) >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0062_ 
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
                                     >> 0x1eU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x1cU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x1aU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x18U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x16U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x14U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0x12U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                  >> 0x10U))))
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
                                     >> 0xeU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 0xcU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 0xaU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                                 >> 8U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 6U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                               >> 4U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U] 
                                     >> 2U) : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[1U]))))
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
                                     >> 0x1eU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x1cU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x1aU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x18U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x16U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x14U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0x12U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                  >> 0x10U))))
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
                                     >> 0xeU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 0xcU))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 0xaU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                                 >> 8U)))
                          : ((2U & ((IData)(0x3fU) 
                                    - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
                              ? ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 6U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                               >> 4U))
                              : ((1U & ((IData)(1U) 
                                        - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                           >> 0xdU)))
                                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U] 
                                     >> 2U) : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__cache_valids[0U]))))));
}

void Vsim::_settle__TOP__22(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__22\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_ 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_valid_way) 
            >> 1U) & ((VL_ULL(0x3fffffffffff) & (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[2U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[1U])) 
                                                    >> 0xeU))) 
                      == (VL_ULL(0x3fffffffffff) & 
                          (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U])) 
                                          >> 0x19U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1014_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1042_)
            ? 0U : ((((1U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1044_))
                       ? (1U | (2U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1044_)))
                       : 0U) << 1U) | (1U & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1044_) 
                                                 >> 2U)) 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1013_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1042_)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1044_) 
                     >> 2U) | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                >> 1U) | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1044_) 
                                          | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1043_) 
                                             >> 1U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
        = ((0x80000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0U])))
            : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[2U]))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___50_ 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__dmi_read_log_data)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__dmi_read_log_data_1));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__stopping) 
           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__do_step)));
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__s 
        = (((0U == (3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                          >> 0x10U))) << 2U) | (((1U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                      >> 0x10U))) 
                                                 << 1U) 
                                                | (2U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                       >> 0x10U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__b 
        = (2U | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                       >> 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__Vfuncout 
        = (1U & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__s)))
                  ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__b)
                  : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__b) 
                         >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__b) 
                                      >> 2U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___81_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____036104__54__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s 
        = (((0U == (7U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                          >> 7U))) << 4U) | (((4U == 
                                               (7U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                   >> 7U))) 
                                              << 3U) 
                                             | (((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                      >> 7U))) 
                                                 << 2U) 
                                                | (((2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                         >> 7U))) 
                                                    << 1U) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                          >> 7U)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__Vfuncout 
        = ((0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
            ? ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                    ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 4U))
                    : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 8U)))
                : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                    ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 4U))
                    : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 0U))))
            : ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                    ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 4U))
                    : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 8U)))
                : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                    ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 4U))
                    : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                        ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                            ? 1U : 2U) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__s))
                                           ? 1U : 0U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___63_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035906__51__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__s 
        = (((0U == (3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                          >> 0x10U))) << 2U) | (((1U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                      >> 0x10U))) 
                                                 << 1U) 
                                                | (2U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                       >> 0x10U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__b 
        = (2U | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                       >> 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__Vfuncout 
        = (1U & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__s)))
                  ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__b)
                  : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__b) 
                         >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__b) 
                                      >> 2U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___67_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035956__52__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035986__53__s 
        = (2U == (3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                        >> 0x10U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035986__53__b 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                 >> 0xcU));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035986__53__Vfuncout 
        = ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035986__53__s) 
           & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035986__53__b));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___73_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035986__53__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__use_previous 
        = (1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                  >> 7U) & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                             >> 4U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[2U] 
                                       >> 2U))));
}

void Vsim::_settle__TOP__23(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__23\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp121[3];
    WData/*95:0*/ __Vtemp143[3];
    WData/*95:0*/ __Vtemp167[3];
    WData/*95:0*/ __Vtemp189[3];
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s 
        = (((0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                           << 2U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                     >> 0x1eU)))) << 3U) 
           | (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                              << 2U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                        >> 0x1eU)))) 
               << 2U) | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                         << 2U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                   >> 0x1eU)))) 
                          << 1U) | (1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                                  << 2U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                    >> 0x1eU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
        = (0x81U | ((0x1f8000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                  << 0xdU)) | ((0x4000U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                   << 7U)) 
                                               | ((0x1f00U 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                       << 0x16U) 
                                                      | (0x3fff00U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                            >> 0xaU)))) 
                                                  | (0x3eU 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                         << 0xaU) 
                                                        | (0x3feU 
                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                                                              >> 0x16U))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__Vfuncout 
        = (0x7fU & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                     ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                         ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                    >> 7U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                                   >> 0xeU)))
                         : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                    >> 7U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                                   >> 0x15U))))
                     : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                         ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                    >> 7U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                                   >> 0xeU)))
                         : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b 
                                    >> 7U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__b
                                                : 0U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___54_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT____035873__50__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___75_ 
        = (1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                  >> 0x12U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
                               >> 2U)));
    __Vtemp121[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U])));
    __Vtemp121[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x56U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x53U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x50U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4eU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4bU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x48U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x45U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x43U])));
    __Vtemp121[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x58U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x57U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x55U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x54U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x52U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x51U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4fU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4dU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4cU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x4aU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x49U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x47U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x46U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x44U])));
    __Vtemp143[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU])));
    __Vtemp143[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x40U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3dU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3aU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x38U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x35U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x32U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2fU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2dU])));
    __Vtemp143[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x42U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x41U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3fU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3eU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3cU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x3bU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x39U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x37U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x36U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x34U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x33U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x31U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x30U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2eU])));
    __Vtemp167[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U])));
    __Vtemp167[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2aU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x27U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x24U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x22U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1fU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1cU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x19U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x17U])));
    __Vtemp167[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2cU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x2bU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x29U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x28U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x26U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x25U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x23U]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x21U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x20U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1eU] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1dU] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1bU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x1aU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x18U])));
    __Vtemp189[0U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0U])));
    __Vtemp189[1U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x14U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x11U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xeU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xcU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[9U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[6U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[3U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[1U])));
    __Vtemp189[2U] = ((4U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                       ? ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x16U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x15U] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x13U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x12U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0x10U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xfU] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xdU]))
                       : ((2U & ((IData)(0x3fU) - (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      >> 0xeU))))
                           ? ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xbU] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[0xaU] 
                                             >> 8U))
                               : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[8U] 
                                   << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[7U] 
                                                >> 0x10U)))
                           : ((1U & ((IData)(1U) - 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                      >> 0xeU))) ? 
                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[5U] 
                                << 8U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[4U] 
                                          >> 0x18U))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__cache_tags[2U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0171_[0U] 
        = ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                        << 0x12U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                        >> 0xeU))))
            ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                         << 0x12U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                ? __Vtemp121[0U] : __Vtemp143[0U]) : 
           ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
             ? __Vtemp167[0U] : __Vtemp189[0U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0171_[1U] 
        = ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                        << 0x12U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                        >> 0xeU))))
            ? ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                         << 0x12U) 
                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                           >> 0xeU))))
                ? __Vtemp121[1U] : __Vtemp143[1U]) : 
           ((8U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                      << 0x12U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                   >> 0xeU))))
             ? __Vtemp167[1U] : __Vtemp189[1U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0171_[2U] 
        = (0xffffffU & ((0x10U & ((IData)(0x3fU) - 
                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                    << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                 >> 0xeU))))
                         ? ((8U & ((IData)(0x3fU) - 
                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                     << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                             ? __Vtemp121[2U] : __Vtemp143[2U])
                         : ((8U & ((IData)(0x3fU) - 
                                   ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
                                     << 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                  >> 0xeU))))
                             ? __Vtemp167[2U] : __Vtemp189[2U])));
}
