def atm_time(sizes):
    sizes.sort()
    total_time = 0
    current_wait = 0

    for time in sizes:
        current_wait += time
        total_time += current_wait

    return total_time

num_people = int(input()) # 입력 받기
sizes = list(map(int, input().split()))

total_time = atm_time(sizes)

print(total_time)
