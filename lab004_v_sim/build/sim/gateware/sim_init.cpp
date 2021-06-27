#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vsim.h"
#include <verilated.h>
#include "sim_header.h"

extern "C" void litex_sim_init_tracer(void *vsim, long start, long end);
extern "C" void litex_sim_tracer_dump();

extern "C" void litex_sim_dump()
{
}

extern "C" void litex_sim_init(void **out)
{
    Vsim *sim;

    sim = new Vsim;

    litex_sim_init_tracer(sim, 0, -1);

    sim_trace[0].signal = &sim->sim_trace;
    litex_sim_register_pads(sim_trace, (char*)"sim_trace", 0);

    serial[0].signal = &sim->serial_source_valid;
    serial[1].signal = &sim->serial_source_ready;
    serial[2].signal = &sim->serial_source_data;
    serial[3].signal = &sim->serial_sink_valid;
    serial[4].signal = &sim->serial_sink_ready;
    serial[5].signal = &sim->serial_sink_data;
    litex_sim_register_pads(serial, (char*)"serial", 0);

    sys_clk[0].signal = &sim->sys_clk;
    litex_sim_register_pads(sys_clk, (char*)"sys_clk", 0);

    user_led0[0].signal = &sim->user_led;
    litex_sim_register_pads(user_led0, (char*)"user_led", 0);

    user_sw0[0].signal = &sim->user_sw;
    litex_sim_register_pads(user_sw0, (char*)"user_sw", 0);

    user_btn0[0].signal = &sim->user_btn;
    litex_sim_register_pads(user_btn0, (char*)"user_btn", 0);

    user_rgb_led0[0].signal = &sim->user_rgb_led0_r;
    user_rgb_led0[1].signal = &sim->user_rgb_led0_g;
    user_rgb_led0[2].signal = &sim->user_rgb_led0_b;
    litex_sim_register_pads(user_rgb_led0, (char*)"user_rgb_led", 0);

    *out=sim;
}
