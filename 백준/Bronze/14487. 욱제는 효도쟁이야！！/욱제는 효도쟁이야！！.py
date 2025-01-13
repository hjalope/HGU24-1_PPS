num = int(input())

distance = list(map(int, input().split()))

sorted_distance = sorted(distance)

total = 0

for i in range(len(distance)-1):
    total+=sorted_distance[i]

print(total)