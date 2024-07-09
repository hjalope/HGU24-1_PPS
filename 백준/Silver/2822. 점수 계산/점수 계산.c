#include <stdio.h>

int main(void) {
    int n[8];
    int number[8];
    int total = 0;
    int biggest = 0;
    int a = 0;

    for(int i=0; i<8; i++){
        scanf("%d", &number[i]);
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(number[i] >= number[j]){
                biggest++;
            }
        }
        if(biggest>=4){
           // printf("%d\n", number[i]);
            total += number[i];
           // printf("%d\n", i);
            n[a] = i+1;
            a++;
        }
        biggest = 0;
    }

    printf("%d\n", total);
    for(int i=0; i<5; i++){
        printf("%d ", n[i]);
    }
        

  return 0;
}
