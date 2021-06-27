// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


//======================

void Vsim::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vsim* t = (Vsim*)userthis;
    Vsim__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vsim::traceChgThis(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vsim::traceChgThis__2(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->sim__DOT__array_muxed6),3);
        vcdp->chgBus(c+9,(vlTOPp->sim__DOT__array_muxed7),2);
        vcdp->chgQuad(c+17,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[0]),38);
        vcdp->chgQuad(c+19,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[1]),38);
        vcdp->chgQuad(c+21,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[2]),38);
        vcdp->chgQuad(c+23,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[3]),38);
        vcdp->chgQuad(c+25,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[4]),38);
        vcdp->chgQuad(c+27,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[5]),38);
        vcdp->chgQuad(c+29,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[6]),38);
        vcdp->chgQuad(c+31,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035402[7]),38);
        vcdp->chgQuad(c+145,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[0]),38);
        vcdp->chgQuad(c+147,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[1]),38);
        vcdp->chgQuad(c+149,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[2]),38);
        vcdp->chgQuad(c+151,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[3]),38);
        vcdp->chgQuad(c+153,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[4]),38);
        vcdp->chgQuad(c+155,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[5]),38);
        vcdp->chgQuad(c+157,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[6]),38);
        vcdp->chgQuad(c+159,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[7]),38);
        vcdp->chgQuad(c+161,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[8]),38);
        vcdp->chgQuad(c+163,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[9]),38);
        vcdp->chgQuad(c+165,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[10]),38);
        vcdp->chgQuad(c+167,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[11]),38);
        vcdp->chgQuad(c+169,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[12]),38);
        vcdp->chgQuad(c+171,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[13]),38);
        vcdp->chgQuad(c+173,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[14]),38);
        vcdp->chgQuad(c+175,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035404[15]),38);
        vcdp->chgQuad(c+401,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035406[0]),38);
        vcdp->chgQuad(c+403,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035406[1]),38);
        vcdp->chgQuad(c+405,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035406[2]),38);
        vcdp->chgQuad(c+407,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035406[3]),38);
        vcdp->chgQuad(c+465,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035408[0]),38);
        vcdp->chgQuad(c+467,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035408[1]),38);
        vcdp->chgQuad(c+469,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035408[2]),38);
        vcdp->chgQuad(c+471,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT____035408[3]),38);
    }
}

