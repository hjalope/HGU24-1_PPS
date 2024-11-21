num = int(input())

S = input()

total = 0
bonus = 0

for i in range(1, num + 1):
    if S[i - 1] == 'O':  
        total += i + bonus  
        bonus += 1 
    elif S[i - 1] == 'X':
        bonus = 0  

print(total)
