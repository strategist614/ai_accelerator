module mac_pe (
    input  logic clk,
    input  logic rst,

    input  logic signed [7:0] a_in,
    input  logic signed [7:0] b_in,

    output logic signed [31:0] acc
);

    logic signed [15:0] product;

    assign product = a_in * b_in;

    always_ff @(posedge clk) begin
        if (rst)
            acc <= 32'sd0;
        else
            acc <= acc + 32'(product);
    end

endmodule
