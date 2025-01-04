number = int(input())  

results = []

for _ in range(number):
    values = input().split()
    
    current_value = float(values[0]) # 첫 번째 값은 float로 변환
    
    for v in values[1:]:
        if v == '@':
            current_value *= 3  
        elif v == '%':
            current_value += 5  
        elif v == '#':
            current_value -= 7 
    
    results.append(f"{current_value:.2f}")

# 결과 출력
for result in results:
    print(result)
