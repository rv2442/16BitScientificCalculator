`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:38:11 05/02/2022
// Design Name:   Main_Demo
// Module Name:   E:/Xilinx_XIE/fourbit/Main_demo_test.v
// Project Name:  fourbit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main_Demo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Main_demo_test;

	// Inputs
	reg [3:0] f_inp1;
	reg [3:0] f_inp2;
	reg [3:0] sel;

	// Outputs
	wire [7:0] f_out1;
	wire [7:0] f_out2_1;
	wire [7:0] f_out2_2;

	// Instantiate the Unit Under Test (UUT)
	Main_Demo uut (
		.f_inp1(f_inp1), 
		.f_inp2(f_inp2), 
		.sel(sel), 
		.f_out1(f_out1), 
		.f_out2_1(f_out2_1), 
		.f_out2_2(f_out2_2)
	);

	initial begin
		// Initialize Inputs
		f_inp1 = 13;
		f_inp2 = 10;
		sel = 'b0011;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

