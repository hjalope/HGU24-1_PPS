def solution(s):
    if len(s) == 1: # 문자열 길이가 1인 경우
        return 1

    min_length = len(s) # 최소 길이 변수

    # for문 (1부터 문자열 절반까지)
    for cut_size in range(1, len(s) // 2 + 1): 
        compressed = ""
        prev = s[:cut_size]  # 초기 비교 문자열
        count = 1  # 동일한 문자열 반복

        for i in range(cut_size, len(s), cut_size):  # 문자역 압축 부분
            if s[i:i+cut_size] == prev:
                count += 1  # 반복 횟수 증가
            else:
                compressed += (str(count) + prev) if count > 1 else prev
                prev = s[i:i+cut_size]  # 새로운 블록
                count = 1  # 반복 횟수 초기화

        compressed += (str(count) + prev) if count > 1 else prev

        # 최소 길이 갱신
        min_length = min(min_length, len(compressed))

    return min_length

# 예시 실행
print(solution("aabbaccc"))       
print(solution("ababcdcdababcdcd"))
print(solution("abcabcdede"))     
print(solution("abcabcabcabcdededededede"))
print(solution("xababcdcdababcdcd")) 
