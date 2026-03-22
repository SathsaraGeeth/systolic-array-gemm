module mmacu #(
    parameter int M = 4,
    parameter int WIDTH_AB = 8,
    parameter int WIDTH_CD = 16 // change to 32
)(
    input  logic                                    i_clk,
    input  logic                                    i_rst_n,
    input  logic                                    i_clr_n,

    // Load phase
    input  logic                                    i_sync_load,    // a level stable over load period
    input  logic                                    i_load_init,    // a pulse
    input  logic [$clog2(M+1)-1:0]                  i_load_dim,     // a pulse/level sampled and i_load_init
    input  logic [M*WIDTH_CD-1:0]                   i_c,
    input  logic                                    i_c_valid,
    output logic                                    o_c_ready,
    output logic                                    o_load_done,

    // Compute phase
    input  logic                                    i_start,        // a pulse
    input  logic [M*WIDTH_AB-1:0]                   i_a,
    input  logic [M*WIDTH_AB-1:0]                   i_b,
    input  logic                                    i_ab_valid,
    output logic                                    o_ab_ready,

    // Unload phase
    input  logic [$clog2(M+1)-1:0]                  i_uload_dim,    // a level
    output logic [M*WIDTH_CD-1:0]                   o_d,
    output logic                                    o_d_valid,
    input  logic                                    i_d_ready,
    output logic                                    o_uload_done
); 
    /*
    For flow control we use a weak model to faciliate lower latency, higher throughput, and portability
    Preload, Compute, and Unload are independent phases by design - it is in driver's scope to schedule them
    -------------
    1. A/B streams are synced by construct.
    2. A/B and C sterams can be either: (C is synced to A/B)
        i.  Sync  - can be used to load coupled load at the i_start for lower latency
        ii. Async - can be used to preload C to reduce memory bandwidth
    3. A/B and D streams are lockstep-synced. (A/B is synced to D)
        - uArchitectuarly this introduce backpressure to the A/B and sycned C streams
    */
    logic                       w_gstall_n;
    logic                       w_ab_en;
    logic                       w_load_en;

    logic [$clog2(M+1)-1:0]     r_load_ctr;
    logic [M-1:0]               r_load_gate_vec;

    logic [M-1:0]               r_uload_ctr;
    logic [M-1:0]               w_uload_mask_vec;
    logic                       r_waiting2consume;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n || !i_clr_n) begin
            r_load_ctr      <= '0;
            r_load_gate_vec <= 1;
        end else begin
            if (i_load_init) begin
                r_load_ctr <= i_load_dim-1;
                r_load_gate_vec <= r_load_gate_vec << 1;
            end else if (w_load_en && (r_load_ctr != 0)) begin
                r_load_ctr <= r_load_ctr - 1'b1;
                if (r_load_ctr > 1) begin
                    r_load_gate_vec <= r_load_gate_vec << 1;
                end else begin
                    r_load_gate_vec <= 1;
                end
            end
        end
    end

    always_comb begin
        w_gstall_n      = !r_waiting2consume;   // backpressure

        o_ab_ready      = i_sync_load ? (w_gstall_n && 1/*w_load_en*/) : w_gstall_n;   // A/B stream is stalled only when globally stalled. (to maintain correctness).
        w_ab_en         = i_ab_valid && o_ab_ready;

        o_c_ready       = i_sync_load ? (w_gstall_n && w_ab_en) : w_gstall_n;     // C is only stalled when when gloablly stalled. (to maintain correcteness).
        w_load_en       = i_c_valid && o_c_ready;
        o_load_done     = r_load_ctr == 0;

        o_uload_done    = (r_uload_ctr == i_load_dim);
    end


    // nets
    logic                         wn_start        [M][M];
    logic [WIDTH_AB-1:0]          wn_a            [M][M];
    logic [WIDTH_AB-1:0]          wn_b            [M][M];
    logic [WIDTH_CD-1:0]          wn_c            [M][M];
    logic [WIDTH_CD-1:0]          wn_d            [M][M];
    logic                         wn_done         [M][M];

    // choose the wn_done column that pointed by the i_uload_dim-1 that say who are valid to unload
    // if in that column's i th row is 1 we can unload i th row from the wn_d then we should pull valid let cosumer consume
    // but if he donesnt do lockstep pull global_stall_n to low to introdue backpressure
    
    always_comb begin
        w_uload_mask_vec = '0; 
    for (int k = 0; k < M; k++) begin
        w_uload_mask_vec[k] = wn_done[k][i_uload_dim-1];
    end
    end
    always_ff @(posedge i_clk or negedge i_rst_n) begin
            if (!i_rst_n || !i_clr_n) begin
                o_d               <= '0;
                o_d_valid         <= 1'b0;
                r_uload_ctr       <= '0;
                r_waiting2consume <= 1'b0;
            end else begin
                r_waiting2consume <= 1'b0;
            o_d_valid <= |w_uload_mask_vec;
            if (|w_uload_mask_vec && i_d_ready) begin
                if (r_uload_ctr == i_uload_dim-1)
                    r_uload_ctr <= '0;
                else
                    r_uload_ctr <= r_uload_ctr + 1'b1;
                for (int m = 0; m < M; m++) begin
                    if (w_uload_mask_vec[m]) begin
                        for (int j = 0; j < M; j++) begin
                            o_d[j*WIDTH_CD +: WIDTH_CD] <= wn_d[m][j];
                        end
                    end
                end
            end else if (|w_uload_mask_vec && !i_d_ready) begin
                r_waiting2consume <= 1'b1;
            end
        end
    end

    genvar i, j;
    generate
        for (i = 0; i < M; i++) begin : ROW
            for (j = 0; j < M; j++) begin : COL
                mac #(WIDTH_AB, WIDTH_CD) u_mac (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_start   (wn_start[i][j]),
                    .i_a       (wn_a[i][j]),
                    .i_b       (wn_b[i][j]),
                    .i_c       (wn_c[i][j]),
                    .o_done    (wn_done[i][j]),
                    .o_d       (wn_d[i][j])
                );
                delayed_pipe #(.WIDTH (WIDTH_AB+1), .DEPTH (i+1)) u_delay_a (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_in      ({i_a[i*WIDTH_AB +: WIDTH_AB], i_start}),
                    .o_out     ({wn_a[i][0], wn_start[i][0]})
                );
                if (j==0) begin
                register #(WIDTH_AB+1) u_shift_a (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_data    ({wn_a[i][0], wn_start[i][0]}),
                    .o_data    ({wn_a[i][j], wn_start[i][j]})
                );
                end else begin
                    register #(WIDTH_AB+1) u_shift_a (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_data    ({wn_a[i][j-1], wn_start[i][j-1]}),
                    .o_data    ({wn_a[i][j], wn_start[i][j]})
                );
                end
                delayed_pipe #(.WIDTH (WIDTH_AB+1), .DEPTH (j+1)) u_delay_b (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_in      ({i_b[j*WIDTH_AB +: WIDTH_AB], i_start}),
                    .o_out     ({wn_b[0][j], wn_start[0][j]})
                );
                if (i==0) begin
                register #(WIDTH_AB+1) u_shift_b (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_data    ({wn_b[0][j], wn_start[0][j]}),
                    .o_data    ({wn_b[i][j], wn_start[i][j]})
                );
                end else begin
                register #(WIDTH_AB+1) u_shift_b (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (w_ab_en),
                    .i_clr_n   (i_clr_n),
                    .i_data    ({wn_b[i-1][j], wn_start[i-1][j]}),
                    .o_data    ({wn_b[i][j], wn_start[i][j]})
                );
                end
                register #(WIDTH_CD) u_reg_c (
                    .i_clk     (i_clk),
                    .i_rst_n   (i_rst_n),
                    .i_en      (/*gate*/ r_load_gate_vec[i] && /*en*/ w_load_en),
                    .i_clr_n   (i_clr_n),
                    .i_data    (i_c[j*WIDTH_CD +: WIDTH_CD]),
                    .o_data    (wn_c[i][j])
                );
            end
        end
    endgenerate
endmodule
