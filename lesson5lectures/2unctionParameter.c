#include <stdio.h>

int f(int x){
    return x * 2;
}
double fahrenheit_to_celsius( double x){
    return (x - 32) * (5.0 / 9.0);
}

int main(void){

    f(5); // returns and thrown back to garbage bin
    printf("%d\n",f(3));
    printf("%d\n",f(6));
    printf("%d\n",f(198));
    printf("%.2lf\n",fahrenheit_to_celsius(99)); 

    return 0;
}