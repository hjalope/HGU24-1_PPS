#include <stdio.h>
#include <string.h>

int main() {

    char size[256];
    scanf("%s", size);
    int length = strlen(size);   
    int word = 0;

    for(int i=0; i<length; i++){
        for(int j=0; j<10; j++){
            printf("%c", size[word]);
            word++;
            if(word == length){
                return 0;
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
