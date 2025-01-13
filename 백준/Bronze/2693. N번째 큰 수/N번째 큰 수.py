num = int(input())

for i in range(num):
    score_list = []

    score_list = list(map(int, input().split()))
    score_list.sort(reverse=True)

    print(score_list[2])