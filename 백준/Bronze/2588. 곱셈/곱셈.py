# 입력 받기
num1 = int(input().strip())
num2 = int(input().strip())

# 계산
result1 = num1 * (num2 % 10)        # num2의 일의 자리 숫자와 곱한 값
result2 = num1 * ((num2 // 10) % 10) # num2의 십의 자리 숫자와 곱한 값
result3 = num1 * (num2 // 100)       # num2의 백의 자리 숫자와 곱한 값
result4 = num1 * num2                # num1과 num2의 전체 곱

# 출력
print(result1)
print(result2)
print(result3)
print(result4)
