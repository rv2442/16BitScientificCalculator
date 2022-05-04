`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:13:56 03/22/2022 
// Design Name: 
// Module Name:    Subtract 
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
module Subtract(input  [15:0] a, b, input cin,
                 output [15:0] sum, output cout);

  wire [16:0] c;	// carry bits
  assign c[0] = 0;  // carry input
  assign cout = c[16];	// carry output
 
  // assignment of 16-bit vectors
  assign sum[15:0] = (a[15:0] ^ b[15:0]) ^ c[15:0];
  assign c[16:1]   = (~a[15:0] & c[15:0]) | 
    (~a[15:0] & b[15:0]) | (b[15:0] & c[15:0]);

endmodule
