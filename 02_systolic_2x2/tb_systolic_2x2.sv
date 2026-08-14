module tb_systolic_2x2;

    logic clk;
    logic rst;

    logic signed [7:0] a0_in;
    logic signed [7:0] a1_in;
    logic signed [7:0] b0_in;
    logic signed [7:0] b1_in;

    logic signed [31:0] c00;
    logic signed [31:0] c01;
    logic signed [31:0] c10;
    logic signed [31:0] c11;

    systolic_2x2 dut (
        .clk(clk),
        .rst(rst),

        .a0_in(a0_in),
        .a1_in(a1_in),

        .b0_in(b0_in),
        .b1_in(b1_in),

        .c00(c00),
        .c01(c01),
        .c10(c10),
        .c11(c11)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1;

        a0_in = 0;
        a1_in = 0;
        b0_in = 0;
        b1_in = 0;

        repeat (2) @(posedge clk);

        // cycle 0
        @(negedge clk);
        rst = 0;

        a0_in = 1;
        a1_in = 0;

        b0_in = 5;
        b1_in = 0;

        // cycle 1
        @(negedge clk);

        a0_in = 2;
        a1_in = 3;

        b0_in = 7;
        b1_in = 6;

        // cycle 2
        @(negedge clk);

        a0_in = 0;
        a1_in = 4;

        b0_in = 0;
        b1_in = 8;

        // cycle 3
        @(negedge clk);

        a0_in = 0;
        a1_in = 0;

        b0_in = 0;
        b1_in = 0;

        // 等最后的数据传播到 PE11
        @(negedge clk);

        $display("C =");
        $display("[%0d %0d]", c00, c01);
        $display("[%0d %0d]", c10, c11);

        if (
            c00 == 19 &&
            c01 == 22 &&
            c10 == 43 &&
            c11 == 50
        ) begin
            $display("PASS");
        end else begin
            $display("FAIL");
        end

        $finish;
    end

endmodule
