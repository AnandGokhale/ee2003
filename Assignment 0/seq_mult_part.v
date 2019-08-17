//                              -- Mode: Verilog --
// Filename        : seq-mult.v
// Description     : Sequential multiplier
// Author          : Nitin Chandrachoodan

// This implementation corresponds to a sequential multiplier, but
// most of the functionality is missing.  Complete the code so that
// the resulting module implements multiplication of two numbers in
// twos complement format.

// All the comments marked with * correspond to something you need
// to fill in.

// This style of modeling is 'behavioural', where the desired
// behaviour is described in terms of high level statements ('if'
// statements in verilog).  This is where the real power of the
// language is seen, since such modeling is closest to the way we
// think about the operation.  However, it is also the most difficult
// to translate into hardware, so a good understanding of the
// connection between the program and hardware is important.

`define width 8
`define width_pdt 16
`define ctrwidth 4

module seq_mult (
		 // Outputs
		 p, rdy, 
		 // Inputs
		 clk, reset, a, b
		 ) ;
   input clk, reset;
   input [`width-1:0] a, b;
   // * Output declaration for 'p'
	output [`width_pdt-1:0] p;
   output rdy;
   
   // * Register declarations for p, multiplier, multiplicand
	reg [`width_pdt-1:0] multiplier, multiplicand;
	reg [2*`width_pdt-1:0] p;
   reg [`ctrwidth:0] ctr;
	reg rdy;
	
   always @(posedge clk or posedge reset)
		if (reset) begin
			rdy <= 0;
			p <= 0;
			ctr <= 0;
			multiplicand <= {{`width{a[`width-1]}}, a}; // sign-extend
			multiplier <= {{`width{b[`width-1]}}, b}; // sign-extend
		end 
		else 
		begin 
			if (ctr <2*`width ) 
			begin
				// * Code for multiplication
				p=p>>1;
				// For simulation make both of these non blocking, it worked
				if(multiplier[ctr])
				begin
					p[31:15]=p[30:15]+multiplicand;
				end
				ctr <= ctr+1;
			end 
			else 
			begin
				rdy <= 1; 		// Assert 'rdy' signal to indicate end of multiplication
				ctr <= 0;
			end
		end
   
endmodule // seqmult