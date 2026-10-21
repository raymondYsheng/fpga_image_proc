import csv
from pathlib import Path

import numpy as np
from sklearn.metrics import classification_report, confusion_matrix
from sklearn.neural_network import MLPClassifier

ROOT = Path(__file__).resolve().parent
TRAIN_FILE = ROOT / "gestures_20261018_235709.csv"
TEST_FILE = ROOT / "gestures_20261019_000124.csv"

LABELS = ["fist", "open_hand", "other", "pointing"]


def load_data(path):
    with path.open(newline="") as file:
        rows = list(csv.DictReader(file))

    if not rows:
        raise ValueError(f"{path.name} has no samples.")

    labels = np.array([row["label"] for row in rows])
    coordinates = np.array([
        [
            float(row[f"{axis}{i}"])
            for i in range(21)
            for axis in ("x", "y", "z")
        ]
        for row in rows
    ], dtype=np.float64)

    if not np.isfinite(coordinates).all():
        raise ValueError(f"{path.name} contains invalid numbers.")

    if set(labels) != set(LABELS):
        raise ValueError(
            f"{path.name} must contain all four labels. "
            f"Found: {sorted(set(labels))}"
        )

    print(f"\n{path.name}")
    for label in LABELS:
        print(f"  {label}: {np.sum(labels == label)} samples")

    return coordinates, labels


def normalize(coordinates):
    points = coordinates.reshape(-1, 21, 3)

    # Make every coordinate relative to the wrist (landmark 0).
    relative = points - points[:, 0:1, :]

    # Scale by wrist-to-middle-knuckle distance (landmark 9).
    scale = np.linalg.norm(relative[:, 9, :], axis=1)
    if np.any(scale < 1e-6):
        raise ValueError("Found a sample with near-zero hand size.")

    normalized = relative / scale[:, None, None]
    return normalized.reshape(-1, 63)


def main():
    train_raw, train_labels = load_data(TRAIN_FILE)
    test_raw, test_labels = load_data(TEST_FILE)

    train_inputs = normalize(train_raw)
    test_inputs = normalize(test_raw)

    model = MLPClassifier(
        hidden_layer_sizes=(16,),
        activation="relu",
        solver="adam",
        alpha=0.01,
        max_iter=2000,
        random_state=42,
    )

    print("\nTraining...")
    model.fit(train_inputs, train_labels)

    predictions = model.predict(test_inputs)

    print(f"\nTraining accuracy: "
          f"{model.score(train_inputs, train_labels):.1%}")
    print(f"Test accuracy: "
          f"{model.score(test_inputs, test_labels):.1%}")

    print("\nResults for each gesture:")
    print(classification_report(
        test_labels,
        predictions,
        labels=LABELS,
        zero_division=0,
    ))

    print("Confusion matrix: rows = actual, columns = predicted")
    print("Order:", LABELS)
    print(confusion_matrix(test_labels, predictions, labels=LABELS))

    # Save the learned numbers for later inference and Verilog conversion.
    output_path = ROOT / "gesture_model.npz"
    np.savez(
        output_path,
        W1=model.coefs_[0],
        b1=model.intercepts_[0],
        W2=model.coefs_[1],
        b2=model.intercepts_[1],
        classes=model.classes_,
        normalization=np.array("wrist_relative_middle_mcp_scale_v1"),
    )
    print(f"\nSaved model: {output_path.name}")


if __name__ == "__main__":
    main()