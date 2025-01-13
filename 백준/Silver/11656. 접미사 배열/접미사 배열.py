word = input()

word_list = []

for i in range(len(word)):
    word_list.append(word[i:])
    word_list.sort()
print(' '.join(word_list))