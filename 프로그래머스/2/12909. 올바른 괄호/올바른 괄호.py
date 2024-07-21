def solution(s):
    length = len(s)
    open_count = 0
    close_count = 0

    # 문자열의 첫 번째와 마지막 문자 확인
    if s[0] != '(' or s[length - 1] != ')':
        return False

    # 문자열 순회
    for i in range(length):
        if s[i] == '(':
            open_count += 1
        elif s[i] == ')':
            close_count += 1

        # 중간에 닫는 괄호가 여는 괄호보다 많아지면 False
        if close_count > open_count:
            return False

    # 여는 괄호와 닫는 괄호의 개수가 같은지 확인
    if open_count != close_count:
        return False

    return True

# 테스트 예제
print(solution("()()"))  # 출력: True
print(solution("(())"))  # 출력: True
print(solution("(()))"))  # 출력: False
print(solution(")("))    # 출력: False
print(solution("()("))   # 출력: False
