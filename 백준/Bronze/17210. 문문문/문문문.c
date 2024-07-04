#include <stdio.h>

typedef long long ll;

ll n;
int way;

int main() {
    scanf("%lld %d", &n, &way);

    if(n > 5) {
        printf("Love is open door");
    }
    else {
        for(int i = 1; i < n; i++){
            way = 1 - way;
            printf("%d\n", way);
        }
    }
    return 0;
}
