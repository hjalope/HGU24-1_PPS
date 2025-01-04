highest = [0] * 5 # 각 최종 점수를 저장할 배열

for num in range(5):
    point = map(int, input().split())
    highest[int(num)] = sum(point)

print(highest.index(max(highest))+1, max(highest))