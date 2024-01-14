n, m = map(int, input().split())

q = []
l = []
for i in range(n):
    a = list(map(int, input().split()))
    q.append(a)

for i in range(n):
    a = list(map(int, input().split()))
    l.append(a)

for i in range(n):
    for j in range(m):
        print(q[i][j] + l[i][j],end=' ')
    print()