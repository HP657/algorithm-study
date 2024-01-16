n, b = map(int,input().split())

num = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'

ans = ''
while n != 0:
    ans += num[n % b]
    n = n // b
print(ans[::-1])