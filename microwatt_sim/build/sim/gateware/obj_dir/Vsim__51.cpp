// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

void Vsim::_eval(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_eval\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__224(vlSymsp);
        vlTOPp->_sequent__TOP__225(vlSymsp);
        vlTOPp->_sequent__TOP__226(vlSymsp);
        vlTOPp->_sequent__TOP__227(vlSymsp);
        vlTOPp->_sequent__TOP__228(vlSymsp);
        vlTOPp->_sequent__TOP__229(vlSymsp);
        vlTOPp->_sequent__TOP__230(vlSymsp);
        vlTOPp->_sequent__TOP__231(vlSymsp);
        vlTOPp->_sequent__TOP__232(vlSymsp);
        vlTOPp->_sequent__TOP__233(vlSymsp);
        vlTOPp->_sequent__TOP__235(vlSymsp);
        vlTOPp->_sequent__TOP__236(vlSymsp);
        vlTOPp->_sequent__TOP__237(vlSymsp);
        vlTOPp->_sequent__TOP__238(vlSymsp);
        vlTOPp->_settle__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__240(vlSymsp);
        vlTOPp->_sequent__TOP__241(vlSymsp);
        vlTOPp->_sequent__TOP__242(vlSymsp);
        vlTOPp->_sequent__TOP__243(vlSymsp);
        vlTOPp->_sequent__TOP__244(vlSymsp);
        vlTOPp->_sequent__TOP__245(vlSymsp);
        vlTOPp->_sequent__TOP__246(vlSymsp);
        vlTOPp->_settle__TOP__16(vlSymsp);
        vlTOPp->_settle__TOP__17(vlSymsp);
        vlTOPp->_settle__TOP__18(vlSymsp);
        vlTOPp->_settle__TOP__19(vlSymsp);
        vlTOPp->_settle__TOP__20(vlSymsp);
        vlTOPp->_settle__TOP__21(vlSymsp);
        vlTOPp->_settle__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__254(vlSymsp);
        vlTOPp->_sequent__TOP__255(vlSymsp);
        vlTOPp->_sequent__TOP__256(vlSymsp);
        vlTOPp->_sequent__TOP__257(vlSymsp);
        vlTOPp->_sequent__TOP__258(vlSymsp);
        vlTOPp->_sequent__TOP__259(vlSymsp);
        vlTOPp->_sequent__TOP__260(vlSymsp);
        vlTOPp->_sequent__TOP__261(vlSymsp);
        vlTOPp->_sequent__TOP__262(vlSymsp);
        vlTOPp->_sequent__TOP__263(vlSymsp);
        vlTOPp->_sequent__TOP__264(vlSymsp);
        vlTOPp->_sequent__TOP__265(vlSymsp);
        vlTOPp->_sequent__TOP__266(vlSymsp);
        vlTOPp->_sequent__TOP__267(vlSymsp);
        vlTOPp->_sequent__TOP__268(vlSymsp);
        vlTOPp->_sequent__TOP__269(vlSymsp);
        vlTOPp->_sequent__TOP__270(vlSymsp);
        vlTOPp->_sequent__TOP__271(vlSymsp);
        vlTOPp->_settle__TOP__32(vlSymsp);
        vlTOPp->_settle__TOP__33(vlSymsp);
        vlTOPp->_sequent__TOP__274(vlSymsp);
        vlTOPp->_sequent__TOP__275(vlSymsp);
        vlTOPp->_settle__TOP__36(vlSymsp);
        vlTOPp->_sequent__TOP__277(vlSymsp);
        vlTOPp->_sequent__TOP__278(vlSymsp);
        vlTOPp->_sequent__TOP__279(vlSymsp);
        vlTOPp->_sequent__TOP__280(vlSymsp);
        vlTOPp->_sequent__TOP__281(vlSymsp);
        vlTOPp->_sequent__TOP__282(vlSymsp);
        vlTOPp->_settle__TOP__49(vlSymsp);
        vlTOPp->_settle__TOP__50(vlSymsp);
        vlTOPp->_settle__TOP__51(vlSymsp);
        vlTOPp->_settle__TOP__52(vlSymsp);
        vlTOPp->_settle__TOP__53(vlSymsp);
        vlTOPp->_settle__TOP__54(vlSymsp);
        vlTOPp->_settle__TOP__55(vlSymsp);
        vlTOPp->_sequent__TOP__290(vlSymsp);
        vlTOPp->_sequent__TOP__291(vlSymsp);
        vlTOPp->_settle__TOP__95(vlSymsp);
        vlTOPp->_settle__TOP__96(vlSymsp);
        vlTOPp->_settle__TOP__97(vlSymsp);
        vlTOPp->_sequent__TOP__295(vlSymsp);
        vlTOPp->_sequent__TOP__296(vlSymsp);
        vlTOPp->_sequent__TOP__297(vlSymsp);
        vlTOPp->_sequent__TOP__298(vlSymsp);
        vlTOPp->_sequent__TOP__299(vlSymsp);
        vlTOPp->_sequent__TOP__300(vlSymsp);
        vlTOPp->_sequent__TOP__301(vlSymsp);
        vlTOPp->_sequent__TOP__302(vlSymsp);
        vlTOPp->_sequent__TOP__303(vlSymsp);
        vlTOPp->_sequent__TOP__304(vlSymsp);
        vlTOPp->_sequent__TOP__305(vlSymsp);
        vlTOPp->_sequent__TOP__306(vlSymsp);
        vlTOPp->_sequent__TOP__307(vlSymsp);
        vlTOPp->_sequent__TOP__308(vlSymsp);
        vlTOPp->_settle__TOP__122(vlSymsp);
        vlTOPp->_sequent__TOP__310(vlSymsp);
        vlTOPp->_sequent__TOP__311(vlSymsp);
        vlTOPp->_sequent__TOP__312(vlSymsp);
        vlTOPp->_sequent__TOP__313(vlSymsp);
        vlTOPp->_sequent__TOP__314(vlSymsp);
        vlTOPp->_sequent__TOP__315(vlSymsp);
        vlTOPp->_settle__TOP__58(vlSymsp);
        vlTOPp->_settle__TOP__59(vlSymsp);
        vlTOPp->_settle__TOP__60(vlSymsp);
        vlTOPp->_settle__TOP__61(vlSymsp);
        vlTOPp->_settle__TOP__62(vlSymsp);
        vlTOPp->_settle__TOP__63(vlSymsp);
        vlTOPp->_settle__TOP__64(vlSymsp);
        vlTOPp->_settle__TOP__65(vlSymsp);
        vlTOPp->_settle__TOP__66(vlSymsp);
        vlTOPp->_settle__TOP__67(vlSymsp);
        vlTOPp->_settle__TOP__68(vlSymsp);
        vlTOPp->_settle__TOP__69(vlSymsp);
        vlTOPp->_settle__TOP__70(vlSymsp);
        vlTOPp->_sequent__TOP__329(vlSymsp);
        vlTOPp->_settle__TOP__148(vlSymsp);
        vlTOPp->_sequent__TOP__331(vlSymsp);
        vlTOPp->_settle__TOP__126(vlSymsp);
        vlTOPp->_sequent__TOP__333(vlSymsp);
        vlTOPp->_settle__TOP__114(vlSymsp);
        vlTOPp->_sequent__TOP__335(vlSymsp);
        vlTOPp->_sequent__TOP__336(vlSymsp);
        vlTOPp->_sequent__TOP__337(vlSymsp);
        vlTOPp->_sequent__TOP__338(vlSymsp);
        vlTOPp->_settle__TOP__80(vlSymsp);
        vlTOPp->_settle__TOP__81(vlSymsp);
        vlTOPp->_settle__TOP__82(vlSymsp);
        vlTOPp->_settle__TOP__83(vlSymsp);
        vlTOPp->_settle__TOP__84(vlSymsp);
        vlTOPp->_settle__TOP__85(vlSymsp);
        vlTOPp->_settle__TOP__86(vlSymsp);
        vlTOPp->_settle__TOP__87(vlSymsp);
        vlTOPp->_settle__TOP__88(vlSymsp);
        vlTOPp->_settle__TOP__89(vlSymsp);
        vlTOPp->_sequent__TOP__349(vlSymsp);
        vlTOPp->_sequent__TOP__350(vlSymsp);
        vlTOPp->_sequent__TOP__351(vlSymsp);
        vlTOPp->_sequent__TOP__352(vlSymsp);
        vlTOPp->_sequent__TOP__353(vlSymsp);
        vlTOPp->_sequent__TOP__354(vlSymsp);
        vlTOPp->_sequent__TOP__355(vlSymsp);
        vlTOPp->_sequent__TOP__356(vlSymsp);
        vlTOPp->_sequent__TOP__357(vlSymsp);
        vlTOPp->_sequent__TOP__358(vlSymsp);
        vlTOPp->_settle__TOP__105(vlSymsp);
        vlTOPp->_sequent__TOP__360(vlSymsp);
        vlTOPp->_sequent__TOP__361(vlSymsp);
        vlTOPp->_sequent__TOP__362(vlSymsp);
        vlTOPp->_sequent__TOP__363(vlSymsp);
        vlTOPp->_sequent__TOP__364(vlSymsp);
        vlTOPp->_sequent__TOP__365(vlSymsp);
        vlTOPp->_sequent__TOP__366(vlSymsp);
        vlTOPp->_sequent__TOP__367(vlSymsp);
        vlTOPp->_sequent__TOP__368(vlSymsp);
        vlTOPp->_sequent__TOP__369(vlSymsp);
        vlTOPp->_sequent__TOP__370(vlSymsp);
        vlTOPp->_sequent__TOP__371(vlSymsp);
        vlTOPp->_settle__TOP__175(vlSymsp);
        vlTOPp->_settle__TOP__176(vlSymsp);
        vlTOPp->_settle__TOP__177(vlSymsp);
        vlTOPp->_settle__TOP__178(vlSymsp);
        vlTOPp->_settle__TOP__179(vlSymsp);
        vlTOPp->_settle__TOP__180(vlSymsp);
        vlTOPp->_settle__TOP__181(vlSymsp);
        vlTOPp->_settle__TOP__182(vlSymsp);
        vlTOPp->_settle__TOP__183(vlSymsp);
        vlTOPp->_settle__TOP__184(vlSymsp);
        vlTOPp->_settle__TOP__185(vlSymsp);
        vlTOPp->_sequent__TOP__383(vlSymsp);
        vlTOPp->_sequent__TOP__384(vlSymsp);
        vlTOPp->_sequent__TOP__385(vlSymsp);
        vlTOPp->_sequent__TOP__386(vlSymsp);
        vlTOPp->_sequent__TOP__387(vlSymsp);
        vlTOPp->_sequent__TOP__388(vlSymsp);
        vlTOPp->_sequent__TOP__389(vlSymsp);
        vlTOPp->_sequent__TOP__390(vlSymsp);
        vlTOPp->_sequent__TOP__391(vlSymsp);
        vlTOPp->_sequent__TOP__392(vlSymsp);
        vlTOPp->_sequent__TOP__393(vlSymsp);
        vlTOPp->_settle__TOP__155(vlSymsp);
        vlTOPp->_settle__TOP__156(vlSymsp);
        vlTOPp->_settle__TOP__157(vlSymsp);
        vlTOPp->_settle__TOP__158(vlSymsp);
        vlTOPp->_settle__TOP__159(vlSymsp);
        vlTOPp->_sequent__TOP__399(vlSymsp);
        vlTOPp->_settle__TOP__160(vlSymsp);
        vlTOPp->_settle__TOP__161(vlSymsp);
        vlTOPp->_settle__TOP__162(vlSymsp);
        vlTOPp->_settle__TOP__163(vlSymsp);
        vlTOPp->_settle__TOP__164(vlSymsp);
        vlTOPp->_sequent__TOP__405(vlSymsp);
    }
    vlTOPp->_combo__TOP__406(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__407(vlSymsp);
    vlTOPp->_combo__TOP__408(vlSymsp);
    vlTOPp->_settle__TOP__134(vlSymsp);
    vlTOPp->_combo__TOP__410(vlSymsp);
    vlTOPp->_combo__TOP__411(vlSymsp);
    vlTOPp->_settle__TOP__136(vlSymsp);
    vlTOPp->_settle__TOP__137(vlSymsp);
    vlTOPp->_settle__TOP__138(vlSymsp);
    vlTOPp->_settle__TOP__139(vlSymsp);
    vlTOPp->_settle__TOP__140(vlSymsp);
    vlTOPp->_settle__TOP__141(vlSymsp);
    vlTOPp->_settle__TOP__142(vlSymsp);
    vlTOPp->_combo__TOP__419(vlSymsp);
    vlTOPp->_combo__TOP__420(vlSymsp);
    vlTOPp->_combo__TOP__421(vlSymsp);
    vlTOPp->_combo__TOP__422(vlSymsp);
    vlTOPp->_combo__TOP__423(vlSymsp);
    vlTOPp->_combo__TOP__424(vlSymsp);
    vlTOPp->_combo__TOP__425(vlSymsp);
    vlTOPp->_settle__TOP__200(vlSymsp);
    vlTOPp->_settle__TOP__201(vlSymsp);
    vlTOPp->_settle__TOP__202(vlSymsp);
    vlTOPp->_settle__TOP__203(vlSymsp);
    vlTOPp->_settle__TOP__204(vlSymsp);
    vlTOPp->_settle__TOP__205(vlSymsp);
    vlTOPp->_settle__TOP__206(vlSymsp);
    vlTOPp->_settle__TOP__207(vlSymsp);
    vlTOPp->_settle__TOP__208(vlSymsp);
    vlTOPp->_settle__TOP__209(vlSymsp);
    vlTOPp->_settle__TOP__210(vlSymsp);
    vlTOPp->_settle__TOP__211(vlSymsp);
    vlTOPp->_settle__TOP__212(vlSymsp);
    vlTOPp->_settle__TOP__213(vlSymsp);
    vlTOPp->_settle__TOP__214(vlSymsp);
    vlTOPp->_settle__TOP__215(vlSymsp);
    vlTOPp->_settle__TOP__216(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

VL_INLINE_OPT QData Vsim::_change_request(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_change_request\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsim::_change_request_1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_change_request_1\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4])
         | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4])|| (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5]));
    VL_DEBUG_IF( if(__req && ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4]))) VL_DBG_MSGF("        CHANGE: /home/varun/coding/projects/openpower/litex/litex/litex/soc/cores/cpu/microwatt/microwatt.v:599: sim.microwatt_wrapper.microwatt_core.loadstore1_to_mmu\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4]) | (vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5] ^ vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5]))) VL_DBG_MSGF("        CHANGE: /home/varun/coding/projects/openpower/litex/litex/litex/soc/cores/cpu/microwatt/microwatt.v:26819: sim.microwatt_wrapper.microwatt_core.register_file_0._15_\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[0U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[1U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[2U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[3U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__loadstore1_to_mmu[4U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[0U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[1U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[2U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[3U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[4U];
    vlTOPp->__Vchglast__TOP__sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5U] 
        = vlTOPp->sim__DOT__microwatt_wrapper__DOT__microwatt_core__DOT__register_file_0__DOT___15_[5U];
    return __req;
}

#ifdef VL_DEBUG
void Vsim::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((serial_source_ready & 0xfeU))) {
        Verilated::overWidthError("serial_source_ready");}
    if (VL_UNLIKELY((serial_sink_valid & 0xfeU))) {
        Verilated::overWidthError("serial_sink_valid");}
    if (VL_UNLIKELY((sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
}
#endif  // VL_DEBUG
