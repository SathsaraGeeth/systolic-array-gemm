interface hb_if #(
    parameter int M = 4,
    parameter int WIDTH_AB = 8,
    parameter int WIDTH_CD = 16
);
    logic                   clk;
    logic                   rst_n;
    logic                   clr_n;

    logic                   start;
    logic                   last;
    logic                   done;
    logic [$clog2(M+1)-1:0] dim;

    logic [M*WIDTH_AB-1:0]  a;
    logic [M*WIDTH_AB-1:0]  b;
    logic [M*WIDTH_CD-1:0]  c;
    logic [M*WIDTH_CD-1:0]  d;

    logic                   a_valid;
    logic                   b_valid;
    logic                   c_valid;
    logic                   d_ready;

    logic                   a_ready;
    logic                   b_ready;
    logic                   c_ready;
    logic                   d_valid;
endinterface
