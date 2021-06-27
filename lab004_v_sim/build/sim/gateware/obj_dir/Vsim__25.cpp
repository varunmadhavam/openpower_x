// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__235(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__235\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__uart_rx_fifo_level0 = vlTOPp->__Vdly__sim__DOT__uart_rx_fifo_level0;
    vlTOPp->sim__DOT__bus_errors = vlTOPp->__Vdly__sim__DOT__bus_errors;
    vlTOPp->sim__DOT__interface0_ram_bus_ack = vlTOPp->__Vdly__sim__DOT__interface0_ram_bus_ack;
    vlTOPp->sim__DOT__interface1_ram_bus_ack = vlTOPp->__Vdly__sim__DOT__interface1_ram_bus_ack;
    vlTOPp->sim__DOT__ram_bus_ack = vlTOPp->__Vdly__sim__DOT__ram_bus_ack;
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031952__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031952[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031952__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031952__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031949__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031949[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031949__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031949__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_2__v0) {
        vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v0))) 
                & vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v0]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_2__v0) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v0)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_2__v1) {
        vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v1))) 
                & vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v1]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_2__v1) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v1)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_2__v2) {
        vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v2))) 
                & vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v2]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_2__v2) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v2)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_2__v3) {
        vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v3))) 
                & vlTOPp->sim__DOT__mem_2[vlTOPp->__Vdlyvdim0__sim__DOT__mem_2__v3]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_2__v3) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_2__v3)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_1__v0) {
        vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v0))) 
                & vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v0]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_1__v0) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v0)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_1__v1) {
        vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v1))) 
                & vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v1]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_1__v1) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v1)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_1__v2) {
        vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v2))) 
                & vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v2]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_1__v2) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v2)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__mem_1__v3) {
        vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v3))) 
                & vlTOPp->sim__DOT__mem_1[vlTOPp->__Vdlyvdim0__sim__DOT__mem_1__v3]) 
               | ((IData)(vlTOPp->__Vdlyvval__sim__DOT__mem_1__v3) 
                  << (IData)(vlTOPp->__Vdlyvlsb__sim__DOT__mem_1__v3)));
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319771__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319771[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319771__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319771__v0;
    }
}

