n = int(input("Enter the value of n: "))

vec1 = list(map(float, input("Enter the values of the first vector: ").replace(',', ' ').split()))
vec2 = list(map(float, input("Enter the values of the second vector: ").replace(',', ' ').split()))

dot_product = sum(v1 * v2 for v1, v2 in zip(vec1, vec2))

print(f"The dot product is {dot_product:g}.")

