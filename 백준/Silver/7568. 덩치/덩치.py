def calculate_ranks(sizes):
    n = len(sizes)
    ranks = [1] * n  # 모든 사람의 초기 등수는 1

    for i in range(n):
        for j in range(n):
            if i != j:
                if sizes[i][0] < sizes[j][0] and sizes[i][1] < sizes[j][1]:
                    # 몸무게와 키 비교
                    ranks[i] += 1

    return ranks

num_people = int(input())
sizes = []

for _ in range(num_people):
    weight, height = map(int, input().split())
    sizes.append((weight, height))

ranks = calculate_ranks(sizes)

print(" ".join(map(str, ranks)))