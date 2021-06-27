#ifndef __SIM_CORE_H_
#define __SIM_CORE_H_
#include "pads.h"

struct pad_s sim_trace[] = {
    { (char*)"sim_trace", 1, NULL },
    { NULL, 0, NULL }
};

struct pad_s serial[] = {
    { (char*)"source_valid", 1, NULL },
    { (char*)"source_ready", 1, NULL },
    { (char*)"source_data", 8, NULL },
    { (char*)"sink_valid", 1, NULL },
    { (char*)"sink_ready", 1, NULL },
    { (char*)"sink_data", 8, NULL },
    { NULL, 0, NULL }
};

struct pad_s sys_clk[] = {
    { (char*)"sys_clk", 1, NULL },
    { NULL, 0, NULL }
};

struct pad_s user_led0[] = {
    { (char*)"user_led", 1, NULL },
    { NULL, 0, NULL }
};

struct pad_s user_sw0[] = {
    { (char*)"user_sw", 1, NULL },
    { NULL, 0, NULL }
};

struct pad_s user_btn0[] = {
    { (char*)"user_btn", 1, NULL },
    { NULL, 0, NULL }
};

struct pad_s user_rgb_led0[] = {
    { (char*)"r", 1, NULL },
    { (char*)"g", 1, NULL },
    { (char*)"b", 1, NULL },
    { NULL, 0, NULL }
};

#ifndef __cplusplus
void litex_sim_init(void **out);
#endif

#endif /* __SIM_CORE_H_ */
