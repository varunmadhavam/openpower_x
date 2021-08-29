
module mux(i1,i0,s,y);
    input i1,i0,s;
    output y;

    assign y=s?i1:i0;
endmodule

module ckt(a,b,c,y);
    input a,b,c;
    output y;
    wire w1,w2;
    mux m1(b,1'b1,c,w1);
    mux m2(1'b0,1'b1,b,w2);
    mux m3(w2,w1,a,y);
endmodule