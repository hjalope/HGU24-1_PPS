words = input()

for i in range(len(words)):
    if words[i] in ['A', 'B', 'C']:  
        print(chr(ord(words[i]) + 23), end="")  
    else:
        print(chr(ord(words[i]) - 3), end="")  