#include <stdio.h>
#include <string.h>

int main(void) {

    int start, end;
    int current = 1;
    int total = 0;

    scanf("%d %d", &start, &end);

    for(int i=1; i<=end;  i++){
        for(int j=1; j<=i; j++){
            if(current >= start && current <= end){
                total+=i;
            }
            current++;
        }
    }

    printf("%d\n", total);

    return 0;
}
