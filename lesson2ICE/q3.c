#include <stdio.h>

int main(void) {
    int n1;
    printf("Enter n1:");
    scanf("%d" , &n1);

    int n2;
    printf("Enter n2:");
    scanf("%d" , &n2);

    int n3;
    printf("Enter n3:");
    scanf("%d" , &n3);

    int smallest = n1;
    int biggest = n2;

    if (n1 > n2){
        biggest = n1;
        smallest = n2;
    }
    if (n3 > biggest){
        biggest = n3;
    } else if (n3 < smallest){
        smallest = n3;
    }


    printf("Smallest is %d\n", smallest);
    printf("Biggest is %d\n", biggest );

    return 0;
}