a, b, c = map(int, input().split())

if a == b == c:
    money = 10000 + a * 1000
elif a == b != c:
    money = 1000 + a * 100
elif a != b == c:
    money = 1000 + b * 100
elif a == c != b:
    money = 1000 + a * 100
elif a != b != c:
    if a > b:
        if a > c:
            money = a * 100
        else:
            money = c * 100
    else:
        if b > c:
            money = b * 100
        else:
            money = c * 100
print(money)