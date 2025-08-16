#include <stdio.h>
#include <math.h> // new function

/* functions must exist above main*/
double areaOfTriange (double x,double y){
    return 0.5 * x * y;
}

double roundUp (double x){
    return ceil(x);
}

int main (void){

    double length = 5;
    double height = 5;
    double y = areaOfTriange(length, height);
    printf(" Area of Triangle is %lf \n", y);

    /* Lets round up to the nearest value */
    int x = roundUp(y);
    printf(" Area of Triangle rounded to nearest integer and its always rounded up is: %d \n", x);

    /* if theres space after \n it will show as a % to indicate a space exist and no newline is there */
    return 0;

}
