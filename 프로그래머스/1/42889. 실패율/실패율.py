def solution(N, stages):
    # a. 각 스테이지에 도달한 플레이어 수를 카운트
    reached = [0] * (N + 2)
    for stage in stages:
        reached[stage] += 1

    # b. 각 스테이지의 실패율을 저장하기 위한 리스트
    failure_rate = []

    # c. 현재 스테이지에 도달한 플레이어 수를 저장하는 변수
    total_players = len(stages)

    for i in range(1, N + 1):
        if total_players > 0:
            # d. 해당 스테이지의 실패율 계산
            fail_rate = reached[i] / total_players
            failure_rate.append((i, fail_rate))
            total_players -= reached[i]
        else:
            # e. 스테이지에 도달한 유저가 없는 경우 실패율 0
            failure_rate.append((i, 0))

    # f. 실패율 내림차순, 실패율이 같다면 스테이지 번호 오름차순으로 정렬
    failure_rate.sort(key=lambda x: (-x[1], x[0]))

    # g. 정렬된 스테이지 번호 리스트 반환
    answer = [stage[0] for stage in failure_rate]
    return answer

# 예시 실행
N = 5
stages = [2, 1, 2, 6, 2, 4, 3, 3]
print(solution(N, stages))