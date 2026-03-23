// Helper Modules
module register #(
    parameter WIDTH = 8
)(
    input  logic                  i_clk,
    input  logic                  i_rst_n,
    input  logic                  i_clr_n,
    input  logic                  i_en,
    input  logic [WIDTH-1:0]      i_data,
    output logic [WIDTH-1:0]      o_data
);
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n || !i_clr_n) begin
            o_data <= '0;
        end else if (i_en) begin
            o_data <= i_data;
        end
    end
endmodule

module mux2 #(
    parameter WIDTH = 8
    )(
    input  logic                    i_sel,
    input  logic [WIDTH-1:0]        i_data0,
    input  logic [WIDTH-1:0]        i_data1,
    output logic [WIDTH-1:0]        o_data
);
    assign o_data = i_sel ? i_data1 : i_data0;
endmodule

module delayed_pipe #(
    parameter WIDTH = 8,
    parameter DEPTH = 0
)(
    input  logic              i_clk,
    input  logic              i_rst_n,
    input  logic              i_en,
    input  logic              i_clr_n,
    input  logic [WIDTH-1:0]  i_in,
    output logic [WIDTH-1:0]  o_out
);
generate
    if (DEPTH == 0) begin
        assign o_out = i_in;
    end else begin
        logic [WIDTH-1:0] r_d [DEPTH:0];
        assign r_d[0] = i_in;
        genvar k;
        for (k = 0; k < DEPTH; k++) begin : DELAY
            register #(WIDTH) u_sr (
                .i_clk     (i_clk),
                .i_rst_n   (i_rst_n),
                .i_en      (i_en),
                .i_clr_n   (i_clr_n),
                .i_data    (r_d[k]),
                .o_data    (r_d[k+1])
            );
        end
        assign o_out = r_d[DEPTH];
    end
endgenerate
endmodule

module mul_lat1 #(
    parameter IN_WIDTH = 8
)(
    input  logic                  i_clk,
    input  logic                  i_rst_n,
    input  logic                  i_clr_n,
    input  logic                  i_en,
    input  logic [IN_WIDTH-1:0]   i_data0,
    input  logic [IN_WIDTH-1:0]   i_data1,
    output logic [2*IN_WIDTH-1:0] o_data
);
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n || !i_clr_n) begin
            o_data <= '0;
        end else if (i_en) begin
            o_data <= i_data0 * i_data1;
        end
    end
endmodule

module add_lat1 #(
    parameter IN_WIDTH = 8
)(
    input  logic                  i_clk,
    input  logic                  i_rst_n,
    input  logic                  i_clr_n,
    input  logic                  i_en,
    input  logic [IN_WIDTH-1:0]   i_data0,
    input  logic [IN_WIDTH-1:0]   i_data1,
    output logic [2*IN_WIDTH-1:0] o_data
);
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n || !i_clr_n) begin
            o_data <= '0;
        end else if (i_en) begin
            o_data <= i_data0 + i_data1;
        end
    end
endmodule

module counter #(
    parameter int WIDTH = 8
)(
    input  logic                  i_clk,
    input  logic                  i_rst_n,
    input  logic                  i_clr_n,
    input  logic                  i_en,
    input  logic                  i_start,
    input  logic [WIDTH-1:0]      i_cmp,
    output logic                  o_done
);
    logic [WIDTH-1:0] r_cnt;
    logic             r_running;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            r_cnt     <= '0;
            r_running <= 1'b0;
        end else if (!i_clr_n) begin
            r_cnt     <= '0;
            r_running <= 1'b0;
        end else if (i_en) begin
            if (i_start) begin
                r_cnt     <= '0;
                r_running <= 1'b1;
            end else if (r_running) begin
                if (r_cnt == i_cmp) begin
                    r_running <= 1'b0;
                end else begin
                    r_cnt <= r_cnt + 1'b1;
                end
            end
        end
    end
    assign o_done = r_running && (r_cnt == i_cmp);
endmodule
