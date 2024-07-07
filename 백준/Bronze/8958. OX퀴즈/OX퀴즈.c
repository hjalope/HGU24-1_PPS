#include <stdio.h>
#include <string.h>

int main() {

    int n; //for문 돌릴 변수
    char word[80]; //80보다 작은 문자열    
    scanf("%d", &n);
    int O_increase = 0;
    int total = 0;

    for(int i=0; i<n; i++){
        scanf("%s", word);
        int length = strlen(word);
        for(int j=0; j<length; j++){
            if(word[j] == 'O'){
                O_increase++;
                total+=O_increase;
            }else{
                O_increase = 0;
            }
        }
        printf("%d\n", total);
        total = 0;
        O_increase = 0;
    }

    
    return 0;
}
