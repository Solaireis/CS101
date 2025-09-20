#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(void) { 
    int n;
    int max;
    int min;
    bool firstTime = true;

    for ( int i = 0 ; i < 5 ; i++) {
        printf("Enter n:");
        scanf("%d", &n);
        if (firstTime){
            min = n;
            max = n;
            firstTime = false;
        }
        if (n > max){
            max = n;
        }
        if (n < min){
            min = n;
        }
        printf("Largest so far == %d. Smallest so far == %d\n", max, min);
    }
    return 0;
}