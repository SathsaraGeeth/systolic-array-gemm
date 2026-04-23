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
            o_data <= $signed(i_data0) * $signed(i_data1);
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
            o_data <= $signed(i_data0) + $signed(i_data1);
        end
    end
endmodule

module delayed_pipev #(
    parameter WIDTH = 8,
    parameter DEPTH = 0,
    parameter M     = 4
)(
    input  logic                    i_clk,
    input  logic                    i_rst_n,
    input  logic                    i_en,
    input  logic                    i_clr_n,
    input  logic [WIDTH-1:0]        i_in,
    input  logic [$clog2(M+1)-1:0]  i_ptr,
    output logic [WIDTH-1:0]        o_out
);
generate
    if (DEPTH == 0) begin
        assign o_out = i_in;
    end else begin
        logic [WIDTH-1:0] r_d [DEPTH:0];

        integer i;

        always_ff @(posedge i_clk or negedge i_rst_n) begin
            if (!i_rst_n) begin
                for (i = 0; i <= DEPTH; i = i + 1)
                    r_d[i] <= '0;
            end else if (!i_clr_n) begin
                for (i = 0; i <= DEPTH; i = i + 1)
                    r_d[i] <= '0;
            end else if (i_en) begin
                r_d[0] <= i_in;
                for (i = 0; i < DEPTH; i = i + 1)
                    r_d[i+1] <= r_d[i];
            end
        end

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
        always_comb begin
            o_out = r_d[i_ptr];
        end
    end
endgenerate
endmodule

module circular_buffer #(
    parameter  DEPTH            = 8,
    parameter  WIDTH            = 8
) (
    input   logic                           i_clk,
    input   logic                           i_rst_n,
    output  logic   [WIDTH-1:0]             o_head_data,
    output  logic                           o_deq_ready,
    input   logic                           i_deq_valid,    
    input   logic   [WIDTH-1:0]             i_enq_tail_data,
    input   logic                           i_enq_valid,
    output  logic                           o_enq_ready,
    output  logic                           o_full,
    output  logic                           o_empty,
    output  logic   [$clog2(DEPTH+1)-1:0]   o_level
);  
    logic   [WIDTH-1:0]     mem_buff    [0:DEPTH-1];
    logic   [$clog2(DEPTH)-1:0]         r_head_ptr, r_tail_ptr;
    logic   [$clog2(DEPTH+1)-1:0]       r_count;

    always_comb begin
        o_full              = (r_count == DEPTH);
        o_empty             = (r_count == '0);
        o_level             = r_count;
        o_deq_ready         = !o_empty;
        o_enq_ready         = !o_full;
        o_head_data         = mem_buff[r_head_ptr];
    end

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            r_head_ptr  <= '0;
            r_tail_ptr  <= '0;
            r_count     <= '0;
        end else begin
            case ({o_enq_ready & i_enq_valid, o_deq_ready & i_deq_valid})
                2'b01: begin
                    r_head_ptr              <= r_head_ptr + 1;
                    r_count                 <= r_count    - 1;
                end
                2'b10: begin
                    r_tail_ptr              <= r_tail_ptr + 1;
                    r_count                 <= r_count    + 1;
                    mem_buff[r_tail_ptr]    <= i_enq_tail_data;
                end
                2'b11:  begin
                    r_head_ptr              <= r_head_ptr + 1;
                    r_tail_ptr              <= r_tail_ptr + 1;
                    mem_buff[r_tail_ptr]    <= i_enq_tail_data;
                end
                default: begin end
            endcase
        end
    end
endmodule

module ctr #(
    parameter int WIDTH  = 8
)(
    input  logic             i_clk,
    input  logic             i_rst_n,
    input  logic             i_start,
    input  logic             i_en,
    input  logic [WIDTH-1:0] i_target,
    output logic             o_done
    
);
    logic [WIDTH-1:0] r_count;
    
    assign o_done = (r_count == i_target);
    
    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            r_count <= '0;
        end else if (i_start) begin
            r_count <= '0;
        end else if (i_en && !o_done) begin
            r_count <= r_count + 1'b1;
        end
    end
endmodule