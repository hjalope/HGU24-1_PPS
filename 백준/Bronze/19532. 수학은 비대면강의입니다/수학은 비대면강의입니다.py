# 입력 받기
a, b, c, d, e, f = map(int, input().split())

# 행렬식(Determinant) 계산
D = a * e - b * d
Dx = c * e - b * f
Dy = a * f - c * d

# x, y 값 계산
x = Dx // D
y = Dy // D

# 출력
print(x, y)
