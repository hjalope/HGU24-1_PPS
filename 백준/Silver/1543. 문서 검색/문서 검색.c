#include <stdio.h>
#include <string.h>

int main(void) {
    char document[2502];
    char word[52];
    
    // 문서와 단어 입력
    fgets(document, sizeof(document), stdin);
    fgets(word, sizeof(word), stdin);

    // 입력 문자열의 개행 문자 제거
    document[strcspn(document, "\n")] = 0;
    word[strcspn(word, "\n")] = 0;

    int doc_len = strlen(document);
    int word_len = strlen(word);
    int count = 0;

    for (int i = 0; i <= doc_len - word_len;) {
        int j = 0;
        // 단어의 모든 문자 비교
        while (j < word_len && document[i + j] == word[j]) {
            j++;
        }
        
        if (j == word_len) {
            count++;
            i += word_len; // 단어 길이만큼 이동하여 중복 방지
        } else {
            i++;
        }
    }

    printf("%d\n", count);

    return 0;
}
