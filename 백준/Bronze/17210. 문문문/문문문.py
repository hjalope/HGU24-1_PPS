num_door = int(input())
cur_door = int(input())

if num_door >= 6:
    print("Love is open door")
else:
    for _ in range(num_door-1):
        if cur_door == 0:
            print("1")
            cur_door = 1
        else:
            print("0")
            cur_door = 0