#include <stdio.h>
#include <string.h>
#include <math.h>

//a. 몇번 for문 반복할지 입력
//b. 지나쳐온 정류장의 수를 입력받음
//c. 정류장 한개당 *2+0.5
//d. 최종 결과출력 (결과 내림)

int main(void) {

    int n;
    int station;
    scanf("%d", &n);
    int people = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &station);

        for (int i = 0; i < station; i++) {
            people = floor((people + 0.5) * 2);
        }

        printf("%d\n", people);
        people = 0;
        
    }


    return 0;
}
