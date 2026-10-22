module tb_neuron;

    logic signed [15:0] inputs [0:62];
    logic signed [15:0] weights [0:62];
    logic signed [31:0] bias;
    logic signed [15:0] result;

    neuron dut (
        .inputs (inputs),
        .weights (weights),
        .bias (bias),
        .result (result)
    );

    initial begin
        for (int i = 0; i < 63; i++) begin
            inputs[i] = 16'sd0;
            weights[i] = 16'sd0;
        end

        // Test 1: 1 × 2 = 2
        inputs[0] = 16'sd1024;
        weights[0] = 16'sd2048;
        bias = 32'sd0;
        #1;

        if (result !== 16'sd2048)
            $fatal(1, "Positive multiply failed: got %0d", result);

        // Test 2: Negative product becomes zero after ReLU.
        inputs[0] = -16'sd1024;
        weights[0] = 16'sd2048;
        bias = 32'sd0;
        #1;

        if (result !== 16'sd0)
            $fatal(1, "ReLU failed: got %0d", result);

        // Test 3: (-1) × (-2) = 2
        inputs[0] = -16'sd1024;
        weights[0] = -16'sd2048;
        bias = 32'sd0;
        #1;

        if (result !== 16'sd2048)
            $fatal(1, "Negative multiply failed: got %0d", result);

        // Test 4: 1 × 1 + 1 = 2
        // Bias uses scale 1024 squared.
        inputs[0] = 16'sd1024;
        weights[0] = 16'sd1024;
        bias = 32'sd1048576;
        #1;

        if (result !== 16'sd2048)
            $fatal(1, "Bias addition failed: got %0d", result);

        // Test 5: 8 × 8 = 64, exceeding the output range.
        inputs[0] = 16'sd8192;
        weights[0] = 16'sd8192;
        bias = 32'sd0;
        #1;

        if (result !== 16'sd32767)
            $fatal(1, "Clipping failed: got %0d", result);

        $display("PASS: all 5 basic neuron tests passed.");
        $finish;
    end




endmodule