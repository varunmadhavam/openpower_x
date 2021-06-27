#!/usr/bin/env python3

import sys
import argparse

from migen import *

from litex.build.generic_platform import *
from litex.build.sim import SimPlatform
from litex.build.sim.config import SimConfig

from litex.soc.integration.common import *
from litex.soc.integration.soc_core import *
from litex.soc.integration.builder import *
from litex.soc.integration.soc import *
from litex.soc.cores.bitbang import *
from litex.soc.cores.cpu import CPUS

from ios import Led, RGBLed, Button, Switch

# IOs ----------------------------------------------------------------------------------------------

_io = [
    ("user_led",  0,  Pins(1)),
    ("user_led",  1,  Pins(1)),
    ("user_led",  2,  Pins(1)),
    ("user_led",  3,  Pins(1)),
    ("user_led",  4,  Pins(1)),
    ("user_led",  5,  Pins(1)),
    ("user_led",  6,  Pins(1)),
    ("user_led",  7,  Pins(1)),
    ("user_led",  8,  Pins(1)),
    ("user_led",  9,  Pins(1)),
    ("user_led", 10,  Pins(1)),
    ("user_led", 11,  Pins(1)),
    ("user_led", 12,  Pins(1)),
    ("user_led", 13,  Pins(1)),
    ("user_led", 14,  Pins(1)),
    ("user_led", 15,  Pins(1)),

    ("user_sw",  0,  Pins(1)),
    ("user_sw",  1,  Pins(1)),
    ("user_sw",  2,  Pins(1)),
    ("user_sw",  3,  Pins(1)),
    ("user_sw",  4,  Pins(1)),
    ("user_sw",  5,  Pins(1)),
    ("user_sw",  6,  Pins(1)),
    ("user_sw",  7,  Pins(1)),
    ("user_sw",  8,  Pins(1)),
    ("user_sw",  9,  Pins(1)),
    ("user_sw", 10,  Pins(1)),
    ("user_sw", 11,  Pins(1)),
    ("user_sw", 12,  Pins(1)),
    ("user_sw", 13,  Pins(1)),
    ("user_sw", 14,  Pins(1)),
    ("user_sw", 15,  Pins(1)),

    ("user_btn", 0,  Pins(1)),
    ("user_btn", 1,  Pins(1)),
    ("user_btn", 2,  Pins(1)),
    ("user_btn", 3,  Pins(1)),
    ("user_btn", 4,  Pins(1)),

    ("user_rgb_led", 0,
        Subsignal("r",  Pins(1)),
        Subsignal("g",  Pins(1)),
        Subsignal("b",  Pins(1)),
        IOStandard("LVCMOS33"),
    ),


    ("sys_clk", 0,  Pins(1)),

    ("sys_rst", 0,  Pins(1)),

    ("serial", 0,
        Subsignal("source_valid", Pins(1)),
        Subsignal("source_ready", Pins(1)),
        Subsignal("source_data",  Pins(8)),

        Subsignal("sink_valid",   Pins(1)),
        Subsignal("sink_ready",   Pins(1)),
        Subsignal("sink_data",    Pins(8)),
    ),

]

# Platform -----------------------------------------------------------------------------------------

class Platform(SimPlatform):
    def __init__(self):
        SimPlatform.__init__(self, "SIM", _io)

# Design -------------------------------------------------------------------------------------------

# Create our platform (fpga interface)
# platform = Platform()

