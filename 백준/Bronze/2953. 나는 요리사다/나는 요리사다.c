#include <stdio.h>

int main() {

    int chef[5] = {0}; //각 요리사 점수
    int total[5] = {0}; // 요리사 전체 점수
    int winner = 0; //우승자 점수
    int num = 0; //우승자 번호

    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
        scanf("%d", &chef[j]); //점수를 입력받음
        total[i] += chef[j]; //총 점수 구함
            }
        if(winner < total[i]){ // 현재 전체 점수가 전에 구했던 전체 점수보다 높으면 winner 바뀜
            winner = total[i];
            num = i;
        }
    }

    printf("%d %d\n", num+1, winner);

    return 0;
}