VL_INLINE_OPT void Vsim::_sequent__TOP__236(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__236\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319770__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319770[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319770__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319770__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319769__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319769[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319769__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319769__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319768__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319768[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319768__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319768__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319767__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319767[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319767__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319767__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319766__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319766[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319766__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319766__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319765__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319765[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319765__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319765__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319764__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319764[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319764__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A1__02Eway__DOT____0319764__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319771__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319771[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319771__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319771__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319770__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319770[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319770__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319770__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319769__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319769[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319769__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319769__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319768__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319768[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319768__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319768__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319767__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319767[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319767__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319767__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319766__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319766[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319766__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319766__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319765__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319765[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319765__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319765__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319764__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319764[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319764__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__rams__03A0__02Eway__DOT____0319764__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316493__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316493[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316493__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316493__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316492__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316492[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316492__v0] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316492__v0;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][0U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[0U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][1U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[1U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][2U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[2U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][3U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[3U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][4U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[4U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][5U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[5U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][6U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[6U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0][7U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT____0319645__v0[7U];
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___22_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT__dbg_data;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___74_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__gspr_index;
    vlTOPp->sim__DOT__uart_rx_fifo_fifo_out_last = 
        (1U & ((IData)(vlTOPp->sim__DOT__memdat_4) 
               >> 9U));
    vlTOPp->sim__DOT__uart_rx_fifo_fifo_out_first = 
        (1U & ((IData)(vlTOPp->sim__DOT__memdat_4) 
               >> 8U));
    vlTOPp->sim__DOT__uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlTOPp->sim__DOT__memdat_4));
    vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_last = 
        (1U & ((IData)(vlTOPp->sim__DOT__memdat_2) 
               >> 9U));
    vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_first = 
        (1U & ((IData)(vlTOPp->sim__DOT__memdat_2) 
               >> 8U));
    vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlTOPp->sim__DOT__memdat_2));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__maybe_log__02Elog_dmi_reading 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__do_dmi_log_rd;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT___04_ 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[4U] 
                 | ((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[3U])) 
                      << 0x20U) | (QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__dend[2U]))) 
                    >= vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__div)));
    vlTOPp->sim__DOT__uart_rx_fifo_wrport_adr = vlTOPp->sim__DOT__uart_rx_fifo_produce;
    vlTOPp->sim__DOT__uart_tx_fifo_wrport_adr = vlTOPp->sim__DOT__uart_tx_fifo_produce;
    vlTOPp->sim__DOT__uart_tx_clear = 0U;
    if (((IData)(vlTOPp->sim__DOT__uart_pending_re) 
         & (IData)(vlTOPp->sim__DOT__uart_pending_r))) {
        vlTOPp->sim__DOT__uart_tx_clear = 1U;
    }
    vlTOPp->sim__DOT__uart_tx_trigger_d = (0x10U != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0));
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__uart_tx_trigger_d = 0U;
    }
    vlTOPp->sim__DOT__uart_pending_status = 0U;
    vlTOPp->sim__DOT__uart_pending_status = ((2U & (IData)(vlTOPp->sim__DOT__uart_pending_status)) 
                                             | (IData)(vlTOPp->sim__DOT__uart_tx_pending));
    vlTOPp->sim__DOT__uart_pending_status = ((1U & (IData)(vlTOPp->sim__DOT__uart_pending_status)) 
                                             | ((IData)(vlTOPp->sim__DOT__uart_rx_pending) 
                                                << 1U));
    vlTOPp->sim__DOT__uart_rx_trigger_d = vlTOPp->sim__DOT__uart_rx_fifo_readable;
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__uart_rx_trigger_d = 0U;
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___03_ 
        = (1U & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                  >> 2U) & (~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                               >> 3U))));
    vlTOPp->sim__DOT__multiregimpl1_regs1 = vlTOPp->sim__DOT__multiregimpl1_regs0;
    vlTOPp->sim__DOT__multiregimpl0_regs1 = vlTOPp->sim__DOT__multiregimpl0_regs0;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__237(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__237\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank2_out0_re) {
        vlTOPp->sim__DOT__leds_storage = (1U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__leds_storage = 0U;
    }
    vlTOPp->serial_sink_ready = (0x10U != (IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0));
    vlTOPp->sim__DOT__uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0));
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_re) {
        vlTOPp->sim__DOT__uart_enable_storage = (3U 
                                                 & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__uart_enable_storage = 0U;
    }
    if (vlTOPp->sim__DOT__uart_tx_fifo_syncfifo_re) {
        vlTOPp->sim__DOT__uart_tx_fifo_readable = 1U;
    } else {
        if (vlTOPp->serial_source_ready) {
            vlTOPp->sim__DOT__uart_tx_fifo_readable = 0U;
        }
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__uart_tx_fifo_readable = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank1_scratch0_re) {
        vlTOPp->sim__DOT__scratch_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__scratch_storage = 0x12345678U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank1_reset0_re) {
        vlTOPp->sim__DOT__reset_storage = (3U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__reset_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_enable0_re) {
        vlTOPp->sim__DOT__r_enable_storage = (1U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__r_enable_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_width0_re) {
        vlTOPp->sim__DOT__r_width_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__r_width_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_period0_re) {
        vlTOPp->sim__DOT__r_period_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__r_period_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_enable0_re) {
        vlTOPp->sim__DOT__g_enable_storage = (1U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__g_enable_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_width0_re) {
        vlTOPp->sim__DOT__g_width_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__g_width_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_re) {
        vlTOPp->sim__DOT__g_period_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__g_period_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_re) {
        vlTOPp->sim__DOT__b_enable_storage = (1U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__b_enable_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_re) {
        vlTOPp->sim__DOT__b_width_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__b_width_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_re) {
        vlTOPp->sim__DOT__b_period_storage = vlTOPp->sim__DOT__simsoc_dat_w;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__b_period_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_re) {
        vlTOPp->sim__DOT__timer_update_value_storage 
            = (1U & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_update_value_storage = 0U;
    }
    if (vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_re) {
        vlTOPp->sim__DOT__timer_enable_storage = (1U 
                                                  & vlTOPp->sim__DOT__simsoc_dat_w);
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_enable_storage = 0U;
    }
    if (vlTOPp->sim__DOT__timer_zero_clear) {
        vlTOPp->sim__DOT__timer_zero_pending = 0U;
    }
    if (((0U == vlTOPp->sim__DOT__timer_value) & (~ (IData)(vlTOPp->sim__DOT__timer_zero_trigger_d)))) {
        vlTOPp->sim__DOT__timer_zero_pending = 1U;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_zero_pending = 0U;
    }
    vlTOPp->__Vdly__sim__DOT__timer_value = ((IData)(vlTOPp->sim__DOT__timer_en_storage)
                                              ? ((0U 
                                                  == vlTOPp->sim__DOT__timer_value)
                                                  ? vlTOPp->sim__DOT__timer_reload_storage
                                                  : 
                                                 (vlTOPp->sim__DOT__timer_value 
                                                  - (IData)(1U)))
                                              : vlTOPp->sim__DOT__timer_load_storage);
    if (vlTOPp->sim__DOT__timer_update_value_re) {
        vlTOPp->sim__DOT__timer_value_status = vlTOPp->sim__DOT__timer_value;
    }
    if (vlTOPp->sim__DOT__int_rst) {
        vlTOPp->sim__DOT__timer_value_status = 0U;
        vlTOPp->__Vdly__sim__DOT__timer_value = 0U;
    }
    vlTOPp->sim__DOT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlTOPp->sim__DOT__csr_bankarray_sel_r) {
        vlTOPp->sim__DOT__csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlTOPp->sim__DOT__memadr_2))
                ? vlTOPp->sim__DOT__mem_3[vlTOPp->sim__DOT__memadr_2]
                : 0U);
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___12_ 
        = (((0x80000000U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                            << 0x1bU)) | ((0x40000000U 
                                           & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                              << 0x1aU)) 
                                          | ((0x20000000U 
                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                 << 0x19U)) 
                                             | ((0x10000000U 
                                                 & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                    << 0x18U)) 
                                                | ((0x8000000U 
                                                    & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                       << 0x17U)) 
                                                   | ((0x4000000U 
                                                       & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                          << 0x16U)) 
                                                      | ((0x2000000U 
                                                          & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                             << 0x15U)) 
                                                         | ((0x1000000U 
                                                             & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                << 0x14U)) 
                                                            | ((0x800000U 
                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                   << 0x13U)) 
                                                               | ((0x400000U 
                                                                   & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                      << 0x12U)) 
                                                                  | ((0x200000U 
                                                                      & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                         << 0x11U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                            << 0x10U)) 
                                                                        | ((0x80000U 
                                                                            & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                               << 0xfU)) 
                                                                           | ((0x40000U 
                                                                               & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 0xeU)) 
                                                                              | ((0x20000U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                >> 1U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int) 
                                                                                >> 2U))))))))))))))))))))))))))))))) 
           - (IData)(1U));
    vlTOPp->sim__DOT__simsoc_wishbone_ack = 0U;
    if (vlTOPp->sim__DOT__state) {
        vlTOPp->sim__DOT__simsoc_wishbone_ack = 1U;
    }
    vlTOPp->sim__DOT__done = (0U == vlTOPp->sim__DOT__count);
    vlTOPp->sim__DOT__error = 0U;
    if ((0U == vlTOPp->sim__DOT__count)) {
        vlTOPp->sim__DOT__error = 1U;
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0391_ 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)) 
                 | (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_full))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_full) 
           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1233_)));
    if ((1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_stall)))) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[0U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][0U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[1U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][1U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[2U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][2U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3202_[3U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][3U];
    }
    if ((1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_stall)))) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[0U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][0U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[1U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][1U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___3201_[2U] 
            = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486
            [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0398_][2U];
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_32bit 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT___47_;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_modulus 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT___46_;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__count 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT___44_;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__238(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__238\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___203_ 
        = (((5U > (0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                             << 0xfU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                         >> 0x11U)))) 
            | (0x10U < (0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                  << 0xfU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                              >> 0x11U))))) 
           | ((0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                         << 0xfU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                     >> 0x11U))) > 
              (0x3fU & ((IData)(0x13U) + ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                           << 0x15U) 
                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                             >> 0xbU))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___193_ 
        = (0x7fffffffU & (~ ((VL_LTS_III(1,32,32, 0x1eU, 
                                         (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                    << 0x15U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                      >> 0xbU)))) 
                              << 0x1eU) | ((VL_LTS_III(1,32,32, 0x1dU, 
                                                       (0x3fU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                            << 0x15U) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                              >> 0xbU)))) 
                                            << 0x1dU) 
                                           | ((VL_LTS_III(1,32,32, 0x1cU, 
                                                          (0x3fU 
                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                               << 0x15U) 
                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                 >> 0xbU)))) 
                                               << 0x1cU) 
                                              | ((VL_LTS_III(1,32,32, 0x1bU, 
                                                             (0x3fU 
                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                  << 0x15U) 
                                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                    >> 0xbU)))) 
                                                  << 0x1bU) 
                                                 | ((VL_LTS_III(1,32,32, 0x1aU, 
                                                                (0x3fU 
                                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                     << 0x15U) 
                                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                       >> 0xbU)))) 
                                                     << 0x1aU) 
                                                    | ((VL_LTS_III(1,32,32, 0x19U, 
                                                                   (0x3fU 
                                                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                        << 0x15U) 
                                                                       | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                          >> 0xbU)))) 
                                                        << 0x19U) 
                                                       | ((VL_LTS_III(1,32,32, 0x18U, 
                                                                      (0x3fU 
                                                                       & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                           << 0x15U) 
                                                                          | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                             >> 0xbU)))) 
                                                           << 0x18U) 
                                                          | ((VL_LTS_III(1,32,32, 0x17U, 
                                                                         (0x3fU 
                                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                              << 0x15U) 
                                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                              << 0x17U) 
                                                             | ((VL_LTS_III(1,32,32, 0x16U, 
                                                                            (0x3fU 
                                                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                 << 0x16U) 
                                                                | ((VL_LTS_III(1,32,32, 0x15U, 
                                                                               (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                    << 0x15U) 
                                                                   | ((VL_LTS_III(1,32,32, 0x14U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                       << 0x14U) 
                                                                      | ((VL_LTS_III(1,32,32, 0x13U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                          << 0x13U) 
                                                                         | ((VL_LTS_III(1,32,32, 0x12U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                             << 0x12U) 
                                                                            | ((VL_LTS_III(1,32,32, 0x11U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x11U) 
                                                                               | ((VL_LTS_III(1,32,32, 0x10U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x10U) 
                                                                                | ((VL_LTS_III(1,32,32, 0xfU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xfU) 
                                                                                | ((VL_LTS_III(1,32,32, 0xeU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xeU) 
                                                                                | ((VL_LTS_III(1,32,32, 0xdU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xdU) 
                                                                                | ((VL_LTS_III(1,32,32, 0xcU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xcU) 
                                                                                | ((VL_LTS_III(1,32,32, 0xbU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((VL_LTS_III(1,32,32, 0xaU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xaU) 
                                                                                | ((VL_LTS_III(1,32,32, 9U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 9U) 
                                                                                | ((VL_LTS_III(1,32,32, 8U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 8U) 
                                                                                | ((VL_LTS_III(1,32,32, 7U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 7U) 
                                                                                | ((VL_LTS_III(1,32,32, 6U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 6U) 
                                                                                | ((VL_LTS_III(1,32,32, 5U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 5U) 
                                                                                | ((VL_LTS_III(1,32,32, 4U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 4U) 
                                                                                | ((VL_LTS_III(1,32,32, 3U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 3U) 
                                                                                | ((VL_LTS_III(1,32,32, 2U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 2U) 
                                                                                | ((VL_LTS_III(1,32,32, 1U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 1U) 
                                                                                | VL_LTS_III(1,32,32, 0U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b 
        = (0x4aU | (0x100U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                  >> 1U)) << 8U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__Vfuncout 
        = (1U & (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s))) 
                        | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))) 
                       | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))) 
                      | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))) 
                     | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))) 
                    | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))) 
                   | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))) 
                  | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s))))
                  ? ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                      ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b)
                      : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                             >> 1U) : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                                        ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                                         ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                                          ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                                              ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                                  >> 6U)
                                                  : 
                                                 ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                                  >> 7U))))))))
                  : ((0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s)))
                      ? ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                         >> 8U) : ((0x200U == (0x200U 
                                               & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__s))) 
                                   & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__b) 
                                      >> 9U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___277_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312499__204__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__241(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__241\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__Vfuncout 
        = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s))) 
                  | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
                 | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
                | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
               | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
              | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
             | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
            | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))) 
           & ((1U != (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s))) 
              & ((2U != (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s))) 
                 & ((4U != (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s))) 
                    & (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__s)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___282_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312523__209__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__Vfuncout 
        = ((~ ((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s))) 
                     | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s)))) 
                    | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s)))) 
                   | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s)))) 
                  | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s)))) 
                 | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s)))) 
                | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s)))) 
               | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s))))) 
           & (0x100U == (0x100U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__s))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___279_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312509__206__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s 
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
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__Vfuncout 
        = (((((((((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s))) 
                  | (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
                 | (4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
                | (8U == (8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
               | (0x10U == (0x10U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
              | (0x20U == (0x20U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
             | (0x40U == (0x40U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
            | (0x80U == (0x80U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))) 
           & ((1U != (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s))) 
              & (2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__s)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___281_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0312518__208__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___283_ 
        = ((8U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U])
            ? 0U : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[5U] 
                     << 0x1bU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[4U] 
                                  >> 5U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__s 
        = (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                           << 0x11U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                        >> 0xfU)))) 
            << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                    << 0x11U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                 >> 0xfU)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__b 
        = (((QData)((IData)((0x7fffffffU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U]))) 
            << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0U] 
                                               >> 0x10U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__a 
        = (0x3ffffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                        << 0x10U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                     >> 0x10U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__Vfuncout 
        = (0x7fffffffU & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__s)))
                           ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__b)
                           : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__s)))
                               ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__b 
                                          >> 0x1fU))
                               : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__a)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___013_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311463__186__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0394_[0U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0394_[1U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0394_[2U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0394_[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[4U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0394_[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__maybe_log__02Elog_rd_ptr_latched 
        = (0x1ffU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__do_dmi_log_rd)
                      ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__log_dmi_addr 
                         >> 2U) : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xdU] 
                                    << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0xcU] 
                                              >> 0x1cU))));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__242(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__242\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp3458[4];
    WData/*127:0*/ __Vtemp3459[4];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___32_ 
        = ((0x80000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r)
            ? ((0U != (0xfU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r))
                ? 0U : ((0U != (0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                        >> 4U))) ? 1U
                         : ((0U != (0xfU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                            >> 8U)))
                             ? 2U : 3U))) : ((0U != 
                                              (0xfU 
                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                  >> 0xcU)))
                                              ? 3U : 
                                             ((0U != 
                                               (0xfU 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                   >> 8U)))
                                               ? 2U
                                               : ((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 0U))));
    __Vtemp3458[0U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[5U] 
                        << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[4U] 
                                     >> 4U));
    __Vtemp3458[1U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[6U] 
                        << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[5U] 
                                     >> 4U));
    __Vtemp3458[2U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[7U] 
                        << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[6U] 
                                     >> 4U));
    __Vtemp3458[3U] = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U] 
                        << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[7U] 
                                     >> 4U));
    VL_NEGATE_W(4, __Vtemp3459, __Vtemp3458);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[0U] 
        = ((0x20U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U])
            ? __Vtemp3459[0U] : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[5U] 
                                  << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[4U] 
                                               >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[1U] 
        = ((0x20U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U])
            ? __Vtemp3459[1U] : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[6U] 
                                  << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[5U] 
                                               >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[2U] 
        = ((0x20U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U])
            ? __Vtemp3459[2U] : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[7U] 
                                  << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[6U] 
                                               >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT___03_[3U] 
        = ((0x20U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U])
            ? __Vtemp3459[3U] : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[8U] 
                                  << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r[7U] 
                                               >> 4U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__m[0U] 
        = ((0xfffffffeU & (((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                             ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0138_)
                             : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0138_)) 
                           << 1U)) | ((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[8U]) 
                                      & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0175_)) 
                                         & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0184_)) 
                                            & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0186_) 
                                               & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0681_))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__m[1U] 
        = ((1U & (((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0138_)
                    : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0138_)) 
                  >> 0x1fU)) | (0xfffffffeU & (((0x4000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                                                 ? 0U
                                                 : (IData)(
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0138_ 
                                                            >> 0x20U))) 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__m[2U] 
        = ((1U & (((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                    ? 0U : (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0138_ 
                                    >> 0x20U))) >> 0x1fU)) 
           | (0xfffffffeU & (((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                               ? (IData)((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_)))
                               : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_)) 
                             << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__m[3U] 
        = ((1U & (((0x4000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                    ? (IData)((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_)))
                    : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_)) 
                  >> 0x1fU)) | (0xfffffffeU & (((0x4000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                                                 ? (IData)(
                                                           ((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_)) 
                                                            >> 0x20U))
                                                 : (IData)(
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_ 
                                                            >> 0x20U))) 
                                               << 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__m[4U] 
        = ((0xfffffffcU & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0134_) 
                            ^ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0135_)) 
                           << 2U)) | ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                             >> 0xdU)) 
                                      | (1U & (((0x4000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                                                 ? (IData)(
                                                           ((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_)) 
                                                            >> 0x20U))
                                                 : (IData)(
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0141_ 
                                                            >> 0x20U))) 
                                               >> 0x1fU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT__log_data[0U] 
        = ((0xffffff80U & ((IData)((((QData)((IData)(
                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[2U])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[1U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[0U])) 
                                                     >> 6U)))) 
                           << 7U)) | ((0x40U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[2U]) 
                                      | (0x3fU & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[0U])));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT__log_data[1U] 
        = ((0x7fU & ((IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[2U])) 
                               << 0x3aU) | (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[1U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[0U])) 
                                               >> 6U)))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[2U])) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[1U])) 
                                                                << 0x1aU) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[0U])) 
                                                                  >> 6U))) 
                                                           >> 0x20U)) 
                                                  << 7U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT__log_data[2U] 
        = (0x7fU & ((IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[2U])) 
                               << 0x3aU) | (((QData)((IData)(
                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[1U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___35_[0U])) 
                                               >> 6U))) 
                             >> 0x20U)) >> 0x19U));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__maybe_log__02Elog_wr_ptr 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___84_;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__log_data 
        = ((0x1000U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___36_) 
                       << 0xcU)) | ((0xf00U & ((IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___36_ 
                                                        >> 0x25U)) 
                                               << 8U)) 
                                    | (0xffU & (IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___36_ 
                                                        >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__log_data 
        = ((0x1f80U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                        << 0x17U) | (0x7fff80U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                  >> 9U)))) 
           | ((0x78U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[1U] 
                         << 0x1fU) | (0x7ffffff8U & 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U] 
                                       >> 1U)))) | 
              ((6U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                       << 0x13U) | (0x7fffeU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[3U] 
                                                >> 0xdU)))) 
               | (1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U]))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__log_data 
        = (((QData)((IData)((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[2U] 
                                   >> 2U)))) << 0x35U) 
           | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0419_)) 
               << 0x15U) | (QData)((IData)(((0x100000U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[2U] 
                                                << 0x14U)) 
                                            | ((0xe0000U 
                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U] 
                                                   << 0xcU)) 
                                               | ((0x18000U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                                      << 0xdU)) 
                                                  | ((0x4000U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[2U] 
                                                         << 0xdU)) 
                                                     | ((0x2000U 
                                                         & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1843_)) 
                                                            << 0xdU)) 
                                                        | ((0x1000U 
                                                            & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                                                               >> 9U)) 
                                                           | ((0xf00U 
                                                               & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1853_[0U] 
                                                                  << 5U)) 
                                                              | (((0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U])) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit)
                                                                       ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_hit_way)
                                                                       : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__replace_way)) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_miss) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__access_ok) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__ra_valid)))))))))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__log_data 
        = ((0x200U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___245_)) 
                      << 9U)) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___237_) 
                                  << 8U) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___236_) 
                                             << 7U) 
                                            | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___321_) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT___319_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_loadstore1[0U] 
                                                         << 4U)) 
                                                     | (0xfU 
                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[7U] 
                                                            << 1U) 
                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_0__DOT__r[6U] 
                                                              >> 0x1fU)))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__log_nia 
        = (((QData)((IData)((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[2U] 
                                   >> 4U)))) << 0x2aU) 
           | (VL_ULL(0x3ffffffffff) & (((QData)((IData)(
                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[2U])) 
                                        << 0x39U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U])) 
                                           >> 7U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__log_data 
        = ((0x6000U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U] 
                        << 0x1fU) | (0x7fffe000U & 
                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                      >> 1U)))) | (
                                                   (0x1800U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U] 
                                                       << 7U)) 
                                                   | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__exception_log) 
                                                       << 0xaU) 
                                                      | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__irq_valid_log) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[8U] 
                                                                << 8U)) 
                                                            | ((0x10U 
                                                                & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U] 
                                                                   << 2U)) 
                                                               | ((8U 
                                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[0U] 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                                                                         >> 0x1dU)) 
                                                                     | ((2U 
                                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[8U] 
                                                                            >> 1U)) 
                                                                        | (1U 
                                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                                                                              >> 0x1fU)))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__log_data 
        = ((0x3c0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                       << 0x1bU) | (0x7ffffc0U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                  >> 5U)))) 
           | ((0x20U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                        << 5U)) | ((0xfffffff0U & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[0U] 
                                                    << 3U) 
                                                   & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___17_) 
                                                      << 4U))) 
                                   | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___62_) 
                                       << 3U) | (7U 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[9U] 
                                                     << 5U) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[8U] 
                                                       >> 0x1bU)))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__log_data 
        = ((0xe0000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                        << 0xcU)) | ((0x18000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                                                  << 0xfU)) 
                                     | ((0x6000U & 
                                         (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                          << 0xbU)) 
                                        | ((0x1000U 
                                            & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1014_) 
                                               << 0xbU)) 
                                           | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1013_) 
                                               << 0xbU) 
                                              | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op) 
                                                  << 8U) 
                                                 | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_stall) 
                                                     << 7U) 
                                                    | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_) 
                                                        << 4U) 
                                                       | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__valid_ra) 
                                                           << 3U) 
                                                          | (3U 
                                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                                 << 4U) 
                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                                   >> 0x1cU))))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___24_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322497
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___23_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322496
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___22_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322495
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___21_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322494
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___20_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322493
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___19_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322492
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___18_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322491
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___17_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT____0322490
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___24_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322497
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___23_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322496
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___22_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322495
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___21_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322494
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___20_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322493
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___19_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322492
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___18_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322491
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___17_ 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT____0322490
        [vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__early_req_row];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___2217_ 
        = ((1U & ((IData)(1U) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1043_)))
            ? vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Eway__DOT___00_
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Eway__DOT___00_);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst;
    vlTOPp->serial_source_data = vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_payload_data;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__243(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__243\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__uart_tx_fifo_level0 = vlTOPp->__Vdly__sim__DOT__uart_tx_fifo_level0;
    vlTOPp->sim__DOT__timer_zero_clear = 0U;
    if (((IData)(vlTOPp->sim__DOT__timer_pending_re) 
         & (IData)(vlTOPp->sim__DOT__timer_pending_r))) {
        vlTOPp->sim__DOT__timer_zero_clear = 1U;
    }
    vlTOPp->sim__DOT__simsoc_wishbone_dat_r = 0U;
    if (vlTOPp->sim__DOT__state) {
        vlTOPp->sim__DOT__simsoc_wishbone_dat_r = (
                                                   ((((((vlTOPp->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                                                         | vlTOPp->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r) 
                                                        | vlTOPp->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r) 
                                                       | vlTOPp->sim__DOT__csr_bankarray_interface3_bank_bus_dat_r) 
                                                      | vlTOPp->sim__DOT__csr_bankarray_interface4_bank_bus_dat_r) 
                                                     | vlTOPp->sim__DOT__csr_bankarray_interface5_bank_bus_dat_r) 
                                                    | vlTOPp->sim__DOT__csr_bankarray_interface6_bank_bus_dat_r) 
                                                   | vlTOPp->sim__DOT__csr_bankarray_sram_bus_dat_r);
    }
    vlTOPp->sim__DOT__shared_ack = ((((IData)(vlTOPp->sim__DOT__ram_bus_ack) 
                                      | (IData)(vlTOPp->sim__DOT__interface0_ram_bus_ack)) 
                                     | (IData)(vlTOPp->sim__DOT__interface1_ram_bus_ack)) 
                                    | (IData)(vlTOPp->sim__DOT__simsoc_wishbone_ack));
    if ((0U == vlTOPp->sim__DOT__count)) {
        vlTOPp->sim__DOT__shared_ack = 1U;
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0][0U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0[0U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0][1U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0[1U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0][2U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0[2U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0][3U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316489__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0) {
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0][0U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0[0U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0][1U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0[1U];
        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486[vlTOPp->__Vdlyvdim0__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0][2U] 
            = vlTOPp->__Vdlyvval__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316486__v0[2U];
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___197_ 
        = (((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                   >> 3U)) != (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                     >> 2U))) | (0U 
                                                 != 
                                                 (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[2U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[1U] 
                                                      >> 3U)) 
                                                  & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___193_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___299_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___281_)
            ? VL_ULL(0) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___279_)
                            ? ((((((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xdU])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU])) 
                                                 << 0x12U) 
                                                | (VL_ULL(0x3fffffffff000) 
                                                   & ((QData)((IData)(
                                                                      vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU])) 
                                                      >> 0xeU)))) 
                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___292_ 
                                    << 0xcU)) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___294_ 
                                                 << 0xcU)) 
                               | (QData)((IData)((0xfffU 
                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xcU] 
                                                      << 0x12U) 
                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xbU] 
                                                        >> 0xeU))))))
                            : VL_ULL(0)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___286_ 
        = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___283_ 
            >> 8U) & ((VL_LTS_III(1,32,32, 0x17U, (0x3fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                       << 0x15U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                         >> 0xbU)))) 
                       << 0x17U) | ((VL_LTS_III(1,32,32, 0x16U, 
                                                (0x3fU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                     << 0x15U) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                       >> 0xbU)))) 
                                     << 0x16U) | ((
                                                   VL_LTS_III(1,32,32, 0x15U, 
                                                              (0x3fU 
                                                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                   << 0x15U) 
                                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                     >> 0xbU)))) 
                                                   << 0x15U) 
                                                  | ((VL_LTS_III(1,32,32, 0x14U, 
                                                                 (0x3fU 
                                                                  & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                      << 0x15U) 
                                                                     | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                        >> 0xbU)))) 
                                                      << 0x14U) 
                                                     | ((VL_LTS_III(1,32,32, 0x13U, 
                                                                    (0x3fU 
                                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                         << 0x15U) 
                                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                           >> 0xbU)))) 
                                                         << 0x13U) 
                                                        | ((VL_LTS_III(1,32,32, 0x12U, 
                                                                       (0x3fU 
                                                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                            << 0x15U) 
                                                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                              >> 0xbU)))) 
                                                            << 0x12U) 
                                                           | ((VL_LTS_III(1,32,32, 0x11U, 
                                                                          (0x3fU 
                                                                           & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                               << 0x15U) 
                                                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                               << 0x11U) 
                                                              | ((VL_LTS_III(1,32,32, 0x10U, 
                                                                             (0x3fU 
                                                                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                  << 0x10U) 
                                                                 | ((VL_LTS_III(1,32,32, 0xfU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                     << 0xfU) 
                                                                    | ((VL_LTS_III(1,32,32, 0xeU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                        << 0xeU) 
                                                                       | ((VL_LTS_III(1,32,32, 0xdU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                           << 0xdU) 
                                                                          | ((VL_LTS_III(1,32,32, 0xcU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                              << 0xcU) 
                                                                             | ((VL_LTS_III(1,32,32, 0xbU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU) 
                                                                                | ((VL_LTS_III(1,32,32, 0xaU, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xaU) 
                                                                                | ((VL_LTS_III(1,32,32, 9U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 9U) 
                                                                                | ((VL_LTS_III(1,32,32, 8U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 8U) 
                                                                                | ((VL_LTS_III(1,32,32, 7U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 7U) 
                                                                                | ((VL_LTS_III(1,32,32, 6U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 6U) 
                                                                                | ((VL_LTS_III(1,32,32, 5U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 5U) 
                                                                                | ((VL_LTS_III(1,32,32, 4U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 4U) 
                                                                                | ((VL_LTS_III(1,32,32, 3U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 3U) 
                                                                                | ((VL_LTS_III(1,32,32, 2U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 2U) 
                                                                                | ((VL_LTS_III(1,32,32, 1U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU)))) 
                                                                                << 1U) 
                                                                                | VL_LTS_III(1,32,32, 0U, 
                                                                                (0x3fU 
                                                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                                                >> 0xbU))))))))))))))))))))))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__s 
        = (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                           << 0x13U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                        >> 0xdU)))) 
            << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                      << 0x13U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                   >> 0xdU)))) 
                       << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[0xaU] 
                                               << 0x13U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__r[9U] 
                                                 >> 0xdU))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__b 
        = (((QData)((IData)((0x7ffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___013_ 
                                         >> 8U)))) 
            << 0x26U) | (((QData)((IData)((0x7ffffU 
                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___013_ 
                                              >> 4U)))) 
                          << 0x13U) | (QData)((IData)(
                                                      (0x7ffffU 
                                                       & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___013_)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__a 
        = (0x7ffffU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___013_ 
                       >> 0xcU));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__Vfuncout 
        = (0x7ffffU & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__s)))
                        ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__b)
                        : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__s)))
                            ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__b 
                                       >> 0x13U)) : 
                           ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__s)))
                             ? (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__b 
                                        >> 0x26U)) : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__a))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT___017_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT____0311476__187__Vfuncout;
}
