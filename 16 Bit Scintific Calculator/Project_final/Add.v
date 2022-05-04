`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:34:25 05/02/2022 
// Design Name: 
// Module Name:    Add 
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
module Add(input  [15:0] a, b, output [15:0] sum);
  wire cout;
  wire [15:0] c;	// carry bits
  assign c[0] = 0;	// carry input
  	// carry output

  // assignment of 16-bit vectors
  assign sum[15:0] = a + b;
  //assign c[16:1]   = (a[15:0] & b[15:0]) | (a[15:0] ^ b[15:0]) & c[15:0];
  //assign f[15:0]= a[15:0]**b[15:0];
endmodule
