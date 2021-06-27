// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim::_sequent__TOP__367(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__367\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_width0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_width0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (8U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (8U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank4_in_re = 0U;
    if (((1U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank4_in_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank4_in_we = 0U;
    if (((1U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank4_in_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_value_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_value_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_value_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_value_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_status_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_status_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_status_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_status_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_pending_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_pending_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
}

VL_INLINE_OPT void Vsim::_sequent__TOP__368(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__368\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_pending_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_pending_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_we = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_re = 0U;
    if (((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__uart_rxtx_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__uart_rxtx_we = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__uart_rxtx_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__uart_rxtx_re = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_txfull_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_txfull_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_txfull_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_txfull_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxempty_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxempty_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxempty_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxempty_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_status_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_status_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_status_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_status_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_pending_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_pending_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_pending_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_pending_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_txempty_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_txempty_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_txempty_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_txempty_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxfull_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxfull_we 
            = (1U & (~ (IData)(vlTOPp->sim__DOT__simsoc_we)));
    }
    vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxfull_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlTOPp->sim__DOT__simsoc_adr))))) {
        vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxfull_re 
            = vlTOPp->sim__DOT__simsoc_we;
    }
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___094_ 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U])
            ? 0U : ((((0x1fU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                           << 3U) | 
                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                           >> 0x1dU))))
                       ? 0U : ((0x10U == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                    << 3U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                      >> 0x1dU))))
                                ? 0U : (0x3fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___085_) 
                                                 >> 6U)))) 
                     << 6U) | (0x3fU & ((0x1fU == (0x3fU 
                                                   & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                       << 3U) 
                                                      | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                         >> 0x1dU))))
                                         ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___041_)
                                         : ((0x10U 
                                             == (0x3fU 
                                                 & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                     << 3U) 
                                                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                       >> 0x1dU))))
                                             ? ((0x4000000U 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U])
                                                 ? 0U
                                                 : 0x21U)
                                             : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___085_))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___095_ 
        = ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[0U])
            ? VL_ULL(0xf6) : ((0x1fU == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                   << 3U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                     >> 0x1dU))))
                               ? (((QData)((IData)(
                                                   (1U 
                                                    & (((0x153U 
                                                         == 
                                                         (0x37fU 
                                                          & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                              << 0x1cU) 
                                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                                >> 4U)))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___041_) 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___110_ 
                                                                  >> 0x25U)))))) 
                                   << 0x25U) | ((VL_ULL(0x1ffffffffc) 
                                                 & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___110_) 
                                                | (QData)((IData)(
                                                                  (3U 
                                                                   & (((0x153U 
                                                                        == 
                                                                        (0x37fU 
                                                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[3U] 
                                                                             << 0x1cU) 
                                                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1[2U] 
                                                                               >> 4U)))) 
                                                                       & (~ 
                                                                          ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___041_) 
                                                                           >> 5U)))
                                                                       ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___052_)
                                                                       : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___110_)))))))
                               : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___089_));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__369(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__369\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1934_ 
        = (1U & ((~ (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_icache) 
                      | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_flush)) 
                     | vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_icache[0U])) 
                 & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                      & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__access_ok))) 
                     & (~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U])) 
                    | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[5U] 
                       >> 0x15U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1839_ 
        = (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
             & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__access_ok)) 
            & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_flush))) 
           & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_icache)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_stall_in 
        = (1U & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1843_)) 
                 | vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__s[0U]));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___065_ 
        = (0x3fU & ((0x80000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])
                     ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___064_)
                     : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___058_)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__s 
        = (((2U == (3U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot_count) 
                          >> 2U))) << 2U) | (((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot_count) 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot_count) 
                                                    >> 2U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[0U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[1U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[2U] 
        = (IData)(((VL_ULL(0xfffffffffffffff0) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                  << 4U)) 
                   | (QData)((IData)((0xfU & (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                      >> 0x3cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[3U] 
        = (IData)((((VL_ULL(0xfffffffffffffff0) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                   << 4U)) 
                    | (QData)((IData)((0xfU & (IData)(
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                       >> 0x3cU)))))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[4U] 
        = (IData)(((VL_ULL(0xffffffffffffff00) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                  << 8U)) 
                   | (QData)((IData)((0xffU & (IData)(
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                       >> 0x38U)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[5U] 
        = (IData)((((VL_ULL(0xffffffffffffff00) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                   << 8U)) 
                    | (QData)((IData)((0xffU & (IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                        >> 0x38U)))))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__a 
        = ((VL_ULL(0xfffffffffffff000) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                          << 0xcU)) 
           | (QData)((IData)((0xfffU & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1 
                                                >> 0x34U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__Vfuncout 
        = ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__s)))
            ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[0U])))
            : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__s)))
                ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[2U])))
                : ((4U == (4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__s)))
                    ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__b[4U])))
                    : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__a)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot2 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT____0320091__125__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0990_ 
        = (1U & ((8U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                  ? ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                      ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                         >> 0x1aU) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                      >> 0x19U)) : 
                 ((4U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                   ? ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                       ? ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                              >> 0x18U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                           >> 0x17U))
                       : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                              >> 0x16U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                           >> 0x15U)))
                   : ((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                       ? ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                              >> 0x14U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                           >> 0x13U))
                       : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0360_)
                           ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                              >> 0x12U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                           >> 0x11U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s 
        = (((0xaU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                << 0x1dU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                             >> 3U)))) 
            << 3U) | (((0x30U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                            << 0x1dU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                              >> 3U)))) 
                       << 2U) | (((0x2fU == (0x3fU 
                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                   >> 3U)))) 
                                  << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___099_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
        = (((((0xffU & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                >> 8U))) == (0xffU 
                                             & (IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                        >> 8U))))
              ? 0xffU : 0U) << 0x18U) | ((((0U == (3U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                      >> 0x12U)))
                                            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___049_)
                                            : 0U) << 8U) 
                                         | (0xffU & (IData)(
                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___094_ 
                                                             >> 8U)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__a 
        = (0xffU & ((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                            >> 0x12U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                         >> 0x11U)))
                     ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                >> 8U)) : VL_NEGATE_I((IData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___123_)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__Vfuncout 
        = (0xffU & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                     ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                         ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                         ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__b
                                                : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__a))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___128_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321904__121__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s 
        = (((0xaU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                << 0x1dU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                             >> 3U)))) 
            << 3U) | (((0x30U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                            << 0x1dU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                              >> 3U)))) 
                       << 2U) | (((0x2fU == (0x3fU 
                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                   >> 3U)))) 
                                  << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___099_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
        = (((QData)((IData)((((0xffU & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                >> 0x18U))) 
                              == (0xffU & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                   >> 0x18U))))
                              ? 0xffU : 0U))) << 0x38U) 
           | (((QData)((IData)((((((0xffU & (IData)(
                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                     >> 0x10U))) 
                                   == (0xffU & (IData)(
                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                        >> 0x10U))))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((0U == (3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                 >> 0x12U)))
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___051_)
                                    : 0U)))) << 0x18U) 
              | (QData)((IData)(((((0U == (3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                 >> 0x12U)))
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___050_)
                                    : 0U) << 0x10U) 
                                 | (0xffffU & (IData)(
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___094_ 
                                                       >> 0x10U))))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__a 
        = (0xffffU & ((0x40000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU])
                       ? (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                  >> 0x10U)) : VL_NEGATE_I((IData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___123_)))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__Vfuncout 
        = (0xffffU & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                       ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                           ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                               ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x10U)))
                               : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x20U))))
                           : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                               ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x10U)))
                               : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x30U)))))
                       : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                           ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                               ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x10U)))
                               : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x20U))))
                           : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                               ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)((vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b 
                                              >> 0x10U)))
                               : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__s))
                                   ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__b)
                                   : (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__a))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___129_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321909__122__Vfuncout;
}

