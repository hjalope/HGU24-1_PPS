#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int number[n]; // 입력된 숫자를 저장
  int i = 0;     // 배열의 인덱스를 관리
  int total = 0; // 최종 합계를 저장

  while (n > 0) {
    int current;
    scanf("%d", &current);

    if (current != 0) {
      number[i] = current; // 0이 아닌 경우 배열에 숫자 저장
      i++;
    } else if (i > 0) {
      i--; // 0인 경우 가장 최근에 저장된 숫자 제거
    }

    n--;
  }

  for (int j = 0; j < i; j++) {
    total += number[j]; 
  }

  printf("%d\n", total);
  return 0;
}
