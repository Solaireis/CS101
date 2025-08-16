#include<stdio.h> // Library used for this program

int main(void){
    int x;
    int y;
    int z;
    x = 3;
    y = 2;
    z = x / y ;
    printf("Values of the following variables are: \n x: %d\n y: %d\n z being x divided by y which is: %d \n", x,y,z);
    printf("Values of the following variables are: x / y is %d \n", (x/y));
    printf("\n");
    
    double a;
    double b;
    double c;
    a = 3;
    b = 2;
    c = a / b;

    printf("Values of the following variables are: \n a: %lf\n b:%lf\n c being a divided by b which is: %lf \n", a,b,c);
    printf("Values of the following variables are: a / b is %lf \n", (a/b));
    
    return 0;


}
/* 
    there is indeed a difference between double and int due to the bits at the end of the double value when referenced. 
    long is %ld
    double is %lf
    int is %d
    when print f
*/