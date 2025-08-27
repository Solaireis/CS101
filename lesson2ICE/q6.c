#include <stdio.h>
int main (void) {
    int a;
    printf("Enter side a:");
    scanf("%d", &a);

    int b;
    printf("Enter side b:");
    scanf("%d", &b);

    int c;
    printf("Enter side c:");
    scanf("%d", &c);

    if ( (a + b) > c && (b+c) > a && (a+c) > b){
        printf("It is a valid triangle.");
    } else {
        printf("It is a invalid triangle.");
    }

    /*
    mistake made here was use || instead of &&

    if ( (a + b) > c || (b+c) > a || (a+c) > b){
        printf("It is a valid triangle.");
    } else {
        printf("It is a invalid triangle.");
    }
    
    This will fail the test case
    */


    return 0;
}