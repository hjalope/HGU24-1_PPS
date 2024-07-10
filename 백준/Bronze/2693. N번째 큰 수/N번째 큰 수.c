#include <stdio.h>

int main(void) {

    int n;
    int num[10] = {0};
    int first = 0, second = 0, third = 0;

    scanf("%d", &n);
for(int a=0; a<n; a++){
    
    for(int i=0; i<10; i++) { //10개 숫자 입력
        scanf("%d", &num[i]);
    }
    
        for(int j=0; j<10; j++){
        if(first <= num[j]) {
            first = num[j];
            }
        }
   // printf("%d\n", first);
        for(int j=0; j<10; j++){
        if(second <= num[j] && num[j] != first) {
               second = num[j];
            }
        }
    // printf("%d\n", second);
        for(int j=0; j<10; j++){
        if(third <= num[j] && num[j] != first && num[j] != second) {
                third = num[j];
            }
        }
        
    printf("%d\n", third);
    first = 0;
    second = 0;
    third = 0;
}

  return 0;
}