VL_INLINE_OPT void Vsim::_sequent__TOP__370(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__370\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5203[3];
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s 
        = (((0xaU == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                << 0x1dU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                             >> 3U)))) 
            << 3U) | (((0x30U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                            << 0x1dU) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                              >> 3U)))) 
                       << 2U) | (((0x2fU == (0x3fU 
                                             & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                                                   >> 3U)))) 
                                  << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___099_))));
    __Vtemp5203[0U] = ((((0U == (3U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                       >> 0x12U))) ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___055_)
                          : 0U) << 0x18U) | ((((0U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                    >> 0x12U)))
                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___054_)
                                                : 0U) 
                                              << 0x10U) 
                                             | ((((0U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       >> 0x12U)))
                                                   ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___053_)
                                                   : 0U) 
                                                 << 8U) 
                                                | ((((0U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                          >> 0x12U)))
                                                      ? 0U
                                                      : 
                                                     (3U 
                                                      & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___067_) 
                                                         >> 4U))) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & ((0U 
                                                          == 
                                                          (3U 
                                                           & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                              >> 0x12U)))
                                                          ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___052_)
                                                          : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___067_)))))));
    __Vtemp5203[1U] = (IData)((((QData)((IData)((((
                                                   ((0xffU 
                                                     & (IData)(
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                >> 0x38U))) 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                >> 0x38U))))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | (((((0xffU 
                                                        & (IData)(
                                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                   >> 0x30U))) 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                   >> 0x30U))))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | (((((0xffU 
                                                           & (IData)(
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                      >> 0x28U))) 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                      >> 0x28U))))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | (((0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                       >> 0x20U))) 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                       >> 0x20U))))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((~ 
                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                               >> 0x13U)) 
                                                             & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT__par1))))));
    __Vtemp5203[2U] = (IData)(((((QData)((IData)(((
                                                   (((0xffU 
                                                      & (IData)(
                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                 >> 0x38U))) 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                 >> 0x38U))))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | (((((0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                    >> 0x30U))) 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                    >> 0x30U))))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | (((((0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                       >> 0x28U))) 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                       >> 0x28U))))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | (((0xffU 
                                                             & (IData)(
                                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                                        >> 0x20U))) 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in 
                                                                        >> 0x20U))))
                                                            ? 0xffU
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((~ 
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                                >> 0x13U)) 
                                                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT__par1))))) 
                               >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___094_ 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[1U] 
        = __Vtemp5203[0U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[2U] 
        = __Vtemp5203[1U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[3U] 
        = __Vtemp5203[2U];
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__a 
        = VL_NEGATE_I((IData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___123_)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
            ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[2U]))
                : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[3U])))
            : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[2U]))
                : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__a))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___130_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT____0321914__123__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___287_ 
        = ((((QData)((IData)(((VL_GTES_III(1,32,32, 0U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                               << 0x1fU) | ((VL_GTES_III(1,32,32, 1U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                             << 0x1eU) 
                                            | ((VL_GTES_III(1,32,32, 2U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                << 0x1dU) 
                                               | ((VL_GTES_III(1,32,32, 3U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                   << 0x1cU) 
                                                  | ((VL_GTES_III(1,32,32, 4U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                      << 0x1bU) 
                                                     | ((VL_GTES_III(1,32,32, 5U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                         << 0x1aU) 
                                                        | ((VL_GTES_III(1,32,32, 6U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                            << 0x19U) 
                                                           | ((VL_GTES_III(1,32,32, 7U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                               << 0x18U) 
                                                              | ((VL_GTES_III(1,32,32, 8U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                  << 0x17U) 
                                                                 | ((VL_GTES_III(1,32,32, 9U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                     << 0x16U) 
                                                                    | ((VL_GTES_III(1,32,32, 0xaU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                        << 0x15U) 
                                                                       | ((VL_GTES_III(1,32,32, 0xbU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                           << 0x14U) 
                                                                          | ((VL_GTES_III(1,32,32, 0xcU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                              << 0x13U) 
                                                                             | ((VL_GTES_III(1,32,32, 0xdU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xeU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xfU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x10U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x11U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x12U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x13U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x14U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x15U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x16U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x17U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x18U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x19U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x1fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb))))))))))))))))))))))))))))))))))) 
             << 0x20U) | (QData)((IData)(((VL_GTES_III(1,32,32, 0x20U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                           << 0x1fU) 
                                          | ((VL_GTES_III(1,32,32, 0x21U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                              << 0x1eU) 
                                             | ((VL_GTES_III(1,32,32, 0x22U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                 << 0x1dU) 
                                                | ((VL_GTES_III(1,32,32, 0x23U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                    << 0x1cU) 
                                                   | ((VL_GTES_III(1,32,32, 0x24U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                       << 0x1bU) 
                                                      | ((VL_GTES_III(1,32,32, 0x25U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                          << 0x1aU) 
                                                         | ((VL_GTES_III(1,32,32, 0x26U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                             << 0x19U) 
                                                            | ((VL_GTES_III(1,32,32, 0x27U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                << 0x18U) 
                                                               | ((VL_GTES_III(1,32,32, 0x28U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                   << 0x17U) 
                                                                  | ((VL_GTES_III(1,32,32, 0x29U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                      << 0x16U) 
                                                                     | ((VL_GTES_III(1,32,32, 0x2aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                         << 0x15U) 
                                                                        | ((VL_GTES_III(1,32,32, 0x2bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                            << 0x14U) 
                                                                           | ((VL_GTES_III(1,32,32, 0x2cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                               << 0x13U) 
                                                                              | ((VL_GTES_III(1,32,32, 0x2dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x30U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x31U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x32U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x33U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x34U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x35U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x36U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x37U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x38U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x39U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x3fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)))))))))))))))))))))))))))))))))))) 
           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml);
}

