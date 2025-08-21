#include <stdio.h>

int main(void) {
    int n;
    int n0;
    int n1;
    int n2;
    int n3;
    int n4;
    printf("Enter Number:");
    scanf("%d",&n);

    n4 = n % 10;
    n = n /10;

    n3 = n % 10;
    n = n / 10;

    n2 = n % 10;
    n = n /10;

    n1 = n % 10;
    n = n / 10;

    n0 = n % 10;
    n = n / 10;


    printf("%d + %d + %d + %d + %d = %d\n" , n0 ,n1, n2, n3, n4, n0 + n1 + n2 + n3 + n4);
}
