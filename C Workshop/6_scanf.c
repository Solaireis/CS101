#include <stdio.h>

double area (double x, double y){
    return 0.5 * x * y;
}
void results(double a){
    printf("The area of triangle is %lf \n", a);
}

int main (void){
    int b;
    int h;
    printf("Give me Base and Height of triangle seperated by space: \n");
    scanf("%d %d", &b , &h);
    double a = area(b,h);
    results(a);
    return 0;
}