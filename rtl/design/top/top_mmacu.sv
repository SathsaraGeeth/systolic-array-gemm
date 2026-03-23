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
        mmacu #(
        .M(M),
        .WIDTH_AB(WIDTH_AB),
        .WIDTH_CD(WIDTH_CD)
        ) u_mmacu_hb (
        .i_clk(hb_bus.clk),
        .i_rst_n(hb_bus.rst_n),
        .i_clr_n(hb_bus.clr_n),
        .i_sync_load(),
        .i_load_init(),
        .i_load_dim(hb_bus.dim),
        .i_c(),
        .i_c_valid(),
        .o_c_ready(),
        .o_load_done(),
        .i_start(),
        .i_a(hb_bus.a),
        .i_b(hb_bus.b),
        .i_ab_valid(),
        .o_ab_ready(),
        .i_uload_dim(),
        .o_d(hb_bus.d),
        .o_d_valid(),
        .i_d_ready(),
        .o_uload_done()
        );

end else begin : GEN_LB
        mmacu #(
        .M(M),
        .WIDTH_AB(WIDTH_AB),
        .WIDTH_CD(WIDTH_CD)
        ) u_mmacu_lb (
        .i_clk(hb_bus.clk),
        .i_rst_n(hb_bus.rst_n),
        .i_clr_n(hb_bus.clr_n),
        .i_sync_load(),
        .i_load_init(),
        .i_load_dim(hb_bus.dim),
        .i_c(hb_bus.c),
        .i_c_valid(),
        .o_c_ready(),
        .o_load_done(),
        .i_start(),
        .i_a(hb_bus.a),
        .i_b(hb_bus.b),
        .i_ab_valid(),
        .o_ab_ready(),
        .i_uload_dim(),
        .o_d(hb_bus.d),
        .o_d_valid(),
        .i_d_ready(),
        .o_uload_done()
        );
end
endgenerate
endmodule
