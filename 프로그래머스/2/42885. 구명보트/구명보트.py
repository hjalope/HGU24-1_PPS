def solution(people, limit):
    people.sort() # 정렬

    left = 0
    right = len(people) - 1
    boats = 0

    while left <= right: # 가장 가벼운 사람과 가장 무거운 사람 
        if people[left] + people[right] <= limit:
            # 두 사람이 함께 탈 수 있는 경우
            left += 1  # 가장 가벼운 사람 태우기
        # 가장 무거운 사람 태우기
        right -= 1
        boats += 1  # 구명보트 하나 사용

    # 필요한 구명보트 개수 반환
    return boats
