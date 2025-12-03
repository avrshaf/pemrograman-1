import math

A, B = map(float, input().split())

alas = math.sqrt(B**2 - A**2)
tinggi = A
keliling = A + B + alas
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
    
A = float(input())
B = float(input())

alas = math.sqrt(B**2 - A**2)
tinggi = A
keliling = A + B + alas
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")