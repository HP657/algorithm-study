a = int(input())
b = int(input())
money = 0

for i in range(b):
    c, d = map(int,input().split())
    money += c * d

if a == money:
    print('Yes')
else:
    print('No')