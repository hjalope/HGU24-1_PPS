import sys
input = sys.stdin.readline

num = int(input())
stack = []

for _ in range(num):
    command = input().strip().split()  # 명령어 입력받기

    if command[0] == 'push':
        stack.append(int(command[1]))
    elif command[0] == 'pop':
        if len(stack) > 0:
            print(stack.pop())
        else:
            print('-1')
    elif command[0] == 'size':
        print(len(stack))
    elif command[0] == 'empty':
        if len(stack) > 0:
            print('0')
        else:
            print('1') # 비어있단 뜻
    elif command[0] == 'top':
        if len(stack) > 0:
            print(stack[-1])
        else:
            print('-1')
