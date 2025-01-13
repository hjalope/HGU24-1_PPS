num = int(input())

word_list = []

for i in range(num):
    word = input().strip()
    total = sum(int(char) for char in word if char.isdigit()) # 숫자 추출 후 더하기
    word_list.append((word, total))

# 정렬: 1. 길이 -> 2. 숫자합 -> 3. 사전순
word_list.sort(key=lambda x: (len(x[0]), x[1], x[0]))

# 결과 출력
for word, _ in word_list:
    print(word)