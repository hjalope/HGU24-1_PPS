test_cases = int(input())  # 첫 줄

# 결과 저장
results = []

for _ in range(test_cases):
    data = list(map(int, input().split()))  # 학생 수와 점수 입력
    num_students = data[0]  # 첫 번째 값: 학생 수
    scores = data[1:]  # 나머지 값: 점수 리스트

    # 평균 계산
    average = sum(scores) / num_students

    # 평균을 넘는 학생 수 계산
    above_average = sum(1 for score in scores if score > average)

    # 비율 계산 및 결과 저장
    ratio = (above_average / num_students) * 100
    results.append(f"{ratio:.3f}%")  # 소수점 셋째 자리까지

# 결과 출력
for result in results:
    print(result)
