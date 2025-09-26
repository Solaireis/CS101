#include <stdio.h>
#include <stdbool.h>
int get_smallest_pair (int num){
    int smallest_pair = 0;

    while (num>0){
        int pair = 0;
        int is_first = true;
        pair = num % 100;
        if (is_first){
            is_first = false;
            smallest_pair = pair; 
            printf("\n%d\n",smallest_pair);
        }
        if (pair < smallest_pair){
            smallest_pair = pair;
        }
        num = num/10;
    }

    return smallest_pair;
}

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:23\n");
        int result = get_smallest_pair(2345);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:2\n");
        int result = get_smallest_pair(10245);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:-1\n");
        int result = get_smallest_pair(1);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:10\n");
        int result = get_smallest_pair(10);
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
