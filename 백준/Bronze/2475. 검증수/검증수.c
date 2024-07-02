#include <stdio.h>

int main() {
    int num[5];
    int sqr[5];
    int total = 0;
    int sixth;

    for(int i=0; i<5; i++) {
        scanf("%d", &num[i]);
        sqr[i] = num[i] * num[i]; //제곱 수 저장
        total+=sqr[i]; //제곱 수 더하기
    }

    sixth = total%10;

    printf("%d\n", sixth);
    
    return 0;
}