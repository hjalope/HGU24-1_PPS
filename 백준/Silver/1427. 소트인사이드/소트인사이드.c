#include <stdio.h>
#include <string.h>

// 비교 함수: 두 문자를 비교하여 내림차순으로 정렬
int compare(const void *a, const void *b) {
    return (*(char *)b - *(char *)a);
}

int main() {
    char number[11]; // 10자리 이하의 자연수를 입력받을 배열 (1,000,000,000은 10자리)
    scanf("%s", number); // 숫자를 문자열로 입력받음

    int length = strlen(number); // 숫자의 길이 계산

    // qsort 함수를 이용하여 문자 배열을 내림차순으로 정렬
    qsort(number, length, sizeof(char), compare);

    // 정렬된 숫자를 출력
    printf("%s\n", number);

    return 0;
}
