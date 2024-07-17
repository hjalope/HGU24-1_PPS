def solution(number):

    digit_sum = sum(int(digit) for digit in str(number)) ## 주어진 숫자를 더함

    return number % digit_sum == 0 # 입력한 숫자가 더한 값으로 나눌 수 있는지


print(solution(10))
