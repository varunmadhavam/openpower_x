PACKAGES=libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata bios
PACKAGE_DIRS=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libcompiler_rt /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libbase /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libfatfs /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitespi /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitedram /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libliteeth /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitesdcard /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitesata /home/varun/coding/projects/openpower/litex/litex/litex/soc/software/bios
LIBS=libcompiler_rt libbase-nofloat libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata
TRIPLE=powerpc64le-linux
CPU=microwatt
CPUFLAGS=-m64 -mabi=elfv2 -msoft-float -mno-string -mno-multiple -mno-vsx -mno-altivec -mlittle-endian -mstrict-align -fno-stack-protector -mcmodel=small -D__microwatt__ 
CPUENDIANNESS=little
CLANG=0
CPU_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/cores/cpu/microwatt
SOC_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc
COMPILER_RT_DIRECTORY=/home/varun/coding/projects/openpower/litex/pythondata-software-compiler_rt/pythondata_software_compiler_rt/data
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/home/varun/coding/projects/openpower/openpower_x/lab004_v_sim/build/software/include
LIBCOMPILER_RT_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libbase
LIBFATFS_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libfatfs
LIBLITESPI_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitespi
LIBLITEDRAM_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitedram
LIBLITEETH_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/libliteeth
LIBLITESDCARD_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitesdcard
LIBLITESATA_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/liblitesata
BIOS_DIRECTORY=/home/varun/coding/projects/openpower/litex/litex/litex/soc/software/bios