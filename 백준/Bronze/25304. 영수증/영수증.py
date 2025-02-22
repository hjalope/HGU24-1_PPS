total_price = int(input())
total_product = int(input())

total = 0

for i in range(total_product):
    each_price = 0
    each_product = 0

    each_price, each_product = map(int, input().split())

    total += each_product*each_price

if total == total_price:
    print('Yes')
else:
    print('No')