void Vsim::traceChgThis__3(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+529,(vlTOPp->sim__DOT__soc_rst));
        vcdp->chgBit(c+537,((1U & ((IData)(vlTOPp->sim__DOT__reset_storage) 
                                   >> 1U))));
        vcdp->chgBus(c+545,(vlTOPp->sim__DOT__reset_storage),2);
        vcdp->chgBit(c+553,(vlTOPp->sim__DOT__reset_re));
        vcdp->chgBus(c+561,(vlTOPp->sim__DOT__scratch_storage),32);
        vcdp->chgBit(c+569,(vlTOPp->sim__DOT__scratch_re));
        vcdp->chgBus(c+577,(vlTOPp->sim__DOT__bus_errors),32);
        vcdp->chgBit(c+585,(vlTOPp->sim__DOT__csr_bankarray_csrbank1_bus_errors_we));
        vcdp->chgBit(c+593,(vlTOPp->sim__DOT__bus_errors_re));
        vcdp->chgBit(c+601,(vlTOPp->sim__DOT__error));
        vcdp->chgBit(c+609,((1U & ((IData)(vlTOPp->sim__DOT__soc_rst) 
                                   | ((IData)(vlTOPp->sim__DOT__reset_storage) 
                                      >> 1U)))));
        vcdp->chgQuad(c+617,(vlTOPp->sim__DOT__microwatt_ibus_dat_r),64);
        vcdp->chgBit(c+633,(vlTOPp->sim__DOT__microwatt_ibus_ack));
        vcdp->chgQuad(c+641,(vlTOPp->sim__DOT__microwatt_dbus_dat_r),64);
        vcdp->chgBit(c+657,(vlTOPp->sim__DOT__microwatt_dbus_ack));
        vcdp->chgBus(c+665,(vlTOPp->sim__DOT__interface0_converted_interface_adr),30);
        vcdp->chgBus(c+673,(vlTOPp->sim__DOT__interface0_converted_interface_dat_w),32);
        vcdp->chgBus(c+681,(vlTOPp->sim__DOT__shared_dat_r),32);
        vcdp->chgBus(c+689,(vlTOPp->sim__DOT__interface0_converted_interface_sel),4);
        vcdp->chgBit(c+697,(vlTOPp->sim__DOT__interface0_converted_interface_cyc));
        vcdp->chgBit(c+705,(vlTOPp->sim__DOT__interface0_converted_interface_stb));
        vcdp->chgBit(c+713,(vlTOPp->sim__DOT__interface0_converted_interface_ack));
        vcdp->chgBit(c+721,(vlTOPp->sim__DOT__interface0_converted_interface_we));
        vcdp->chgBit(c+729,(vlTOPp->sim__DOT__converter0_skip));
        vcdp->chgBit(c+737,(vlTOPp->sim__DOT__converter0_counter));
        vcdp->chgQuad(c+745,(vlTOPp->sim__DOT__converter0_dat_r),64);
        vcdp->chgBus(c+761,(vlTOPp->sim__DOT__interface1_converted_interface_adr),30);
        vcdp->chgBus(c+769,(vlTOPp->sim__DOT__interface1_converted_interface_dat_w),32);
        vcdp->chgBus(c+777,(vlTOPp->sim__DOT__interface1_converted_interface_sel),4);
        vcdp->chgBit(c+785,(vlTOPp->sim__DOT__interface1_converted_interface_cyc));
        vcdp->chgBit(c+793,(vlTOPp->sim__DOT__interface1_converted_interface_stb));
        vcdp->chgBit(c+801,(vlTOPp->sim__DOT__interface1_converted_interface_ack));
        vcdp->chgBit(c+809,(vlTOPp->sim__DOT__interface1_converted_interface_we));
        vcdp->chgBit(c+817,(vlTOPp->sim__DOT__converter1_skip));
        vcdp->chgBit(c+825,(vlTOPp->sim__DOT__converter1_counter));
        vcdp->chgQuad(c+833,(vlTOPp->sim__DOT__converter1_dat_r),64);
        vcdp->chgBus(c+849,(vlTOPp->sim__DOT__array_muxed0),30);
        vcdp->chgBus(c+857,(vlTOPp->sim__DOT__array_muxed1),32);
        vcdp->chgBus(c+865,(vlTOPp->sim__DOT__array_muxed2),4);
        vcdp->chgBit(c+873,(((IData)(vlTOPp->sim__DOT__array_muxed3) 
                             & (IData)(vlTOPp->sim__DOT__slave_sel))));
        vcdp->chgBit(c+881,(vlTOPp->sim__DOT__array_muxed4));
        vcdp->chgBit(c+889,(vlTOPp->sim__DOT__ram_bus_ack));
        vcdp->chgBit(c+897,(vlTOPp->sim__DOT__array_muxed5));
        vcdp->chgBus(c+905,((0x7fffU & vlTOPp->sim__DOT__array_muxed0)),15);
        vcdp->chgBus(c+913,(vlTOPp->sim__DOT__mem_1
                            [vlTOPp->sim__DOT__memadr]),32);
        vcdp->chgBit(c+921,(vlTOPp->sim__DOT__interface0_ram_bus_cyc));
        vcdp->chgBit(c+929,(vlTOPp->sim__DOT__interface0_ram_bus_ack));
        vcdp->chgBus(c+937,((0x7ffU & vlTOPp->sim__DOT__array_muxed0)),11);
        vcdp->chgBus(c+945,(vlTOPp->sim__DOT__sram0_we),4);
        vcdp->chgBus(c+953,(vlTOPp->sim__DOT__mem_2
                            [vlTOPp->sim__DOT__memadr_1]),32);
        vcdp->chgBit(c+961,(vlTOPp->sim__DOT__interface1_ram_bus_cyc));
        vcdp->chgBit(c+969,(vlTOPp->sim__DOT__interface1_ram_bus_ack));
        vcdp->chgBus(c+977,((0x3ffffffU & vlTOPp->sim__DOT__array_muxed0)),26);
        vcdp->chgBus(c+985,(vlTOPp->sim__DOT__sram1_we),4);
        vcdp->chgBit(c+993,(vlTOPp->sim__DOT__uart_tx_fifo_readable));
        vcdp->chgBit(c+1001,(vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_first));
        vcdp->chgBit(c+1009,(vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_last));
        vcdp->chgBus(c+1017,(vlTOPp->sim__DOT__uart_tx_fifo_fifo_out_payload_data),8);
        vcdp->chgBit(c+1025,((0x10U != (IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0))));
        vcdp->chgBit(c+1033,(vlTOPp->sim__DOT__uart_rxtx_re));
        vcdp->chgBus(c+1041,((0xffU & vlTOPp->sim__DOT__simsoc_dat_w)),8);
        vcdp->chgBit(c+1049,(vlTOPp->sim__DOT__uart_rxtx_we));
        vcdp->chgBus(c+1057,(vlTOPp->sim__DOT__uart_rx_fifo_fifo_out_payload_data),8);
        vcdp->chgBit(c+1065,((0x10U == (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0))));
        vcdp->chgBit(c+1073,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_txfull_we));
        vcdp->chgBit(c+1081,(vlTOPp->sim__DOT__uart_txfull_re));
        vcdp->chgBit(c+1089,((1U & (~ (IData)(vlTOPp->sim__DOT__uart_rx_fifo_readable)))));
        vcdp->chgBit(c+1097,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxempty_we));
        vcdp->chgBit(c+1105,(vlTOPp->sim__DOT__uart_rxempty_re));
        vcdp->chgBit(c+1113,((1U & (((IData)(vlTOPp->sim__DOT__uart_pending_status) 
                                     & (IData)(vlTOPp->sim__DOT__uart_enable_storage)) 
                                    | (((IData)(vlTOPp->sim__DOT__uart_pending_status) 
                                        & (IData)(vlTOPp->sim__DOT__uart_enable_storage)) 
                                       >> 1U)))));
        vcdp->chgBit(c+1121,((0x10U != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0))));
        vcdp->chgBit(c+1129,(vlTOPp->sim__DOT__uart_tx_pending));
        vcdp->chgBit(c+1137,(vlTOPp->sim__DOT__uart_tx_clear));
        vcdp->chgBit(c+1145,(vlTOPp->sim__DOT__uart_tx_trigger_d));
        vcdp->chgBit(c+1153,(vlTOPp->sim__DOT__uart_rx_fifo_readable));
        vcdp->chgBit(c+1161,(vlTOPp->sim__DOT__uart_rx_pending));
        vcdp->chgBit(c+1169,(vlTOPp->sim__DOT__uart_rx_clear));
        vcdp->chgBit(c+1177,(vlTOPp->sim__DOT__uart_rx_trigger_d));
        vcdp->chgBus(c+1185,(vlTOPp->sim__DOT__uart_status_status),2);
        vcdp->chgBit(c+1193,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_status_we));
        vcdp->chgBit(c+1201,(vlTOPp->sim__DOT__uart_status_re));
        vcdp->chgBus(c+1209,(vlTOPp->sim__DOT__uart_pending_status),2);
        vcdp->chgBit(c+1217,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_pending_we));
        vcdp->chgBit(c+1225,(vlTOPp->sim__DOT__uart_pending_re));
        vcdp->chgBus(c+1233,(vlTOPp->sim__DOT__uart_pending_r),2);
        vcdp->chgBit(c+1241,((1U & (IData)(vlTOPp->sim__DOT__uart_enable_storage))));
        vcdp->chgBit(c+1249,((1U & ((IData)(vlTOPp->sim__DOT__uart_enable_storage) 
                                    >> 1U))));
        vcdp->chgBus(c+1257,(vlTOPp->sim__DOT__uart_enable_storage),2);
        vcdp->chgBit(c+1265,(vlTOPp->sim__DOT__uart_enable_re));
        vcdp->chgBit(c+1273,((1U & (~ (IData)(vlTOPp->sim__DOT__uart_tx_fifo_readable)))));
        vcdp->chgBit(c+1281,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_txempty_we));
        vcdp->chgBit(c+1289,(vlTOPp->sim__DOT__uart_txempty_re));
        vcdp->chgBit(c+1297,((0x10U == (IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0))));
        vcdp->chgBit(c+1305,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxfull_we));
        vcdp->chgBit(c+1313,(vlTOPp->sim__DOT__uart_rxfull_re));
        vcdp->chgBit(c+1321,((0U != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0))));
        vcdp->chgBus(c+1329,((0xffU & vlTOPp->sim__DOT__simsoc_dat_w)),10);
        vcdp->chgBus(c+1337,(vlTOPp->sim__DOT__uart_tx_fifo_level0),5);
        vcdp->chgBus(c+1345,(vlTOPp->sim__DOT__uart_tx_fifo_produce),4);
        vcdp->chgBus(c+1353,(vlTOPp->sim__DOT__uart_tx_fifo_consume),4);
        vcdp->chgBus(c+1361,(vlTOPp->sim__DOT__uart_tx_fifo_wrport_adr),4);
        vcdp->chgBit(c+1369,(((IData)(vlTOPp->sim__DOT__uart_rxtx_re) 
                              & (0x10U != (IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0)))));
        vcdp->chgBus(c+1377,((0x1fU & ((IData)(vlTOPp->sim__DOT__uart_tx_fifo_level0) 
                                       + (IData)(vlTOPp->sim__DOT__uart_tx_fifo_readable)))),5);
        vcdp->chgBit(c+1385,(vlTOPp->sim__DOT__uart_rx_fifo_fifo_out_first));
        vcdp->chgBit(c+1393,(vlTOPp->sim__DOT__uart_rx_fifo_fifo_out_last));
        vcdp->chgBit(c+1401,(vlTOPp->sim__DOT__uart_rx_fifo_syncfifo_re));
        vcdp->chgBit(c+1409,((0U != (IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0))));
        vcdp->chgBus(c+1417,(vlTOPp->sim__DOT__uart_rx_fifo_level0),5);
        vcdp->chgBus(c+1425,(vlTOPp->sim__DOT__uart_rx_fifo_produce),4);
        vcdp->chgBus(c+1433,(vlTOPp->sim__DOT__uart_rx_fifo_consume),4);
        vcdp->chgBus(c+1441,(vlTOPp->sim__DOT__uart_rx_fifo_wrport_adr),4);
        vcdp->chgBit(c+1449,(vlTOPp->sim__DOT__uart_rx_fifo_do_read));
        vcdp->chgBus(c+1457,((0x1fU & ((IData)(vlTOPp->sim__DOT__uart_rx_fifo_level0) 
                                       + (IData)(vlTOPp->sim__DOT__uart_rx_fifo_readable)))),5);
        vcdp->chgBus(c+1465,(vlTOPp->sim__DOT__timer_load_storage),32);
        vcdp->chgBit(c+1473,(vlTOPp->sim__DOT__timer_load_re));
        vcdp->chgBus(c+1481,(vlTOPp->sim__DOT__timer_reload_storage),32);
        vcdp->chgBit(c+1489,(vlTOPp->sim__DOT__timer_reload_re));
        vcdp->chgBit(c+1497,(vlTOPp->sim__DOT__timer_en_storage));
        vcdp->chgBit(c+1505,(vlTOPp->sim__DOT__timer_en_re));
        vcdp->chgBit(c+1513,(vlTOPp->sim__DOT__timer_update_value_storage));
        vcdp->chgBit(c+1521,(vlTOPp->sim__DOT__timer_update_value_re));
        vcdp->chgBus(c+1529,(vlTOPp->sim__DOT__timer_value_status),32);
        vcdp->chgBit(c+1537,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_value_we));
        vcdp->chgBit(c+1545,(vlTOPp->sim__DOT__timer_value_re));
        vcdp->chgBit(c+1553,(((IData)(vlTOPp->sim__DOT__timer_zero_pending) 
                              & (IData)(vlTOPp->sim__DOT__timer_enable_storage))));
        vcdp->chgBit(c+1561,((0U == vlTOPp->sim__DOT__timer_value)));
        vcdp->chgBit(c+1569,(vlTOPp->sim__DOT__timer_zero_pending));
        vcdp->chgBit(c+1577,(vlTOPp->sim__DOT__timer_zero_clear));
        vcdp->chgBit(c+1585,(vlTOPp->sim__DOT__timer_zero_trigger_d));
        vcdp->chgBit(c+1593,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_status_we));
        vcdp->chgBit(c+1601,(vlTOPp->sim__DOT__timer_status_re));
        vcdp->chgBit(c+1609,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_pending_we));
        vcdp->chgBit(c+1617,(vlTOPp->sim__DOT__timer_pending_re));
        vcdp->chgBit(c+1625,(vlTOPp->sim__DOT__timer_pending_r));
        vcdp->chgBit(c+1633,(vlTOPp->sim__DOT__timer_enable_storage));
        vcdp->chgBit(c+1641,(vlTOPp->sim__DOT__timer_enable_re));
        vcdp->chgBus(c+1649,(vlTOPp->sim__DOT__timer_value),32);
        vcdp->chgBit(c+1657,(vlTOPp->sim__DOT__int_rst));
        vcdp->chgBit(c+1665,(vlTOPp->sim__DOT__leds_storage));
        vcdp->chgBit(c+1673,(vlTOPp->sim__DOT__leds_re));
        vcdp->chgBit(c+1681,(vlTOPp->sim__DOT__multiregimpl0_regs1));
        vcdp->chgBit(c+1689,(vlTOPp->sim__DOT__csr_bankarray_csrbank4_in_we));
        vcdp->chgBit(c+1697,(vlTOPp->sim__DOT__switches_re));
        vcdp->chgBit(c+1705,(vlTOPp->sim__DOT__multiregimpl1_regs1));
        vcdp->chgBit(c+1713,(vlTOPp->sim__DOT__csr_bankarray_csrbank0_in_we));
        vcdp->chgBit(c+1721,(vlTOPp->sim__DOT__buttons_re));
        vcdp->chgBit(c+1729,(vlTOPp->sim__DOT__r_enable_storage));
        vcdp->chgBit(c+1737,(vlTOPp->sim__DOT__r_enable_re));
        vcdp->chgBus(c+1745,(vlTOPp->sim__DOT__r_width_storage),32);
        vcdp->chgBit(c+1753,(vlTOPp->sim__DOT__r_width_re));
        vcdp->chgBus(c+1761,(vlTOPp->sim__DOT__r_period_storage),32);
        vcdp->chgBit(c+1769,(vlTOPp->sim__DOT__r_period_re));
        vcdp->chgBus(c+1777,(vlTOPp->sim__DOT__r_count),32);
        vcdp->chgBit(c+1785,(vlTOPp->sim__DOT__g_enable_storage));
        vcdp->chgBit(c+1793,(vlTOPp->sim__DOT__g_enable_re));
        vcdp->chgBus(c+1801,(vlTOPp->sim__DOT__g_width_storage),32);
        vcdp->chgBit(c+1809,(vlTOPp->sim__DOT__g_width_re));
        vcdp->chgBus(c+1817,(vlTOPp->sim__DOT__g_period_storage),32);
        vcdp->chgBit(c+1825,(vlTOPp->sim__DOT__g_period_re));
        vcdp->chgBus(c+1833,(vlTOPp->sim__DOT__g_count),32);
        vcdp->chgBit(c+1841,(vlTOPp->sim__DOT__b_enable_storage));
        vcdp->chgBit(c+1849,(vlTOPp->sim__DOT__b_enable_re));
        vcdp->chgBus(c+1857,(vlTOPp->sim__DOT__b_width_storage),32);
        vcdp->chgBit(c+1865,(vlTOPp->sim__DOT__b_width_re));
        vcdp->chgBus(c+1873,(vlTOPp->sim__DOT__b_period_storage),32);
        vcdp->chgBit(c+1881,(vlTOPp->sim__DOT__b_period_re));
        vcdp->chgBus(c+1889,(vlTOPp->sim__DOT__b_count),32);
        vcdp->chgBit(c+1897,(vlTOPp->sim__DOT__converter0_state));
        vcdp->chgBit(c+1905,(vlTOPp->sim__DOT__converter0_next_state));
        vcdp->chgBit(c+1913,(vlTOPp->sim__DOT__converter0_counter_converter0_next_value));
        vcdp->chgBit(c+1921,(vlTOPp->sim__DOT__converter0_counter_converter0_next_value_ce));
        vcdp->chgBit(c+1929,(vlTOPp->sim__DOT__converter1_state));
        vcdp->chgBit(c+1937,(vlTOPp->sim__DOT__converter1_next_state));
        vcdp->chgBit(c+1945,(vlTOPp->sim__DOT__converter1_counter_converter1_next_value));
        vcdp->chgBit(c+1953,(vlTOPp->sim__DOT__converter1_counter_converter1_next_value_ce));
        vcdp->chgBus(c+1961,(vlTOPp->sim__DOT__simsoc_adr),14);
        vcdp->chgBit(c+1969,(vlTOPp->sim__DOT__simsoc_we));
        vcdp->chgBus(c+1977,(vlTOPp->sim__DOT__simsoc_dat_w),32);
        vcdp->chgBus(c+1985,((((((((vlTOPp->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                                    | vlTOPp->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r) 
                                   | vlTOPp->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r) 
                                  | vlTOPp->sim__DOT__csr_bankarray_interface3_bank_bus_dat_r) 
                                 | vlTOPp->sim__DOT__csr_bankarray_interface4_bank_bus_dat_r) 
                                | vlTOPp->sim__DOT__csr_bankarray_interface5_bank_bus_dat_r) 
                               | vlTOPp->sim__DOT__csr_bankarray_interface6_bank_bus_dat_r) 
                              | vlTOPp->sim__DOT__csr_bankarray_sram_bus_dat_r)),32);
        vcdp->chgBus(c+1993,(vlTOPp->sim__DOT__simsoc_wishbone_dat_r),32);
        vcdp->chgBit(c+2001,(vlTOPp->sim__DOT__simsoc_wishbone_cyc));
        vcdp->chgBit(c+2009,(vlTOPp->sim__DOT__simsoc_wishbone_ack));
        vcdp->chgBit(c+2017,(vlTOPp->sim__DOT__array_muxed3));
        vcdp->chgBit(c+2025,(vlTOPp->sim__DOT__shared_ack));
        vcdp->chgBus(c+2033,(vlTOPp->sim__DOT__request),2);
        vcdp->chgBit(c+2041,(vlTOPp->sim__DOT__grant));
        vcdp->chgBus(c+2049,(vlTOPp->sim__DOT__slave_sel),4);
        vcdp->chgBus(c+2057,(vlTOPp->sim__DOT__slave_sel_r),4);
        vcdp->chgBit(c+2065,((((IData)(vlTOPp->sim__DOT__array_muxed4) 
                               & (IData)(vlTOPp->sim__DOT__array_muxed3)) 
                              & (~ (IData)(vlTOPp->sim__DOT__shared_ack)))));
        vcdp->chgBit(c+2073,((0U == vlTOPp->sim__DOT__count)));
        vcdp->chgBus(c+2081,(vlTOPp->sim__DOT__count),20);
        vcdp->chgBus(c+2089,(vlTOPp->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r),32);
        vcdp->chgBit(c+2097,(vlTOPp->sim__DOT__csr_bankarray_csrbank0_in_re));
        vcdp->chgBit(c+2105,((1U & vlTOPp->sim__DOT__simsoc_dat_w)));
        vcdp->chgBit(c+2113,((2U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
    }
}

void Vsim::traceChgThis__5(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2121,(vlTOPp->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r),32);
        vcdp->chgBit(c+2129,(vlTOPp->sim__DOT__csr_bankarray_csrbank1_reset0_re));
        vcdp->chgBus(c+2137,((3U & vlTOPp->sim__DOT__simsoc_dat_w)),2);
        vcdp->chgBit(c+2145,(vlTOPp->sim__DOT__csr_bankarray_csrbank1_reset0_we));
        vcdp->chgBit(c+2153,(vlTOPp->sim__DOT__csr_bankarray_csrbank1_scratch0_re));
        vcdp->chgBit(c+2161,(vlTOPp->sim__DOT__csr_bankarray_csrbank1_scratch0_we));
        vcdp->chgBit(c+2169,(vlTOPp->sim__DOT__csr_bankarray_csrbank1_bus_errors_re));
        vcdp->chgBit(c+2177,((4U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+2185,(vlTOPp->sim__DOT__csr_bankarray_sram_bus_dat_r),32);
        vcdp->chgBus(c+2193,((0x3fU & (IData)(vlTOPp->sim__DOT__simsoc_adr))),6);
        vcdp->chgBus(c+2201,(((0x24U >= (IData)(vlTOPp->sim__DOT__memadr_2))
                               ? vlTOPp->sim__DOT__mem_3
                              [vlTOPp->sim__DOT__memadr_2]
                               : 0U)),8);
        vcdp->chgBit(c+2209,((5U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBit(c+2217,(vlTOPp->sim__DOT__csr_bankarray_sel_r));
        vcdp->chgBus(c+2225,(vlTOPp->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r),32);
        vcdp->chgBit(c+2233,(vlTOPp->sim__DOT__csr_bankarray_csrbank2_out0_re));
        vcdp->chgBit(c+2241,(vlTOPp->sim__DOT__csr_bankarray_csrbank2_out0_we));
        vcdp->chgBit(c+2249,((0U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+2257,(vlTOPp->sim__DOT__csr_bankarray_interface3_bank_bus_dat_r),32);
        vcdp->chgBit(c+2265,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_enable0_re));
        vcdp->chgBit(c+2273,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_enable0_we));
        vcdp->chgBit(c+2281,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_width0_re));
        vcdp->chgBit(c+2289,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_width0_we));
        vcdp->chgBit(c+2297,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_period0_re));
        vcdp->chgBit(c+2305,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_r_period0_we));
        vcdp->chgBit(c+2313,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_enable0_re));
        vcdp->chgBit(c+2321,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_enable0_we));
        vcdp->chgBit(c+2329,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_width0_re));
        vcdp->chgBit(c+2337,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_width0_we));
        vcdp->chgBit(c+2345,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_re));
        vcdp->chgBit(c+2353,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_g_period0_we));
        vcdp->chgBit(c+2361,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_re));
        vcdp->chgBit(c+2369,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_enable0_we));
        vcdp->chgBit(c+2377,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_re));
        vcdp->chgBit(c+2385,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_width0_we));
        vcdp->chgBit(c+2393,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_re));
        vcdp->chgBit(c+2401,(vlTOPp->sim__DOT__csr_bankarray_csrbank3_b_period0_we));
        vcdp->chgBit(c+2409,((3U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+2417,(vlTOPp->sim__DOT__csr_bankarray_interface4_bank_bus_dat_r),32);
        vcdp->chgBit(c+2425,(vlTOPp->sim__DOT__csr_bankarray_csrbank4_in_re));
        vcdp->chgBit(c+2433,((1U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+2441,(vlTOPp->sim__DOT__csr_bankarray_interface5_bank_bus_dat_r),32);
        vcdp->chgBit(c+2449,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_re));
        vcdp->chgBit(c+2457,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_load0_we));
        vcdp->chgBit(c+2465,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_re));
        vcdp->chgBit(c+2473,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_reload0_we));
        vcdp->chgBit(c+2481,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_re));
        vcdp->chgBit(c+2489,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_en0_we));
        vcdp->chgBit(c+2497,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_re));
        vcdp->chgBit(c+2505,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_update_value0_we));
        vcdp->chgBit(c+2513,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_value_re));
        vcdp->chgBit(c+2521,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_status_re));
        vcdp->chgBit(c+2529,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_pending_re));
        vcdp->chgBit(c+2537,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_re));
        vcdp->chgBit(c+2545,(vlTOPp->sim__DOT__csr_bankarray_csrbank5_ev_enable0_we));
        vcdp->chgBit(c+2553,((6U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+2561,(vlTOPp->sim__DOT__csr_bankarray_interface6_bank_bus_dat_r),32);
        vcdp->chgBit(c+2569,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_txfull_re));
        vcdp->chgBit(c+2577,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxempty_re));
        vcdp->chgBit(c+2585,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_status_re));
        vcdp->chgBit(c+2593,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_pending_re));
        vcdp->chgBit(c+2601,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_re));
        vcdp->chgBit(c+2609,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_ev_enable0_we));
        vcdp->chgBit(c+2617,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_txempty_re));
        vcdp->chgBit(c+2625,(vlTOPp->sim__DOT__csr_bankarray_csrbank6_rxfull_re));
        vcdp->chgBit(c+2633,((7U == (0x1fU & ((IData)(vlTOPp->sim__DOT__simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBit(c+2641,(vlTOPp->sim__DOT__state));
        vcdp->chgBit(c+2649,(vlTOPp->sim__DOT__next_state));
        vcdp->chgBit(c+2657,(vlTOPp->sim__DOT__multiregimpl0_regs0));
        vcdp->chgBit(c+2665,(vlTOPp->sim__DOT__multiregimpl1_regs0));
        vcdp->chgBit(c+2673,(vlTOPp->sim__DOT____Vcellinp__microwatt_wrapper__rst));
        vcdp->chgBit(c+2681,((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[8U] 
                                     >> 2U) & (~ (IData)(vlTOPp->sim__DOT__microwatt_dbus_ack))))));
        vcdp->chgBit(c+2689,((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1935_[3U] 
                                     >> 2U) & (~ (IData)(vlTOPp->sim__DOT__microwatt_ibus_ack))))));
        vcdp->chgBit(c+2697,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__core_rst));
        vcdp->chgBit(c+2705,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___80_));
        vcdp->chgBit(c+2713,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_stall));
        vcdp->chgArray(c+2721,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_loadstore1),68);
        vcdp->chgArray(c+2745,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_to_mmu),67);
        vcdp->chgBit(c+2769,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT___108_));
        vcdp->chgArray(c+2777,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1),65);
        vcdp->chgBit(c+2801,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_flush));
        vcdp->chgBit(c+2809,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_stall_in));
        vcdp->chgBit(c+2817,((1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1843_)))));
        vcdp->chgArray(c+2825,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_to_decode1),99);
        vcdp->chgArray(c+2857,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_dcache),132);
        vcdp->chgArray(c+2897,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_to_icache),131);
        vcdp->chgQuad(c+2937,((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl[4U])))),64);
        vcdp->chgBit(c+2953,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dbg));
        vcdp->chgBit(c+2961,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dcache));
        vcdp->chgBit(c+2969,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec1));
        vcdp->chgBit(c+2977,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_dec2));
        vcdp->chgBit(c+2985,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_ex1));
        vcdp->chgBit(c+2993,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1));
        vcdp->chgBit(c+3001,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_icache));
        vcdp->chgBit(c+3009,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_ls1));
        vcdp->chgArray(c+3017,(vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in),66);
        vcdp->chgArray(c+3041,(vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in),66);
        vcdp->chgBus(c+3065,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__crs),32);
        vcdp->chgBus(c+3073,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__cr_file_0__DOT__xerc),5);
        vcdp->chgBit(c+3081,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__access_ok));
        vcdp->chgBit(c+3089,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0971_) 
                              & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                     >> 1U)) & ((~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__reservation)) 
                                                | ((VL_ULL(0x3ffffffffffffff) 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[2U])) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U])) 
                                                             >> 0xdU)))) 
                                                   != 
                                                   (VL_ULL(0x3ffffffffffffff) 
                                                    & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__reservation 
                                                       >> 1U))))))));
        vcdp->chgBit(c+3097,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__clear_rsrv));
        vcdp->chgBit(c+3105,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3113,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (1U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3121,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0xaU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0xdU)))))));
        vcdp->chgBit(c+3129,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0xbU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0xdU)))))));
        vcdp->chgBit(c+3137,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0xcU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0xdU)))))));
        vcdp->chgBit(c+3145,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0xdU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0xdU)))))));
        vcdp->chgBit(c+3153,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0xeU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0xdU)))))));
        vcdp->chgBit(c+3161,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0xfU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0xdU)))))));
        vcdp->chgBit(c+3169,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x10U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3177,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x11U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3185,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x12U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3193,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x13U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3201,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (2U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3209,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x14U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3217,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x15U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
    }
}

