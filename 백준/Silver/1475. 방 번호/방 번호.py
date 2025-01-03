room_num = input()

count = [0] * 10 #[0,0,0,0,0,0,0,0,0]과 같은 의미

for digit in room_num :
    count[int(digit)] += 1

count[6] = (count[6] + count[9] + 1) // 2  # 반올림 처리
count[9] = 0  # 9 초기화

result = max(count)
print(result)