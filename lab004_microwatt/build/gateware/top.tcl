
# Create Project

create_project -force -name top -part xc7a100t-csg324-1
set_msg_config -id {Common 17-55} -new_severity {Warning}

# Add Sources

read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/decode_types.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/decode_types.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/wishbone_types.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/wishbone_types.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/utils.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/utils.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/common.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/common.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/helpers.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/helpers.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/fetch1.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/fetch1.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/cache_ram.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/cache_ram.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/plru.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/plru.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/dcache.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/dcache.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/icache.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/icache.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/insn_helpers.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/insn_helpers.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/decode1.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/decode1.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/gpr_hazard.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/gpr_hazard.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/cr_hazard.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/cr_hazard.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/control.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/control.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/decode2.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/decode2.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/register_file.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/register_file.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/crhelpers.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/crhelpers.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/cr_file.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/cr_file.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/ppc_fx_insns.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/ppc_fx_insns.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/logical.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/logical.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/rotator.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/rotator.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/countzero.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/countzero.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/execute1.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/execute1.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/loadstore1.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/loadstore1.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/multiply.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/multiply.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/divider.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/divider.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/writeback.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/writeback.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/mmu.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/mmu.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/core_debug.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/core_debug.vhdl}]
read_vhdl -vhdl2008 {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/core.vhdl}
set_property library work [get_files {/tmp/pythondata-cpu-microwatt/pythondata_cpu_microwatt/vhdl/core.vhdl}]
read_vhdl -vhdl2008 {/tmp/litex/litex/soc/cores/cpu/microwatt/microwatt_wrapper.vhdl}
set_property library work [get_files {/tmp/litex/litex/soc/cores/cpu/microwatt/microwatt_wrapper.vhdl}]
read_verilog {/home/varun/coding/projects/openpower/openpower_x/lab004_microwatt/build/gateware/top.v}

# Add EDIFs


# Add IPs


# Add constraints

read_xdc top.xdc
set_property PROCESSING_ORDER EARLY [get_files top.xdc]

# Add pre-synthesis commands


# Synthesis

synth_design -directive default -top top -part xc7a100t-csg324-1

# Synthesis report

report_timing_summary -file top_timing_synth.rpt
report_utilization -hierarchical -file top_utilization_hierarchical_synth.rpt
report_utilization -file top_utilization_synth.rpt

# Optimize design

opt_design -directive default

# Add pre-placement commands


# Placement

place_design -directive default

# Placement report

report_utilization -hierarchical -file top_utilization_hierarchical_place.rpt
report_utilization -file top_utilization_place.rpt
report_io -file top_io.rpt
report_control_sets -verbose -file top_control_sets.rpt
report_clock_utilization -file top_clock_utilization.rpt

# Add pre-routing commands


# Routing

route_design -directive default
phys_opt_design -directive default
write_checkpoint -force top_route.dcp

# Routing report

report_timing_summary -no_header -no_detailed_paths
report_route_status -file top_route_status.rpt
report_drc -file top_drc.rpt
report_timing_summary -datasheet -max_paths 10 -file top_timing.rpt
report_power -file top_power.rpt

# Bitstream generation

write_bitstream -force top.bit 

# End

quit