void Vsim::traceChgThis__7(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3225,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x16U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3233,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x17U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3241,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x18U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3249,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x19U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3257,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x1aU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3265,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x1bU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3273,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x1cU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3281,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x1dU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3289,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (3U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3297,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x1eU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3305,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x1fU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3313,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x20U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3321,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x21U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3329,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x22U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3337,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x23U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3345,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x24U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3353,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x25U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3361,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x26U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3369,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x27U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3377,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (4U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3385,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x28U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3393,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x29U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3401,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x2aU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3409,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x2bU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3417,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x2cU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3425,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x2dU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3433,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x2eU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3441,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x2fU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3449,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x30U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3457,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x31U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3465,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (5U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3473,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x32U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3481,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x33U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3489,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x34U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
    }
}

void Vsim::traceChgThis__9(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3497,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x35U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3505,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x36U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3513,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x37U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3521,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x38U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3529,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x39U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3537,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x3aU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3545,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x3bU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3553,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (6U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3561,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x3cU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3569,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x3dU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3577,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x3eU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3585,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (0x3fU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0x13U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0xdU)))))));
        vcdp->chgBit(c+3593,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (7U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3601,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (8U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3609,((((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op)) 
                               | (6U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op))) 
                              & (9U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0x13U) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0xdU)))))));
        vcdp->chgBit(c+3617,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+3625,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (1U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+3633,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0xaU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0x13U)))))));
        vcdp->chgBit(c+3641,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0xbU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0x13U)))))));
        vcdp->chgBit(c+3649,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0xcU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0x13U)))))));
        vcdp->chgBit(c+3657,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0xdU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0x13U)))))));
        vcdp->chgBit(c+3665,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0xeU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0x13U)))))));
        vcdp->chgBit(c+3673,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0xfU == (0x3fU & (
                                                   (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                      >> 0x13U)))))));
        vcdp->chgBit(c+3681,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x10U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3689,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x11U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3697,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x12U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3705,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x13U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3713,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (2U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+3721,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x14U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3729,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x15U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3737,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x16U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3745,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x17U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3753,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x18U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3761,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x19U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3769,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x1aU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3777,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x1bU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3785,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x1cU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3793,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x1dU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3801,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (3U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+3809,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x1eU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3817,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x1fU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3825,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x20U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3833,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x21U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3841,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x22U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3849,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x23U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3857,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x24U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
    }
}

void Vsim::traceChgThis__11(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3865,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x25U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3873,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x26U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3881,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x27U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3889,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (4U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+3897,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x28U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3905,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x29U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3913,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x2aU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3921,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x2bU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3929,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x2cU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3937,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x2dU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3945,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x2eU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3953,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x2fU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3961,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x30U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3969,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x31U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3977,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (5U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+3985,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x32U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+3993,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x33U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4001,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x34U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4009,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x35U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4017,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x36U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4025,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x37U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4033,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x38U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4041,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x39U == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4049,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x3aU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4057,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x3bU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4065,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (6U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+4073,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x3cU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4081,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x3dU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4089,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x3eU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4097,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (0x3fU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                             << 0xdU) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                               >> 0x13U)))))));
        vcdp->chgBit(c+4105,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (7U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+4113,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (8U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBit(c+4121,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit) 
                              & (9U == (0x3fU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                    >> 0x13U)))))));
        vcdp->chgBus(c+4129,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__perm_attr),6);
        vcdp->chgBit(c+4137,((1U & (((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                      >> 6U) | (~ ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__perm_attr) 
                                                   >> 3U))) 
                                    & (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__perm_attr) 
                                        >> 5U) | ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                   >> 1U) 
                                                  & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__perm_attr) 
                                                     >> 4U)))))));
        vcdp->chgQuad(c+4145,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__pte),64);
        vcdp->chgBit(c+4161,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0_valid));
        vcdp->chgQuad(c+4169,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__ra),56);
        vcdp->chgBit(c+4185,((1U & ((0x80000000U & 
                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                                     ? (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                                           >> 4U)) : 
                                    (((1U == (3U & 
                                              ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                << 4U) 
                                               | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                  >> 0x1cU)))) 
                                      & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U]) 
                                     & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                           >> 0x19U)))))));
        vcdp->chgBus(c+4193,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Ewr_addr),9);
        vcdp->chgQuad(c+4201,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Ewr_data),64);
        vcdp->chgBus(c+4217,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A0__02Ewr_sel_m),8);
        vcdp->chgBit(c+4225,((1U & ((0x80000000U & 
                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U])
                                     ? (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1234_[4U] 
                                        >> 4U) : ((
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                                         << 4U) 
                                                        | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                                           >> 0x1cU)))) 
                                                   & vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_data_in[2U]) 
                                                  & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[9U] 
                                                     >> 0x19U))))));
        vcdp->chgBus(c+4233,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Ewr_addr),9);
        vcdp->chgQuad(c+4241,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Ewr_data),64);
        vcdp->chgBus(c+4257,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__rams__03A1__02Ewr_sel_m),8);
        vcdp->chgBit(c+4265,((1U & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__perm_attr) 
                                    & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                        >> 1U) | ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__perm_attr) 
                                                  >> 1U))))));
        vcdp->chgBit(c+4273,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__replace_way));
        vcdp->chgBit(c+4281,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way));
        vcdp->chgBus(c+4289,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_op),3);
        vcdp->chgBit(c+4297,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_same_tag));
        vcdp->chgBit(c+4305,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0971_) 
                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                 >> 1U))));
        vcdp->chgBit(c+4313,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__tlb_hit));
        vcdp->chgBit(c+4321,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___0534_));
        vcdp->chgBit(c+4329,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__use_forward1_next));
        vcdp->chgBit(c+4337,(((((0x1ffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[5U] 
                                            << 0x16U) 
                                           | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                              >> 0xaU))) 
                                == (0x1ffU & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[1U] 
                                               << 0x16U) 
                                              | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__r0[0U] 
                                                 >> 0xaU)))) 
                               & ((1U & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                         >> 9U)) == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__req_hit_way))) 
                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT___1235_[4U] 
                                 >> 8U))));
        vcdp->chgBit(c+4345,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__dcache_0__DOT__valid_ra));
        vcdp->chgBus(c+4353,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__log_dmi_addr),32);
        vcdp->chgQuad(c+4361,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT__log_dmi_data),64);
        vcdp->chgBit(c+4377,((1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__debug_0__DOT___81_)))));
        vcdp->chgBit(c+4385,((1U & ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_0__DOT__r[4U] 
                                     >> 1U) | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___81_)))));
        vcdp->chgBit(c+4393,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__update_gpr_write_valid));
        vcdp->chgBus(c+4401,((0x3fU & ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___54_) 
                                       >> 1U))),6);
        vcdp->chgBit(c+4409,((1U & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT___54_))));
        vcdp->chgBus(c+4417,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__r_int),5);
        vcdp->chgBus(c+4425,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__cr_hazard0__DOT__r),4);
        vcdp->chgBus(c+4433,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard0__DOT__r),30);
        vcdp->chgBus(c+4441,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard1__DOT__r),30);
        vcdp->chgBus(c+4449,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode2_0__DOT__control_0__DOT__gpr_hazard2__DOT__r),30);
        vcdp->chgQuad(c+4457,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__a_in),64);
        vcdp->chgQuad(c+4473,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in),64);
    }
}

