#include <stdio.h>

int main() {
    int apart[15][15] = {0};
    int num, floor, room;

    // 0층의 초기값 설정
    for (int i = 1; i < 15; i++) {
        apart[0][i] = i;
    }

    // 나머지 층의 값 계산
    for (int j = 1; j < 15; j++) {
        for (int k = 1; k < 15; k++) {
            apart[j][k] = apart[j-1][k] + apart[j][k-1]; // [같은 층][전 호수] + [아래층] [같은 호수] = 현재 방
        }
    }

    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        scanf("%d %d", &floor, &room);
        printf("%d\n", apart[floor][room]);
    }

    return 0;
}
