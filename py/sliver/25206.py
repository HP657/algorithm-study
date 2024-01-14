n = ["A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"]
m = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]

hakjum = 0
hap = 0

for i in range(20):
    a = list(map(str,input().split()))
    if a[2] != 'P':
        b = float(a[1])
        l = n.index(a[2])
        hap += b * m[l]
        hakjum += b
score = float(hap / hakjum)
print(score)