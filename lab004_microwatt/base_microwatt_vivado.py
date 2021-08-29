#!/usr/bin/env python3

from migen import *

from migen.genlib.io import CRG

from litex.build.generic_platform import *
from litex.build.xilinx import XilinxPlatform

from litex.soc.integration.soc_core import *
from litex.soc.integration.builder import *
from litex.soc.cores import dna, xadc
from litex.soc.cores.spi import SPIMaster

from ios import Led, RGBLed, Button, Switch
from display import SevenSegmentDisplay

# IOs ----------------------------------------------------------------------------------------------

_io = [
    ("user_led",  0, Pins("H5"), IOStandard("LVCMOS33")),
    ("user_led",  1, Pins("J5"), IOStandard("LVCMOS33")),
    ("user_led",  2, Pins("T9"), IOStandard("LVCMOS33")),
    ("user_led",  3, Pins("T10"), IOStandard("LVCMOS33")),


    ("user_sw",  0, Pins("A8"), IOStandard("LVCMOS33")),
    ("user_sw",  1, Pins("C11"), IOStandard("LVCMOS33")),
    ("user_sw",  2, Pins("C10"), IOStandard("LVCMOS33")),
    ("user_sw",  3, Pins("A10"), IOStandard("LVCMOS33")),


    ("user_btn", 0, Pins("D9"), IOStandard("LVCMOS33")),
    ("user_btn", 1, Pins("C9"), IOStandard("LVCMOS33")),
    ("user_btn", 2, Pins("B9"), IOStandard("LVCMOS33")),
    ("user_btn", 3, Pins("B8"), IOStandard("LVCMOS33")),


    ("user_rgb_led", 0,
        Subsignal("r", Pins("G6")),
        Subsignal("g", Pins("F6")),
        Subsignal("b", Pins("E1")),
        IOStandard("LVCMOS33"),
    ),


    ("clk100", 0, Pins("E3"), IOStandard("LVCMOS33")),

    ("cpu_reset", 0, Pins("C2"), IOStandard("LVCMOS33")),

    ("serial", 0,
        Subsignal("tx", Pins("D10")),
        Subsignal("rx", Pins("A9")),
        IOStandard("LVCMOS33"),
    ),

]

# Platform -----------------------------------------------------------------------------------------

class Platform(XilinxPlatform):
    default_clk_name   = "clk100"
    default_clk_period = 1e9/100e6

    def __init__(self):
        XilinxPlatform.__init__(self, "xc7a100t-csg324-1", _io, toolchain="vivado")

# Design -------------------------------------------------------------------------------------------

# Create our platform (fpga interface)
platform = Platform()

# Create our soc (fpga description)
class BaseSoC(SoCCore):
    def __init__(self, platform):
        sys_clk_freq = int(100e6)

        # SoC with CPU
        SoCCore.__init__(self, platform,
            cpu_type                 = "microwatt",
            clk_freq                 = 100e6,
            ident                    = "LiteX CPU Test SoC", ident_version=True,
            integrated_rom_size      = 0x8000,
            integrated_main_ram_size = 0x4000)

        # Clock Reset Generation
        self.submodules.crg = CRG(platform.request("clk100"), ~platform.request("cpu_reset"))

        # Led
        user_leds = Cat(*[platform.request("user_led", i) for i in range(4)])
        self.submodules.leds = Led(user_leds)
        self.add_csr("leds")

        # Switches
        user_switches = Cat(*[platform.request("user_sw", i) for i in range(4)])
        self.submodules.switches = Switch(user_switches)
        self.add_csr("switches")

        # Buttons
        user_buttons = Cat(*[platform.request("user_btn", i) for i in range(4)])
        self.submodules.buttons = Button(user_buttons)
        self.add_csr("buttons")

        # RGB Led
        self.submodules.rgbled  = RGBLed(platform.request("user_rgb_led",  0))
        self.add_csr("rgbled")

soc = BaseSoC(platform)

# Build --------------------------------------------------------------------------------------------

builder = Builder(soc, output_dir="build", csr_csv="test/csr.csv")
builder.build(build_name="top")
