def solution(number, k):
    result = []
    for num in number:
        while k > 0 and result and result[-1] < num:
            result.pop()
            k -= 1
        result.append(num)

    # 만약 아직 k가 남아있다면, 뒤에서부터 k개를 제거
    if k > 0:
        result = result[:-k]

    return ''.join(result)

# 예시 실행
print(solution("1924", 2))        
print(solution("1231234", 3))     
print(solution("4177252841", 4))  
