#include <stdio.h>

int main() {

    int player;
    scanf("%d", &player);
    char player_name[30];
    int alpha[27] = {0};
    int flag = 0;

    for(int i = 0; i < player; i++){
        scanf("%s", player_name); // 선수들 이름 입력받음 
        alpha[player_name[0]-'a']++; // 각 알파벳에 횟수 중복시 증가
    }

    for (int i = 0;i < 26;i++)
        {
            if (alpha[i] >= 5)
            {
                printf("%c", i + 'a'); // 아스키 코드 값을 문자로 변환
                flag = 1;
            }
        }
        if (flag == 0)
            printf("PREDAJA");
    
    
    return 0;
}
