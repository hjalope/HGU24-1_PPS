import sys

n = int(sys.stdin.readline().strip())
times = list(map(int, sys.stdin.readline().split()))

times.sort()

total_time = 0
accumulated_time = 0

for time in times:
    accumulated_time += time
    total_time += accumulated_time

print(total_time)
