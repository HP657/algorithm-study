p = [[0] * 100 for _ in range(100)]

a = int(input())

for i in range(a):
    x, y = list(map(int, input().split()))

    for xi in range(x, x + 10):
        for yi in range(y, y + 10):
            p[xi][yi] = 1
cnt = 0
for i in range(100):
    for j in range(100):
        cnt += p[i][j]

print(cnt)