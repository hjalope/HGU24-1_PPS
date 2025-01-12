score_list = []

for i in range(8):
    score = int(input())
    score_list.append((score, i + 1))  # (점수, 문제 번호)

score_list.sort(reverse=True, key=lambda x: x[0])

top_five = score_list[:5]

# 상위 5개 점수 합
total = sum(score for score, _ in top_five)

# 문제 번호만 추출하고 오름차순 정렬
problem_numbers = sorted(idx for _, idx in top_five)

print(total)
print(' '.join(map(str, problem_numbers)))