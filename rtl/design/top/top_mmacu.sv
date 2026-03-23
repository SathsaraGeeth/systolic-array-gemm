/* Modes:
1. HB:  Separate Ports for A, B, C, D.           (sum{A^T@B}+C = D)
        Matrix size agnostic.
        hb_if
2. LB:  Ports for A, B, D.                       (sum{A^T@B}   = D)
        Matrix size agnostic.
        lb_if
*/

module top_mmacu #(
        parameter int M        = 4,
        parameter int WIDTH_AB = 8,
        parameter int WIDTH_CD = 16, // change to 32
        parameter     MODE     = "HB"
);

hb_if #(.M(M), .WIDTH_AB(WIDTH_AB), .WIDTH_CD(WIDTH_CD)) hb_bus ();
lb_if #(.M(M), .WIDTH_AB(WIDTH_AB), .WIDTH_CD(WIDTH_CD)) lb_bus ();

generate
if (MODE == "HB") begin : GEN_HB
        logic ab_ready;
        assign hb_bus.a_ready = ab_ready;
        assign hb_bus.b_ready = ab_ready;

        mmacu #(
        .M(M),
        .WIDTH_AB(WIDTH_AB),
        .WIDTH_CD(WIDTH_CD)
        ) u_mmacu_hb (
        .i_clk(hb_bus.clk),
        .i_rst_n(hb_bus.rst_n),
        .i_clr_n(hb_bus.clr_n),
        .i_sync_load(1'b1),
        .i_load_init(hb_bus.start),     
        .i_load_dim(hb_bus.dim),
        .i_c(hb_bus.c),
        .i_c_valid(hb_bus.c_valid),
        .o_c_ready(hb_bus.c_ready),
        .o_load_done(),                 // leave dangling
        .i_start(hb_bus.start),
        .i_a(hb_bus.a),
        .i_b(hb_bus.b),
        .i_ab_valid(hb_bus.a_valid && hb_bus.b_valid),
        .o_ab_ready(ab_ready),
        .i_uload_dim(hb_bus.dim),
        .o_d(hb_bus.d),
        .o_d_valid(hb_bus.d_valid),
        .i_d_ready(hb_bus.d_ready),
        .o_uload_done(hb_bus.done)
        );

end else begin : GEN_LB
        logic ab_ready;
        assign lb_bus.a_ready = ab_ready;
        assign lb_bus.b_ready = ab_ready;

        mmacu #(
        .M(M),
        .WIDTH_AB(WIDTH_AB),
        .WIDTH_CD(WIDTH_CD)
        ) u_mmacu_lb (
        .i_clk(lb_bus.clk),
        .i_rst_n(lb_bus.rst_n),
        .i_clr_n(lb_bus.clr_n),
        .i_sync_load(1'b0),
        .i_load_init(),         // leave dangling
        .i_load_dim(lb_bus.dim),
        .i_c(),                 // leave dangling
        .i_c_valid(),           // leave dangling
        .o_c_ready(),           // leave dangling
        .i_start(lb_bus.start),
        .i_a(lb_bus.a),
        .i_b(lb_bus.b),
        .i_ab_valid(lb_bus.a_valid && lb_bus.b_valid),
        .o_ab_ready(ab_ready),
        .i_uload_dim(lb_bus.dim),
        .o_d(lb_bus.d),
        .o_d_valid(lb_bus.d_valid),
        .i_d_ready(lb_bus.d_ready),
        .o_uload_done(lb_bus.done)
        );
end
endgenerate
endmodule
