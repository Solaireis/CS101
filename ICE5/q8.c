#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int swap_digit_pairs (int n){
    int power_of_ten = 0;
    int temp_final = 0; // use an extra variable to store the answer
    bool is_positive = true;
    if (n<0){
        is_positive = false;
        n = n * -1;
    }
    while (n>0){

        //get 1st last digit
        int digit1 = n % 10;

        //iterate through the number
        n /= 10;
        /*
            if (n==0){
                temp_final += digit1 * pow(10,power_of_ten);
            }
        
        */
        // get second last digit
        int digit2 = n % 10;

        //usually the last line
        n /= 10;

        //checks if the final pair is a single digit, 
        // if it is then do not swap and it the number at the back
        
        if (n == 0 && digit2 == 0){
            temp_final += digit1 * pow(10,power_of_ten);
        } else {
            // I agree with prof that this way is more logical
            //swap the digit
            int temp_first = digit1;
            int temp_second = digit2;
            // add the exponent values
            temp_final += digit2 * pow(10,power_of_ten);
            temp_final += digit1 * pow(10,power_of_ten+1);

        }
        //increase the counter of 2
        power_of_ten += 2;
        //Not recommended to do the swap on old variable rather its better to make new ones

    }
    if (!is_positive){
       temp_final = temp_final * -1; 
    }
    return temp_final;
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