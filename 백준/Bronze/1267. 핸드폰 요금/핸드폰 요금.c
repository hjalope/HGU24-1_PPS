#include <stdio.h>

int main() {
    int count;
    int time;
    scanf("%d", &count);
    int time_to_money_Y = 0; //통화 시간을 요금으로 환산 후 저 - 영식
    int time_to_money_M = 0; //통화 시간을 요금으로 환산 후 저장 - 민식
    int total_Y = 0;
    int total_M = 0;


    for (int i = 0; i < count; i++){
        scanf("%d", &time);
        time_to_money_Y = time/30 + 1; //30초마다 자르기
        time_to_money_M = time/60 + 1; //60초마다 자르기

        total_Y += time_to_money_Y;
        total_M += time_to_money_M;
    }

    total_Y = total_Y*10;
    total_M = total_M*15;

    if(total_Y > total_M){
        printf("M %d", total_M);
    }else if(total_Y < total_M){
        printf("Y %d", total_Y);
    } else{
        printf("Y M %d", total_Y);
    }
    
    return 0;
}
