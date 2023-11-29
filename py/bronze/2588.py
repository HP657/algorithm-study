A = int(input())
B = int(input())

third_digit = B % 10
second_digit = (B // 10) % 10
first_digit = B // 100

result1 = A * third_digit
result2 = A * second_digit
result3 = A * first_digit

total_result = A * B

print(result1)
print(result2)
print(result3)
print(total_result)