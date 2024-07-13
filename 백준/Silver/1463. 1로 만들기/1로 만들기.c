#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int dp[n + 1];
    dp[1] = 0; // 1을 1로 만드는 데 필요한 연산 횟수는 0

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1; // 1을 빼는 경우
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1); // 2로 나누는 경우
        }
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1); // 3으로 나누는 경우
        }
    }

    printf("%d\n", dp[n]);
    return 0;
}
