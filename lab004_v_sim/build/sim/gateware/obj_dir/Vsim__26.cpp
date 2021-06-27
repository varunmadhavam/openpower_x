// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__244(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__244\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp3479[5];
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__s 
        = (((2U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___32_)) 
            << 2U) | (((1U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___32_)) 
                       << 1U) | (0U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___32_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__b 
        = (0xfffU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__a 
        = (0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                   >> 0xcU));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__Vfuncout 
        = (0xfU & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__s)))
                    ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__b)
                    : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__s)))
                        ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__b) 
                           >> 4U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__s)))
                                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__b) 
                                         >> 8U) : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__a)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT____0322063__118__Vfuncout;
    __Vtemp3479[4U] = ((0xfffffffeU & (((0x10U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U])
                                         ? ((0U != 
                                             (VL_ULL(0x1ffffffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U])) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U])) 
                                                     << 1U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[0U])) 
                                                       >> 0x1fU))))) 
                                            & (~ (IData)(
                                                         (VL_ULL(0x1ffffffff) 
                                                          == 
                                                          (VL_ULL(0x1ffffffff) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U])) 
                                                               << 0x21U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U])) 
                                                                  << 1U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[0U])) 
                                                                    >> 0x1fU))))))))
                                         : ((0U != 
                                             ((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
                                                 << 1U) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U] 
                                                   >> 0x1fU)) 
                                               | ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
                                                   << 1U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
                                                     >> 0x1fU))) 
                                              | (1U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
                                                    >> 0x1fU)))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          == 
                                                          ((((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
                                                              << 1U) 
                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U] 
                                                                >> 0x1fU)) 
                                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
                                                                << 1U) 
                                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
                                                                  >> 0x1fU))) 
                                                           & (0xfffffffeU 
                                                              | (1U 
                                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
                                                                    >> 0x1fU))))))))) 
                                       << 1U)) | (1U 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
                                                     >> 0x1fU)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[0U] 
        = ((0xfffffffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[0U] 
                           << 1U)) | (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[4U] 
                                            >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[1U] 
        = ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U] 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[2U] 
        = ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[3U] 
        = ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x[4U] 
        = __Vtemp3479[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_stall 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_full) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[1U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[2U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[3U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
        = vlTOPp->__Vdly__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU];
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322497__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322497[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322497__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322497__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322496__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322496[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322496__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322496__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322495__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322495[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322495__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322495__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322494__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322494[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322494__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322494__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322493__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322493[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322493__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322493__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322492__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322492[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322492__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322492__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322491__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322491[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322491__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322491__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322490__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322490[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322490__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322490__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322497__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322497[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322497__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322497__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322496__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322496[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322496__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322496__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322495__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322495[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322495__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322495__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322494__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322494[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322494__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322494__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322493__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322493[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322493__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322493__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322492__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322492[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322492__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322492__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322491__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322491[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322491__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322491__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322490__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322490[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322490__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322490__v0;
    }
    vlTOPp->sim__DOT__uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0));
    if (vlTOPp->sim__DOT__uart_rx_fifo_syncfifo_re) {
        vlTOPp->sim__DOT__uart_rx_fifo_readable = 1U;
    } else {
        if (vlTOPp->sim__DOT__uart_rx_clear) {
            vlTOPp->sim__DOT__uart_rx_fifo_readable = 0U;
        }
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__uart_rx_fifo_readable = 0U;
    }
    vlTOPp->sim__DOT__multiregimpl1_regs0 = vlTOPp->user_btn0;
    vlTOPp->sim__DOT__multiregimpl0_regs0 = vlTOPp->user_sw0;
    vlTOPp->user_led0 = vlTOPp->sim__DOT__leds_storage;
    vlTOPp->serial_source_valid = vlTOPp->sim__DOT__uart_tx_fifo_readable;
    vlTOPp->sim__DOT__soc_rst = 0U;
    if (vlTOPp->sim__DOT__reset_re) {
        vlTOPp->sim__DOT__soc_rst = (1U & (IData)(vlTOPp->sim__DOT__reset_storage));
    }
    vlTOPp->sim__DOT__timer_zero_trigger_d = (0U == vlTOPp->sim__DOT__timer_value);
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_zero_trigger_d = 0U;
    }
    vlTOPp->sim__DOT__timer_update_value_re = vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_re;
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_update_value_re = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_re) {
        vlTOPp->sim__DOT__timer_en_storage = (1U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_en_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_re) {
        vlTOPp->sim__DOT__timer_reload_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_reload_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_re) {
        vlTOPp->sim__DOT__timer_load_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_load_storage = 0U;
    }
    vlTOPp->sim__DOT__shared_dat_r = ((((VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->sim__DOT__slave_sel_r)))) 
                                         & vlTOPp->sim__DOT__memdat) 
                                        | (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->sim__DOT__slave_sel_r) 
                                                                   >> 1U)))) 
                                           & vlTOPp->sim__DOT__mem_1
                                           [vlTOPp->sim__DOT__memadr])) 
                                       | (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->sim__DOT__slave_sel_r) 
                                                                  >> 2U)))) 
                                          & vlTOPp->sim__DOT__mem_2
                                          [vlTOPp->sim__DOT__memadr_1])) 
                                      | (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->sim__DOT__slave_sel_r) 
                                                                 >> 3U)))) 
                                         & vlTOPp->sim__DOT__simsoc_wishbone_dat_r));
    if ((0U == vlTOPp->sim__DOT__count)) {
        vlTOPp->sim__DOT__shared_dat_r = 0xffffffffU;
    }
    vlTOPp->sim__DOT__interface0_converted_interface_ack 
        = ((IData)(vlTOPp->sim__DOT__shared_ack) & 
           (~ (IData)(vlTOPp->sim__DOT__grant)));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__245(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__245\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__interface1_converted_interface_ack 
        = ((IData)(vlTOPp->sim__DOT__shared_ack) & (IData)(vlTOPp->sim__DOT__grant));
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___197_) 
           << 5U);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__Vfuncout 
        = (1U & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s))) 
                        | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))) 
                       | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))) 
                      | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))) 
                     | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))) 
                    | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))) 
                   | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))) 
                  | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s))))
                  ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b)
                      : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                             >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                                        ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                                         ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                                              ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                                  >> 7U))))))))
                  : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                         >> 8U) : ((0x200U == (0x200U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__b) 
                                      >> 9U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___275_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312481__202__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__s 
        = (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                           << 0x15U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                        >> 0xbU)))) 
            << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                      << 0x15U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                   >> 0xbU)))) 
                       << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                               << 0x15U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                 >> 0xbU))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__b 
        = (((QData)((IData)(((0xffff0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___017_ 
                                             << 0xeU)) 
                             | (0xffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___017_ 
                                           >> 1U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___017_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__a 
        = (0xffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___017_ 
                      >> 3U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__Vfuncout 
        = (0xffffU & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__s)))
                       ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__b)
                       : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__s)))
                           ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__b 
                                      >> 0x10U)) : 
                          ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__s)))
                            ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__b 
                                       >> 0x20U)) : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__a)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__addrsh 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311489__188__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1041_ 
        = (1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid)
                  ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                     >> 0x12U) : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1042_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0537_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid) 
           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
              >> 0xfU));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0538_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid) 
           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
              >> 0x11U));
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
}

