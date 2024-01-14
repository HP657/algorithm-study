a = [list(map(int, input().split())) for _ in range(9)]    
max = 0
ii = 0
jj = 0
for i in range(9):
    for j in range(9):
        if a[i][j] >= max:
            max = a[i][j]
            ii = i + 1
            jj = j + 1

print(max)
print(ii,jj)