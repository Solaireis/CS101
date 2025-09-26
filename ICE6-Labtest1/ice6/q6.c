#include <stdio.h>
void print_pascal(int n) {

    int previous_array [10000] = {1};
    int current_array[10000] ={0};
    //printf("1\n");
    for(int r=1; r<n; r++){
        for (int c=1; c<n; c++){
            if (c== 1 || c==r){
                printf("1 "); + previous_array[c-1];
                printf("%d ",to_print);
            }
        }
        printf("\n");
    }
}
int main(void) {
    printf("Test 1\n");
    printf("Expected:\n");
    printf("1 \n");
    printf("1 1\n"); 
    printf("1 2 1\n");
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("Actual:\n");
    print_pascal(5);
    printf("\n");
    
    printf("Test 2\n");
    printf("Expected:\n");
    printf("1\n");
    printf("1 1\n"); 
    printf("1 2 1\n"); 
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("1 5 10 10 5 1\n");
    printf("1 6 15 20 15 6 1\n");
    printf("1 7 21 35 35 21 7 1\n");
    printf("1 8 28 56 70 56 28 8 1\n");
    printf("1 9 36 84 126 126 84 36 9 1\n");
    printf("Actual:\n");
    print_pascal(10);
}