VL_INLINE_OPT void Vsim::_sequent__TOP__246(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__246\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vsim::_sequent__TOP__247(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__247\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vsim::_sequent__TOP__248(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__248\n"); );
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0971_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid) 
           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
              >> 4U));
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

VL_INLINE_OPT void Vsim::_sequent__TOP__256(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__256\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3493[3];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0883_ 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid) 
            & (~ ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                   >> 0xfU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
                               >> 0x11U)))) & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1044_)));
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
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__log_dmi_addr 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___75_;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__do_dmi_log_rd 
        = ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dbg)) 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___50_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___44_ 
        = ((0x80000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r)
            ? ((1U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                ? 0U : ((2U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                         ? 1U : ((4U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                                  ? 2U : 3U))) : ((8U 
                                                   & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U] 
        = (IData)(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_icache)
                    ? VL_ULL(0) : (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1906_)) 
                                    << 2U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1905_)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[1U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1923_) 
                           << 2U)) | (IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_icache)
                                                ? VL_ULL(0)
                                                : (
                                                   ((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1906_)) 
                                                    << 2U) 
                                                   | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1905_)))) 
                                              >> 0x20U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[2U] 
        = ((3U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1923_) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1923_ 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
        = ((0xffffe000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1926_[0U] 
                           << 0xdU)) | ((0xfffffff0U 
                                         & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1925_) 
                                            << 4U)) 
                                        | ((0xfffffffcU 
                                            & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_icache)
                                                 ? 0U
                                                 : 
                                                (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1908_) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1907_))) 
                                               << 2U)) 
                                           | (3U & 
                                              ((IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1923_ 
                                                        >> 0x20U)) 
                                               >> 0x1eU)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[4U] 
        = ((0x1fffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1926_[0U] 
                       >> 0x13U)) | (0xffffe000U & 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1926_[1U] 
                                      << 0xdU)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
        = ((0xffe00000U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1934_) 
                           << 0x15U)) | ((0x1fffU & 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1926_[1U] 
                                           >> 0x13U)) 
                                         | (0xffffe000U 
                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1926_[2U] 
                                               << 0xdU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[0U] 
        = ((0xfffffffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[0U] 
                           << 1U)) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1849_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[1U] 
        = ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[1U] 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[2U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1850_) 
                           << 2U)) | ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[1U] 
                                             >> 0x1fU)) 
                                      | (0xfffffffeU 
                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1852_[2U] 
                                            << 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[4U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[5U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[5U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
        = ((0x80000000U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_ls1)
                             ? 0U : (7U & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___335_ 
                                                   >> 0x1bU)))) 
                           << 0x1fU)) | vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___033_[6U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
        = ((0xfffffffcU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[0U] 
                           << 2U)) | (0x7fffffffU & 
                                      (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_ls1)
                                         ? 0U : (7U 
                                                 & (IData)(
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___335_ 
                                                            >> 0x1bU)))) 
                                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[8U] 
        = ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[0U] 
                  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[1U] 
                                               << 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[9U] 
        = ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[1U] 
                  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[2U] 
                                               << 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0xaU] 
        = ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[2U] 
                  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[3U] 
                                               << 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0xbU] 
        = ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[3U] 
                  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[4U] 
                                               << 2U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[0xcU] 
        = ((3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[4U] 
                  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___035_[5U] 
                                               << 2U)));
    __Vtemp3493[0U] = ((0xffffffe0U & ((IData)(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)
                                                 ? VL_ULL(0)
                                                 : 
                                                ((0x80000000U 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                                  ? 
                                                 (VL_ULL(0xfffffffffffffffc) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[7U])) 
                                                         << 0x1eU) 
                                                        | (VL_ULL(0x3ffffffffffffffc) 
                                                           & ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[6U])) 
                                                              >> 2U)))))
                                                  : 
                                                 ((1U 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])
                                                   ? 
                                                  (VL_ULL(0xfffffffffffffffc) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[2U])) 
                                                       << 0x3fU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[1U])) 
                                                          << 0x1fU) 
                                                         | (VL_ULL(0x7ffffffffffffffc) 
                                                            & ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])) 
                                                               >> 1U)))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[0U])) 
                                                         >> 1U))))))) 
                                       << 5U)) | ((0x10U 
                                                   & (((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)) 
                                                       & ((~ 
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                                                            >> 0x1fU)) 
                                                          & ((~ 
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U]) 
                                                             & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[0U]))) 
                                                      << 4U)) 
                                                  | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_) 
                                                      << 3U) 
                                                     | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___06_) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)))))));
    __Vtemp3493[1U] = ((0x1fU & ((IData)(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)
                                           ? VL_ULL(0)
                                           : ((0x80000000U 
                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                               ? (VL_ULL(0xfffffffffffffffc) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[7U])) 
                                                         << 0x1eU) 
                                                        | (VL_ULL(0x3ffffffffffffffc) 
                                                           & ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[6U])) 
                                                              >> 2U)))))
                                               : ((1U 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])
                                                   ? 
                                                  (VL_ULL(0xfffffffffffffffc) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[2U])) 
                                                       << 0x3fU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[1U])) 
                                                          << 0x1fU) 
                                                         | (VL_ULL(0x7ffffffffffffffc) 
                                                            & ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])) 
                                                               >> 1U)))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[0U])) 
                                                         >> 1U))))))) 
                                 >> 0x1bU)) | (0xffffffe0U 
                                               & ((IData)(
                                                          (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)
                                                             ? VL_ULL(0)
                                                             : 
                                                            ((0x80000000U 
                                                              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                                              ? 
                                                             (VL_ULL(0xfffffffffffffffc) 
                                                              & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U])) 
                                                                  << 0x3eU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[7U])) 
                                                                     << 0x1eU) 
                                                                    | (VL_ULL(0x3ffffffffffffffc) 
                                                                       & ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[6U])) 
                                                                          >> 2U)))))
                                                              : 
                                                             ((1U 
                                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])
                                                               ? 
                                                              (VL_ULL(0xfffffffffffffffc) 
                                                               & (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[2U])) 
                                                                   << 0x3fU) 
                                                                  | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[1U])) 
                                                                      << 0x1fU) 
                                                                     | (VL_ULL(0x7ffffffffffffffc) 
                                                                        & ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])) 
                                                                           >> 1U)))))
                                                               : 
                                                              (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[2U])) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[1U])) 
                                                                   << 0x1fU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[0U])) 
                                                                     >> 1U)))))) 
                                                           >> 0x20U)) 
                                                  << 5U)));
    __Vtemp3493[2U] = (0x1fU & ((IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)
                                           ? VL_ULL(0)
                                           : ((0x80000000U 
                                               & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                               ? (VL_ULL(0xfffffffffffffffc) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[7U])) 
                                                         << 0x1eU) 
                                                        | (VL_ULL(0x3ffffffffffffffc) 
                                                           & ((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[6U])) 
                                                              >> 2U)))))
                                               : ((1U 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])
                                                   ? 
                                                  (VL_ULL(0xfffffffffffffffc) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[2U])) 
                                                       << 0x3fU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[1U])) 
                                                          << 0x1fU) 
                                                         | (VL_ULL(0x7ffffffffffffffc) 
                                                            & ((QData)((IData)(
                                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])) 
                                                               >> 1U)))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___25_[0U])) 
                                                         >> 1U)))))) 
                                         >> 0x20U)) 
                                >> 0x1bU));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
        = __Vtemp3493[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
        = __Vtemp3493[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[2U] 
        = __Vtemp3493[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0114_[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0114_[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0114_[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0114_[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0115_);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0115_ 
                   >> 0x20U));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[6U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0116_);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[7U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0116_ 
                   >> 0x20U));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[8U] 
        = ((0xfffffffeU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0118_) 
                           << 1U)) | ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_ex1)) 
                                      & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0913_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[9U] 
        = ((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0118_) 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0118_ 
                                                        >> 0x20U)) 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[0xaU] 
        = (1U & ((IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0118_ 
                          >> 0x20U)) >> 0x1fU));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___016_[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___016_[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___016_[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___016_[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___016_[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[4U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[5U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[5U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[6U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[6U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[7U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[7U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[8U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[9U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[0xaU];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___05_[0xbU];
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
    vlTOPp->sim__DOT__interface1_converted_interface_dat_w = 0U;
    if (vlTOPp->sim__DOT__converter1_counter) {
        if (vlTOPp->sim__DOT__converter1_counter) {
            vlTOPp->sim__DOT__interface1_converted_interface_dat_w 
                = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                    << 0x1eU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U] 
                                 >> 2U));
        }
    } else {
        vlTOPp->sim__DOT__interface1_converted_interface_dat_w 
            = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U] 
                << 0x1eU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                             >> 2U));
    }
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
    vlTOPp->sim__DOT__interface1_converted_interface_we = 0U;
    if (vlTOPp->sim__DOT__converter1_state) {
        if ((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                    >> 3U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                              >> 2U)))) {
            vlTOPp->sim__DOT__interface1_converted_interface_we 
                = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                         >> 0xcU));
        }
    }
    vlTOPp->sim__DOT__interface1_converted_interface_adr = 0U;
    if (vlTOPp->sim__DOT__converter1_state) {
        vlTOPp->sim__DOT__interface1_converted_interface_adr 
            = ((0x3ffffffeU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                                << 0x1cU) | (0xffffffeU 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                >> 4U)))) 
               | (IData)(vlTOPp->sim__DOT__converter1_counter));
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2243_ 
        = (1U & ((~ (1U & (((IData)(0x3fU) - (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                              >> 3U)) 
                           >> 5U))) & (~ (3U & (((IData)(0x3fU) 
                                                 - 
                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                  >> 3U)) 
                                                >> 4U)))));
}
