module systolic_pe (
    input  logic clk,
    input  logic rst,

    input  logic signed [7:0] a_in,
    input  logic signed [7:0] b_in,

    output logic signed [7:0] a_out,
    output logic signed [7:0] b_out,
    output logic signed [31:0] acc
);

    logic signed [15:0] product;
    logic signed [31:0] product_ext;

    assign product = a_in * b_in;
    assign product_ext = {{16{product[15]}}, product};

    always_ff @(posedge clk) begin
        if (rst) begin
            a_out <= 0;
            b_out <= 0;
            acc   <= 0;
        end else begin
            a_out <= a_in;
            b_out <= b_in;
            acc   <= acc + product_ext;
        end
    end

endmodule
