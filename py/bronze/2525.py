a, b = map(int,input().split())
c = int(input())


a = a * 60
b = a + b + c


a = b // 60
b = b % 60

if a >= 24:
    a -= 24
print(f'{a} {b}')