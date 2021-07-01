1. prerequisites
    1. Install python3
        1. sudo apt install python3
        2. sudo apt install python-is-python3
    2. Insall [yosys]()
        1. mkdir /tmp/yosys
        2. cd /tmp/yosys
        3. sudo apt install build-essential clang bison flex libreadline-dev gawk tcl-dev libffi-dev git graphviz xdot pkg-config python3 libboost-system-dev libboost-python-dev      libboost-filesystem-dev zlib1g-dev
        4. wget https://github.com/YosysHQ/yosys/archive/refs/tags/yosys-0.9.zip
        5. unzip yosys-0.9.zip
        6. cd yosys-yosys-0.9
        7. make clean
        8. make config-gcc
        9. make
        10. sudo make install
    3. Install [Litex](https://github.com/enjoy-digital/litex)
        1. sudo apt install libevent-dev libjson-c-dev verilator
        2. wget https://raw.githubusercontent.com/enjoy-digital/litex/master/litex_setup.py
        3. chmod +x litex_setup.py
        4. ./litex_setup.py init install --user
    4. Install [Vivado](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools/2020-2.html)
    5. Download [powerpc cross compiler](https://toolchains.bootlin.com/downloads/releases/toolchains/powerpc64le-power8/tarballs/powerpc64le-power8--glibc--stable-2020.08-1.tar.bz2) and add its bin directory   to the path env variable
        1. wget https://toolchains.bootlin.com/downloads/releases/toolchains/powerpc64le-power8/tarballs/powerpc64le-power8--glibc--stable-2020.08-1.tar.bz2
        2. tar -xvf powerpc64le-power8--glibc--stable-2020.08-1.tar.bz2
        3. export PATH=$PATH:/path/to/powerpc64le-power8--glibc--stable-2020.08-1/bin
    6. source /path/to/Xilinix/Vivado/2020.2/settings64.sh
    7. install [ghdl](https://ghdl.github.io/ghdl/development/building/index.html)
        1. mkdir /tmp/ghdl
        2. cd /tmp/ghdl
        3. wget https://github.com/ghdl/ghdl/archive/refs/tags/v1.0.0.zip
        4. unzip v1.0.0.zip
        5. wget http://mirrors.concertpass.com/gcc/releases/gcc-10.3.0/gcc-10.3.0.tar.gz
        6. tar -xvf gcc-10.3.0.tar.gz
        7. cd gcc-10.3.0
        8. ./contrib/download_prerequisites
        9. cd ../ghdl-1.0.0
        10. mkdir build
        11. cd build
        12. ../configure --with-gcc=/tmp/ghdl/gcc-10.3.0 --prefix=/usr/local
        13. make copy-sources
        14. mkdir gcc-objs; cd gcc-objs
        15. /tmp/ghdl/gcc-10.3.0/configure --prefix=/usr/local --enable-languages=c,vhdl --disable-bootstrap --disable-lto --disable-multilib --disable-libssp --disable-libgomp --disable-libquadmath --enable-default-pie
        16. make -j2 && sudo make install
        17. cd /tmp/ghdl/ghdl-1.0.0/build
        18. make ghdllib
        19. sudo make install
    8. install [yosys-ghdl-plugin](https://github.com/ghdl/ghdl-yosys-plugin#build-as-a-module-shared-library)
        1. mkdir /tmp/plugin
        2. cd /tmp/plugin
        3. git clone https://github.com/ghdl/ghdl-yosys-plugin.git
        4. cd ghdl-yosys-plugin
        5. make
        6. make install

    9. install [sbt](https://www.scala-sbt.org/release/docs/Installing-sbt-on-Linux.html)
        1. echo "deb https://repo.scala-sbt.org/scalasbt/debian all main" | sudo tee /etc/apt/sources.list.d/sbt.list
        2. echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | sudo tee /etc/apt/sources.list.d/sbt_old.list
        3. curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | sudo apt-key add
        4. sudo apt update
        5. sudo apt install sbt

2. Build a sample SoC using litex with microwatt core
    1. git clone https://github.com/varunmadhavam/openpower_x.git
    2. cd openpower_x
    3. build the soc bitstream
        1. cd lab004_microwatt
        2. python base_microwatt_vivado.py
    4. build the firmware for the soc
        1. cd firmware
        2. make clean
        3. make
            
3. Simulate SOC with microwatt core
    1. git clone https://github.com/varunmadhavam/openpower_x.git
    1. cd openpower_x/microwatt_sim
    2. ./runsim.sh