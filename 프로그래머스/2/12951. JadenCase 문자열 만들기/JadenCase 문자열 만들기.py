# a. 문자열 입력받음
# b. 공백+1 != 공백 이 충족되면 다음 단어는 대문자
# c. 단어 사이에 대문자가 있으면 소문자로 변경
# d. 첫 단어에 숫자 파악 (있으면 대문자 X)
# e. 최종 문자열 출력

def solution(s):
    # 각 단어의 첫 글자만 대문자로, 나머지는 소문자로 변경
    result = []
    words = s.split(' ')

    for word in words:
        if len(word) == 0:
            result.append('')
        else:
            result.append(word[0].upper() + word[1:].lower()) # 첫 글자 대문자 나머지 소문자

    return ' '.join(result)

# 테스트 예제
print(solution("3people unFollowed me")) 
print(solution("for the last week"))      
