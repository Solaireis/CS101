#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int answer = 1;
    if ( n < 0){

        printf("invalid input\n");
        return 0;
    }
    for (int i = 1; i <= n ; i++){
            answer *= i ;
        }
    printf("%d! = %d\n", n, answer);

    return 0;
}