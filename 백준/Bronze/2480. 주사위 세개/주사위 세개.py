# 입력받기
numbers = list(map(int, input().split()))

# 상금 계산
if numbers[0] == numbers[1] == numbers[2]:  # 모두 같은 경우
    result = 10000 + numbers[0] * 1000
elif numbers[0] == numbers[1] or numbers[0] == numbers[2]:  # 두 개가 같은 경우
    result = 1000 + numbers[0] * 100
elif numbers[1] == numbers[2]:  # 두 개가 같은 경우
    result = 1000 + numbers[1] * 100
else:  # 모두 다른 경우
    result = max(numbers) * 100

# 출력
print(result)