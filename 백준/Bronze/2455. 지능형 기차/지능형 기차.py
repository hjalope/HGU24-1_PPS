# 지능형기차 - 백준
# https://www.acmicpc.net/problem/2455

current_num = 0
max_num = 0

for _ in range(4):
    off, on = map(int, input().split())
    current_num = current_num + on - off
    max_num = max(max_num, current_num)

print(max_num)
