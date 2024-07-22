def solution(price, money, count):
    total = 0

    # 놀이기구를 타는 총 비용 계산
    for i in range(1, count + 1):
        total += price * i

    # 부족한 금액 계산
    if total > money:
        answer = total - money
    else:
        answer = 0

    return answer
