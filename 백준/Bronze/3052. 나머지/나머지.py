result = [0] * 10  # 각 최종 점수를 저장할 배열

for num in range(10):
    number = int(input())
    result[num] = number % 42  

# 겹치지 않는 최종 수
unique_count = len(set(result))

print(unique_count)