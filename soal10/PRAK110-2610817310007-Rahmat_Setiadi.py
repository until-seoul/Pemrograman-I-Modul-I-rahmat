base = 5
height = 12

b_side = int((base**2 + height**2) ** 0.5)
perimeter = base + height + b_side
area = 0.5 * base * height

print("Diketahui :")
print("Alas =", base, "cm")
print("Tinggi =", height, "cm")
print("\nJawab :")
print(f"Sisi A = {height} cm")
print(f"Sisi B = {b_side} cm")
print(f"Sisi C = {base} cm")
print(f"Keliling = {perimeter} cm")
print(f"Luas = {area:.0f} cm")