# Create our soc (fpga description)
class SimSoC(SoCCore):
        def __init__(self,
        with_sdram            = False,
        with_ethernet         = False,
        with_etherbone        = False,
        etherbone_mac_address = 0x10e2d5000001,
        etherbone_ip_address  = "192.168.1.51",
        with_analyzer         = False,
        sdram_module          = "MT48LC16M16",
        sdram_init            = [],
        sdram_data_width      = 32,
        sdram_spd_data        = None,
        sdram_verbosity       = 0,
        with_i2c              = False,
        with_sdcard           = False,
        sim_debug             = False,
        trace_reset_on        = False,
        **kwargs):

            platform     = Platform()
            sys_clk_freq = int(1e6)

            # SoC with CPU
            SoCCore.__init__(self, platform, clk_freq=sys_clk_freq,
                ident         = "LiteX Simulation",
                ident_version = True,
                **kwargs)

            # Clock Reset Generation
            self.submodules.crg = CRG(platform.request("sys_clk"))

            if with_sdram:
                sdram_clk_freq = int(100e6) # FIXME: use 100MHz timings
                if sdram_spd_data is None:
                    sdram_module_cls = getattr(litedram_modules, sdram_module)
                    sdram_rate       = "1:{}".format(sdram_module_nphases[sdram_module_cls.memtype])
                    sdram_module     = sdram_module_cls(sdram_clk_freq, sdram_rate)
                else:
                    sdram_module = litedram_modules.SDRAMModule.from_spd_data(sdram_spd_data, sdram_clk_freq)

                phy_settings     = get_sdram_phy_settings(
                    memtype    = sdram_module.memtype,
                    data_width = sdram_data_width,
                    clk_freq   = sdram_clk_freq)
                self.submodules.sdrphy = SDRAMPHYModel(
                    module    = sdram_module,
                    settings  = phy_settings,
                    clk_freq  = sdram_clk_freq,
                    verbosity = sdram_verbosity,
                    init      = sdram_init)
                self.add_sdram("sdram",
                    phy                     = self.sdrphy,
                    module                  = sdram_module,
                    origin                  = self.mem_map["main_ram"],
                    size                    = kwargs.get("max_sdram_size", 0x40000000),
                    l2_cache_size           = kwargs.get("l2_size", 8192),
                    l2_cache_min_data_width = kwargs.get("min_l2_data_width", 128),
                    l2_cache_reverse        = False
                )
                if sdram_init != []:
                    # Skip SDRAM test to avoid corrupting pre-initialized contents.
                    self.add_constant("SDRAM_TEST_DISABLE")
                else:
                    # Reduce memtest size for simulation speedup
                    self.add_constant("MEMTEST_DATA_SIZE", 8*1024)
                    self.add_constant("MEMTEST_ADDR_SIZE", 8*1024)

            # Led
            user_leds = Cat(*[platform.request("user_led", i) for i in range(16)])
            self.submodules.leds = Led(user_leds)
            self.add_csr("leds")

            # Switches
            user_switches = Cat(*[platform.request("user_sw", i) for i in range(16)])
            self.submodules.switches = Switch(user_switches)
            self.add_csr("switches")

            # Buttons
            user_buttons = Cat(*[platform.request("user_btn", i) for i in range(5)])
            self.submodules.buttons = Button(user_buttons)
            self.add_csr("buttons")

            # RGB Led
            self.submodules.rgbled  = RGBLed(platform.request("user_rgb_led",  0))
            self.add_csr("rgbled")

# Build --------------------------------------------------------------------------------------------

