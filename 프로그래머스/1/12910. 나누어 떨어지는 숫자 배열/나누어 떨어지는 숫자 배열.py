def solution(arr, divisor):
    answer = []
    
    for num in arr:
        if num % divisor == 0:
            answer.append(num)
    
    if len(answer) == 0:
        return [-1]
    
    answer.sort()
    
    return answer

# 테스트 예제
print(solution([5, 9, 7, 10], 5))  # [5, 10] 출력 예상
print(solution([2, 36, 1, 3], 1))  # [1, 2, 3, 36] 출력 예상
print(solution([3, 2, 6], 10))     # [-1] 출력 예상
