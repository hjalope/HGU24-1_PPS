num = int(input())

for i in range(num):
    quiz = input()

    total = 0
    correct_count = 0

    for j in range(len(quiz)):
        if quiz[j] == 'O':
            correct_count+=1
            total+=correct_count
        elif quiz[j] == 'X':
            correct_count=0
    print(total)