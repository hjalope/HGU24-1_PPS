#include <stdio.h>
#include <string.h>

int main(void) {
    char word[1000002];

    fgets(word, sizeof(word), stdin);

    // 입력 문자열의 개행 문자 제거
    word[strcspn(word, "\n")] = 0;

    int length = strlen(word);
    int count = 0;
    int in_word = 0;

    for (int i = 0; i < length; i++) {
        if (word[i] != ' ') {
            if (!in_word) {
                count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("%d\n", count);

    return 0;
}
