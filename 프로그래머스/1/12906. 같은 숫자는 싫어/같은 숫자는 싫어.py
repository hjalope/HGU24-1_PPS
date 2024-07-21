def solution(arr):

    result = []

    previous_number = None # 이전 숫자 저장

    for number in arr:
        # 이전 숫자와 현재 숫자가 다르면 결과 리스트에 추가
        if number != previous_number:
            result.append(number) #append 사용시 답을 이어서 쓸 수 있음 (sum+=a와 비슷한 느낌)
            previous_number = number  # 이전 숫자를 현재 숫자로 업데이트

    return result