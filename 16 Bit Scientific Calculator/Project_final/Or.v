`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:22 03/22/2022 
// Design Name: 
// Module Name:    Or 
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
module Or(input[15:0] x, input[15:0] y, 
output[15:0] out
    );
assign out[15:0] = x[15:0] | y[15:0];
endmodule
