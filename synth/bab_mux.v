module mux(a,b,s,y);
    input a,b,s;
    output reg y;

    always @(s)
        begin
            if(s==1)
                y=a;
            else
                y=b;
        end
endmodule