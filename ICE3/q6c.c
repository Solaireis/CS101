#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n ; i++){
        printf("%d",i);
        printf("%d",i+1); 
        printf("%d ",i+2);
    }

    return 0;
}