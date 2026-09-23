#code by Arjun
#date:23-09-2026
import numpy as np

def solve():
    n = int(input("Input: "))

    # Read n floating-point numbers into a NumPy array
    a = np.array([float(input()) for _ in range(n)], dtype=float)

    # Read the tolerance value
    tolerance = float(input())

    # Output the result of firststable
    print(f"Output: {firststable(a, n, tolerance)}")

solve()

