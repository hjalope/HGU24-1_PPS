def solution(numbers):
    # numbers 리스트를 문자열로 변환하여 두 숫자를 이어 붙였을 때 더 큰 값을 만드는 순서로 정렬
    numbers = sorted(map(str, numbers), key=lambda x: x*10, reverse=True)

    # 정렬된 리스트를 하나의 문자열로 이어 붙임
    largest_number = ''.join(numbers)

    # '0000' 같은 경우를 처리하여 '0'으로 변환
    return '0' if largest_number[0] == '0' else largest_number

# 테스트할 숫자 목록
test_numbers = [1, 43, 253, 89]

# solution 함수 호출하여 결과 출력
print(solution(test_numbers))  # 출력: "89432531"
