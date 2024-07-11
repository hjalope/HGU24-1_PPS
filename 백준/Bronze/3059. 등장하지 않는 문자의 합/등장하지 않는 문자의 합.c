#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char word[1000];
    int total = 0;

    int ascii_start = 'A';
    int ascii_end = 'Z';

    // 입력받을 단어의 개수
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int flag[26] = {0};  // 각 알파벳의 사용 여부를 저장하는 배열
        total = 0; 

        scanf("%s", word);
        int length = strlen(word);

        for (int j = 0; j < length; j++) { // 단어의 각 문자에 대해 사용된 알파벳 표시
            if (word[j] >= 'A' && word[j] <= 'Z') {
                flag[word[j] - 'A'] = 1;  // 알파벳 'a'의 인덱스는 0, 'b'는 1, ...
            }
        }

        for (int j = 0; j < 26; j++) {  // 사용되지 않은 알파벳의 아스키 코드 값 더하기

            if (flag[j] == 0) {
                total += ascii_start + j;
            }
        }

        // 결과 출력
        printf("%d\n", total);
    }

    return 0;
}
