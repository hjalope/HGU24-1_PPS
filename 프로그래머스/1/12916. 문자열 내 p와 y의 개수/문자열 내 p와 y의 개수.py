def solution(s):
    # 모든 문자를 소문자로 변환
    s = s.lower()
    
    # 'p'와 'y'의 개수 세기
    count_p = s.count('p')
    count_y = s.count('y')
    
    # 'p'와 'y'의 개수가 같으면 True, 아니면 False
    return count_p == count_y

# 테스트 예제
print(solution("pPoooyY"))  # 출력: True
print(solution("Pyy"))      # 출력: False
