#include <stdio.h>
#include <limits.h>

int main(void){
    int n=1;
    int smallest = INT_MAX;
    int biggest = INT_MIN;
    while(n>0){
        printf("enter N:");
        scanf("%d", &n); 
        if (n < 0){
            break;
        }
        if (n < smallest){
            smallest = n;
        }
        if (n>biggest){
            biggest = n;
        }
        printf("largest so far == %d. Smallest so far == %d.\n", biggest, smallest);
        
    }
    return 0;
}