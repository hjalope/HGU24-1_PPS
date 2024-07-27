import sys
input = sys.stdin.read

def get_max_height(N, M, tree_heights):
    left, right = 0, max(tree_heights)
    result = 0

    while left <= right:
        mid = (left + right) // 2
        total = sum(height - mid if height > mid else 0 for height in tree_heights)

        if total >= M:
            result = mid
            left = mid + 1
        else:
            right = mid - 1

    return result

# 입력 받기
data = input().split()
N = int(data[0])
M = int(data[1])
tree_heights = list(map(int, data[2:]))

# 결과 출력
print(get_max_height(N, M, tree_heights))
