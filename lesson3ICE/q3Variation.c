#include <stdio.h>
#include <limits.h>
int main(void) { 
    int n;
    int max;
    int min;
    
    max = INT_MIN; // max
    min = INT_MAX; // min

    for ( int i = 0 ; i < 5 ; i++) {
        printf("Enter n:");
        scanf("%d", &n);
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