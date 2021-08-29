################################################################################
# IO constraints
################################################################################
# serial:0.tx
set_property LOC A9 [get_ports {serial_tx}]
set_property IOSTANDARD LVCMOS33 [get_ports {serial_tx}]

# serial:0.rx
set_property LOC D10 [get_ports {serial_rx}]
set_property IOSTANDARD LVCMOS33 [get_ports {serial_rx}]

# clk100:0
set_property LOC E3 [get_ports {clk100}]
set_property IOSTANDARD LVCMOS33 [get_ports {clk100}]

# cpu_reset:0
set_property LOC C2 [get_ports {cpu_reset}]
set_property IOSTANDARD LVCMOS33 [get_ports {cpu_reset}]

# user_led:0
set_property LOC H5 [get_ports {user_led0}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_led0}]

# user_led:1
set_property LOC J5 [get_ports {user_led1}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_led1}]

# user_led:2
set_property LOC T9 [get_ports {user_led2}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_led2}]

# user_led:3
set_property LOC T10 [get_ports {user_led3}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_led3}]

# user_sw:0
set_property LOC A8 [get_ports {user_sw0}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_sw0}]

# user_sw:1
set_property LOC C11 [get_ports {user_sw1}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_sw1}]

# user_sw:2
set_property LOC C10 [get_ports {user_sw2}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_sw2}]

# user_sw:3
set_property LOC A10 [get_ports {user_sw3}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_sw3}]

# user_btn:0
set_property LOC D9 [get_ports {user_btn0}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_btn0}]

# user_btn:1
set_property LOC C9 [get_ports {user_btn1}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_btn1}]

# user_btn:2
set_property LOC B9 [get_ports {user_btn2}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_btn2}]

# user_btn:3
set_property LOC B8 [get_ports {user_btn3}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_btn3}]

# user_rgb_led:0.r
set_property LOC G6 [get_ports {user_rgb_led0_r}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_rgb_led0_r}]

# user_rgb_led:0.g
set_property LOC F6 [get_ports {user_rgb_led0_g}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_rgb_led0_g}]

# user_rgb_led:0.b
set_property LOC E1 [get_ports {user_rgb_led0_b}]
set_property IOSTANDARD LVCMOS33 [get_ports {user_rgb_led0_b}]

################################################################################
# Design constraints
################################################################################

################################################################################
# Clock constraints
################################################################################


################################################################################
# False path constraints
################################################################################


set_false_path -quiet -through [get_nets -hierarchical -filter {mr_ff == TRUE}]

set_false_path -quiet -to [get_pins -filter {REF_PIN_NAME == PRE} -of_objects [get_cells -hierarchical -filter {ars_ff1 == TRUE || ars_ff2 == TRUE}]]

set_max_delay 2 -quiet -from [get_pins -filter {REF_PIN_NAME == C} -of_objects [get_cells -hierarchical -filter {ars_ff1 == TRUE}]] -to [get_pins -filter {REF_PIN_NAME == D} -of_objects [get_cells -hierarchical -filter {ars_ff2 == TRUE}]]