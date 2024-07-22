def solution(A,B):
    
    A.sort() # 오름차순 정렬
    B.sort(reverse=True) # 내림차순 정렬
    total = 0
    
    for i in range(0, len(A)):
        total = total + A[i]*B[i]

    return total