def count_lans(lans, length):
    count = 0
    for lan in lans:
        count += lan // length
    return count

def max_lan_length(K, N, lans):
    # 초기 예상 값 계산
    total_length = sum(lans)
    ideal_num = total_length // N

    # 이진 탐색 범위 설정
    low, high = 1, ideal_num
    result = 0

    while low <= high:
        mid = (low + high) // 2
        if count_lans(lans, mid) >= N:
            result = mid  # 가능한 최대 길이를 저장
            low = mid + 1  # 더 긴 길이 시도
        else:
            high = mid - 1  # 더 짧은 길이 시도

    return result

# 입력
K, N = map(int, input().split())
lans = [int(input()) for _ in range(K)]

# 최대 랜선 길이 계산
result = max_lan_length(K, N, lans)

# 결과 출력
print(result)
