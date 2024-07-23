# a. 마을의 수를 입력받음
# b. 각 마을간의 거리를 입력받음 (마을-1)
# c. 각 마을의 기름 값을 입력받음
# d-1. 현재 마을과 다음 마을의 기름값 비교 후 다음 마을이 더 싸면, 현재 마을에서는 다음 마을까지의 기름만 구매.
# d-2. 하지만, 현재 마을이 더 싸면 그 다음 마을에 있는 기름값과 비교. (마지막 마을까지
# e. 마을간 비교 후 더 싼 지역*거리만큼 기름값 계산 후 출력

def least_cost(city, city_length, fuel_price):
    total_cost = 0
    min_price = fuel_price[0]

    for i in range(city - 1):
        if fuel_price[i] < min_price:
            min_price = fuel_price[i]
        total_cost += min_price * city_length[i]

    return total_cost

city = int(input()) # 입력 받기
city_length = list(map(int, input().split()))
fuel_price = list(map(int, input().split()))

least_money = least_cost(city, city_length, fuel_price)

print(least_money)
