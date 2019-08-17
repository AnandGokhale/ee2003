# Assignment 2 - Register File and Memory Access

## Goal
Implement the load / store instructions in the `RV32I` instruction set, and combine them with three modules that need to be implemented and demonstrated as working in hardware:

### IMEM
This is the instruction memory: it is to be implemented as a single port Block RAM (BRAM) on hardware.  It will take a single value `iaddr` of 32 bits width as input, and generate a single value `idata` of 32 bits width as output.  The total capacity of `IMEM` should be 1K memory locations (1K = 2^10 = 1024), so only the bottom 10 bits of `iaddr` should be used for the address.  You can ignore the upper 22 bits for now.  In practice there should be an exception raised if you try to read from outside available memory, but we will ignore this for now.

Note: This is assumed to be a combinational block with no clock input.

### DMEM
Data memory: very similar to IMEM, but possible to either read or write, based on a `we` signal for write enable.  Capacity of 1K locations of 32 bits each.

Ports:
* `daddr` : 32 bit address.  Ignore the upper 22 bits for now.
* `clk` : will be used for synchronizing writes to the memory
* `we` : write enable: only write into memory when this is active
* `indata` : 32 bit input - to be written into `DMEM[daddr]` on clock edge if `we` is high
* `outdata` : 32 bit output - value read from `DMEM[daddr]` - combinational output

Note: it may be possible to implement this using a dual-port BRAM.  You need to ensure that your solution can synthesize properly.

### RegFile
32 element register file, each element capable of storing a 32 bit value.  Element at location 0 is permanently set to the value 0, and writing to this value will be ignored.

Ports:
* `rs1` : 5 bit address for location of register 1 to be read
* `rs2` : 5 bit address for location of register 2 to be read
* `rd` : 5 bit address for location of register to be written
* `we` : write enable signal - `RF[rd]` should be changed only when this is high
* `clk` : to sync writes to the register
* `indata` : 32 bit input - to be written into `RF[rd]` on clock edge if `we` is high
* `rv1` : 32 bit output corresponding to `RF[rs1]`
* `rv2` : 32 bit output corresponding to `RF[rs2]`

Note: This block cannot in general be implemented using BRAM, since we need to be able to read two values and write one value all within the same clock cycle.  You can write it in Verilog using general arrays, but need to make sure it synthesizes properly.

## Tasks

1. Write Verilog code for each of the blocks described.  You can either use Verilog arrays or direct module instantiation, but you must confirm that the final result is synthesizable and can be implemented on an FPGA.
2. Create a suitable test bench and suitable test cases to check whether the modules are functioning properly.  You can create your own test bench, but should be able to justify why it is a good enough test bench.
3. Implement on hardware using VIO and ILA (as needed) to demonstrate final functionality.
