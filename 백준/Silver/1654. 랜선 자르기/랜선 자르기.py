import sys

k, n = map(int, sys.stdin.readline().split())
cables = [int(sys.stdin.readline()) for _ in range(k)]

left, right = 1, max(cables)
max_length = 0

while left <= right:
    mid = (left + right) // 2
    count = sum(cable // mid for cable in cables)
    
    if count >= n:
        max_length = mid
        left = mid + 1
    else:
        right = mid - 1

print(max_length)
