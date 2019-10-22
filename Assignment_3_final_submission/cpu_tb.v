module cpu_tb();
    reg clk, reset;
    wire [31:0] iaddr, idata;
    wire [31:0] daddr, drdata, dwdata;
    wire [3:0] we;
    wire [31:0] x31, pc;

    SingleCycleCPU dut (
        .clk(clk),
        .reset(reset),
        .iaddr(iaddr),
        .instr(idata),
        .daddr(daddr),
        .rdata(drdata),
        .wdata(dwdata),
        .we(we),
        .x31(x31),
        .PC(pc)
    );
	 
	 dmem dmem(
		.clk(clk),
		.daddr(daddr),
		.dwdata(dwdata),
		.drdata(drdata),
		.we(we)
		);
	 
	 imem imem(
		.iaddr(iaddr), 
		.idata(idata)
	);
	
    always #5 clk = ~clk;
    initial begin
        clk = 0;
        reset = 1;
        #100
        reset = 0;
    end

endmodule
