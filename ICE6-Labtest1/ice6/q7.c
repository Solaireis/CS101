#include <stdio.h>


void bubble_sort (int arr[] , int n){
    for (int j=1; j < n ; j++ ){ // number of pass
        for ( int i = 0 ; i < (n-1) ; i++){ // does the sorting 
            if (arr[i] > arr [i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
    }
    }
    
}
void print_array(int values[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main(void) {
    {
        int values[] = {7, 3, 6, 5, 1};
        bubble_sort(values, sizeof(values)/sizeof(int));
        printf("Expected:1 3 5 6 7\n");
        printf("Actual  :");
        print_array(values, sizeof(values)/sizeof(int));
        printf("\n");
    }

    {
        int values[] = {2, 3, 5, 6, 7};
        bubble_sort(values, sizeof(values)/sizeof(int));
        printf("Expected:2 3 5 6 7\n");
        printf("Actual  :");
        print_array(values, sizeof(values)/sizeof(int));
        printf("\n");
    }

    {
        int values[] = {1};
        bubble_sort(values, sizeof(values)/sizeof(int));
        printf("Expected:1\n");
        printf("Actual  :");
        print_array(values, sizeof(values)/sizeof(int));
        printf("\n");
    }
}