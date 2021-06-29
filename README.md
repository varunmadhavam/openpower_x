1. prerequisites
    1. Install python3
    2. Install [Litex](https://github.com/enjoy-digital/litex)
    3. Install [Vivado](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools/2020-2.html)
    4. Download [powerpc cross compiler](https://toolchains.bootlin.com/downloads/releases/toolchains/powerpc64le-power8/tarballs/powerpc64le-power8--glibc--stable-2020.08-1.tar.bz2) and add its bin directory   to the path env variable
    5. source /path/to/Xilinix/Vivado/2020.2/settings64.sh
    6. install [ghdl](https://ghdl.github.io/ghdl/development/building/index.html)
    7. install [yosys-ghdl-plugin](https://github.com/ghdl/ghdl-yosys-plugin#build-as-a-module-shared-library)
    8. install [sbt]https://www.scala-sbt.org/release/docs/Installing-sbt-on-Linux.html

2. Build a sample SoC using litex with microwatt core
    1. build the soc bitstream
        1. cd lab004_microwatt
        2. python base_microwatt_vivado.py
    2. build the firmware for the soc
        1. cd firmware
        2. make clean
        3. make
            
3. Simulate SOC with microwatt core
    1. cd microwatt_sim
    2. ./runsim.sh