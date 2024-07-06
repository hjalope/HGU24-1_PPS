#include <stdio.h>
#include <string.h>

int main() {

    char word[15];

    scanf("%s", word);
    
    int length = strlen(word);
    int total = 0;
    int current = 0;

    for(int i=0; i<length; i++) {
        if(word[i]-'A' <= 14){
             current = (word[i]-'A')/3 + 2;
        }else if(word[i]-'A' <= 18){
            current = 7;
        }else if(word[i]-'A' <= 21){
            current = 8;
        }else if(word[i]-'A' <= 25){
            current = 9;
        }
        //printf("%d\n", current);
        total += current;
    }
   // printf("%d\n", total);
    printf("%d\n", total+length);

    
    return 0;
}
