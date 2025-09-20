#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    char small;
    char big;
    for (int i = 0; i < n ; i++){
        big = 'A' + i;
        small = 'a' + i;
        printf("%c", big );
        printf("%c", small );

    }

    return 0;
}