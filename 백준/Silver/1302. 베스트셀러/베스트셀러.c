#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 오름차순 정렬 함수
int compare_asc(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(void) {
    int n;
    scanf("%d", &n);

    // 동적 메모리 할당
    char **book = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        book[i] = (char *)malloc(50 * sizeof(char));
    }

    char best_seller[50] = "";
    int max_count = 0;
    int current_count = 1;

    for (int i = 0; i < n; i++) {
        scanf("%s", book[i]);
    }

    // 문자열 배열을 정렬
    qsort(book, n, sizeof(char *), compare_asc);

    // 첫 번째 책 제목을 베스트셀러로 가정
    strcpy(best_seller, book[0]);
    max_count = 1;

    for (int i = 1; i < n; i++) {
        if (strcmp(book[i], book[i - 1]) == 0) {
            current_count++;
        } else {
            current_count = 1;
        }

        if (current_count > max_count) {
            max_count = current_count;
            strcpy(best_seller, book[i]);
        } else if (current_count == max_count && strcmp(book[i], best_seller) < 0) {
            strcpy(best_seller, book[i]);
        }
    }

    printf("%s\n", best_seller);

    // 동적 메모리 해제
    for (int i = 0; i < n; i++) {
        free(book[i]);
    }
    free(book);

    return 0;
}
