def solution(phone_book):
    # 전화번호부 사전순 정렬
    phone_book.sort()

    # 인접한 번호끼리 접두어 관계인지 확인
    for i in range(len(phone_book) - 1):
        if phone_book[i + 1].startswith(phone_book[i]):
            # 한 번호가 다른 번호의 접두어인 경우가 있는지 확인
            return False # 하나라도 충족되면 false

    return True
