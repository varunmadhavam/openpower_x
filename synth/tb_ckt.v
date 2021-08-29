module tb;
     reg a,b,c;
     wire y;

     ckt c1(a,b,c,y);

     initial begin
      $dumpfile("ckt.vcd");
	   $dumpvars(0,tb);
      a=0;b=0;c=0;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=0;b=0;c=1;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=0;b=1;c=0;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=0;b=1;c=1;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=1;b=0;c=0;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=1;b=0;c=1;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=1;b=1;c=0;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      a=1;b=1;c=1;
      #10;
      $display("%b %b %b %b",a,b,c,y);
      $finish;
     end
endmodule