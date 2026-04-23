module mac20i #(parameter WIDTH_AB = 8, parameter WIDTH_CD = 16, parameter M = 4)(
    input  logic                    i_clk,
    input  logic                    i_rst_n,
    input  logic                    i_en,
    input  logic                    i_clr_n,
    input  logic                    i_start,
    input  logic                    i_last,
    input  logic [$clog2(M+1)-1:0]  i_dim,
    input  logic [WIDTH_AB-1:0]     i_a,
    input  logic [WIDTH_AB-1:0]     i_b,
    input  logic [WIDTH_CD-1:0]     i_c,
    output logic                    o_done,
    output logic [WIDTH_CD-1:0]     o_d
);  

    ///////////////////////////////////////////////
    // Stage 0 (colapsed) >>>
    logic [WIDTH_AB-1:0] w_s1_a;
    logic [WIDTH_AB-1:0] w_s1_b;
    logic [WIDTH_CD-1:0] w_s1_c;
    logic                w_s1_start;
    logic [WIDTH_CD-1:0] w_s1_l0_acc_in;
    logic [WIDTH_CD-1:0] w_s1_l1_acc_in;
    logic                w_s1_lane;
    ///////////////////////////////////////////////
    assign w_s1_a     = i_a;
    assign w_s1_b     = i_b;
    assign w_s1_c     = i_c;
    assign w_s1_start = i_start;



    ///////////////////////////////////////////////
    // Stage 1 >>>
    logic                   w_s2_start;
    logic [WIDTH_CD-1:0]    w_s2_l0_acc;
    logic [WIDTH_CD-1:0]    w_s2_l1_acc;
    logic                   w_s2_lane;
    logic [WIDTH_CD-1:0]    w_s2_mulr;
    logic [WIDTH_CD-1:0]    w_s2_l0_add;
    logic [WIDTH_CD-1:0]    w_s2_l1_add;
    ///////////////////////////////////////////////
    logic [2*WIDTH_AB-1:0]  w_mul_res;

    assign w_s2_mulr = $signed(w_mul_res);
    assign w_s1_lane = (i_en && w_s1_start) ? (w_s2_lane ^ 1'b1) : w_s2_lane;

    mul_lat1 #(.IN_WIDTH(WIDTH_AB)) pr_s1_mulr(
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_clr_n(i_clr_n),
        .i_en(i_en),
        .i_data0(w_s1_a),
        .i_data1(w_s1_b),
        .o_data(w_mul_res)
    );

    register #(.WIDTH(1)) pr_s1_lane (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_clr_n(i_clr_n),
        .i_en(i_en),
        .i_data(w_s1_lane),
        .o_data(w_s2_lane)
    );

    mux2 #(.WIDTH(WIDTH_CD)) mux_l0_acc_src(
        .i_data0(w_s2_l0_add),
        .i_data1(w_s1_c),
        .i_sel(w_s1_start && (w_s1_lane == 1'b0)),
        .o_data(w_s1_l0_acc_in)
    );

    mux2 #(.WIDTH(WIDTH_CD)) mux_l1_acc_src(
        .i_data0(w_s2_l1_add),
        .i_data1(w_s1_c),
        .i_sel(w_s1_start && (w_s1_lane == 1'b1)),
        .o_data(w_s1_l1_acc_in)
    );

    register #(.WIDTH(WIDTH_CD)) pr_s1_l0_acc (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_clr_n(i_clr_n),
        .i_en(i_en),
        .i_data(w_s1_l0_acc_in),
        .o_data(w_s2_l0_acc)
    );

    register #(.WIDTH(WIDTH_CD)) pr_s1_l1_acc (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_clr_n(i_clr_n),
        .i_en(i_en),
        .i_data(w_s1_l1_acc_in),
        .o_data(w_s2_l1_acc)
    );

    register #(.WIDTH(1)) pr_s1_start(
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_clr_n(i_clr_n),
        .i_en(i_en),
        .i_data(w_s1_start),
        .o_data(w_s2_start)
    );



    ///////////////////////////////////////////////
    // Stage 2 >>>
    ///////////////////////////////////////////////
    logic [WIDTH_CD-1:0] w_add_acc_in;
    logic [WIDTH_CD-1:0] w_add_result;

    assign w_add_acc_in = (w_s2_lane == 1'b0) ? w_s2_l0_acc : w_s2_l1_acc;

    assign w_add_result = w_s2_mulr + w_add_acc_in;

    assign w_s2_l0_add = (w_s2_lane == 1'b0) ? w_add_result : w_s2_l0_acc;
    assign w_s2_l1_add = (w_s2_lane == 1'b1) ? w_add_result : w_s2_l1_acc;

    mux2 #(.WIDTH(WIDTH_CD)) mux_output(
        .i_data0(w_s2_l0_acc),
        .i_data1(w_s2_l1_acc),
        .i_sel(w_s2_lane==1'b0),
        .o_data(o_d)
    );


    ///////////////////////////////////////////////
    // Decoupled Delay Pipe
    // [1] delay = dim + 1 // how often want to switch
    // We should design mac to meet this otherwise stalls needed
    // we strongly assume that, mac latnecy > matrix dim
    ///////////////////////////////////////////////
    delayed_pipev #(.WIDTH (1), .DEPTH (M+1), .M(M)) u_delay_v (
        .i_clk     (i_clk),
        .i_rst_n   (i_rst_n),
        .i_en      (i_en),
        .i_clr_n   (i_clr_n),
        .i_in      (i_last),
        .i_ptr     (($clog2(M+1))'(i_dim + 1)), // [1]
        .o_out     (o_done)
    );

    ///////////////////////////////////////////////
    // Debug
    ///////////////////////////////////////////////

endmodule