VL_INLINE_OPT void Vsim::_sequent__TOP__371(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__371\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___289_ 
        = ((((QData)((IData)(((VL_GTES_III(1,32,32, 0U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                               << 0x1fU) | ((VL_GTES_III(1,32,32, 1U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                             << 0x1eU) 
                                            | ((VL_GTES_III(1,32,32, 2U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                << 0x1dU) 
                                               | ((VL_GTES_III(1,32,32, 3U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                   << 0x1cU) 
                                                  | ((VL_GTES_III(1,32,32, 4U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                      << 0x1bU) 
                                                     | ((VL_GTES_III(1,32,32, 5U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                         << 0x1aU) 
                                                        | ((VL_GTES_III(1,32,32, 6U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                            << 0x19U) 
                                                           | ((VL_GTES_III(1,32,32, 7U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                               << 0x18U) 
                                                              | ((VL_GTES_III(1,32,32, 8U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                  << 0x17U) 
                                                                 | ((VL_GTES_III(1,32,32, 9U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                     << 0x16U) 
                                                                    | ((VL_GTES_III(1,32,32, 0xaU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                        << 0x15U) 
                                                                       | ((VL_GTES_III(1,32,32, 0xbU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                           << 0x14U) 
                                                                          | ((VL_GTES_III(1,32,32, 0xcU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                              << 0x13U) 
                                                                             | ((VL_GTES_III(1,32,32, 0xdU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xeU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xfU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x10U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x11U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x12U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x13U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x14U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x15U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x16U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x17U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x18U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x19U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x1fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb))))))))))))))))))))))))))))))))))) 
             << 0x20U) | (QData)((IData)(((VL_GTES_III(1,32,32, 0x20U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                           << 0x1fU) 
                                          | ((VL_GTES_III(1,32,32, 0x21U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                              << 0x1eU) 
                                             | ((VL_GTES_III(1,32,32, 0x22U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                 << 0x1dU) 
                                                | ((VL_GTES_III(1,32,32, 0x23U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                    << 0x1cU) 
                                                   | ((VL_GTES_III(1,32,32, 0x24U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                       << 0x1bU) 
                                                      | ((VL_GTES_III(1,32,32, 0x25U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                          << 0x1aU) 
                                                         | ((VL_GTES_III(1,32,32, 0x26U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                             << 0x19U) 
                                                            | ((VL_GTES_III(1,32,32, 0x27U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                << 0x18U) 
                                                               | ((VL_GTES_III(1,32,32, 0x28U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                   << 0x17U) 
                                                                  | ((VL_GTES_III(1,32,32, 0x29U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                      << 0x16U) 
                                                                     | ((VL_GTES_III(1,32,32, 0x2aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                         << 0x15U) 
                                                                        | ((VL_GTES_III(1,32,32, 0x2bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                            << 0x14U) 
                                                                           | ((VL_GTES_III(1,32,32, 0x2cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                               << 0x13U) 
                                                                              | ((VL_GTES_III(1,32,32, 0x2dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x30U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x31U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x32U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x33U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x34U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x35U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x36U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x37U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x38U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x39U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x3fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)))))))))))))))))))))))))))))))))))) 
           & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___294_ 
        = ((((QData)((IData)(((VL_GTES_III(1,32,32, 0U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                               << 0x1fU) | ((VL_GTES_III(1,32,32, 1U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                             << 0x1eU) 
                                            | ((VL_GTES_III(1,32,32, 2U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                << 0x1dU) 
                                               | ((VL_GTES_III(1,32,32, 3U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                   << 0x1cU) 
                                                  | ((VL_GTES_III(1,32,32, 4U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                      << 0x1bU) 
                                                     | ((VL_GTES_III(1,32,32, 5U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                         << 0x1aU) 
                                                        | ((VL_GTES_III(1,32,32, 6U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                            << 0x19U) 
                                                           | ((VL_GTES_III(1,32,32, 7U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                               << 0x18U) 
                                                              | ((VL_GTES_III(1,32,32, 8U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                  << 0x17U) 
                                                                 | ((VL_GTES_III(1,32,32, 9U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                     << 0x16U) 
                                                                    | ((VL_GTES_III(1,32,32, 0xaU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                        << 0x15U) 
                                                                       | ((VL_GTES_III(1,32,32, 0xbU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                           << 0x14U) 
                                                                          | ((VL_GTES_III(1,32,32, 0xcU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                              << 0x13U) 
                                                                             | ((VL_GTES_III(1,32,32, 0xdU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xeU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xfU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x10U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x11U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x12U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x13U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x14U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x15U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x16U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x17U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x18U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x19U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x1fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb))))))))))))))))))))))))))))))))))) 
             << 0x20U) | (QData)((IData)(((VL_GTES_III(1,32,32, 0x20U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                           << 0x1fU) 
                                          | ((VL_GTES_III(1,32,32, 0x21U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                              << 0x1eU) 
                                             | ((VL_GTES_III(1,32,32, 0x22U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                 << 0x1dU) 
                                                | ((VL_GTES_III(1,32,32, 0x23U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                    << 0x1cU) 
                                                   | ((VL_GTES_III(1,32,32, 0x24U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                       << 0x1bU) 
                                                      | ((VL_GTES_III(1,32,32, 0x25U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                          << 0x1aU) 
                                                         | ((VL_GTES_III(1,32,32, 0x26U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                             << 0x19U) 
                                                            | ((VL_GTES_III(1,32,32, 0x27U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                << 0x18U) 
                                                               | ((VL_GTES_III(1,32,32, 0x28U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                   << 0x17U) 
                                                                  | ((VL_GTES_III(1,32,32, 0x29U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                      << 0x16U) 
                                                                     | ((VL_GTES_III(1,32,32, 0x2aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                         << 0x15U) 
                                                                        | ((VL_GTES_III(1,32,32, 0x2bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                            << 0x14U) 
                                                                           | ((VL_GTES_III(1,32,32, 0x2cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                               << 0x13U) 
                                                                              | ((VL_GTES_III(1,32,32, 0x2dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x30U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x31U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x32U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x33U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x34U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x35U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x36U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x37U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x38U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x39U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x3fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)))))))))))))))))))))))))))))))))))) 
           | vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml);
}

