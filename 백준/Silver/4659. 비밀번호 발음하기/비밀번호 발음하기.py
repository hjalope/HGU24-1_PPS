vowels = ['a', 'e', 'i', 'o', 'u']

while True:
    password = input()
    if password == 'end':
        break
    
    flag = 1  # 1:okay, 0:not okay
    has_vowel = False  # 모음 포함 여부
    for i in range(len(password)):
        # 모음 포함 확인
        if password[i] in vowels:
            has_vowel = True
        
        # 같은 글자 연속 조건 (ee와 oo는 예외)
        if i < len(password) - 1 and password[i] == password[i + 1]:
            if password[i] != 'e' and password[i] != 'o':
                flag = 0
                break
        
        # 모음이 3번 연속인 경우
        if i < len(password) - 2 and password[i] in vowels and password[i + 1] in vowels and password[i + 2] in vowels:
            flag = 0
            break
        
        # 자음이 3번 연속인 경우
        if i < len(password) - 2 and password[i] not in vowels and password[i + 1] not in vowels and password[i + 2] not in vowels:
            flag = 0
            break
    
    # 모음이 하나도 없는 경우
    if not has_vowel:
        flag = 0
    
    if flag == 0:
        print(f"<{password}> is not acceptable.")
    else:
        print(f"<{password}> is acceptable.")