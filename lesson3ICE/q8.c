#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter positive integer:");
    scanf("%d", &n);
    int sum = 1;

    for (  int i = 2; i < n - 1; i++){
        if ( n % 1 == 0) {
            sum += i;
        }
    }
    if (sum == n){
        printf(" %d is a perfect number:", sum);
    } else {
        printf("%d is not a perfect number:", sum);
    }


}