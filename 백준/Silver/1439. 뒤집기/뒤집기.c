#include <stdio.h>
#include <string.h>

int main(void) {
    char word[1000000];
    scanf("%s", word);

    int length = strlen(word);

    int count0 = 0, count1 = 0;

    for(int i=0; i<length; i++){
        if(word[i] != word[i+1] && word[i] == '0'){
            count0++;
        } else if(word[i] != word[i+1] && word[i] == '1'){
                count1++;
            }
    }

    printf("%d\n", (count0 < count1) ? count0 : count1);

    return 0;
}