VL_INLINE_OPT void Vsim::_sequent__TOP__372(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__372\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*191:0*/ __Vtemp5211[6];
    WData/*127:0*/ __Vtemp5212[4];
    WData/*191:0*/ __Vtemp5217[6];
    WData/*127:0*/ __Vtemp5225[4];
    WData/*191:0*/ __Vtemp5230[6];
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___296_ 
        = ((((QData)((IData)(((VL_GTES_III(1,32,32, 0U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                               << 0x1fU) | ((VL_GTES_III(1,32,32, 1U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                             << 0x1eU) 
                                            | ((VL_GTES_III(1,32,32, 2U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                << 0x1dU) 
                                               | ((VL_GTES_III(1,32,32, 3U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                   << 0x1cU) 
                                                  | ((VL_GTES_III(1,32,32, 4U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                      << 0x1bU) 
                                                     | ((VL_GTES_III(1,32,32, 5U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                         << 0x1aU) 
                                                        | ((VL_GTES_III(1,32,32, 6U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                            << 0x19U) 
                                                           | ((VL_GTES_III(1,32,32, 7U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                               << 0x18U) 
                                                              | ((VL_GTES_III(1,32,32, 8U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                  << 0x17U) 
                                                                 | ((VL_GTES_III(1,32,32, 9U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                     << 0x16U) 
                                                                    | ((VL_GTES_III(1,32,32, 0xaU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                        << 0x15U) 
                                                                       | ((VL_GTES_III(1,32,32, 0xbU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                           << 0x14U) 
                                                                          | ((VL_GTES_III(1,32,32, 0xcU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                              << 0x13U) 
                                                                             | ((VL_GTES_III(1,32,32, 0xdU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xeU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0xfU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x10U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x11U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x12U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x13U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x14U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x15U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x16U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x17U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x18U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x19U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x1eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x1fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb))))))))))))))))))))))))))))))))))) 
             << 0x20U) | (QData)((IData)(((VL_GTES_III(1,32,32, 0x20U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                           << 0x1fU) 
                                          | ((VL_GTES_III(1,32,32, 0x21U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                              << 0x1eU) 
                                             | ((VL_GTES_III(1,32,32, 0x22U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                 << 0x1dU) 
                                                | ((VL_GTES_III(1,32,32, 0x23U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                    << 0x1cU) 
                                                   | ((VL_GTES_III(1,32,32, 0x24U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                       << 0x1bU) 
                                                      | ((VL_GTES_III(1,32,32, 0x25U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                          << 0x1aU) 
                                                         | ((VL_GTES_III(1,32,32, 0x26U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                             << 0x19U) 
                                                            | ((VL_GTES_III(1,32,32, 0x27U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                << 0x18U) 
                                                               | ((VL_GTES_III(1,32,32, 0x28U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                   << 0x17U) 
                                                                  | ((VL_GTES_III(1,32,32, 0x29U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                      << 0x16U) 
                                                                     | ((VL_GTES_III(1,32,32, 0x2aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                         << 0x15U) 
                                                                        | ((VL_GTES_III(1,32,32, 0x2bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                            << 0x14U) 
                                                                           | ((VL_GTES_III(1,32,32, 0x2cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                               << 0x13U) 
                                                                              | ((VL_GTES_III(1,32,32, 0x2dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x12U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x11U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x2fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0x10U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x30U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xfU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x31U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xeU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x32U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xdU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x33U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xcU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x34U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xbU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x35U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 0xaU) 
                                                                                | ((VL_GTES_III(1,32,32, 0x36U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 9U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x37U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 8U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x38U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 7U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x39U, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 6U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3aU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 5U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3bU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 4U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3cU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 3U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3dU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 2U) 
                                                                                | ((VL_GTES_III(1,32,32, 0x3eU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)) 
                                                                                << 1U) 
                                                                                | VL_GTES_III(1,32,32, 0x3fU, (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb)))))))))))))))))))))))))))))))))))) 
           | vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml);
    __Vtemp5211[3U] = (0x44040000U | ((0x80000000U 
                                       & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                    << 0x37U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                         >> 9U)))) 
                                          << 0x1fU)) 
                                      | ((0xe00000U 
                                          & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                             << 0x13U)) 
                                         | ((0xfff00000U 
                                             & (((3U 
                                                  == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__output_mode)) 
                                                 & (0U 
                                                    != 
                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                     & (~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml)))) 
                                                << 0x14U)) 
                                            | (0xfff80000U 
                                               & (((3U 
                                                    == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__output_mode)) 
                                                   & (0U 
                                                      != 
                                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                                       & (~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml)))) 
                                                  << 0x13U))))));
    VL_EXTEND_WI(115,9, __Vtemp5212, (1U | (0x1f8U 
                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U] 
                                                << 0x1aU) 
                                               | (0x3fffff8U 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
                                                     >> 6U))))));
    __Vtemp5217[4U] = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                        ? ((0x7fffffffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                          >> 9U)))) 
                                           >> 1U)) 
                           | (0x80000000U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                             >> 9U))) 
                                                      >> 0x20U)) 
                                             << 0x1fU)))
                        : ((0x7fffffffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                          >> 9U)))) 
                                           >> 1U)) 
                           | (0x80000000U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                             >> 9U))) 
                                                      >> 0x20U)) 
                                             << 0x1fU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0640_[0U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? (1U | (0x1f8U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U] 
                                << 0x1aU) | (0x3fffff8U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
                                                >> 6U)))))
            : __Vtemp5212[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0640_[1U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? 0U : __Vtemp5212[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0640_[2U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? 0U : __Vtemp5212[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0640_[3U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? __Vtemp5211[3U] : (0x44000000U | ((0x80000000U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                              << 0x37U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                                 << 0x17U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                                   >> 9U)))) 
                                                    << 0x1fU)) 
                                                | ((0xfff80000U 
                                                    & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                       << 0x13U)) 
                                                   | __Vtemp5212[3U]))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0640_[4U] 
        = __Vtemp5217[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0640_[5U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? (0x7fffffffU & ((IData)(((((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                              >> 9U))) 
                                       >> 0x20U)) >> 1U))
            : (0x7fffffffU & ((IData)(((((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                              >> 9U))) 
                                       >> 0x20U)) >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0239_ 
        = (((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0223_)) 
            & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0208_)) 
           | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0223_) 
              & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0206_[2U]));
    VL_EXTEND_WI(115,9, __Vtemp5225, (1U | (0x1f8U 
                                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U] 
                                                << 0x1aU) 
                                               | (0x3fffff8U 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
                                                     >> 6U))))));
    __Vtemp5230[3U] = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                        ? (0x44040000U | ((0x80000000U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                             >> 9U)))) 
                                              << 0x1fU)) 
                                          | ((0xe00000U 
                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                 << 0x13U)) 
                                             | ((0xfff00000U 
                                                 & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0208_) 
                                                    << 0x14U)) 
                                                | (0x80000U 
                                                   & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0206_[2U] 
                                                      << 0x13U))))))
                        : (0x44000000U | ((0x80000000U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                             >> 9U)))) 
                                              << 0x1fU)) 
                                          | ((0xfff80000U 
                                              & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0121_) 
                                                 << 0x13U)) 
                                             | __Vtemp5225[3U]))));
    __Vtemp5230[4U] = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
                        ? ((0x7fffffffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                          >> 9U)))) 
                                           >> 1U)) 
                           | (0x80000000U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                             >> 9U))) 
                                                      >> 0x20U)) 
                                             << 0x1fU)))
                        : ((0x7fffffffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                          >> 9U)))) 
                                           >> 1U)) 
                           | (0x80000000U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                                             >> 9U))) 
                                                      >> 0x20U)) 
                                             << 0x1fU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0210_[0U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? (1U | (0x1f8U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[3U] 
                                << 0x1aU) | (0x3fffff8U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U] 
                                                >> 6U)))))
            : __Vtemp5225[0U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0210_[1U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? 0U : __Vtemp5225[1U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0210_[2U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? 0U : __Vtemp5225[2U]);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0210_[3U] 
        = __Vtemp5230[3U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0210_[4U] 
        = __Vtemp5230[4U];
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0210_[5U] 
        = ((0x800U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU])
            ? (0x7fffffffU & ((IData)(((((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                              >> 9U))) 
                                       >> 0x20U)) >> 1U))
            : (0x7fffffffU & ((IData)(((((QData)((IData)(
                                                         vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U])) 
                                              >> 9U))) 
                                       >> 0x20U)) >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0521_ 
        = ((1U & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0506_) 
                      & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                          >> 0x1cU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0506_)))) 
                  & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_) 
                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                             >> 0x1dU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_)))) 
                     & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_) 
                            & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                >> 0x1eU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_)))) 
                        & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0479_) 
                               & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                   >> 0x1fU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0479_)))) 
                           & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_) 
                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                     & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_)))) 
                              & ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0461_) 
                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                         >> 1U) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0461_)))) 
                                 & ((~ ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                            >> 3U)) 
                                        & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                            >> 2U) 
                                           & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                 >> 3U))))) 
                                    & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                          >> 3U))))))))))
            ? 7U : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0506_) 
                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                         >> 0x1cU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0506_)))
                     ? 7U : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_) 
                              & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                  >> 0x1dU) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0497_)))
                              ? 6U : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_) 
                                       & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                           >> 0x1eU) 
                                          & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0488_)))
                                       ? 5U : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0479_) 
                                                & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xaU] 
                                                    >> 0x1fU) 
                                                   & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0479_)))
                                                ? 4U
                                                : (
                                                   ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_) 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                       & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0470_)))
                                                    ? 3U
                                                    : 
                                                   (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0461_) 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                         >> 1U) 
                                                        & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0461_)))
                                                     ? 2U
                                                     : 
                                                    ((1U 
                                                      & ((~ 
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                           >> 3U)) 
                                                         & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                             >> 2U) 
                                                            & (~ 
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0xbU] 
                                                                >> 3U)))))
                                                      ? 1U
                                                      : 0U))))))));
}
