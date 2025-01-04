num, current_feel = map(int, input().split())
good_good, good_bad, bad_good, bad_bad = map(float, input().split()) 

# 초기 상태 확률 설정
good_prob = 1.0 if current_feel == 0 else 0.0
bad_prob = 1.0 if current_feel == 1 else 0.0

# N일 동안 상태 전이
for _ in range(num):
    next_good_prob = good_prob * good_good + bad_prob * bad_good  # 좋은 날로 전이 확률
    next_bad_prob = good_prob * good_bad + bad_prob * bad_bad  # 싫은 날로 전이 확률
    good_prob, bad_prob = next_good_prob, next_bad_prob  # 확률 갱신

# 결과 출력 (1000배 후 반올림)
print(int(round(good_prob * 1000)))  # 좋은 날 확률
print(int(round(bad_prob * 1000)))  # 싫은 날 확률