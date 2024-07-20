def solution(citations):
    # 논문의 인용 횟수를 내림차순으로 정렬
    citations.sort(reverse=True)

    h_index = 0
    # 논문 리스트를 순회하면서 H-Index를 계산
    for i, citation in enumerate(citations):
        if citation >= i + 1:
            h_index = i + 1
        else:
            break

    return h_index

print(solution([3, 0, 6, 1, 5]))
