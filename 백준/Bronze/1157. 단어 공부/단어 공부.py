from collections import Counter

words = input().upper()

word_count = Counter(words)
most_used = Counter.most_common(word_count)

max_count = 0
max_char = '?'
same = 0 # 0 False, 1 True

for i in range(len(most_used)):
    if most_used[i][1] > max_count:
        max_count = most_used[i][1]
        max_char = most_used[i][0]
        same = 0
    elif most_used[i][1] == max_count:
        max_char = '?'
        same = 1

if same == 1:
    print(max_char)
elif same == 0:
    print(max_char)