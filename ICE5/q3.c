#include <stdio.h>

void print_even_numbers (int x){
    for ( int i = 1; i<= x; i++){
        if (i == x && i % 2 == 0){
            printf("{%d}",i);
        } else if (i % 2 == 0){
            printf("{%d}",i);
            printf(" ");
        }
    

    }
    
}

int main(void) {
    printf("Test 1\n");
    printf("Expected:[{2}]\n");
    printf("Actual  :[");
    print_even_numbers(2);
    printf("]\n\n");

    printf("Test 2\n");
    printf("Expected:[]\n");
    printf("Actual  :[");
    print_even_numbers(1);
    printf("]\n\n");

    printf("Test 3\n");
    printf("Expected:[]\n");
    printf("Actual  :[");
    print_even_numbers(-3);
    printf("]\n\n");

    printf("Test 4\n");
    printf("Expected:[{2} {4} {6} {8} {10} {12}]\n");
    printf("Actual  :[");
    print_even_numbers(13);
    printf("]\n\n");

    printf("Test 4\n");
    printf("Expected:[{2} {4} {6} {8} {10} {12} {14}]\n");
    printf("Actual  :[");
    print_even_numbers(14);
    printf("]\n\n");

}