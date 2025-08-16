#include <stdio.h>
#include <math.h>

double area (double x, double y){
    return 0.5 * x * y;
}
void results(int a){
    printf("The area of triangle is %d \n", a);
}

int roundUP (double x){
    return (int) ceil(x);
}
int main (void){
    int b;
    int h;
    printf("Give me Base and Height of triangle seperated by space: \n");
    scanf("%d %d", &b , &h);
    double a = area(b,h);
    a = roundUP(a);

    results(a);
    return 0;
}