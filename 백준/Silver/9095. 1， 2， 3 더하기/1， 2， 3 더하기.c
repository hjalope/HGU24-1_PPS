#include <stdio.h>

// 1, 2, 3의 합으로 나타내는 방법의 수를 계산하는 함수
int count_ways(int n) {
    if (n == 0) return 1; // 아무 것도 더하지 않는 방법
    if (n < 0) return 0;  // 음수인 경우 방법이 없음

    // n을 1, 2, 3으로 나타내는 방법의 수는
    // n-1, n-2, n-3을 나타내는 방법의 수의 합
    return count_ways(n - 1) + count_ways(n - 2) + count_ways(n - 3);
}

int main(void) {
    int n, num;
    
    scanf("%d", &n); // 테스트 케이스의 개수 입력받음

    for (int i = 0; i < n; i++) {
        scanf("%d", &num); // 각 테스트 케이스의 정수 num 입력받음
        printf("%d\n", count_ways(num)); // num을 1, 2, 3의 합으로 나타내는 방법의 수 출력
    }

    return 0;
}
