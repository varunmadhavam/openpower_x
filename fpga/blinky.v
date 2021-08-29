module blinky (
    input  clki,
    output led1,
    output led2,
    output led3,
    output led4,
    output led5
);

    reg [25:0] counter = 0;
    wire clk;
    
    SB_GB clk_gb (
        .USER_SIGNAL_TO_GLOBAL_BUFFER(clki),
        .GLOBAL_BUFFER_OUTPUT(clk)
    );

    always @(posedge clk) begin
        counter <= counter + 1;
    end

    assign {led1, led2, led3, led4, led5} = counter[25:21];
endmodule
