// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

void Vsim::_settle__TOP__185(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__185\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__s 
        = (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1902_) 
            << 1U) | (0U == (3U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[0U])));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__b 
        = ((2U & (((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1877_) 
                       & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1878_))) 
                   << 1U) & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                             >> 2U))) | (1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1858_) 
                                               >> 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__Vfuncout 
        = (1U & ((1U == (1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__s)))
                  ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__b)
                  : ((2U == (2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__s))) 
                     & ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__b) 
                        >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1908_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT____031811__135__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1997_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1980_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1998_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1980_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1999_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1981_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2000_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1981_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2001_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1982_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2002_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1982_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2003_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1983_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2004_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1983_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2005_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1984_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2006_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1984_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2007_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1985_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2008_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1985_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2009_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1986_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2010_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1986_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2011_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1987_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2012_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1987_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2013_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1988_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2014_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1988_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2015_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1989_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2016_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1989_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2017_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1990_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2018_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1990_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2019_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1991_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2020_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1991_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2021_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1992_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2022_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1992_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2023_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1993_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2024_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1993_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2025_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1994_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2026_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1994_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2027_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1995_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2028_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1995_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2191_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2174_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2192_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2174_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2193_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2175_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2194_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2175_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2195_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2176_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2196_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2176_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2197_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2177_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2198_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2177_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2199_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2178_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2200_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2178_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2201_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2179_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
}

void Vsim::_settle__TOP__186(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__186\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2202_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2179_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2203_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2180_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2204_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2180_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2205_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2181_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2206_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2181_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2207_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2182_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2208_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2182_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2209_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2183_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2210_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2183_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2211_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2184_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2212_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2184_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2213_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2185_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2214_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2185_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2215_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2186_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2216_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2186_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2217_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2187_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2218_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2187_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2219_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2188_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2220_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2188_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2221_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2189_) 
           & (~ (0x1fU & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                          >> 1U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2222_ 
        = (0x1fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2189_) 
                    & (((IData)(0x3fU) - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)) 
                       >> 1U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b 
        = ((((~ vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U]) 
             & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1060_)) 
            << 3U) | ((((~ ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                                >> 1U)) & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1145_))) 
                        & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1060_)) 
                       << 2U) | ((((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                                       & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1119_))) 
                                   & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1060_)) 
                                  << 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1086_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1181_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316263__14__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b 
        = ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                  >> 0x1bU)) | ((4U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                       >> 0x1cU)) | 
                                ((2U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1dU)) 
                                 | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1088_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1189_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316287__19__Vfuncout;
}

void Vsim::_settle__TOP__187(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__187\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b 
        = ((0xeU & (VL_NEGATE_I((IData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1051_))) 
                    << 1U)) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1090_));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1191_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316291__21__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b 
        = ((((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                 >> 1U)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1145_) 
                            & (6U == (7U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[0U])))) 
            << 2U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1089_));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1190_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316289__20__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b 
        = ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                  >> 9U)) | ((4U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                    >> 0xaU)) | ((2U 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                     >> 0xbU)) 
                                                 | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1096_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1198_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316316__28__Vfuncout;
}

