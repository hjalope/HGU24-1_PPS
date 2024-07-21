def solution(array, commands):
    result = []
    for command in commands:
        i, j, k = command  # 각 command 리스트를 i, j, k에 할당
        sliced_array = array[i-1:j]  # i번째부터 j번째까지 (인덱스는 0부터 시작하므로 i-1)
        sorted_array = sorted(sliced_array)  # 자른 배열을 정렬
        result.append(sorted_array[k-1])  
        # k번째 요소 (인덱스는 0부터 시작하므로 k-1)
    return result
