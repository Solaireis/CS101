#include <stdio.h>

int main(void) {
    double w;
    double h;
    double BMI;

    printf("Enter weight(kg):");
    scanf("%lf",&w);
    printf("Enter height(m):");
    scanf("%lf",&h);

    BMI = w / (h * h);
    printf("BMI is %lf\n",BMI);

    return 0;
}
