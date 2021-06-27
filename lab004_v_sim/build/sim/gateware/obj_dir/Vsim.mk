# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vsim.mk

default: Vsim

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /usr/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /usr/lib/x86_64-linux-gnu

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vsim
# Module prefix (from --prefix)
VM_MODPREFIX = Vsim
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-Wall -O3 -ggdb   -I/home/varun/coding/projects/openpower/litex/litex/litex/build/sim/core \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	modules.o \
	pads.o \
	sim.o \
	libdylib.o \
	parse.o \
	-lpthread -Wl,--no-as-needed -ljson-c -lm -lstdc++ -Wl,--no-as-needed -ldl -levent \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	veril \
	sim_init \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	/home/varun/coding/projects/openpower/litex/litex/litex/build/sim/core \


### Default rules...
# Include list of all generated classes
include Vsim_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

veril.o: /home/varun/coding/projects/openpower/litex/litex/litex/build/sim/core/veril.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_init.o: sim_init.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vsim: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
