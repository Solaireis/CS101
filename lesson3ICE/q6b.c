#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = n; i > 0 ; i--){
        n = i * i;
        printf("%d ",n);
    }

    return 0;
}