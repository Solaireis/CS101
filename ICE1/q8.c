#include <stdio.h>

int main(void) {
    int n;
    int n0;
    int n1;
    int n2;
    int n3;
    int n4;
    //initializes the values & get users input
    printf("Enter Number:");
    scanf("%d",&n);


    n0 = n / 10000; // gets the 5th digits

    n1 = n % 10000; //gets the 4th digit
    n1 = n1 / 1000; // removes all the reminder

    n2 = n % 1000; // gets the 3rd digit
    n2 = n2 / 100; //removes all the reminder

    n3 = n % 100; //gets the 2nd digit
    n3 = n3 / 10; //removes all the variable

    n4 = n % 10; //gets the 1st digit

    //print statement
    printf("%d + %d + %d + %d + %d = %d\n" , n0 ,n1, n2, n3, n4, n0 + n1 + n2 + n3 + n4);
}