void Vsim::_settle__TOP__188(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__188\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
        = ((0xff000000U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                           << 0x14U)) | ((0xff0000U 
                                          & (((2U & 
                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
                                               ? ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                     >> 4U))
                                               : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1145_)
                                                   ? 
                                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[4U] 
                                                    << 4U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[3U] 
                                                      >> 0x1cU))
                                                   : 
                                                  ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                      >> 4U)))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                                << 4U)) 
                                            | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1095_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__Vfuncout 
        = (0xffU & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                     ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                         ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                         ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                                : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                             ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                 ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                 : (vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__s))
                                                ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__b
                                                : 0U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1197_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316313__27__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U] 
        = ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[1U] 
            << 0x1cU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1061_[0U] 
                         >> 4U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[1U] 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1102_)
            ? ((0xffffffc0U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                                << 0x1eU) | (0x3fffffc0U 
                                             & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                >> 2U)))) 
               | ((0x38U & (((IData)(1U) + ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                                             << 0x1bU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                               >> 5U))) 
                            << 3U)) | (7U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                >> 2U)))))
            : ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                << 0x1eU) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                             >> 2U)));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[2U] 
        = (IData)((((QData)((IData)(((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                                      << 0x1eU) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                   >> 2U)))) 
                    << 0x20U) | (QData)((IData)(((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[0U] 
                                                    >> 1U))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[3U] 
        = (IData)(((((QData)((IData)(((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U] 
                                       << 0x1eU) | 
                                      (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                       >> 2U)))) << 0x20U) 
                    | (QData)((IData)(((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[0U] 
                                        >> 1U))))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
            ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[2U]))
                : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[3U])))
            : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[2U]))
                : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[1U])
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__s))
                        ? vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__b[0U]
                        : 0U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1193_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316298__23__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b 
        = ((8U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                  << 3U)) | ((4U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[0U] 
                                    << 2U)) | (((vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U] 
                                                 & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1119_)) 
                                                << 1U) 
                                               | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1091_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__Vfuncout 
        = (1U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                                >> 3U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                 >> 1U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                                >> 2U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b) 
                                 >> 1U)) : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__s) 
                                            & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__b))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1192_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316294__22__Vfuncout;
}

void Vsim::_settle__TOP__189(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__189\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U] 
        = (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1092_);
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U] 
        = (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1092_ 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[2U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U])) 
                    << 0x3eU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U])) 
                                               >> 2U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U])) 
                     << 0x3eU) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U])) 
                                                >> 2U))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[4U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[3U])) 
                    << 0x3fU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[2U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[1U])) 
                                               >> 1U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[5U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[3U])) 
                     << 0x3fU) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[2U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1158_[1U])) 
                                                >> 1U))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[6U] 
        = (IData)((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U])) 
                    << 0x3eU) | (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U])) 
                                               >> 2U))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[7U] 
        = (IData)(((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U])) 
                     << 0x3eU) | (((QData)((IData)(
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[7U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[6U])) 
                                                >> 2U))) 
                   >> 0x20U));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__Vfuncout 
        = ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
            ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[2U]))))
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[4U])))))
                : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[2U]))))
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[6U]))))))
            : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[2U]))))
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[4U])))))
                : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                    ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[2U]))))
                    : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__s))
                        ? (((QData)((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__b[0U])))
                        : VL_ULL(0)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1194_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316302__24__Vfuncout;
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s 
        = (((3U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                           << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                     >> 0x1cU)))) << 3U) 
           | (((2U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                              << 4U) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                        >> 0x1cU)))) 
               << 2U) | (((1U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                         << 4U) | (
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                   >> 0x1cU)))) 
                          << 1U) | (0U == (3U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                    >> 0x1cU)))))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b 
        = ((0xe00U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                      >> 0xbU)) | ((0x1c0U & (((1U 
                                                & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
                                                ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1155_) 
                                                   - (IData)(1U))
                                                : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1155_)) 
                                              << 6U)) 
                                   | ((0x38U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[0xaU] 
                                                >> 0x11U)) 
                                      | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1097_))));
    vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__Vfuncout 
        = (7U & ((8U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                  ? ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                 >> 3U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                                >> 6U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                 >> 3U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                                >> 9U))))
                  : ((4U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                      ? ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                 >> 3U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                                             : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                                >> 6U)))
                      : ((2U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                          ? ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                              ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                              : ((IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b) 
                                 >> 3U)) : ((1U & (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__s))
                                             ? (IData)(vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__b)
                                             : 0U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1212_ 
        = vlTOPp->__Vfunc_sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT____0316366__42__Vfuncout;
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1162_ 
        = (((2U & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U])
             ? (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                   >> 3U)) : (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1145_))) 
           & (1U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1155_)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___19_ 
        = (1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                  ? ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                     >> 1U) : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                               >> 3U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___35_ 
        = (0x3fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                        >> 9U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                                  >> 0x18U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___36_ 
        = (0x7fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                        >> 1U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                                  >> 0x10U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___35_ 
        = (0x3fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                        >> 9U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                                  >> 0x18U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___36_ 
        = (0x7fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                        >> 1U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                                  >> 0x10U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___35_ 
        = (0x3fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                        >> 9U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                                  >> 0x18U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___36_ 
        = (0x7fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                        >> 1U) : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                                  >> 0x10U)));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__deferred 
        = (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
           & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__valid_in 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__r[0U] 
                 & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_))));
}

