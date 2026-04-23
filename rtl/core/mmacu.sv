module mmacu #(
        parameter int M        = 8,
        parameter int WIDTH_AB = 8,
        parameter int WIDTH_CD = 16,
        parameter int WORD_W   = 64
)(
        input  logic                    i_clk,
        input  logic                    i_rst_n,

        input  logic                    i_start,    // start block marker
        input  logic                    i_last,     // last block marker
        input  logic                    i_break,    // last beat - hint to flush
        input  logic [$clog2(M+1)-1:0]  i_dim,

        input  logic [M*WIDTH_AB-1:0]   i_a,
        input  logic [M*WIDTH_AB-1:0]   i_b,
        output logic [M*WIDTH_CD-1:0]   o_d,

        input  logic                    i_ab_valid,
        input  logic                    i_d_ready,

        output logic                    o_ab_ready,
        output logic                    o_d_valid
);      

        logic [$clog2(M+1)-1:0]         w_uload_dim;
        logic                           w_uload_done;
        logic                           w_fifo_empty;
        logic                           r_fifo_empty;
        logic                           w_d_valid;
        logic                           w_ab_ready;

        assign o_d_valid  = w_d_valid && ~r_fifo_empty;
        assign o_ab_ready = w_ab_ready && ~ (s_this == FLUSHING) ;

        circular_buffer #(
                .DEPTH(4*M),
                .WIDTH($clog2(M+1))
        ) u_dim_fifo (
                .i_clk           (i_clk),
                .i_rst_n         (i_rst_n),
                .o_head_data     (w_uload_dim),
                .o_deq_ready     (),
                .i_deq_valid     (w_uload_done),
                .i_enq_tail_data (i_dim),
                .i_enq_valid     (i_start),
                .o_enq_ready     (),
                .o_full          (),
                .o_empty         (w_fifo_empty),
                .o_level         ()
        );
        
        logic [$clog2(M+1)-1:0] r_dim;
        always_ff @(posedge i_clk or negedge i_rst_n) begin
            if (!i_rst_n) begin
                r_dim <= '0;
            end else if (i_start) begin
                r_dim <= i_dim;
            end
        end

        always_ff @(posedge i_clk or negedge i_rst_n) begin
            if (!i_rst_n) begin
                r_fifo_empty <= 1'b1;
            end else begin
                r_fifo_empty <= w_fifo_empty;
            end
        end

        mmacu_core #(
                .M(M),
                .WIDTH_AB(WIDTH_AB),
                .WIDTH_CD(WIDTH_CD)
        ) u_mmacu_core (
                .i_clk(i_clk),
                .i_rst_n(i_rst_n),
                .i_clr_n(w_clr_n),
                .i_sync_load(1'b0),
                .i_load_init(1'b0),
                .i_load_dim(i_start ? i_dim : r_dim),
                .i_c('0),
                .i_c_valid(1'b0),
                .o_c_ready(),
                .o_load_done(),
                .i_start(i_start | s_this == FLUSHING && s_last == IDLE),
                .i_last(i_last | s_this == FLUSHING && s_last == IDLE),
                .i_a(i_a),
                .i_b(i_b),
                .i_ab_valid(i_ab_valid | s_this == FLUSHING),
                .o_ab_ready(w_ab_ready),
                .i_uload_dim(w_uload_dim),
                .o_d(o_d),
                .o_d_valid(w_d_valid),
                .i_d_ready(i_d_ready),
                .o_uload_done(w_uload_done)
        );

        typedef enum logic {
            IDLE,
            FLUSHING
        } state_t;

        state_t s_this, s_next, s_last;

        always_ff @(posedge i_clk or negedge i_rst_n) begin
            if (!i_rst_n) begin
                s_this <= IDLE;
                s_last <= IDLE;
            end else begin
                s_this <= s_next;
                s_last <= s_this;
            end
        end

        always_comb begin
            s_next = s_this;
            w_start_flush_ctr = 1'b0;
            w_clr_n  = 1'b1;
            case (s_this)
                IDLE: begin
                    if (i_break && i_ab_valid && o_ab_ready) begin
                        s_next = FLUSHING;
                        w_start_flush_ctr = 1'b1;
                    end
                end
                FLUSHING: begin
                    if (w_done_flush) begin
                        s_next = IDLE;
                        w_clr_n = 1'b0;
                    end
                end
            endcase
        end

        localparam int L = 2;

        logic w_start_flush_ctr;
        logic w_done_flush;
        logic w_clr_n;

        ctr #(
            .WIDTH  (4*M)
        ) ctr_flush (
            .i_clk    (i_clk),
            .i_rst_n  (i_rst_n),
            .i_start  (w_start_flush_ctr),
            .i_en     ((i_ab_valid | s_this == FLUSHING) && w_ab_ready),
            .i_target (2*r_dim+L-1),
            .o_done   (w_done_flush)
        );
endmodule: mmacu
