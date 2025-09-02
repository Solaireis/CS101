#include <stdio.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n ; i++){
        // dont use if ( i % 15 == 0) you want the computer to do the calculation for you
        if ( i % 3 == 0 && i % 5 == 0){
            printf("Fizzbuzz ");
        } else if ( i % 3 == 0) {
            printf("Fizz ");
        } else if ( i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    
    return 0;
}