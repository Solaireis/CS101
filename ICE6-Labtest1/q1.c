#include <stdio.h>
#include <stdbool.h>

bool is_sorted_asc(int arr[],int n){
    if (n > 0){
        for (int i = 1; i<n; i++){
            if ((arr[i] < arr[i-1])){
                return false; 
            }
        }
    } 
    return true; //ensures that output will always be false unless otherwise covers all cases
}
int main(void) {
    int tc_num = 1;
    {
        int arr[] = {1, 2, 3};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false"); 
        // sizeofarray is abritary number while size of int is size of bytes this will give use the len size
        printf("\n");
    }

    {
        int arr[] = {1, 1, 3};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }


    {
        int arr[] = {1, 2, 3, 1};
        printf("Test %d\n", tc_num++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {1};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {3, 2, 1};
        printf("Test %d\n", tc_num++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {-30, -1, 0, 30, 50, 60, 77};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }
}
