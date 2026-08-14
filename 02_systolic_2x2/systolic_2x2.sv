module systolic_2x2 (
    input logic clk,
    input logic rst,

    input logic signed [7:0] a0_in,
    input logic signed [7:0] a1_in,

    input logic signed [7:0] b0_in,
    input logic signed [7:0] b1_in,

    output logic signed [31:0] c00,
    output logic signed [31:0] c01,
    output logic signed [31:0] c10,
    output logic signed [31:0] c11
);

    logic signed [7:0] a00_to_01;
    logic signed [7:0] a10_to_11;

    logic signed [7:0] b00_to_10;
    logic signed [7:0] b01_to_11;

    logic signed [7:0] unused_a01;
    logic signed [7:0] unused_a11;
    logic signed [7:0] unused_b10;
    logic signed [7:0] unused_b11;

    systolic_pe pe00 (
        .clk(clk),
        .rst(rst),
        .a_in(a0_in),
        .b_in(b0_in),
        .a_out(a00_to_01),
        .b_out(b00_to_10),
        .acc(c00)
    );

    systolic_pe pe01 (
        .clk(clk),
        .rst(rst),
        .a_in(a00_to_01),
        .b_in(b1_in),
        .a_out(unused_a01),
        .b_out(b01_to_11),
        .acc(c01)
    );

    systolic_pe pe10 (
        .clk(clk),
        .rst(rst),
        .a_in(a1_in),
        .b_in(b00_to_10),
        .a_out(a10_to_11),
        .b_out(unused_b10),
        .acc(c10)
    );

    systolic_pe pe11 (
        .clk(clk),
        .rst(rst),
        .a_in(a10_to_11),
        .b_in(b01_to_11),
        .a_out(unused_a11),
        .b_out(unused_b11),
        .acc(c11)
    );

endmodule
