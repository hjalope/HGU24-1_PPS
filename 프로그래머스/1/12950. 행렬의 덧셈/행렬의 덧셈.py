def solution(arr1, arr2):
  result = []  # 결과 저장 리스트

  for i in range(len(arr1)): # 바깥쪽 for 루프: 행 순회
      row = []  # 각 행을 저장할 빈 리스트
      for j in range(len(arr1[0])): # 안쪽 for 루프: 열을 순회
          # arr1과 arr2의 같은 위치의 수 더함
          sum_elements = arr1[i][j] + arr2[i][j]
          row.append(sum_elements) # 결과 행에 추가
      result.append(row) # 완성된 행을 결과 리스트에 추가

  return result