#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main() {

    char word[MAX_LENGTH];

    scanf("%s", word);
    int length = strlen(word);

    for(int i=0; i < length; i++){
        if(word[i] == 'A' || word[i] == 'B' || word[i] == 'C'){
        printf("%c", word[i]+23);
        } else{
        printf("%c", word[i]-3);
        }
    }

    printf("\n");
    
    return 0;
}
