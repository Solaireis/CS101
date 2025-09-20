#include <stdio.h>

int main(void) {
     // initializes the values
    int n;
    int n0;
    int n1;
    int n2;
    int n3;
    int n4;


    // obtain value from users
    printf("Enter Number:");
    scanf("%d",&n);

    /*
        take last number, then remove the last number from the digits and then continue till final item 
    */ 
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
    
    // Print the final output
    printf("%d + %d + %d + %d + %d = %d\n" , n0 ,n1, n2, n3, n4, n0 + n1 + n2 + n3 + n4);
}
