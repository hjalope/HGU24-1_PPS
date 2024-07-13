#include <stdio.h>
#include <stdlib.h>

// 비교 함수
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    int n;
    scanf("%d", &n);

    int weight[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &weight[i]);
    }

    qsort(weight, n, sizeof(int), compare);

    int heaviest = 0;

    // 각 로프를 사용할 때 최대 중량 계산
    for(int i = 0; i < n; i++) {
        int total = weight[i] * (n - i); //이리 정렬이 되어 있기 때문에, i만큼 빼서 곱함
        if (heaviest < total) {
            heaviest = total;
        }
    }

    printf("%d\n", heaviest);

    return 0;
}
