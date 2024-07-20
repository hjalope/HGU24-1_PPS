def solution(a, b):

    total = 0
    day = ['FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED', 'THU']

    if a == 1:
        total = b
    if a == 2:
        total = 31 + b
    if a == 3:
        total = 31 + 29 + b
    if a == 4:
        total = 31 + 29 + 31 + b
    if a == 5:
        total = 31 + 29 + 31 + 30 + b
    if a == 6:
        total = 31 + 29 + 31 + 30 + 31 + b
    if a == 7:
        total = 31 + 29 + 31 + 30 + 31 + 30 + b
    if a == 8:
        total = 31 + 29 + 31 + 30 + 31 + 30 + 31 + b
    if a == 9:
        total = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + b
    if a == 10:
        total = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + b
    if a == 11:
        total = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + b
    if a == 12:
        total = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + b

    total = total % 7 - 1

    return day[total]

print(solution(5, 24))