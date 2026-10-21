from pathlib import Path

import numpy as np

# Reuse exactly the same data loading and normalization as training.
# Importing this module does not run its main() function.
from train_gestures import load_data, normalize

ROOT = Path(__file__).resolve().parent

FRACTION_BITS = 10
SCALE = 1 << FRACTION_BITS
MIN16 = -(1 << 15)
MAX16 = (1 << 15) - 1


def quantize_parameters(values, scale, bits, name):
    """Round parameters; reject values that cannot fit."""
    rounded = np.rint(values * scale)
    lower = -(1 << (bits - 1))
    upper = (1 << (bits - 1)) - 1

    if not np.isfinite(rounded).all():
        raise ValueError(f"{name}: invalid values")

    if np.any((rounded < lower) | (rounded > upper)):
        raise ValueError(f"{name}: does not fit in {bits} bits")

    # Use int64 storage so NumPy does not overflow at 16 bits.
    return rounded.astype(np.int64)


def main():
    with np.load(ROOT / "gesture_model.npz") as model:
        W1 = model["W1"]
        b1 = model["b1"]
        W2 = model["W2"]
        b2 = model["b2"]
        classes = model["classes"]
        normalization = model["normalization"]

    if normalization.item() != "wrist_relative_middle_mcp_scale_v1":
        raise ValueError("Unexpected normalization format")

    if W1.shape != (63, 16) or W2.shape != (16, 4):
        raise ValueError("Expected a 63 -> 16 -> 4 network")

    raw, labels = load_data(ROOT / "gestures_20261019_000124.csv")
    inputs = normalize(raw)

    # Original floating-point reference.
    hidden_float = np.maximum(0, inputs @ W1 + b1)
    scores_float = hidden_float @ W2 + b2
    float_ids = np.argmax(scores_float, axis=1)

    # Inputs and weights have scale 1024.
    W1q = quantize_parameters(W1, SCALE, 16, "W1")
    W2q = quantize_parameters(W2, SCALE, 16, "W2")

    # Products have scale 1024 squared, so biases must match.
    b1q = quantize_parameters(b1, SCALE * SCALE, 32, "b1")
    b2q = quantize_parameters(b2, SCALE * SCALE, 32, "b2")

    rounded_inputs = np.rint(inputs * SCALE)
    input_clips = np.count_nonzero(
        (rounded_inputs < MIN16) | (rounded_inputs > MAX16)
    )
    inputs_q = np.clip(
        rounded_inputs, MIN16, MAX16
    ).astype(np.int64)

    # Layer 1: multiply, accumulate, and add bias.
    accum1 = inputs_q @ W1q + b1q

    # ReLU, then discard 10 fractional bits to restore scale 1024.
    hidden_unclipped = np.maximum(accum1, 0) >> FRACTION_BITS
    hidden_clips = np.count_nonzero(hidden_unclipped > MAX16)
    hidden_q = np.clip(hidden_unclipped, 0, MAX16)

    # Layer 2: keep the wider scores; only their ordering matters.
    scores_q = hidden_q @ W2q + b2q
    fixed_ids = np.argmax(scores_q, axis=1)

    # int64 is used by Python; planned hardware accumulators are 48-bit.
    # With 16-bit operands, 32-bit biases, and at most 63 products,
    # even the worst-case partial sums fit in signed 48 bits.
    assert np.all(accum1 >= -(1 << 47))
    assert np.all(accum1 < (1 << 47))
    assert np.all(scores_q >= -(1 << 47))
    assert np.all(scores_q < (1 << 47))

    float_predictions = classes[float_ids]
    fixed_predictions = classes[fixed_ids]
    disagreements = np.flatnonzero(float_ids != fixed_ids)

    print(f"\nFloat accuracy: "
          f"{np.mean(float_predictions == labels):.2%}")
    print(f"Fixed-point accuracy: "
          f"{np.mean(fixed_predictions == labels):.2%}")
    print(f"Agreement with float model: "
          f"{np.mean(float_ids == fixed_ids):.2%}")
    print(f"Changed predictions: {len(disagreements)} / {len(labels)}")
    print(f"Clipped input values: {input_clips} / {inputs_q.size}")
    print(f"Clipped hidden values: {hidden_clips} / {hidden_q.size}")

    print("\nGesture IDs:")
    for index, label in enumerate(classes):
        print(f"  {index}: {label}")

    for index in disagreements[:10]:
        print(
            f"Sample {index}: actual={labels[index]}, "
            f"float={float_predictions[index]}, "
            f"fixed={fixed_predictions[index]}"
        )

    # Save parameters and reference outputs for the Verilog testbench.
    np.savez(
        ROOT / "gesture_fixed_point.npz",
        W1=W1q,
        b1=b1q,
        W2=W2q,
        b2=b2q,
        classes=classes,
        fraction_bits=np.array(FRACTION_BITS),
        normalization=normalization,
        test_inputs=inputs_q,
        expected_hidden=hidden_q,
        expected_scores=scores_q,
        expected_ids=fixed_ids,
        actual_labels=labels,
    )
    print("\nSaved: gesture_fixed_point.npz")


if __name__ == "__main__":
    main()