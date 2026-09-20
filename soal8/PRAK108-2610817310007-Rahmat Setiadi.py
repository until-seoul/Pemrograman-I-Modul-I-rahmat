import math

lap = 5
distance = 14
circumference = distance / lap
radius = circumference / (2 * math.pi)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman =", lap, "Putaran")
print("Jarak tempuh Pak Dengklek =", distance, "Kilometer")
print("\nJawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {radius:.2f} Kilometer")
