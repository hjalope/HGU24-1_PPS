N = int(input()) # 225

def sum_of_digits(x):
    return x + sum(int(digit) for digit in str(x)) # 216 + 2 + 1 + 6 = 225

# 1부터 N까지 검사
for M in range(1, N + 1): # 1 ~ 226를 하나하나 sum_of_digits에 대입
    if sum_of_digits(M) == N:
        print(M)
        break
else:
    print(0)  # 생성자가 없으면 0 출력
