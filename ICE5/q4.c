#include <stdio.h>
int get_num_holes (int n) {
    int count = 0;
    int temp = 0;
    while (n>0){

        temp = n % 10;
        //printf("%d\n",temp);
        switch (temp) {
            case 0:
            case 4:
            case 6:
            case 9:
                count += 1;
                break;
                
            case 8:
                count += 2;
                break;

            default:
                count += 0;
                break;
        }
        n = n/10;
        //printf("%d\n",n);
    }
    return count;
}

int main(void) {
    {
        printf("Test 1\n");
        int result = get_num_holes(1208);
        //int result = get_num_holes(8);
        printf("Expected:3\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 2\n");
        int result = get_num_holes(12357);
        printf("Expected:0\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 3\n");
        int result = get_num_holes(4690);
        printf("Expected:4\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 4\n");
        int result = get_num_holes(888);
        printf("Expected:6\n");
        printf("Actual  :%d\n\n", result);
    }
}