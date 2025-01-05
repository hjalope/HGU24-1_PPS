words = input()

for i in range(len(words)):
    print(words[i], end="")
    if (i+1)%10 == 0:
        print("")