from collections import Counter

# 선수 수 입력
number = int(input())
name_list = []

# 선수들의 성 첫 글자 입력
for _ in range(number):
    name = input()
    name_list.append(name[0])

# 성 첫 글자 카운트
word_count = Counter(name_list)
most_used = word_count.most_common()

# 기존 로직 유지
result = []
flag = 0

for i in range(len(most_used)):
    if most_used[i][1] >= 5:
        result.append(most_used[i][0])
        flag = 1

# 결과 출력
if flag == 0:
    print("PREDAJA")
else:
    print("".join(sorted(result)))  # 알파벳 순 정렬 후 출력
