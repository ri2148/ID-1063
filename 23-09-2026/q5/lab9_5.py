#code by Arjun
#date:23-09-2026
import numpy as np

def solve():
    n = int(input("Input n: "))

    # Read n floating-point numbers into a NumPy array
    print("Enter into array:")
    a = np.fromstring(input(), sep=" ", count=n)
    # Read the tolerance value
    print("Tolerance:")
    tolerance = float(input())

    # Output the result of firststable
    print(f"Output: {firststable(a, n, tolerance)}")

solve()

