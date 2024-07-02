#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); //총 몇개의 반(?)
   // int classes[num];
    int student; // 각 반마다 몇명의 학생을 구할지
    int score[1000]; //성적
    int total[100]; //성적 더하기
    float avg[100]; //평균
    float avg_percent[num]; //평균보다 높은 애들 비율

    
    for (int i = 0; i < num; i++){  //각 반(?)마다 
        total[i] = 0; // total 초기화
        scanf("%d", &student); //학생 몇명
        for(int j = 0; j < student; j++){ //각 학생 점수
            scanf("%d", &score[j]); //각 학생 점수
            total[i] += score[j]; // 점수 총합
        }    
        avg[i] = (float)total[i] / student; // 점수 평균 계산

    int higher = 0; //평균보대 높은 애들
    for(int k = 0; k<student; k++){ //평균 넘는 학생 수
        if(score[k] > avg[i]){
            higher++;
        }
    }
        avg_percent[i] = (float)higher / student * 100; // 평균 넘는 학생 비율 계산 (백분율로 표현)
    }

    for(int i = 0; i <num ; i++) //출력
    printf("%.3f%%\n", avg_percent[i]);
    
    return 0;
}