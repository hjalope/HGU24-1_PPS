def solution(arr, divisor):
    # divisor로 나누어 떨어지는 요소들만 추출
    answer = [num for num in arr if num % divisor == 0]
    
    # 나누어 떨어지는 요소가 하나도 없는 경우
    if not answer:
        return [-1]
    
    # 요소들을 오름차순으로 정렬
    answer.sort()
    
    return answer

# 테스트
print(solution([5, 9, 7, 10], 5))  # [5, 10]
print(solution([2, 36, 1, 3], 1))  # [1, 2, 3, 36]
print(solution([3, 2, 6], 10))     # [-1]
