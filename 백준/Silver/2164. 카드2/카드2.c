#include <stdio.h>

int main(void) {
  int n;
  int num[1000000];

  // 숫자를 입력받음
  scanf("%d", &n);

  // 1부터 n까지 배열 초기화
  for (int i = 0; i < n; i++) {
    num[i] = i + 1;
  }

  int front = 0; // 큐의 앞을 가리키는 인덱스
  int back = n;  // 큐의 뒤를 가리키는 인덱스 (초기 값은 n)

  // 큐에 하나의 요소만 남을 때까지 반복
  while (back - front > 1) {
    front++;                // 제일 위의 카드를 버림
    num[back] = num[front]; // 제일 위의 카드를 맨 아래로 옮김
    back++;
    front++;
  }

  // 마지막으로 남은 카드 출력
  printf("%d\n", num[front]);

  return 0;
}
