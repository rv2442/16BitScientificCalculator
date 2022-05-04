`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:48 03/22/2022 
// Design Name: 
// Module Name:    Multiply 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Multiply(input  [15:0] a, b,
                 output [31:0] mult);
					  
  wire [16:0] c;	// carry bits

  // assignment of 16-bit vectors
  assign mult[31:0] = a[15:0] * b[15:0];
endmodule
