#include <stdio.h>

int main(void) { 
    int n;
    int n1;
    int n2;

    printf("Enter n:");
    scanf("%d", &n); 

    n1 = n; // max
    n2 = n; // min

    printf("Largest so far == %d. Smallest so far == %d\n", n1, n2);
    for ( int i = 1 ; i < 5 ; i++) {
        printf("Enter n:");
        scanf("%d", &n);
        if (n > n1){
            n1 = n;
        }
        if (n < n2){
            n2 = n;
        }
        printf("Largest so far == %d. Smallest so far == %d\n", n1, n2);
    }
    return 0;
}