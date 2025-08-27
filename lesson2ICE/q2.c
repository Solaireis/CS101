#include <stdio.h>

int main (void){

    int n1;
    printf("Enter num:");
    scanf("%d" , &n1);
    //printf("%d\n",n1); test if correct
    printf( n1 % 2 == 0  ? "%d is even\n" : "%d is odd\n" , n1);


    
    //printf(n1 == 0 || n1 % 2 == 0  ? "%d is even\n" : "%d is odd\n" , n1);
    
    return 0;
}