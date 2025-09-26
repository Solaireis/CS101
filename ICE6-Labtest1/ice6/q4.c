#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void print_expanded_form(int n){
    if (n==0 || n<0){
        printf("Invalid Input!\n"); 
    }
    //12

    int reversed = 0;
    int exponent = 0;
    bool is_first=true;
    while (n>0){
        int temp = 0;
        temp = n % 10;
        reversed = temp + reversed * 10;
        //printf(" \n reversed %d\n",reversed);
        n = n / 10;
        exponent++;

    }
    while (reversed > 0){
        int temp = 0;
        exponent--;
        temp = reversed % 10;
        temp = temp * pow(10,exponent);
        if (is_first){
            is_first=false;
            printf("%d",temp); 
        } else {
            printf(" + %d",temp);
        }
        reversed = reversed / 10;
    }

    
}
int main(void) {
    printf("Test 1\n");
    printf("Expected:");
    printf("10 + 2\n");
    printf("Actual  :");
    print_expanded_form(12);
    printf("\n");

    printf("Test 2\n");
    printf("Expected:");
    printf("100 + 20 + 3\n");
    printf("Actual  :");
    print_expanded_form(123);
    printf("\n");

    printf("Test 3\n");
    printf("Expected:");
    printf("100000 + 4\n");
    printf("Actual  :");
    print_expanded_form(100004);
    printf("\n");

    printf("Test 4\n");
    printf("Expected:");
    printf("Invalid Input!\n");
    printf("Actual  :");
    print_expanded_form(0);
    printf("\n");

    printf("Test 5\n");
    printf("Expected:");
    printf("Invalid Input!\n");
    printf("Actual  :");
    print_expanded_form(-163);
    printf("\n");

}