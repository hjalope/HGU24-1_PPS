#include <stdio.h>

int main() {
    int a, b, c; // 각각 입력받을 값
    int total;
    char total_str[100]; // 최종 결과값을 저장할 문자열 변수
    int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    total = a * b * c;

    // total을 문자열로 변환하여 total_str에 저장
    sprintf(total_str, "%d", total);

    int length = strlen(total_str); // total_str의 길이를 저장
    
    for(int i=0; i<length; i++) {
        if(total_str[i] == '0') {
            num[0]++;
        }
        if(total_str[i] == '1') {
            num[1]++;
        }
        if(total_str[i] == '2') {
            num[2]++;
        }
        if(total_str[i] == '3') {
            num[3]++;
        }
        if(total_str[i] == '4') {
            num[4]++;
        }
        if(total_str[i] == '5') {
            num[5]++;
        }
        if(total_str[i] == '6') {
            num[6]++;
        }
        if(total_str[i] == '7') {
            num[7]++;
        }
        if(total_str[i] == '8') {
            num[8]++;
        }
        if(total_str[i] == '9') {
            num[9]++;
        }
    }

    for(int i=0; i<10; i++){
        printf("%d\n", num[i]);
    }
    
    return 0;
}
