module and_g(y,a,b);
    input a,b;
    output y;
    wire x;
    assign x = ~(a&b);
    assign y= ~x;
endmodule