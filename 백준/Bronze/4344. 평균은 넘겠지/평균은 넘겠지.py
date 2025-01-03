student_num = int(input())
results = []

for _ in range(student_num) :
    num_score = list(map(int, input().split()))
    num = num_score[0]
    score = num_score[1:]

    average = sum(score) / num

    higher_average = sum(1 for grade in score if grade > average)

    ratio = (higher_average / num) * 100
    results.append(f"{ratio:.3f}%")

for result in results:
    print(result)