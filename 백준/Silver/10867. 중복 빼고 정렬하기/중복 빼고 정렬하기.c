#include <stdio.h>
#include <stdlib.h>

// 오름차순 정렬 함수
int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int num[n];

    // 정수 입력 받기
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // 배열을 오름차순으로 정렬
    qsort(num, n, sizeof(int), compare_asc);

    // 정렬된 배열에서 중복 제거하며 출력
    printf("%d", num[0]);  // 첫 번째 정수는 바로 출력
    for (int i = 1; i < n; i++) {
        if (num[i] != num[i - 1]) {
            printf(" %d", num[i]);
        }
    }
    printf("\n");

    return 0;
}
