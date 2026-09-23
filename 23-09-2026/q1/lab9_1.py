#code by Arjun
#date:23-09-2026
import numpy as np
def rms(a: list[float] | np.ndarray, n: int) -> float:
    RMS = norm(A) / sqrt(n)
    if n == 0:
        return 0.0

#Converting to a 1D NumPy array truncated to n elements
    A = np.asarray(a[:n], dtype=float)

    return float(np.linalg.norm(A) / np.sqrt(n))


readings = [2.0, -3.0, 4.0, -1.0]
n = len(readings)

result = rms(readings, n)
print(f"RMS Value: {result:.4f}")

