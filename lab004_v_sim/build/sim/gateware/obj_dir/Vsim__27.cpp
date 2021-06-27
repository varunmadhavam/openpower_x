// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__257(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__257\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->sim__DOT__interface1_converted_interface_sel = 0U;
    if (vlTOPp->sim__DOT__converter1_state) {
        if (vlTOPp->sim__DOT__converter1_counter) {
            if (vlTOPp->sim__DOT__converter1_counter) {
                vlTOPp->sim__DOT__interface1_converted_interface_sel 
                    = (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                << 0x18U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                             >> 8U)));
            }
        } else {
            vlTOPp->sim__DOT__interface1_converted_interface_sel 
                = (0xfU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                            << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                         >> 4U)));
        }
    }
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1230_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A0__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A0__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A1__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A1__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A10__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A10__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A11__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A11__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A12__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A12__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A13__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A13__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A14__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A14__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A15__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A15__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A16__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A16__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A17__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A17__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A18__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A18__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A19__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A19__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A2__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A2__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A20__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A20__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A21__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A21__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A22__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A22__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A23__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A23__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A24__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A24__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A25__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A25__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A26__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A26__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A27__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A27__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A28__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A28__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A29__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A29__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A3__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A3__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A30__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A30__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A31__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A31__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A32__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A32__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A33__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A33__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A34__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A34__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A35__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A35__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A36__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A36__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A37__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A37__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A38__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A38__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A39__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A39__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A4__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A4__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A40__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A40__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A41__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A41__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A42__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A42__02Eplru__DOT__tree)));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__258(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__258\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A43__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A43__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A44__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A44__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A45__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A45__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A46__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A46__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A47__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A47__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A48__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A48__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A49__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A49__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A5__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A5__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A50__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A50__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A51__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A51__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A52__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A52__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A53__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A53__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A54__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A54__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A55__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A55__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A56__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A56__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A57__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A57__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A58__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A58__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A59__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A59__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A6__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A6__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A60__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A60__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A61__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A61__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A62__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A62__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A63__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A63__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A7__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A7__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A8__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A8__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A9__02Eplru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_plrus__02Eplrus__03A9__02Eplru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A0__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A0__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A1__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A1__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A10__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A10__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A11__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A11__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A12__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A12__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A13__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A13__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A14__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A14__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A15__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A15__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A16__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A16__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A17__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A17__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A18__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A18__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A19__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A19__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A2__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A2__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A20__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A20__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A21__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A21__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A22__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A22__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A23__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A23__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A24__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A24__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A25__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A25__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A26__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A26__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A27__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A27__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A28__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A28__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A29__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A29__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A3__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A3__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A30__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A30__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A31__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A31__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A32__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A32__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A33__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A33__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A34__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A34__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A35__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A35__02Etlb_plru__DOT__tree)));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__259(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__259\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3499[3];
    WData/*95:0*/ __Vtemp3500[3];
    WData/*95:0*/ __Vtemp3501[3];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A36__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A36__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A37__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A37__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A38__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A38__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A39__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A39__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A4__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A4__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A40__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A40__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A41__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A41__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A42__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A42__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A43__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A43__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A44__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A44__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A45__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A45__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A46__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A46__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A47__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A47__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A48__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A48__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A49__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A49__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A5__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A5__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A50__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A50__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A51__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A51__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A52__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A52__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A53__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A53__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A54__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A54__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A55__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A55__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A56__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A56__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A57__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A57__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A58__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A58__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A59__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A59__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A6__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A6__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A60__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A60__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A61__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A61__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A62__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A62__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A63__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A63__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A7__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A7__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A8__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A8__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A9__02Etlb_plru__DOT___2_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A9__02Etlb_plru__DOT__tree)));
    vlTOPp->sim__DOT__uart_rx_clear = 0U;
    if (((IData)(vlTOPp->sim__DOT__uart_pending_re) 
         & ((IData)(vlTOPp->sim__DOT__uart_pending_r) 
            >> 1U))) {
        vlTOPp->sim__DOT__uart_rx_clear = 1U;
    }
    vlTOPp->sim__DOT__timer_value = vlTOPp->__Vdly__sim__DOT__timer_value;
    vlTOPp->sim__DOT__microwatt_ibus_dat_r = (((QData)((IData)(vlTOPp->sim__DOT__shared_dat_r)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlTOPp->sim__DOT__converter0_dat_r 
                                                                 >> 0x20U))));
    vlTOPp->sim__DOT__microwatt_dbus_dat_r = (((QData)((IData)(vlTOPp->sim__DOT__shared_dat_r)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlTOPp->sim__DOT__converter1_dat_r 
                                                                 >> 0x20U))));
    VL_EXTEND_WQ(65,64, __Vtemp3499, vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__result);
    VL_NEGATE_W(3, __Vtemp3500, __Vtemp3499);
    VL_EXTEND_WQ(65,64, __Vtemp3501, vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__result);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[0U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__neg_result)
            ? __Vtemp3500[0U] : __Vtemp3501[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[1U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__neg_result)
            ? __Vtemp3500[1U] : __Vtemp3501[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[2U] 
        = (1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__neg_result)
                  ? __Vtemp3500[2U] : __Vtemp3501[2U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___291_ 
        = (0xffffU & ((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                         << 7U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                   >> 0x19U)) & (~ 
                                                 (0x1fU 
                                                  | ((VL_LTS_III(1,32,32, 0xfU, 
                                                                 (0x1fU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                        >> 0x11U)))) 
                                                      << 0xfU) 
                                                     | ((VL_LTS_III(1,32,32, 0xeU, 
                                                                    (0x1fU 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                         << 0xfU) 
                                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                           >> 0x11U)))) 
                                                         << 0xeU) 
                                                        | ((VL_LTS_III(1,32,32, 0xdU, 
                                                                       (0x1fU 
                                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                            << 0xfU) 
                                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                              >> 0x11U)))) 
                                                            << 0xdU) 
                                                           | ((VL_LTS_III(1,32,32, 0xcU, 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                               << 0xfU) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                               << 0xcU) 
                                                              | ((VL_LTS_III(1,32,32, 0xbU, 
                                                                             (0x1fU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                  << 0xbU) 
                                                                 | ((VL_LTS_III(1,32,32, 0xaU, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                     << 0xaU) 
                                                                    | ((VL_LTS_III(1,32,32, 9U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                        << 9U) 
                                                                       | ((VL_LTS_III(1,32,32, 8U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                           << 8U) 
                                                                          | ((VL_LTS_III(1,32,32, 7U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                              << 7U) 
                                                                             | ((VL_LTS_III(1,32,32, 6U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                                << 6U) 
                                                                                | (VL_LTS_III(1,32,32, 5U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                                << 5U)))))))))))))) 
                      | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__addrsh) 
                         & (0x1fU | ((VL_LTS_III(1,32,32, 0xfU, 
                                                 (0x1fU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                      << 0xfU) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                        >> 0x11U)))) 
                                      << 0xfU) | ((
                                                   VL_LTS_III(1,32,32, 0xeU, 
                                                              (0x1fU 
                                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                   << 0xfU) 
                                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                     >> 0x11U)))) 
                                                   << 0xeU) 
                                                  | ((VL_LTS_III(1,32,32, 0xdU, 
                                                                 (0x1fU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                        >> 0x11U)))) 
                                                      << 0xdU) 
                                                     | ((VL_LTS_III(1,32,32, 0xcU, 
                                                                    (0x1fU 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                         << 0xfU) 
                                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                           >> 0x11U)))) 
                                                         << 0xcU) 
                                                        | ((VL_LTS_III(1,32,32, 0xbU, 
                                                                       (0x1fU 
                                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                            << 0xfU) 
                                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                              >> 0x11U)))) 
                                                            << 0xbU) 
                                                           | ((VL_LTS_III(1,32,32, 0xaU, 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                               << 0xfU) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                               << 0xaU) 
                                                              | ((VL_LTS_III(1,32,32, 9U, 
                                                                             (0x1fU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                  << 9U) 
                                                                 | ((VL_LTS_III(1,32,32, 8U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                     << 8U) 
                                                                    | ((VL_LTS_III(1,32,32, 7U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                        << 7U) 
                                                                       | ((VL_LTS_III(1,32,32, 6U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                           << 6U) 
                                                                          | (VL_LTS_III(1,32,32, 5U, 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0x11U)))) 
                                                                             << 5U)))))))))))))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__260(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__260\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0540_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache) 
           | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0537_) 
              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                 >> 0x10U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1271_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1266_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1272_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1266_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1273_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1267_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1274_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1267_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1275_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1268_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1276_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1268_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1277_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1269_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1278_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1269_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1685_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1680_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1686_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1680_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1687_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1681_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1688_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1681_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1689_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1682_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1690_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1682_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1691_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1683_) 
           & (~ (7U & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U))) 
                       >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1692_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1683_) 
                 & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0xdU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0x13U))) 
                    >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__replace_way 
        = ((0x20U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                        << 0x13U) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 0xdU))))
            ? ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU))))
                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2216_)
                : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2215_))
            : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0190_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__clear_rsrv 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0971_) 
           & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                 >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0980_ 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0971_) 
            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
               >> 1U)) ? (VL_ULL(1) | (VL_ULL(0x7fffffffffffffe) 
                                       & (((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U])) 
                                              << 0x14U) 
                                             | (VL_ULL(0xffffffffffffe) 
                                                & ((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U])) 
                                                   >> 0xcU))))))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__reservation);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0928_ 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0883_) 
            & ((0x20U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0x13U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0xdU))))
                ? ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                << 0x13U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                  >> 0xdU))))
                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2192_)
                    : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2191_))
                : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0167_))) 
           & ((VL_ULL(0xfffffffffff) & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3204_) 
              == (VL_ULL(0xfffffffffff) & (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U])) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U])) 
                                                 >> 0x13U))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0895_ 
        = ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0883_) 
             & ((0x20U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU))))
                 ? ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                 << 0x13U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU))))
                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2105_)
                     : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2104_))
                 : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0083_))) 
            & ((VL_ULL(0xfffffffffff) & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3204_) 
               == (VL_ULL(0xfffffffffff) & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[2U])) 
                                             << 0x34U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[1U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[0U])) 
                                                  >> 0xcU)))))) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_valid_way));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0911_ 
        = ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0883_) 
             & ((0x20U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU))))
                 ? ((0x10U & ((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                 << 0x13U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 0xdU))))
                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2147_)
                     : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2146_))
                 : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0125_))) 
            & ((VL_ULL(0xfffffffffff) & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3204_) 
               == (VL_ULL(0xfffffffffff) & (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[3U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[2U])) 
                                               >> 0xcU))))) 
           & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_valid_way) 
              >> 1U));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_) 
            | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_valid_way) 
               & ((VL_ULL(0x3fffffffffff) & (((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[0U])))) 
                  == (VL_ULL(0x3fffffffffff) & (((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U])) 
                                                 << 0x27U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U])) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U])) 
                                                      >> 0x19U))))))) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___50_ 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__dmi_read_log_data)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__dmi_read_log_data_1));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__stopping) 
           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__do_step)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2248_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2243_) 
           & (~ (7U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                          >> 3U)) >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2249_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2243_) 
                 & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                       >> 3U)) >> 3U)));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__261(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__261\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2250_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2244_) 
           & (~ (7U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                          >> 3U)) >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2251_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2244_) 
                 & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                       >> 3U)) >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2252_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2245_) 
           & (~ (7U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                          >> 3U)) >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2253_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2245_) 
                 & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                       >> 3U)) >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2254_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2246_) 
           & (~ (7U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                          >> 3U)) >> 3U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2255_ 
        = (7U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2246_) 
                 & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                       >> 3U)) >> 3U)));
    vlTOPp->sim__DOT__converter1_skip = 0U;
    if (vlTOPp->sim__DOT__converter1_state) {
        if ((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                    >> 3U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                              >> 2U)))) {
            vlTOPp->sim__DOT__converter1_skip = (0U 
                                                 == (IData)(vlTOPp->sim__DOT__interface1_converted_interface_sel));
        }
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0988_ 
        = (0xffU & ((0x100000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_)
                     : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0989_ 
        = (0xffU & ((0x200000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 8U)) : (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                   >> 8U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0990_ 
        = (0xffU & ((0x400000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 0x10U)) : (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                      >> 0x10U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0991_ 
        = (0xffU & ((0x800000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 0x18U)) : (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                      >> 0x18U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0992_ 
        = (0xffU & ((0x1000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 0x20U)) : (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                      >> 0x20U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0993_ 
        = (0xffU & ((0x2000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 0x28U)) : (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                      >> 0x28U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0994_ 
        = (0xffU & ((0x4000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 0x30U)) : (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                      >> 0x30U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0995_ 
        = (0xffU & ((0x8000000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0986_ 
                                >> 0x38U)) : (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
                                                      >> 0x38U))));
    vlTOPp->sim__DOT__uart_status_status = 0U;
    vlTOPp->sim__DOT__uart_status_status = ((2U & (IData)(vlTOPp->sim__DOT__uart_status_status)) 
                                            | (0x10U 
                                               != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0)));
    vlTOPp->sim__DOT__uart_status_status = ((1U & (IData)(vlTOPp->sim__DOT__uart_status_status)) 
                                            | ((IData)(vlTOPp->sim__DOT__uart_rx_fifo_readable) 
                                               << 1U));
    vlTOPp->sim__DOT__uart_rx_fifo_syncfifo_re = ((0U 
                                                   != (IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0)) 
                                                  & ((~ (IData)(vlTOPp->sim__DOT__uart_rx_fifo_readable)) 
                                                     | (IData)(vlTOPp->sim__DOT__uart_rx_clear)));
    vlTOPp->sim__DOT__int_rst = 0U;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__did_ovf 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_32bit)
            ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_signed)
                ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__ovf32) 
                   | ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[1U]) 
                      != (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[0U] 
                                >> 0x1fU)))) : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__ovf32))
            : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__overflow) 
               | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_signed) 
                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[2U] 
                     ^ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[1U] 
                        >> 0x1fU)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___300_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___281_)
            ? (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                << 0x3cU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U])) 
                                           >> 4U)))
            : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___279_)
                ? (VL_ULL(0xfffffffffffff000) & (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U])) 
                                                     << 0x1cU) 
                                                    | (VL_ULL(0xffffffffffff000) 
                                                       & ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U])) 
                                                          >> 4U)))))
                : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___282_)
                    ? (((QData)((IData)((0xfffffU & 
                                         ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                           << 0x17U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U] 
                                             >> 9U))))) 
                        << 0x24U) | ((QData)((IData)(
                                                     (((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[3U] 
                                                          << 0x17U) 
                                                         | (0x7fff00U 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                                               >> 9U))) 
                                                        & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___284_ 
                                                           << 8U)) 
                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___286_ 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___283_)))) 
                                     << 4U)) : ((VL_ULL(0xfffffffff80000) 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                     << 0x2aU) 
                                                    | (VL_ULL(0xfffffffffff80000) 
                                                       & ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU])) 
                                                          << 0xaU)))) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___291_) 
                                                                   << 3U)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1280_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1271_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1281_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1271_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1282_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1272_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1283_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1272_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1284_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1273_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1285_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1273_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1286_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1274_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1287_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1274_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1288_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1275_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1289_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1275_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1290_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1276_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1291_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1276_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1292_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1277_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__262(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__262\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1293_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1277_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1294_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1278_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1295_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1278_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1694_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1685_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1695_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1685_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1696_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1686_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1697_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1686_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1698_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1687_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1699_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1687_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1700_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1688_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1701_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1688_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1702_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1689_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1703_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1689_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1704_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1690_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1705_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1690_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1706_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1691_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1707_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1691_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1708_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1692_) 
           & (~ (0xfU & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U))) 
                         >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1709_ 
        = (0xfU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1692_) 
                   & (((IData)(0x3fU) - ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                            >> 0x13U))) 
                      >> 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A0__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0xdU) | 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                         >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A0__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A1__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (1U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0xdU) | 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                         >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A1__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A10__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0xaU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A10__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A11__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0xbU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A11__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A12__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0xcU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A12__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A13__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0xdU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A13__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A14__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0xeU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A14__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A15__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0xfU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                           << 0xdU) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                             >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A15__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A16__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x10U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A16__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A17__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x11U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A17__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A18__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x12U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A18__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A19__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x13U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A19__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A2__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (2U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0xdU) | 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                         >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A2__02Etlb_plru__DOT__tree) 
                        >> 1U))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__263(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__263\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A20__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x14U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A20__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A21__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x15U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A21__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A22__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x16U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A22__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A23__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x17U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A23__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A24__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x18U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A24__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A25__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x19U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A25__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A26__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x1aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A26__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A27__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x1bU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A27__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A28__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x1cU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A28__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A29__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x1dU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A29__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A3__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (3U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0xdU) | 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                         >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A3__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A30__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x1eU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A30__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A31__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x1fU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A31__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A32__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x20U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A32__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A33__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x21U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A33__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A34__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x22U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A34__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A35__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x23U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A35__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A36__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x24U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A36__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A37__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x25U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A37__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A38__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x26U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A38__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A39__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x27U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A39__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A4__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (4U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                         << 0xdU) | 
                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                         >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A4__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A40__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x28U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A40__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A41__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x29U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A41__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A42__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x2aU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A42__02Etlb_plru__DOT__tree) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A43__02Etlb_plru__DOT___3_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache)) 
                 & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                     & (0x2bU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                            << 0xdU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                              >> 0x13U)))))
                     ? (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_))
                     : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__maybe_tlb_plrus__02Etlb_plrus__03A43__02Etlb_plru__DOT__tree) 
                        >> 1U))));
}
