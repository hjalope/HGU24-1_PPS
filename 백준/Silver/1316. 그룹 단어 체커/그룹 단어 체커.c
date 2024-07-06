#include <stdio.h>
#include <string.h>

int main() {

    int count;
    char word[100];
    scanf("%d", &count);
    int n = count;

    for(int i=0; i<n; i++){
        scanf("%s", word);
        
        int length = strlen(word);
        int flag = 1;
        
        for(int j=0; j<length; j++){
            for(int k = 0; k<j-1; k++){
                if (word[j] == word[k] && word[j] != word[j - 1]) {
                    flag = 0;
                    break;
            }
        }
     }
        if(flag == 0){
            count--;
        }
    }

    printf("%d\n", count);
    return 0;
}
