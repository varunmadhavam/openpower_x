module tb;
     reg a,b;
     wire y;

     and_g g1(y,a,b);

     initial begin
        $dumpfile("and.vcd");
	    $dumpvars(0,tb);
     end

     initial begin
          a=0;b=0;
          #10;
          a=0;b=1;
          #10;
          a=1;b=0;
          #10;
          a=1;b=1;
          #10;
          $finish;
     end
endmodule