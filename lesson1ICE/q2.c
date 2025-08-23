#include <stdio.h>

int main(void) {
    int a;
    int b;
    /* 
        initialises the variables first, where a = n1, b = n2
    */

    /*
        This printf and scanf functions would take the user inputs as n1 and n2
    */
    printf("Enter n1:");
    scanf("%d",&a);

    printf("Enter n2:");
    scanf("%d",&b);

    /*
        The statement below does the printing of the summation, multiplication as well as quotient,
    */
    printf("%d + %d = %d\n", a,b, a+b); //prints out the summation
    printf("%d * %d = %d\n", a,b, a*b); //prints out the multiplication
    printf("%d / %d = %lf\n", a,b, (double)a/b); //prints out a floating point number if there are any decimal places
    /*
        double is needed to ensure that if the sum ends up with decimal 
        places it would not round down like how an interger would
    */
    return 0;
}
