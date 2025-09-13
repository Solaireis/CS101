#include <stdio.h>
#include <math.h>

int main (void){
    int n;
    printf("Enter num:");
    scanf("%d", &n);
    int binary = 0;
    int  exponent = 0;
    while ( n>0){
        // remainder if we divide n by 2
        int digit = n % 2;
        // put digit in correction position

        //make variable
        binary += digit * pow(10,exponent);

        //get ready next line 
        exponent ++;

        //half n
        n /= 2;

    }
    printf("%d\n",binary);
    return 0;
}