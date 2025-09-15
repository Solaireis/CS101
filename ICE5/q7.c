#include <stdio.h>
#include <stdbool.h>
bool is_binary_number (int x){
    if ( x == 0){
        return true;
    }
    while (x > 0){
        int temp = 0;
        temp = x % 10;
        switch (temp) {
            case 0:
            case 1:
                break;
            default:
                return false;
        }
        x = x / 10;

    }
    return true;
}

int main(void) {
    {
        printf("Test 1\n");
        bool result = is_binary_number(10);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 2\n");
        bool result = is_binary_number(8);
        printf("Expected:Fail\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 3\n");
        bool result = is_binary_number(10111111);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }
}
