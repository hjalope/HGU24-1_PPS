def can_place_routers(houses, distance, C):
    count = 1
    last_position = houses[0]
    for i in range(1, len(houses)):
        if houses[i] - last_position >= distance:
            count += 1
            last_position = houses[i]
            if count == C:
                return True
    return False

def get_max_distance(N, C, houses):
    houses.sort()
    left, right = 1, houses[-1] - houses[0]
    result = 0

    while left <= right:
        mid = (left + right) // 2
        if can_place_routers(houses, mid, C):
            result = mid
            left = mid + 1
        else:
            right = mid - 1

    return result

# 입력 받기
import sys
input = sys.stdin.read
data = input().split()
N = int(data[0])
C = int(data[1])
houses = list(map(int, data[2:]))

# 결과 출력
print(get_max_distance(N, C, houses))
