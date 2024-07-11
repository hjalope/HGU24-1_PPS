#include <stdio.h>
#include <string.h>

//a. 문자열로 단어입력받음
//b. 해당 단어의 길이 구함
//c. 크로아티아 문자들을 정리
//d. for문 돌리면서 알파벳 비교
//e. 알파벳이 맞으면 num함수 증가 
//f. 최종 결과 출력

int main(void) {

    char word[100];
    scanf("%s", word);

    int length = strlen(word);

    int num = 0;

    for(int i=0; i<length; i++){
        if(word[i] == 'c' && word[i+1] == '='){
            num++;
            i++;     
        } else if(word[i] == 'c' && word[i+1] == '-'){
            num++;
            i++;
        } else if(word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '='){
            num++;
            i+=2;
        } else if(word[i] == 'd' && word[i+1] == '-'){
            num++;
            i++;
        } else if(word[i] == 'l' && word[i+1] == 'j'){
            num++;
            i++;
        }  else if(word[i] == 'n' && word[i+1] == 'j'){
            num++;
            i++; 
        } else if(word[i] == 's' && word[i+1] == '='){
            num++;
            i++;
        } else if(word[i] == 'z' && word[i+1] == '='){
            num++;
            i++;
        } else {
            num++;
        }
    }

    printf("%d\n", num);
    
    return 0;
}
