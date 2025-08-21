#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    printf("Enter n1:");
    scanf("%d", &a);

    printf("Enter n2:");
    scanf("%d", &b);
    
    printf("Enter n3:");
    scanf("%d", &c); 

    printf("%d + %d + %d = %d\n", a,b,c,a+b+c);

    return 0;
}
