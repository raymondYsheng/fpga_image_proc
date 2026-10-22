module tb_neuron_dataset;

    localparam int SAMPLES = 236;
    localparam int FEATURES = 63;

    logic signed [15:0] inputs  [0:62];
    logic signed [15:0] weights [0:62];
    logic signed [31:0] bias;
    logic signed [15:0] result;

    // Storage for data loaded from the exported files.
    logic signed [15:0] input_memory [0:SAMPLES*FEATURES-1];
    logic signed [15:0] expected_memory [0:SAMPLES-1];
    logic signed [31:0] bias_memory [0:0];

    integer failures;

    neuron dut (
        .inputs(inputs),
        .weights(weights),
        .bias(bias),
        .result(result)
    );

    initial begin
        $readmemh("weights.hex", weights);
        $readmemh("bias.hex", bias_memory);
        $readmemh("inputs.hex", input_memory);
        $readmemh("expected.hex", expected_memory);

        bias = bias_memory[0];
        failures = 0;

        for (int sample_id = 0; sample_id < SAMPLES; sample_id++) begin
            for (int i = 0; i < FEATURES; i++) begin
                inputs[i] = input_memory[sample_id * FEATURES + i];
            end

            #1;

            if (result !== expected_memory[sample_id]) begin
                $display(
                    "FAIL sample %0d: got %0d, expected %0d",
                    sample_id, result, expected_memory[sample_id]
                );
                failures = failures + 1;
            end
        end

        if (failures != 0)
            $fatal(1, "%0d samples failed", failures);

        $display("PASS: all %0d neuron outputs match Python.", SAMPLES);
        $finish;
    end

endmodule