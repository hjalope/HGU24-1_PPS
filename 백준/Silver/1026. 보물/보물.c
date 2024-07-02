#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

// 오름차순 정렬
int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 내림차순 정렬
int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int length;
    scanf("%d", &length);

    int num1[MAX_SIZE];
    int num2[MAX_SIZE];

    for(int i = 0; i < length; i++) {
        scanf("%d", &num1[i]);
    }
    for(int i = 0; i < length; i++) {
        scanf("%d", &num2[i]);
    }

    // num1 배열 오름차순 정렬
    qsort(num1, length, sizeof(int), compare_asc);
    // num2 배열 내림차순 정렬
    qsort(num2, length, sizeof(int), compare_desc);

    int S = 0;
    for(int i = 0; i < length; i++) {
        S += num1[i] * num2[i];
    }

    printf("%d\n", S);
    return 0;
}
