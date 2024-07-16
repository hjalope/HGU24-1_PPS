def solution(arr, divisor):
    # 나누어 떨어지는 숫자를 저장할 리스트
    answer = []
    
    # arr 리스트의 각 요소를 순회
    for num in arr:
        # 요소가 divisor로 나누어 떨어지는지 확인
        if num % divisor == 0:
            # 나누어 떨어지면 answer 리스트에 추가
            answer.append(num)
    
    # 나누어 떨어지는 숫자가 없으면 -1을 반환
    if len(answer) == 0:
        return [-1]
    
    # 나누어 떨어지는 숫자들을 오름차순으로 정렬
    answer.sort()
    
    # 정렬된 리스트를 반환
    return answer

# 테스트 예제
print(solution([5, 9, 7, 10], 5))  # [5, 10] 출력 예상
print(solution([2, 36, 1, 3], 1))  # [1, 2, 3, 36] 출력 예상
print(solution([3, 2, 6], 10))     # [-1] 출력 예상
