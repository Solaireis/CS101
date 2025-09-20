#include <stdio.h>

int main(void) { 

    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for (int r = 1; r <= n ; r++){
        for (int c = 1; c <= n ; c++){
        printf("*");
    }
    printf("\n");
    }
    

}