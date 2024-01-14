arr = []
for i in range(10):
    a = int(input())
    if not(a % 42  in arr):
        arr.append(a % 42)
print(len(arr))