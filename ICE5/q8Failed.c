#include <stdio.h>
#include <stdbool.h>

int swap_digit_pairs (int x){
    int sum = 0;
    // check for negative
    bool is_positive = true;
    if (x < 0 ){
        is_positive = false;
    }
    // changes the negative to positive
    if (!is_positive){
        x = x * -1;
    }
    
    // if only one digit
    if (x < 10){
        sum = x;
    }
    // if only two digits
    if (x > 10 && x <= 99){
        int temp1 = 0;
        int temp2 = 0;

        temp1 = x % 10;
        temp2 = x / 10;

        sum = temp1 * 10 + temp2;
    }
    
    if (!is_positive){
        sum = sum * -1;
    }
    return sum;
}

int main(void) {
    {
        printf("Test 1\n");
        int result = swap_digit_pairs(1);
        printf("Expected:1\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 2\n");
        int result = swap_digit_pairs(32);
        printf("Expected:23\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 3\n");
        int result = swap_digit_pairs(90);
        printf("Expected:9\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 4\n");
        int result = swap_digit_pairs(971);
        printf("Expected:917\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 5\n");
        int result = swap_digit_pairs(382818);
        printf("Expected:838281\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 6\n");
        int result = swap_digit_pairs(-13);
        printf("Expected:-31\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 7\n");
        int result = swap_digit_pairs(-1347);
        printf("Expected:-3174\n");
        printf("Actual  :%d\n\n", result);
    }
}