def sim_args(parser):
    builder_args(parser)
    soc_core_args(parser)
    parser.add_argument("--threads",              default=1,               help="Set number of threads (default=1)")
    parser.add_argument("--rom-init",             default=None,            help="rom_init file")
    parser.add_argument("--ram-init",             default=None,            help="ram_init file")
    parser.add_argument("--with-sdram",           action="store_true",     help="Enable SDRAM support")
    parser.add_argument("--sdram-module",         default="MT48LC16M16",   help="Select SDRAM chip")
    parser.add_argument("--sdram-data-width",     default=32,              help="Set SDRAM chip data width")
    parser.add_argument("--sdram-init",           default=None,            help="SDRAM init file")
    parser.add_argument("--sdram-from-spd-dump",  default=None,            help="Generate SDRAM module based on data from SPD EEPROM dump")
    parser.add_argument("--sdram-verbosity",      default=0,               help="Set SDRAM checker verbosity")
    parser.add_argument("--with-ethernet",        action="store_true",     help="Enable Ethernet support")
    parser.add_argument("--with-etherbone",       action="store_true",     help="Enable Etherbone support")
    parser.add_argument("--local-ip",             default="192.168.1.50",  help="Local IP address of SoC (default=192.168.1.50)")
    parser.add_argument("--remote-ip",            default="192.168.1.100", help="Remote IP address of TFTP server (default=192.168.1.100)")
    parser.add_argument("--with-analyzer",        action="store_true",     help="Enable Analyzer support")
    parser.add_argument("--with-i2c",             action="store_true",     help="Enable I2C support")
    parser.add_argument("--with-sdcard",          action="store_true",     help="Enable SDCard support")
    parser.add_argument("--trace",                action="store_true",     help="Enable Tracing")
    parser.add_argument("--trace-fst",            action="store_true",     help="Enable FST tracing (default=VCD)")
    parser.add_argument("--trace-start",          default="0",             help="Time to start tracing (ps)")
    parser.add_argument("--trace-end",            default="-1",            help="Time to end tracing (ps)")
    parser.add_argument("--opt-level",            default="O3",            help="Compilation optimization level")
    parser.add_argument("--sim-debug",            action="store_true",     help="Add simulation debugging modules")
    parser.add_argument("--gtkwave-savefile",     action="store_true",     help="Generate GTKWave savefile")
    parser.add_argument("--non-interactive",      action="store_true",     help="Run simulation without user input")

def main():
    parser = argparse.ArgumentParser(description="Generic LiteX SoC Simulation")
    sim_args(parser)
    args = parser.parse_args()

    soc_kwargs     = soc_core_argdict(args)
    builder_kwargs = builder_argdict(args)

    sys_clk_freq = int(1e6)
    sim_config = SimConfig()
    sim_config.add_clocker("sys_clk", freq_hz=sys_clk_freq)

    # Configuration --------------------------------------------------------------------------------

    cpu = CPUS.get(soc_kwargs.get("cpu_type", "vexriscv"))
    if soc_kwargs["uart_name"] == "serial":
        soc_kwargs["uart_name"] = "sim"
        sim_config.add_module("serial2console", "serial")
    if args.rom_init:
        soc_kwargs["integrated_rom_init"] = get_mem_data(args.rom_init, cpu.endianness)
    if not args.with_sdram:
        soc_kwargs["integrated_main_ram_size"] = 0x10000000 # 256 MB
        if args.ram_init is not None:
            soc_kwargs["integrated_main_ram_init"] = get_mem_data(args.ram_init, cpu.endianness)
    else:
        assert args.ram_init is None
        soc_kwargs["integrated_main_ram_size"] = 0x0
        soc_kwargs["sdram_module"]             = args.sdram_module
        soc_kwargs["sdram_data_width"]         = int(args.sdram_data_width)
        soc_kwargs["sdram_verbosity"]          = int(args.sdram_verbosity)
        if args.sdram_from_spd_dump:
            soc_kwargs["sdram_spd_data"] = parse_spd_hexdump(args.sdram_from_spd_dump)

    # SoC ------------------------------------------------------------------------------------------
    soc = SimSoC(**soc_kwargs)

    # Build/Run ------------------------------------------------------------------------------------
    builder_kwargs["csr_csv"] = "csr.csv"
    builder = Builder(soc, **builder_kwargs)
    for i in range(2):
        build = (i == 0)
        run   = (i == 1)
        vns = builder.build(
            build       = build,
            run         = run,
            threads     = args.threads,
            sim_config  = sim_config,
            opt_level   = args.opt_level,
            trace       = args.trace,
            trace_fst   = args.trace_fst,
            interactive = not args.non_interactive
        )
        if args.with_analyzer:
            soc.analyzer.export_csv(vns, "analyzer.csv")
        if args.gtkwave_savefile:
            generate_gtkw_savefile(builder, vns, args.trace_fst)

if __name__ == "__main__":
    main()
