from collections import Counter

number = int(input())
name_list = []

for _ in range(number):
    name = input()
    name_list.append(name[0])

word_count = Counter(name_list)
most_used = Counter.most_common(word_count)

result = []
flag = 0

for i in range(len(most_used)):
    if most_used[i][1] >= 5:
        result.append(most_used[i][0])
        flag = 1

if flag == 0:
    print("PREDAJA")
elif flag == 1:
    print("".join(sorted(result)))