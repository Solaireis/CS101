#include <stdio.h>

int main(void) {
    int x = 0;
    printf("N\tN^2\tN^3\n");
    printf("%d\t%d\t%d\t\n", x, x * x, x * x * x); //0 
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //1
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //2
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //3
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //4 
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //5
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //6
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //7 
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //8
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //9
    printf("%d\t%d\t%d\t\n", ++x, x * x, x * x * x); //10
}

