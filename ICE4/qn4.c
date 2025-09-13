#include <stdio.h>

int main(void){
    long n;
    printf("Enter n:");
    scanf("%ld",&n);
    long sum = 0;
    while ( n > 0){
        n = n / 10;
        sum += 1;
    }
    printf("%ld\n",sum);
}