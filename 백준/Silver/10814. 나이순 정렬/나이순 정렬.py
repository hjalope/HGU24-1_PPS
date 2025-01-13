num = int(input())

information = []

for i in range(num):
    age, name = input().split()
    information.append((int(age), name))  # 나이를 int형으로 변환

# 나이 기준으로 정렬
information.sort(key=lambda x: x[0])

for age, name in information:
    print(age, name)