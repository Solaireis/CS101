#include <stdio.h>

int main (void){
    int n;
    printf("enter n");
    scanf("%d",&n);
    long sum = 0;
    long int i=7;
    while (i<=n){

        sum += i;
        i+=7; // Question asking for all multiples of 7 until N
    }
    printf("%ld",sum);
    return 0;
}