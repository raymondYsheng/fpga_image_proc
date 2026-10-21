module neuron (
    input logic signed [15:0] inputs [0:62],
    input logic signed [15:0] weights [0:62],
    input logic signed [31:0] bias,
    output logic signed [15:0] result
);

logic signed [31:0] product;
logic signed [47:0] accumulator;
logic signed [47:0] shift;

always_comb begin : main_block
    accumulator = {{16{bias[31]}}, bias};
    product = 32'sd0;
    shift = 48'sd0;

    for (int i = 0; i < 63; i++) begin
        product = inputs[i] * weights[i];
        accumulator = accumulator + {{16{product[31]}}, product}; 
    end

    if (accumulator <= 0) begin
        result = 0;
    end
    else begin
        shift = accumulator >>> 10;
        if (shift > 32767) begin
            result = 32767;
        end
        else begin
            result = shift[15:0];
        end
    end
end

endmodule