time = int(input())
Y_total = 0
Y_price = 0
M_total = 0
M_price = 0

calling_time =  list(map(int, input().split()))

for num in range(time):
    Y_price += int(calling_time[num]/30) + 1
    M_price += int(calling_time[num]/60) + 1

Y_total = Y_price * 10
M_total = M_price * 15

if Y_total < M_total:
    print(f"Y {Y_total}")
elif M_total < Y_total:
    print(f"M {M_total}")
else:
    print(f"Y M {Y_total}")