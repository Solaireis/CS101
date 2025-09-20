#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("1");
    for ( int i = 2 ; i <= n ; i++){
        printf(",%d",i);
    }
    printf("\n");
    return 0;
}