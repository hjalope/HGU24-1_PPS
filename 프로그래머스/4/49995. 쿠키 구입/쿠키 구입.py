def solution(cookie):
    n = len(cookie)  # cookie 배열의 길이
    max_sum = 0  # 한 아들에게 줄 수 있는 최대 과자 수를 저장할 변수 초기화

    # m을 기준으로 왼쪽과 오른쪽 부분을 나누기 위해 중간 지점을 순회
    for m in range(n - 1):
        left_sum = cookie[m]  # 초기 왼쪽 부분합 (첫째 아들이 받을 과자 수)
        right_sum = cookie[m + 1]  # 초기 오른쪽 부분합 (둘째 아들이 받을 과자 수)

        l = m  # 왼쪽 포인터 초기화
        r = m + 1  # 오른쪽 포인터 초기화

        # 왼쪽 포인터가 배열의 시작을 넘지 않고, 오른쪽 포인터가 배열의 끝을 넘지 않는 동안 반복
        while l >= 0 and r < n:
            # 왼쪽과 오른쪽 부분합이 같다면, 최대 과자 수를 업데이트
            if left_sum == right_sum:
                max_sum = max(max_sum, left_sum)

            # 왼쪽 부분합이 작거나 같으면 왼쪽 포인터를 왼쪽으로 이동하여 부분합을 증가
            if left_sum <= right_sum:
                l -= 1
                if l >= 0:  # 왼쪽 포인터가 배열의 시작을 넘지 않는지 확인
                    left_sum += cookie[l]
            # 오른쪽 부분합이 크다면 오른쪽 포인터를 오른쪽으로 이동하여 부분합을 증가
            else:
                r += 1
                if r < n:  # 오른쪽 포인터가 배열의 끝을 넘지 않는지 확인
                    right_sum += cookie[r]

    return max_sum  # 조건을 만족하는 최대 과자 수 반환

# 테스트 예제
print(solution([1, 1, 2, 3]))  # 결과: 3