void Vsim::traceChgThis__13(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+4489,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in),64);
        vcdp->chgQuad(c+4505,(((0U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___36_))
                                ? (((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                         >> 0x12U))))) 
                                    << 6U) | (QData)((IData)(
                                                             (0x20U 
                                                              & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                                 >> 0xdU)))))
                                : ((0x80000U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r)
                                    ? (((QData)((IData)(
                                                        (3U 
                                                         & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                            >> 0x10U)))) 
                                        << 4U) | (QData)((IData)(
                                                                 (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___32_) 
                                                                   << 2U) 
                                                                  | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___44_)))))
                                    : (((QData)((IData)(
                                                        (1U 
                                                         & ((~ 
                                                             (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                              >> 0x11U)) 
                                                            & (~ 
                                                               (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                                >> 0x12U)))))) 
                                        << 5U) | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (~ 
                                                                     ((0x10U 
                                                                       & (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT__r 
                                                                          >> 0xcU)) 
                                                                      | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___32_) 
                                                                          << 2U) 
                                                                         | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__countzero_0__DOT___44_))))))))))),64);
        vcdp->chgBus(c+4521,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__cr_in),32);
        vcdp->chgArray(c+4529,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__ctrl),321);
        vcdp->chgBit(c+4617,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__irq_valid_log));
        vcdp->chgQuad(c+4625,((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___130_)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___129_) 
                                                              << 0x10U) 
                                                             | (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___128_) 
                                                                 << 8U) 
                                                                | (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT___127_))))))),64);
        vcdp->chgArray(c+4641,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_to_x),130);
        vcdp->chgBit(c+4681,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0168_));
        vcdp->chgBit(c+4689,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT___0171_));
        vcdp->chgBit(c+4697,(((3U == (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__output_mode)) 
                              & (0U != (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__c_in 
                                        & (~ vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml))))));
        vcdp->chgQuad(c+4705,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT___305_),64);
        vcdp->chgBit(c+4721,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__did_ovf));
        vcdp->chgQuad(c+4729,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__did_ovf)
                                ? VL_ULL(0) : (((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_32bit) 
                                                & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__is_modulus)))
                                                ? (QData)((IData)(
                                                                  vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[0U]))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult[0U])))))),64);
        vcdp->chgQuad(c+4745,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__result),64);
        vcdp->chgArray(c+4761,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__divider_0__DOT__sresult),65);
        vcdp->chgBit(c+4785,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT__par0));
        vcdp->chgBit(c+4793,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__logical_0__DOT__par1));
        vcdp->chgArray(c+4801,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__m),131);
        vcdp->chgArray(c+4841,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__multiply_0__DOT__r),524);
        vcdp->chgBus(c+4977,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__mb),7);
        vcdp->chgBus(c+4985,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__me),7);
        vcdp->chgQuad(c+4993,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__ml),64);
        vcdp->chgBus(c+5009,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__output_mode),2);
        vcdp->chgQuad(c+5017,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot),64);
        vcdp->chgQuad(c+5033,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot1),64);
        vcdp->chgQuad(c+5049,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot2),64);
        vcdp->chgBus(c+5065,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__rotator_0__DOT__rot_count),6);
        vcdp->chgBus(c+5073,((0x7fU & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__b_in))),7);
        vcdp->chgBus(c+5081,(((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__rst_fetch1)
                               ? 0U : ((0x80000000U 
                                        & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__execute1_0__DOT__r[5U])
                                        ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)
                                        : ((1U & vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__decode1_to_fetch1[0U])
                                            ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)
                                            : ((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_stall_in)
                                                ? (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r_int)
                                                : (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT___21_)))))),2);
        vcdp->chgBit(c+5089,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__access_ok));
        vcdp->chgBit(c+5097,((1U & ((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                        >> 1U)) | (IData)(
                                                          (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1940_ 
                                                           >> 3U))))));
        vcdp->chgBit(c+5105,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5113,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (1U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5121,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0xaU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                             << 0x15U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                               >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5129,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0xbU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                             << 0x15U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                               >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5137,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0xcU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                             << 0x15U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                               >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5145,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0xdU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                             << 0x15U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                               >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5153,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0xeU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                             << 0x15U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                               >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5161,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0xfU == (0x3fU & 
                                           ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                             << 0x15U) 
                                            | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                               >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5169,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x10U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5177,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x11U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5185,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x12U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5193,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x13U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5201,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (2U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5209,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x14U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5217,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x15U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5225,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x16U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5233,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x17U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5241,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x18U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5249,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x19U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5257,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x1aU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5265,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x1bU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5273,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x1cU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5281,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x1dU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5289,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (3U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5297,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x1eU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5305,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x1fU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5313,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x20U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5321,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x21U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5329,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x22U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5337,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x23U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
    }
}

void Vsim::traceChgThis__15(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5345,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x24U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5353,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x25U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5361,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x26U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5369,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x27U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5377,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (4U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5385,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x28U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5393,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x29U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5401,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x2aU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5409,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x2bU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5417,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x2cU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5425,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x2dU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5433,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x2eU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5441,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x2fU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5449,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x30U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5457,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x31U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5465,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (5U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5473,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x32U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5481,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x33U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5489,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x34U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5497,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x35U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5505,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x36U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5513,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x37U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5521,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x38U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5529,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x39U == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5537,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x3aU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5545,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x3bU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5553,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (6U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5561,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x3cU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5569,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x3dU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5577,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x3eU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5585,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (0x3fU == (0x3fU & 
                                            ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                              << 0x15U) 
                                             | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5593,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (7U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5601,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (8U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5609,((((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit) 
                               & (9U == (0x3fU & ((
                                                   vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[1U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                                     >> 0xbU))))) 
                              & (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit))));
        vcdp->chgBit(c+5617,((1U & (((~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                         >> 1U)) | (IData)(
                                                           (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___1940_ 
                                                            >> 3U))) 
                                    & (~ (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__fetch1_0__DOT__r[0U] 
                                          >> 2U))))));
        vcdp->chgBit(c+5625,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__ra_valid));
        vcdp->chgBit(c+5633,((1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0463_)))));
        vcdp->chgBit(c+5641,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0495_));
        vcdp->chgBit(c+5649,((1U & (~ (IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0526_)))));
        vcdp->chgBit(c+5657,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0558_));
        vcdp->chgQuad(c+5665,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__real_addr),56);
        vcdp->chgBit(c+5681,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__replace_way));
        vcdp->chgBit(c+5689,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_hit_way));
        vcdp->chgBit(c+5697,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_hit));
        vcdp->chgBit(c+5705,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__req_is_miss));
        vcdp->chgBus(c+5713,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__tlb_req_index),6);
        vcdp->chgBit(c+5721,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT__use_previous));
        vcdp->chgQuad(c+5729,((((QData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->sim__DOT__microwatt_wrapper__DOT____Vcellinp__microwatt_core__wishbone_insn_in[0U])))),64);
        vcdp->chgBus(c+5745,((0xffU & VL_NEGATE_I((IData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0495_))))),8);
        vcdp->chgBus(c+5753,((0xffU & VL_NEGATE_I((IData)((IData)(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__icache_0__DOT___0558_))))),8);
        vcdp->chgBus(c+5761,(vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__mmu_0__DOT__addrsh),16);
    }
}
