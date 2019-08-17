

`include "parameters.v"

module DummyDecoder (
    instr,
    op
);
    input [`width-1:0] instr;
    output reg [`OPWIDTH-1:0] op;

    always @(instr) begin
        // Use a case statement or some other logic to generate suitable op code
        op = 0; // - replace this with some proper logic
		  op[5] = instr[6:0]==19 | instr[6:0]==51;
		  op[4] = instr[6:0]==19 | (~instr[6:0]==51);
		  op[3] = op[5]&(instr[14]|(instr[13:12]==1));
		  op[2] = op[5]&((instr[14:13]==1)|(instr[13:12]==1));
		  op[1] = op[5]&((instr[14:13]==3)|(instr[12]&instr[14]));
		  op[0] = op[5]&((instr[13:12]==3)|(instr[30]&~instr[13])|(instr[14:12]==4));

		  /*
		  if(instr[6:0]==19)
		  begin
				op[`OPWIDTH-1:`OPWIDTH-2]=3;
		  end
		  if(instr[6:0]==51)
		  begin
				op[`OPWIDTH-1:`OPWIDTH-2]=2;
		  end
		  if(op[`OPWIDTH-1]==1)
		  begin
				if(instr[14:12]==0)
				begin
					op[3:2] = 0;
					op[0] = instr[30];
				end
				else if(instr[14:12] == 4|instr[14:13] == 3)
				begin
					op[3:2] = 2;
					op[1:0] = instr[14]+instr[13]+instr[12];
				end
				else if(instr[14:12] == 2|instr[14:12] == 3)
				begin
					op[3:2]  = 1;
					op[0]		= instr[12];
				end
				else
				begin
					op[3:2] 	= 	3;
					op[1]		= 	instr[14];
					op[0]		=	instr[30];
				end
		  end
		  */
    end

endmodule
