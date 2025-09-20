#include <stdio.h>
#include <math.h>

int main(void) {    
    double p;
    printf("Enter Initial Deposit (P):");
    scanf("%lf", &p);

    double r;
    printf("Annual Interest Rate (In %%, r):");
    scanf("%lf", &r);

    double n;
    printf("Annual Compound Frequency (1 to 12, n):");
    scanf("%lf", &n);

    double t;
    printf("Num years (t):");
    scanf("%lf", &t); 

    double a = p * ( pow ( 1 + ((r / 100) / n ), n * t));
    printf("Amount after %d years is %.2lf\n", (int) t, a);

    return 0;
}