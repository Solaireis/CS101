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
    if (BMI < 18.5){
        printf("You are considered underweight");
    } else if ( BMI < 25) {
        printf("You are considered normal");
    } else if ( BMI < 30) {
        printf("You are considered overweight");
    } else  {
        printf("You are considered obese");
    }

    /*
    Dont do this as it add unneeded complexity
    
    if (BMI < 18.5){
        printf("You are considered underweight");
    } else if ( BMI >= 18.5 && BMI < 25) {
        printf("You are considered normal");
    } else if ( BMI >= 25 && BMI < 30) {
        printf("You are considered overweight");
    } else  {
        printf("You are considered obese");
    }
        */
    return 0;
}