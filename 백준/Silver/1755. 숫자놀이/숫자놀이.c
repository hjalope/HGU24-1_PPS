#include <stdio.h>
#include <string.h>

void replace_digit_with_word(char *dest, const char *source) {
    while (*source) {
        switch (*source) {
            case '0':
                strcat(dest, "zero");
                dest += 4;
                break;
            case '1':
                strcat(dest, "one");
                dest += 3;
                break;
            case '2':
                strcat(dest, "two");
                dest += 3;
                break;
            case '3':
                strcat(dest, "three");
                dest += 5;
                break;
            case '4':
                strcat(dest, "four");
                dest += 4;
                break;
            case '5':
                strcat(dest, "five");
                dest += 4;
                break;
            case '6':
                strcat(dest, "six");
                dest += 3;
                break;
            case '7':
                strcat(dest, "seven");
                dest += 5;
                break;
            case '8':
                strcat(dest, "eight");
                dest += 5;
                break;
            case '9':
                strcat(dest, "nine");
                dest += 4;
                break;
        }
        source++;
    }
    *dest = '\0';
}

void replace_word_with_digit(char *dest, const char *source) {
    while (*source) {
        if (strncmp(source, "zero", 4) == 0) {
            *dest = '0';
            source += 4;
        } else if (strncmp(source, "one", 3) == 0) {
            *dest = '1';
            source += 3;
        } else if (strncmp(source, "two", 3) == 0) {
            *dest = '2';
            source += 3;
        } else if (strncmp(source, "three", 5) == 0) {
            *dest = '3';
            source += 5;
        } else if (strncmp(source, "four", 4) == 0) {
            *dest = '4';
            source += 4;
        } else if (strncmp(source, "five", 4) == 0) {
            *dest = '5';
            source += 4;
        } else if (strncmp(source, "six", 3) == 0) {
            *dest = '6';
            source += 3;
        } else if (strncmp(source, "seven", 5) == 0) {
            *dest = '7';
            source += 5;
        } else if (strncmp(source, "eight", 5) == 0) {
            *dest = '8';
            source += 5;
        } else if (strncmp(source, "nine", 4) == 0) {
            *dest = '9';
            source += 4;
        }
        dest++;
    }
    *dest = '\0';
}

// 오름차순 정렬 함수
int compare_asc(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main(void) {
    int num1; // 시작 숫자
    int num2; // 끝 숫자

    scanf("%d %d", &num1, &num2);
    int number = num2 - num1 + 1;
    char num_char[number][50]; // 각 숫자를 문자열로 저장 (최대 50자로 설정)
    char result[500]; // 변환된 결과를 임시로 저장할 버퍼 (충분히 큰 크기)

    int a = 0;

    for (int i = num1; i <= num2; i++) {
        // 숫자를 문자열로 변환
        sprintf(num_char[a], "%d", i);

        // 변환된 결과 초기화
        result[0] = '\0';

        // 숫자를 단어로 변환
        replace_digit_with_word(result, num_char[a]);

        // 변환된 결과를 num_char 배열에 저장
        strcpy(num_char[a], result);

        a++;
    }

    qsort(num_char, number, sizeof(num_char[0]), compare_asc);

    // 변환된 결과 출력
    for (int i = 0; i < number; i++) {
        // 알파벳을 다시 숫자로 변환
        result[0] = '\0';
        replace_word_with_digit(result, num_char[i]);
        printf("%s ", result);
        if(i % 10 == 9) printf("\n");
    }

    return 0;
}
