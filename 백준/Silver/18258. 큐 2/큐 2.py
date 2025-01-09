from collections import deque
import sys
input = sys.stdin.readline

number = int(input())
queue = deque() # deque 사용

for i in range(number):
    command = input().strip().split()

    if command[0] == 'push':
        queue.append(int(command[1]))
    elif command[0] == 'pop':
        if len(queue) > 0:
            print(queue.popleft()) # 첫 번째 요소를 제거 -> FIFO
        else:
            print('-1')
    elif command[0] == 'size':
        print(len(queue))
    elif command[0] == 'empty':
        if len(queue) > 0:
            print('0')
        else:
            print('1')
    elif command[0] == 'front':
        if len(queue) > 0:
            print(queue[0])
        else:
            print('-1')
    elif command[0] == 'back':
        if len(queue) > 0:
            print(queue[-1])
        else:
            print('-1')