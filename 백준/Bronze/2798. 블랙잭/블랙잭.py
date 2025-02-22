from itertools import combinations

N, M = map(int, input().split())  # 카드 개수, 최대 합
cards = list(map(int, input().split()))

max_num = 0

for combinations in combinations(cards, 3):
    total = sum(combinations) # 3개 더한 값
    if total <= M: # M보다 작거나 같으면
        max_num = max(max_num, total) # 현재 max_num과 total 비교

print(max_num)