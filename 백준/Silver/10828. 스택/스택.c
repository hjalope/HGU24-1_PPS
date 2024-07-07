#include <stdio.h>
#include <string.h>

int main() {

    // push X: 정수 X를 스택에 넣는 연산이다.
    // pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    // size: 스택에 들어있는 정수의 개수를 출력한다.
    // empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
    // top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

    int n;
    scanf("%d", &n);
    char current[20];
    int top;
    int size = 0;
    int empty = 0;
    int stack[n];

    for(int i=0; i<n; i++){
        scanf("%s", current);
        if(strcmp(current, "push")==0){ //push 일 때
            scanf("%d", &top); //top은 계속 바뀜
            size++; //size 증가
            stack[size] = top;
            empty = 1; //true이면 비지 않았다는 것.
        }else if(strcmp(current, "pop")==0){ //pop일 때 
            if(empty == 1){ //비어있지 않으면
                size--; //size 감소
                if(size == 0 || size == -1){ //size가 0이면
                    empty = 0; //비어있음을 의미함.
                    size = 0;
                }
                printf("%d\n", stack[size+1]); //현재 top print
               // top = stack; //top에 
            } else if(empty == 0){ //비어있으면
                printf("-1\n"); //-1 print
            }
        }else if(strcmp(current, "size")==0){ //size 일 때 
            printf("%d\n", size); //현재 size
        }else if(strcmp(current, "empty")==0){ //empty 일 때
            if(empty == 0){ //비어있지 않으면
                printf("1\n"); //1 print
            }else if(empty == 1){ // 비어있으면
                printf("0\n"); //0출력
            }
        }else if(strcmp(current, "top")==0){
            if(empty == 1){ //비어있지 않으면
                printf("%d\n", stack[size]); //top print
            }else if(empty == 0){
            printf("-1\n"); //top print
            }
        }
    }
    
    return 0;
}
