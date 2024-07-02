#include <stdio.h>

int main() {
    int save_num[8]; // 저장할 숫자
    int ascending = 0;
    int descending = 0;

    // 숫자 저장
    for(int i = 0; i < 8; i++) {
        scanf("%d", &save_num[i]);
    }

    // ascending
    for(int i = 0; i < 8; i++) {
        if(save_num[i] == i + 1) {
            ascending++;
        }
    }

    // descending
    for(int i = 0; i < 8; i++) {
        if(save_num[i] == 8 - i) {
            descending++;
        }
    }

    // 결과 출력
    if(ascending == 8) {
        printf("ascending\n");
    } else if(descending == 8) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}
