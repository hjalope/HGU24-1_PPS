#include <stdio.h>
#include <string.h>

#define MAX_SIZE 2000000

//push X: 정수 X를 큐에 넣는 연산이다.
//pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//size: 큐에 들어있는 정수의 개수를 출력한다.
//empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
//front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

int main() {
    int queue[MAX_SIZE]; //숫자를 저장할 큐
    int front = 0;
    int back = 0;
    int size = 0;
    int n; //몇번 입력받을지
    char command[10]; //push, pop, size, empty, front, back 중 하나 입력 받음

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) { //push 일 때 
            int value; //push할 숫자
            scanf("%d", &value); 
            queue[back] = value; //스택과는 다르게 back이 늘 바뀐
            back = (back + 1) % MAX_SIZE; //현재 back index를 1씩 증가 (MAX_SIZE를 넘기지 않기 위해 순환 사용)
            size++; //size 증가
        } else if (strcmp(command, "pop") == 0) { //pop 일 때
            if (size == 0) { //size가 0일 때 
                printf("-1\n");
            } else {
                printf("%d\n", queue[front]); //front 출력
                front = (front + 1) % MAX_SIZE;// front를 0으로 되돌림
                size--;
            }
        } else if (strcmp(command, "size") == 0) { //size일 때 
            printf("%d\n", size); //size 출력
        } else if (strcmp(command, "empty") == 0) { //비었는지 여부 확인
            printf("%d\n", size == 0 ? 1 : 0); //size가 0이면 1, 아니면 0 출력 (왼-참 / 오-거직)
        } else if (strcmp(command, "front") == 0) { //front일 때 
            if (size == 0) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[front]); //front출력
            }
        } else if (strcmp(command, "back") == 0) { //back 일 때 
            if (size == 0) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[(back - 1 + MAX_SIZE) % MAX_SIZE]);
            }
        }
    }

    return 0;
}
