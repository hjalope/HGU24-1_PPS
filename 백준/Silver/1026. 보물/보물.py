nth_num = int(input()) 

numbers_A = list(map(int, input().split()))
numbers_A = sorted(numbers_A)
numbers_B = list(map(int, input().split()))
numbers_B = sorted(numbers_B, reverse=True)

result = 0

for i in range(nth_num) :
    result = result + numbers_A[i] * numbers_B[i]

print(result)