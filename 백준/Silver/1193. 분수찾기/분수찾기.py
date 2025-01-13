x = int(input())

group = 1
while (group * (group + 1)) // 2 < x:
    group += 1

# 그룹 내에서 몇 번째인지 찾기
pos_in_group = x - (group * (group - 1)) // 2

# 분자와 분모 계산
if group % 2 == 0:  # 짝수 
    numerator = pos_in_group
    denominator = group - pos_in_group + 1
else:  # 홀수 
    numerator = group - pos_in_group + 1
    denominator = pos_in_group

print(f"{numerator}/{denominator}")