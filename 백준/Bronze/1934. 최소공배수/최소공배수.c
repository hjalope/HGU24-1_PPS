#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a, b;
    int lcm;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        int min = a > b ? a : b;  // a와 b 중 더 큰 값을 min으로 설정
        lcm = min;

        // lcm을 찾을 때까지 증가시키면서 확인
        while (1) {
            if (lcm % a == 0 && lcm % b == 0) {
                break;
            }
            lcm += min;  // 두 수의 최대값씩 증가
        }

        printf("%d\n", lcm);
    }

    return 0;
}
