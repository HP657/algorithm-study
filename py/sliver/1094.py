stick = 64
X = int(input())

sticks = []
while stick >= 1:
    sticks.append(stick)
    stick = stick // 2

i = 0
j = 0
while X > 0:
    if X >= sticks[i]:
        X = X - sticks[i]
        j +=1
    i += 1

print(j)
