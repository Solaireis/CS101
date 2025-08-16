#include <stdio.h>
#include <math.h>

double areaOfTriange (double x,double y){
    return 0.5 * x * y;
}

int main (void){

    double length = 5;
    double height = 5;
    double y = areaOfTriange(length, height);
    printf(" Area of Triangle is %lf", y);
    return 0;

}

