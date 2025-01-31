def max_stair_score(n, stairs):
    if n == 1:
        return stairs[0]
    elif n == 2:
        return stairs[0] + stairs[1]
    elif n == 3:
        return max(stairs[0] + stairs[2], stairs[1] + stairs[2])
    
    # DP 배열 초기화
    dp = [0] * n
    dp[0] = stairs[0]
    dp[1] = stairs[0] + stairs[1]
    dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2])
    
    # 점화식을 사용하여 DP 배열 채우기
    for i in range(3, n):
        dp[i] = max(dp[i-2] + stairs[i], dp[i-3] + stairs[i-1] + stairs[i])
    
    return dp[-1]

# 입력 처리
n = int(input())
stairs = [int(input()) for _ in range(n)]

# 결과 출력
print(max_stair_score(n, stairs))