`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:25:48 03/22/2022 
// Design Name: 
// Module Name:    Divide 
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
module Divide(input  [15:0] a, b,
                   output [15:0] Q, output [15:0] deci);
  

  wire [15:0] c;	// carry bits
  wire [15:0] test;
  wire [15:0] temp;



  assign Q[15:0] = a[15:0] / b[15:0];

  assign test[15:0] = (a%b)*'b1010;
  assign temp[15:0] = (test[15:0]/b[15:0]);

  assign deci = (temp[15:0]*1000) + ((((test%b)*'b1010)/b)*100) + ((((((test%b)*'b1010)%b)*'b1010)/b)*10) + 
  (((((((test%b)*'b1010)%b)*'b1010)%b)*'b1010)/b);

endmodule
