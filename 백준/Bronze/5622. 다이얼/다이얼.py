words = input()
total = 0

for i in range(len(words)):
    if words[i] in ['A', 'B', 'C']:  
        total+=3
    elif words[i] in ['D', 'E', 'F']: 
        total+=4
    elif words[i] in ['G', 'H', 'I']: 
        total+=5
    elif words[i] in ['J', 'K', 'L']: 
        total+=6
    elif words[i] in ['M', 'N', 'O']: 
        total+=7
    elif words[i] in ['P', 'Q', 'R', 'S']: 
        total+=8
    elif words[i] in ['T', 'U', 'V']: 
        total+=9
    elif words[i] in ['W', 'X', 'Y', 'Z']: 
        total+=10

print(total)