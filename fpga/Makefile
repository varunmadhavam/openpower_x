all: build

build : blinky.bin

blinky.json : blinky.ys blinky.pcf  blinky.v
	yosys blinky.ys

timing: blinky.asc
	icetime -c 12 -t -m -d hx1k blinky.asc

blinky.asc : blinky.json
	nextpnr-ice40 --hx1k --package tq144 --json blinky.json --pcf blinky.pcf --asc blinky.asc

blinky.bin : blinky.asc
	icepack blinky.asc blinky.bin

prog : blinky.bin
	iceprog blinky.bin

clean :
	rm -f blinky.json blinky.asc blinky.bin

.PHONY : clean prog build all timing
