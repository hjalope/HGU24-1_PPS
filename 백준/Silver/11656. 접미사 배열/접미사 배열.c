#include <stdio.h>
#include <string.h>

// 오름차순 정렬 함수
int compare_asc(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main(void) {
    char word[1001];

    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = 0;  // 입력받은 문자열의 끝에 있는 개행 문자 제거
    
    int length = strlen(word);

    char word_sort[length][1001]; // 정렬된 단어 저장할 배열
    for (int i = 0; i < length; i++) { 
        strcpy(word_sort[i], &word[i]);
    }

    
    qsort(word_sort, length, sizeof(word_sort[0]), compare_asc);

    for (int i = 0; i < length; i++) {
        printf("%s\n", word_sort[i]);
    }

    return 0;
}
