#include <stdio.h>
#include <string.h>

int main(void) {

int n, num;
int total = 0;
int biggest = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &num);
        total += num;
        if(num > biggest){
            biggest = num;
        }
    }

    printf("%d\n", total-biggest);
    
    return 0;
}
