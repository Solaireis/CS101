#include <stdio.h>

int main(void) {
    int x = 0; // initialises the first variable we let x = n
    printf("N\tN^2\tN^3\n"); // print first statement
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //0 Complete the statement within one line and multiple it
    ++x; // do a precrement to the x value 
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //1 repeat for the remaining 9 rows.
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //2
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //3
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //4 
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //5
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //6
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //7 
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //8
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //9
    ++x;
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //10

    return 0;
}

