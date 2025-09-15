#include <stdio.h>
#include <stdbool.h>

bool is_even(int x){
    if (x % 2 == 0){
        return true;
    }
    return false;
    // if return false doesnt exist it will flag an error in which there are no control pass
}

bool is_even1(int x){
    return (x % 2 == 0 ? true : false);
}
int main(void) {
    {
        printf("Test 1\n");
        bool result = is_even1(7102);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 2\n");
        bool result = is_even(-2);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 3\n");
        bool result = is_even(0);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 4\n");
        bool result = is_even(0);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 5\n");
        bool result = is_even(-13);
        printf("Expected:Fail\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }
}