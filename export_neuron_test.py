from pathlib import Path
import numpy as np

ROOT = Path(__file__).resolve().parent
OUT = ROOT / "rtl_test"
OUT.mkdir(exist_ok=True)


def write_hex(name, values, bits):
    mask = (1 << bits) - 1
    digits = bits // 4
    with (OUT / name).open("w") as file:
        for value in np.asarray(values).reshape(-1):
            file.write(f"{int(value) & mask:0{digits}x}\n")


with np.load(ROOT / "gesture_fixed_point.npz") as data:
    inputs = data["test_inputs"]
    assert inputs.shape == (236, 63), "Unexpected test dataset size"

    # All 63 weights feeding hidden neuron 0.
    write_hex("weights.hex", data["W1"][:, 0], 16)
    write_hex("bias.hex", data["b1"][0:1], 32)

    # Each sample occupies 63 consecutive entries.
    write_hex("inputs.hex", inputs, 16)
    write_hex("expected.hex", data["expected_hidden"][:, 0], 16)

print(f"Exported neuron test data to {OUT}")