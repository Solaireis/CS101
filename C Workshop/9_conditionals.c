#include <stdio.h>

int main(void){
    int x;
    printf("gimmie a no. : \n");
    scanf("%d", &x);
    if (x%36 == 0){
        printf("PolarBear");
    }
    else if (x%4 == 0) {
        printf("polar");
    }
    else if (x%9 == 0) {
        printf("Bear");
    }
    else {
        printf("%d \n", x);
    }

    return 0;
}