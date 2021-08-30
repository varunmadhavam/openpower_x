module tb;
     reg a,b,s;
     wire y;

     mux m1(a,b,s,y);

     initial begin
          $dumpfile("mux.vcd");
	     $dumpvars(0,tb);
     end

     initial begin
          s=0;a=0;b=0;
          #40;
          s=1;
          #40;
          $finish;
     end

     always #5 a=~a;
     always #15 b=~b;

endmodule