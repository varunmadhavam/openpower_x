PACKAGES=libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata bios
PACKAGE_DIRS=/tmp/litex/litex/litex/soc/software/libcompiler_rt /tmp/litex/litex/litex/soc/software/libbase /tmp/litex/litex/litex/soc/software/libfatfs /tmp/litex/litex/litex/soc/software/liblitespi /tmp/litex/litex/litex/soc/software/liblitedram /tmp/litex/litex/litex/soc/software/libliteeth /tmp/litex/litex/litex/soc/software/liblitesdcard /tmp/litex/litex/litex/soc/software/liblitesata /tmp/litex/litex/litex/soc/software/bios
LIBS=libcompiler_rt libbase-nofloat libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata
TRIPLE=powerpc64le-linux
CPU=microwatt
CPUFLAGS=-m64 -mabi=elfv2 -msoft-float -mno-string -mno-multiple -mno-vsx -mno-altivec -mlittle-endian -mstrict-align -fno-stack-protector -mcmodel=small -D__microwatt__ 
CPUENDIANNESS=little
CLANG=0
CPU_DIRECTORY=/tmp/litex/litex/litex/soc/cores/cpu/microwatt
SOC_DIRECTORY=/tmp/litex/litex/litex/soc
COMPILER_RT_DIRECTORY=/tmp/litex/pythondata-software-compiler_rt/pythondata_software_compiler_rt/data
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/home/varun/coding/projects/openpower/openpower_x/lab004_microwatt/build/software/include
LIBCOMPILER_RT_DIRECTORY=/tmp/litex/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/tmp/litex/litex/litex/soc/software/libbase
LIBFATFS_DIRECTORY=/tmp/litex/litex/litex/soc/software/libfatfs
LIBLITESPI_DIRECTORY=/tmp/litex/litex/litex/soc/software/liblitespi
LIBLITEDRAM_DIRECTORY=/tmp/litex/litex/litex/soc/software/liblitedram
LIBLITEETH_DIRECTORY=/tmp/litex/litex/litex/soc/software/libliteeth
LIBLITESDCARD_DIRECTORY=/tmp/litex/litex/litex/soc/software/liblitesdcard
LIBLITESATA_DIRECTORY=/tmp/litex/litex/litex/soc/software/liblitesata
BIOS_DIRECTORY=/tmp/litex/litex/litex/soc/software/bios