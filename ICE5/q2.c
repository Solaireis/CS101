#include <stdio.h>

int max2(int x ,int y){
    if ( x  > y ){
        return x;
    }
    return y;
}

int max4(int x, int y){
    return ( x > y ? x : y);
}

int max3( int x, int y , int z){
    int big = 0;
    big = max2 (x, y);
    big = max2 (big, z );
    return big;
}
int main(void) {
    {
        printf("Test 1\n");
        int result = max2(3, 2);
        printf("Expected:3\n");
        printf("Actual  :%s\n\n", result);
    }

    {
        printf("Test 2\n");
        int result = max2(2, 4);
        printf("Expected:4\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 3\n");
        int result = max2(3, 3);
        printf("Expected:3\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 4\n");
        int result = max2(-3, 3);
        printf("Expected:3\n");
        printf("Actual  :%d\n\n", result);
    }

    // uncomment to test max3
    {
        printf("Test 5\n");
        int result = max3(1, 2, 3);
        printf("Expected:3\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 6\n");
        int result = max3(5, 11, 3);
        printf("Expected:11\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 7\n");
        int result = max3(30, 1, 3);
        printf("Expected:30\n");
        printf("Actual  :%d\n\n", result);
    }
}