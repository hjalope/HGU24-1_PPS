#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000000

int main() {
    char password[MAX_SIZE];
    int digit_count[10] = {0};
    int set = 0;

    // 숫자를 문자열로 입력받기
    scanf("%s", password);

    // 문자열의 각 문자에 대해 각 숫자의 개수를 셈
    for(int i = 0; i < strlen(password); i++) {
        digit_count[password[i] - '0']++;
    }

    // 6과 9의 합계를 구해서 필요한 세트 수를 계산
    digit_count[6] = (digit_count[6] + digit_count[9] + 1) / 2;

    // 나머지 숫자들 중 가장 많이 필요한 숫자를 찾음
    for(int i = 0; i <= 8; i++) {
        if(set < digit_count[i]) {
            set = digit_count[i];
        }
    }

    // 필요한 세트 수를 출력
    printf("%d\n", set);

    return 0;
}
