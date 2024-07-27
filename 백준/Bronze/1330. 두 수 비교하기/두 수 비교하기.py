# 입력 받기
A, B = map(int, input().split())

# 비교 및 출력
if A > B:
    print('>')
elif A < B:
    print('<')
else:
    print('==')
