N = int(input())
A = [int(x) for x in input().split()]
B = [int(x) for x in input().split()]
A = sorted(A)
S = 0
for i in range(N):
    S += A[i] * B[B.index(max(B))]
    B.remove(max(B))
print(S)