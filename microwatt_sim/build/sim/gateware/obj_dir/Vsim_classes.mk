# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsim.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1
# Tracing threaded output mode?  0/1 (from --trace-fst-thread)
VM_TRACE_THREADED = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsim \
	Vsim__1 \
	Vsim__2 \
	Vsim__3 \
	Vsim__4 \
	Vsim__5 \
	Vsim__6 \
	Vsim__7 \
	Vsim__8 \
	Vsim__9 \
	Vsim__10 \
	Vsim__11 \
	Vsim__12 \
	Vsim__13 \
	Vsim__14 \
	Vsim__15 \
	Vsim__16 \
	Vsim__17 \
	Vsim__18 \
	Vsim__19 \
	Vsim__20 \
	Vsim__21 \
	Vsim__22 \
	Vsim__23 \
	Vsim__24 \
	Vsim__25 \
	Vsim__26 \
	Vsim__27 \
	Vsim__28 \
	Vsim__29 \
	Vsim__30 \
	Vsim__31 \
	Vsim__32 \
	Vsim__33 \
	Vsim__34 \
	Vsim__35 \
	Vsim__36 \
	Vsim__37 \
	Vsim__38 \
	Vsim__39 \
	Vsim__40 \
	Vsim__41 \
	Vsim__42 \
	Vsim__43 \
	Vsim__44 \
	Vsim__45 \
	Vsim__46 \
	Vsim__47 \
	Vsim__48 \
	Vsim__49 \
	Vsim__50 \
	Vsim__51 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsim__Slow \
	Vsim__1__Slow \
	Vsim__2__Slow \
	Vsim__3__Slow \
	Vsim__4__Slow \
	Vsim__5__Slow \
	Vsim__6__Slow \
	Vsim__7__Slow \
	Vsim__8__Slow \
	Vsim__9__Slow \
	Vsim__10__Slow \
	Vsim__11__Slow \
	Vsim__12__Slow \
	Vsim__13__Slow \
	Vsim__14__Slow \
	Vsim__15__Slow \
	Vsim__16__Slow \
	Vsim__17__Slow \
	Vsim__18__Slow \
	Vsim__19__Slow \
	Vsim__20__Slow \
	Vsim__21__Slow \
	Vsim__22__Slow \
	Vsim__23__Slow \
	Vsim__24__Slow \
	Vsim__25__Slow \
	Vsim__26__Slow \
	Vsim__27__Slow \
	Vsim__28__Slow \
	Vsim__29__Slow \
	Vsim__30__Slow \
	Vsim__31__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsim__Trace \
	Vsim__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsim__Syms \
	Vsim__Trace__Slow \
	Vsim__Trace__1__Slow \
	Vsim__Trace__2__Slow \
	Vsim__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
