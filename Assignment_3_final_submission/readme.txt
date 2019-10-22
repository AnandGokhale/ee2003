Assumptions for doing this Assignment:
1)As stated in risc spec uploaded on moodle states the following
The LW instruction loads a 32-bit value from memory intord. LH loads a 16-bit value from memory,then sign-extends to 32-bits before storing inrd.  LHU loads a 16-bit value from memory but thenzero extends to 32-bits before storing inrd.  LB and LBU are defined analogously for 8-bit values.The SW, SH, and SB instructions store 32-bit, 16-bit, and 8-bit values from the low bits of registerrs2to memory.

As a result, I can only load to the bottom half/quarter of any register or memory location. If the memory is byte addressable, I can access any bits necessary.

2) PC is updated as PC+=4, as the latest version of imem on moodle ignores the bottom 2 bits of iaddr

3) I have assumed that store to memory is clock edge trigerred, which means that whatever value was in wdata and daddr at the instant of posedge of clk will be used, and value will be update during the next clock cycle.
4)I have used the versions of the files uploaded on moodle as of Wenesday, October 9th,18:30

5) I also believe that the imem2 file has some mistakes, which we could discuss on friday
