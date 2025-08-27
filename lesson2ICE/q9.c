#include <stdio.h>

int main(void) {
    double x;
    printf("Enter the amount of montly sales ($):");
    scanf("%lf", &x);
    int commission = -1;
    if ( x < 10000){
        commission = 5;
    } else if ( x < 15000){
        commission = 10;
    } else if ( x < 18000){
        commission = 15;
    } else {
        commission = 18;
    }
    const int BASIC_MONTHLY_SALARY = 2000;
    double monthly;
    monthly = BASIC_MONTHLY_SALARY + ( x * commission /100);
    printf("Comission rate for the monthly sale of $%.2lf is %d%%\n", x, commission);
    printf("The monthly pay for the salesperson is $%.2lf\n", monthly);
    return 0;
}  