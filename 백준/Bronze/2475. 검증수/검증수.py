total = 0

# 한 줄에 5개의 숫자를 입력받음
numbers = list(map(int, input().split()))

for num in numbers:
    num = num * num 
    total = total + num  

total = total % 10  
print(total)  
