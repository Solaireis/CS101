#include <stdio.h>

int main(void) {
    int a;
    int b;
    printf("Enter n1:");
    scanf("%d",&a);

    printf("Enter n2:");
    scanf("%d",&b);

    printf("%d + %d = %d\n", a,b, a+b);
    printf("%d * %d = %d\n", a,b, a*b);
    printf("%d / %d = %lf\n", a,b, (double)a/b);
    return 0;
}
