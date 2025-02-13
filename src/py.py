# numerator, denominator = (0.000000001).as_integer_ratio()
# print(numerator)
# print(denominator)
# print(format(numerator / denominator, ".10f"))

# numerator, denominator = (0.1).as_integer_ratio()
# f"0.1 ≈ {numerator} / {denominator}"

a = 0.1234567
b = 0.1234568

print(format(abs(a - b), ".55f"))

abs_tol = 1e-7
print(format(abs_tol, ".15f"))

if abs(a - b) > abs_tol:
    print("Не равны")
else:
    print("Равны")
