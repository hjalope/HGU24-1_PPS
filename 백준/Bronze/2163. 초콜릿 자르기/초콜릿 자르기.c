#include <stdio.h>

int main() {
    int col, row;
    int size;

    scanf("%d %d", &col, &row);

    size = col * row - 1;

    printf("%d\n", size);

    return 0;
}