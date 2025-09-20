#include <stdio.h>

int main(void) {
    /*
        initilize value
    */
    double w;
    double h;
    double BMI;

    /*
        Obtain value from user
    */
    printf("Enter weight(kg):");
    scanf("%lf",&w);
    printf("Enter height(m):");
    scanf("%lf",&h);

    /*
        Complete the equation
    */
    BMI = w / (h * h);
    /*
        print the final value
    */
    printf("BMI is %lf\n",BMI);

    return 0;
}
