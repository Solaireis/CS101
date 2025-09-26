#include <stdio.h>
int longest_sorted_subarray(int arr[],int n){
    int longest_length = 0;
    int count = 1;
    if (n<2){
        return 1; // for edge cases in which only exists one variable
    }
    for (int i = 1; i<n; i++){
        // print statements to debug the loop
        //printf("%d\n",arr[i]);
        //printf("%d\n",arr[i-1]);


        // if this fails reset counter to 0
        if (arr[i] < arr[i-1]){
            count = 0;

        }
        count++;
        //print statements to debug the counter
        //printf("count %d\n",count);

        //at the end of each loop do a check if the longest sequence has been changed.
        if (longest_length < count) {
                longest_length = count;
        }
        // count has to always be 1 at the initial but when it resets set it to 0 then add 1 so it stays at one
    }
    return longest_length;
}

int main(void) {
    int tc_num = 1;
    {
        int arr[] = {2, 8, 11, 111, 19, 14, 7, -3, 0, 4, 27, 56, 98, 99};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:7\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
    {
        int arr[] = {-2, -8, -11, -111, -19, -14, -7, 3, 0, -4, -27, -56, -1};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:5\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {-1};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:1\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {1, 1, 3, 2};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:3\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}