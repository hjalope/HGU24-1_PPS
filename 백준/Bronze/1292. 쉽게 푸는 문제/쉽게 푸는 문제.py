A, B = map(int, input().split())

sequence = []

num = 1
while len(sequence) < B:
    sequence += [num] * num  # 숫자 num을 num번 추가
    num += 1

# A~B 구간의 합 구하기
result = sum(sequence[A - 1:B]) 

print(result)