void Vsim::_settle__TOP__190(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__190\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___9_ 
        = ((1U & (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___36_ 
                          >> 0x29U))) ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__xerc_updated)
            : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__xerc));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___8_ 
        = ((1U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__writeback_0__DOT___36_))
            ? (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___7_) 
                << 0x1cU) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___6_) 
                              << 0x18U) | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___5_) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___4_) 
                                               << 0x10U) 
                                              | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___3_) 
                                                  << 0xcU) 
                                                 | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___2_) 
                                                     << 8U) 
                                                    | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___1_) 
                                                        << 4U) 
                                                       | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___0_))))))))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__crs);
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_to_decode2 
        = (((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__xerc_updated)) 
            << 0x20U) | (QData)((IData)((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___7_) 
                                          << 0x1cU) 
                                         | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___6_) 
                                             << 0x18U) 
                                            | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___5_) 
                                                << 0x14U) 
                                               | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___4_) 
                                                   << 0x10U) 
                                                  | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___3_) 
                                                      << 0xcU) 
                                                     | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___2_) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___1_) 
                                                            << 4U) 
                                                           | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT___0_)))))))))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___30_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___01_)
                                    : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                                       >> 0x17U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___30_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___01_)
                                    : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                                       >> 0x17U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___30_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___01_)
                                    : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                                       >> 0x17U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___16_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___00_)
                                    : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                                       >> 2U))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___09_ 
        = (1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                 & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___00_)
                     ? ((~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r) 
                            >> 1U)) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___03_))
                     : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT___03_))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___28_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___00_)
                                    : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                                       >> 0xfU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___12_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT___00_) 
           & ((0x3fU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r 
                        >> 2U)) == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___23_[0U] 
                                                >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___28_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___00_)
                                    : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                                       >> 0xfU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___12_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT___00_) 
           & ((0x3fU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r 
                        >> 2U)) == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___42_[0U] 
                                                >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___28_ 
        = (1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U] 
                     >> 0x1fU)) & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0107_)
                                    ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___00_)
                                    : (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                                       >> 0xfU))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___12_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT___00_) 
           & ((0x3fU & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r 
                        >> 2U)) == (0x1fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___45_[0U] 
                                                >> 1U)))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___55_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2)
            ? 0U : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___14_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___39_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2)
            ? 0U : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___14_));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___15_ 
        = ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2)
            ? 0U : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT___14_) 
                     << 2U) | (3U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int))));
    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1793_ 
        = ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_icache[0U])
            ? (((QData)((IData)(((0x80000000U & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2222_) 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                  | (IData)(
                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                             >> 0x3fU))) 
                                                 << 0x1fU)) 
                                 | ((0x40000000U & 
                                     ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2222_) 
                                        & (~ ((IData)(1U) 
                                              - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                       | (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                  >> 0x3eU))) 
                                      << 0x1eU)) | 
                                    ((0x20000000U & 
                                      ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2221_) 
                                         & ((IData)(1U) 
                                            - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                        | (IData)((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                   >> 0x3dU))) 
                                       << 0x1dU)) | 
                                     ((0x10000000U 
                                       & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2221_) 
                                            & (~ ((IData)(1U) 
                                                  - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                           | (IData)(
                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                      >> 0x3cU))) 
                                          << 0x1cU)) 
                                      | ((0x8000000U 
                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2220_) 
                                               & ((IData)(1U) 
                                                  - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                              | (IData)(
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                         >> 0x3bU))) 
                                             << 0x1bU)) 
                                         | ((0x4000000U 
                                             & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2220_) 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                 | (IData)(
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                            >> 0x3aU))) 
                                                << 0x1aU)) 
                                            | ((0x2000000U 
                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2219_) 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                    | (IData)(
                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                               >> 0x39U))) 
                                                   << 0x19U)) 
                                               | ((0x1000000U 
                                                   & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2219_) 
                                                        & (~ 
                                                           ((IData)(1U) 
                                                            - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                       | (IData)(
                                                                 (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                  >> 0x38U))) 
                                                      << 0x18U)) 
                                                  | ((0x800000U 
                                                      & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2218_) 
                                                           & ((IData)(1U) 
                                                              - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                          | (IData)(
                                                                    (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                     >> 0x37U))) 
                                                         << 0x17U)) 
                                                     | ((0x400000U 
                                                         & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2218_) 
                                                              & (~ 
                                                                 ((IData)(1U) 
                                                                  - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                             | (IData)(
                                                                       (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                        >> 0x36U))) 
                                                            << 0x16U)) 
                                                        | ((0x200000U 
                                                            & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2217_) 
                                                                 & ((IData)(1U) 
                                                                    - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                | (IData)(
                                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                           >> 0x35U))) 
                                                               << 0x15U)) 
                                                           | ((0x100000U 
                                                               & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2217_) 
                                                                    & (~ 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                   | (IData)(
                                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                              >> 0x34U))) 
                                                                  << 0x14U)) 
                                                              | ((0x80000U 
                                                                  & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2216_) 
                                                                       & ((IData)(1U) 
                                                                          - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                      | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x33U))) 
                                                                     << 0x13U)) 
                                                                 | ((0x40000U 
                                                                     & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2216_) 
                                                                          & (~ 
                                                                             ((IData)(1U) 
                                                                              - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                         | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x32U))) 
                                                                        << 0x12U)) 
                                                                    | ((0x20000U 
                                                                        & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2215_) 
                                                                             & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                            | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x31U))) 
                                                                           << 0x11U)) 
                                                                       | ((0x10000U 
                                                                           & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2215_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                               | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x30U))) 
                                                                              << 0x10U)) 
                                                                          | ((0x8000U 
                                                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2214_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x2fU))) 
                                                                                << 0xfU)) 
                                                                             | ((0x4000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2214_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x2eU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2213_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x2dU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2213_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x2cU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2212_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x2bU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2212_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x2aU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2211_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x29U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2211_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x28U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2210_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x27U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2210_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x26U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2209_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x25U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2209_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x24U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2208_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x23U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2208_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x22U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2207_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x21U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2207_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x20U))))))))))))))))))))))))))))))))))))) 
                << 0x20U) | (QData)((IData)(((0x80000000U 
                                              & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2206_) 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                  | (IData)(
                                                            (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                             >> 0x1fU))) 
                                                 << 0x1fU)) 
                                             | ((0x40000000U 
                                                 & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2206_) 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                     | (IData)(
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                >> 0x1eU))) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2205_) 
                                                         & ((IData)(1U) 
                                                            - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                        | (IData)(
                                                                  (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                   >> 0x1dU))) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2205_) 
                                                            & (~ 
                                                               ((IData)(1U) 
                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                           | (IData)(
                                                                     (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                      >> 0x1cU))) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2204_) 
                                                               & ((IData)(1U) 
                                                                  - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                              | (IData)(
                                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                         >> 0x1bU))) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2204_) 
                                                                  & (~ 
                                                                     ((IData)(1U) 
                                                                      - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                 | (IData)(
                                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                            >> 0x1aU))) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2203_) 
                                                                     & ((IData)(1U) 
                                                                        - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                    | (IData)(
                                                                              (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                               >> 0x19U))) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2203_) 
                                                                        & (~ 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                       | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x18U))) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2202_) 
                                                                           & ((IData)(1U) 
                                                                              - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                          | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x17U))) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2202_) 
                                                                              & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                             | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x16U))) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2201_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x15U))) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2201_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2200_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2200_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2199_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2199_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2198_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2198_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2197_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2197_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2196_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2196_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2195_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2195_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2194_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2194_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2193_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2193_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2192_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2192_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2191_) 
                                                                                & ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_))) 
                                                                                | (IData)(
                                                                                (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___2191_) 
                                                                                & (~ 
                                                                                ((IData)(1U) 
                                                                                - (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1788_)))) 
                                                                                | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids)))))))))))))))))))))))))))))))))))))
            : vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__itlb_valids);
}
