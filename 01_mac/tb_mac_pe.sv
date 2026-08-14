module tb_mac_pe;

    logic clk;
    logic rst;

    logic signed [7:0] a;
    logic signed [7:0] b;
    logic signed [31:0] acc;

    mac_pe dut (
        .clk(clk),
        .rst(rst),
        .a_in(a),
        .b_in(b),
        .acc(acc)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1;
        a = 0;
        b = 0;

        #12;
        rst = 0;

        // acc = 2 * 3 = 6
        a = 2;
        b = 3;
        #10;

        // acc = 6 + (-4 * 5) = -14
        a = -4;
        b = 5;
        #10;

        // acc = -14 + (7 * -2) = -28
        a = 7;
        b = -2;
        #10;

        $display("final acc = %0d", acc);

        if (acc == -28)
            $display("PASS");
        else
            $display("FAIL");

        $finish;
    end

endmodule
