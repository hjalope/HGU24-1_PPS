num = int(input())
count = 0

for _ in range(num):
    word = input()
    if list(word) == sorted(word, key=word.find):  # 그룹 단어인지 확인
        count += 1

print(count)
