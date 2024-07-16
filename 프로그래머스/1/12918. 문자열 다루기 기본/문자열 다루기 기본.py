def solution(s):
    # 문자열의 길이가 4 또는 6인지 확인하고, 숫자로만 구성되어 있는지 확인
    return (len(s) == 4 or len(s) == 6) and s.isdigit()

# 테스트 예제
print(solution("a234"))  # 출력: False
print(solution("1234"))  # 출력: True
