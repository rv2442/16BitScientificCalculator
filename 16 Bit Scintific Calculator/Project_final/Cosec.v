`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:13 04/28/2022 
// Design Name: 
// Module Name:    Cosec 
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
module Cosec(input[15:0] inp1, output[15:0] cosec);
	
  wire [31:0] cosec_cal;
  wire [15:0] sin_cal;
  Sin Sin(.inp1(inp1), .sin(sin_cal));
  assign cosec_cal = 10000000/sin_cal;
  assign cosec = cosec_cal;

endmodule
