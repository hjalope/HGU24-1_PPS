numbers = [int(input()) for _ in range(5)]

i=0
total = 0
 
for num in sorted(numbers):
    total += num
    i+=1
    if i == 3:
        middle = num

print(int(total/5))
print(middle)