def solution(nums):
    
    unique_types = set(nums) # 숫자 저장 (중복 X)

    # 가져갈 수 있는 최대 폰켓몬 수
    max_take = len(nums) // 2 # // = 몫만 가져옴

    return min(len(unique_types), max_take) #set(num)과 max_take 중 작은 값 반환
