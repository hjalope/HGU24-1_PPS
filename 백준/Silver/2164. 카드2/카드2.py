from collections import deque

n = int(input())

queue = deque(range(1, n + 1))  # 1부터 n까지의 숫자를 큐에 저장

while len(queue) > 1:  
    queue.popleft()  # 제일 위의 카드 버리기
    queue.append(queue.popleft())  # 다음 카드를 아래로 옮기기

print(queue[0])