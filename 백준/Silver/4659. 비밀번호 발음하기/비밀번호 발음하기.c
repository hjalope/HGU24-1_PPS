#include <stdio.h>
#include <string.h>

int main() {

    char word[20];


    while(1){
        scanf("%s", word);
        if(strcmp(word, "end") == 0){
            break;
        }

        int length = strlen(word);
        int vowel = 0; //1번째 조건 확인용
        int count_vowel = 0; //2번째 조건 확인용 (모음 개수 확인)
        int count_cons = 0; //2번째 조건 확인용 (자음 개수 확인)
        int two_time = 0; //3번째 조건 확인용
        
        for(int i=0; i<length; i++){
        // 1.모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                vowel = 1; // 1이여야 true
            }
        // 2.모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
                    if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                    count_vowel++;
                    count_cons = 0;
                    if(count_vowel == 3)
                        break;
                }else{
                    count_vowel = 0;
                    count_cons++;
                    if(count_cons == 3){
                        break;
                    }
                }
            
        // 3.같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
            if (word[i] == word[i+1] && !(word[i] == 'e' && word[i+1] == 'e') && !(word[i] == 'o' && word[i+1] == 'o')) {
                two_time = 2;
            }

        }
        
    //최종 조건 확인
        if(vowel == 1 && count_vowel != 3 && count_cons != 3 && two_time != 2){
            printf("<%s> is acceptable.\n", word);
        }else{
            printf("<%s> is not acceptable.\n", word);
        }
        
    }
    
    return 0;
}
