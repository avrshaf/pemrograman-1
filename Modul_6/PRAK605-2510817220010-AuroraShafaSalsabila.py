ordo = int(input())

print("Matriks A")
matriks_A = []
for i in range(ordo):
    matriks_A.append(list(map(int, input().split())))

print("Matriks B")
matriks_B = []
for i in range(ordo):
    matriks_B.append(list(map(int, input().split())))

matriks_AxB = [[0 for _ in range(ordo)] for _ in range(ordo)]

for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            matriks_AxB[i][j] += matriks_A[i][k] * matriks_B[k][j]

print(f"Matriks AXB")
for row in matriks_AxB:
    print(*row)