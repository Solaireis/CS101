#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i > 0 ; i--){
        sum += i;
        printf("%d ", i );
        

    }
    printf("(sum: %d)\n", sum);
    return 0;
}