`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:16:54 04/28/2022 
// Design Name: 
// Module Name:    Sec 
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
module Sec(input[15:0] inp1, output[15:0] sec);
	
  wire [31:0] sec_cal;
  wire [15:0] cos_cal;
  Cos Cos(.inp1(inp1), .cos(cos_cal));
  assign sec_cal = 10000000/cos_cal;
  assign sec = sec_cal;

endmodule
