num1 = list(map(int, input().split()))

if num1 == sorted(num1):  # 오름차순
    print("ascending")
elif num1 == sorted(num1, reverse=True):  # 내림차순
    print("descending")
else:  # mixed
    print("mixed")
