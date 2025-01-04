used_list = [0] * 10

A = int(input())
B = int(input())
C = int(input())

result = A * B * C

for digit in str(result) :
    used_list[int(digit)] += 1 # 각 숫자가 몇번 쓰였는지

for count in used_list :
    print(count)