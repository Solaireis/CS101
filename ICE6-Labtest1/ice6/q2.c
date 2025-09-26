#include <stdio.h>
#include <stdlib.h>

int gcd ( int num1, int num2){
    int gcd = 0;
    //check if one of the numbers inputted is zero
    if (num1 == 1 || num2 == 1){
        return 1;
    }
    // check if one of the number inputted is zero
    if (num1 == 0 || num2 == 0){
        return 0;
    }
    // checks if the number is negative
    if (num1 < 0){
        num1 *= -1;
    }
    if (num2 < 0){
        num2 *= -1;
    }
    // does the ordering 
    int start=num1;

    if (num2<num1){
        start = num2;
    }
    
    for (int i=start; i> 1; i--){
        if ( num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    // if no common denominator found is greater than 1 then return the final value as 1
    if (gcd == 0){
        gcd = 1;
    }


    return gcd;

    // floating point exception is given when you try to divide by 0
}
int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:3\n");
        int result = gcd(9, 12);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:1\n");
        int result = gcd(1, 0);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:1\n");
        int result = gcd(3, 5);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:3\n");
        int result = gcd(-3, -6);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:3\n");
        int result = gcd(-3, -6);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 6\n");
        printf("Expected:0\n");
        int result = gcd(0, 0);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

}
