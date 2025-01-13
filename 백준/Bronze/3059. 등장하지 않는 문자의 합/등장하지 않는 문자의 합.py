def check_words(s):
    # 전체 알파벳 집합 생성
    all_alphabet = set(chr(i) for i in range(65, 91))  # 'A'~'Z' (65~90)
    
    input_alphabet = set(s) # 입력에서 등장한 알파벳 
    
    missing_alphabet = all_alphabet - input_alphabet # 등장하지 않은 알파벳
    
    # 등장하지 않은 알파벳의 아스키 코드 값을 합산
    total_ascii_sum = sum(ord(char) for char in missing_alphabet)
    
    return total_ascii_sum

# 입력 받기
num = int(input())

for i in range(num):
    word = input().strip()  # 공백 제거
    result = check_words(word)
    print(result)