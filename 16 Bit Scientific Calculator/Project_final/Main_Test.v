`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:36:42 04/30/2022
// Design Name:   Main
// Module Name:   E:/Xilinx_XIE/Project_final/Main_Test.v
// Project Name:  Project_final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Main_Test;

	// Inputs
	reg [15:0] inp1;
	reg [15:0] inp2;
	reg [4:0] select;

	// Outputs
	wire [15:0] a;
	wire [15:0] b;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.inp1(inp1), 
		.inp2(inp2), 
		.select(select), 
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		inp1 = 'd25;
		inp2 = 'd6;
		select = 'b00011;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
      
endmodule

