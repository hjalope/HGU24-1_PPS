#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ABS_VAL 4000

// 오름차순 정렬을 위한 비교 함수
int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 최빈값을 계산하는 함수
int calculate_mode(int num[], int n) {
    int freq[2 * MAX_ABS_VAL + 1] = {0}; // -4000 ~ 4000 범위의 빈도를 저장할 배열

    for (int i = 0; i < n; i++) {
        freq[num[i] + MAX_ABS_VAL]++;
    }

    int max_frequency = 0;
    for (int i = 0; i < 2 * MAX_ABS_VAL + 1; i++) {
        if (freq[i] > max_frequency) {
            max_frequency = freq[i];
        }
    }

    int mode_candidates[n];
    int candidate_count = 0;
    for (int i = 0; i < 2 * MAX_ABS_VAL + 1; i++) {
        if (freq[i] == max_frequency) {
            mode_candidates[candidate_count++] = i - MAX_ABS_VAL;
        }
    }

    qsort(mode_candidates, candidate_count, sizeof(int), compare_asc);

    return (candidate_count > 1) ? mode_candidates[1] : mode_candidates[0];
}

int main(void) {
    int n;
    scanf("%d", &n); // 입력할 숫자의 개수를 읽음
    int num[n]; // 입력된 숫자를 저장할 배열

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]); // 숫자를 배열에 저장
    }

    qsort(num, n, sizeof(int), compare_asc); // 배열을 오름차순으로 정렬

    // 산술평균 계산
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += num[i]; // 모든 숫자의 합을 계산
    }
    double mean = (double)total / n; // 산술평균 계산
    if (mean < 0) {
        mean = mean - 0.5;
    } else {
        mean = mean + 0.5;
    }
    int rounded_mean = (int)mean;

    // 중앙값 계산
    int median = num[n / 2]; // 정렬된 배열의 중간 값

    // 최빈값 계산
    int mode = calculate_mode(num, n); // 최빈값을 계산하는 함수 호출

    // 범위 계산
    int range = num[n - 1] - num[0]; // 배열의 최댓값과 최솟값의 차이

    // 결과 출력
    printf("%d\n", rounded_mean); // 산술평균 출력 (소수점 이하 첫째 자리에서 반올림한 값)
    printf("%d\n", median); // 중앙값 출력
    printf("%d\n", mode); // 최빈값 출력
    printf("%d\n", range); // 범위 출력

    return 0;
}
