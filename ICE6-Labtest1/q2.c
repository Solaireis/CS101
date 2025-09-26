#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
long stutter(int num){
    int temp = 0;
    int exponent = 0;
    int total=0;
    bool is_positive = true;
    if (num < 0){
        is_positive = false; 
        num *= -1;
    }
    while (num>0){
        temp = num % 10;
        //printf("%d\n",temp);
        total += temp * pow(10,exponent+1) + temp * pow(10,exponent);
        //printf("%d\n",total); 
        exponent += 2;
        num = num /10;
    }
    if (!is_positive){
        total *= -1;
    }
    return (long) total ;
}

int main(void) {

    int tc_num = 1;
    {
        printf("Test %d\n", tc_num++);
        printf("Expected:112233\n");
        printf("Actual  :%ld\n", stutter(123));
        printf("\n");
    }

    {
        printf("Test %d\n", tc_num++);
        printf("Expected:11\n");
        printf("Actual  :%ld\n", stutter(1));
        printf("\n");
    }

    {
        printf("Test %d\n", tc_num++);
        printf("Expected:0\n");
        printf("Actual  :%ld\n", stutter(0));
        printf("\n");
    }

    {
        printf("Test %d\n", tc_num++);
        printf("Expected:-11\n");
        printf("Actual  :%ld\n", stutter(-1));
        printf("\n");
    }


    {
        printf("Test %d\n", tc_num++);
        printf("Expected:-113322\n");
        printf("Actual  :%ld\n", stutter(-132));
        printf("\n");
    }
}