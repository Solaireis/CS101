#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // code needed to generate different random numbers
    srand (time(0));

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;   
    int num3 = rand() % 10 + 1;

    printf("Press <enter> key to start");
    // to pause and wait for user input
    // grab the "enter" character and discard it
    getchar();

    printf("*****************\n");
    printf("** %d ** %d ** %d**\n", num1, num2, num3);
    printf("*****************\n");

    // complete your code below
    /*
    if (num1 == num2 == num3){
        printf("**Jackpot!!**\n");
    } else if ( num1 == num2 || num1 == num3 || num2 == num3){
        printf("**2 of a kind!**\n");
    } else {
        printf("**Try again!**\n");
    }

    The reason why num1 == num2 == num3 doesnt work its because its as if
    num1 = num2 --> 1 or 0 depending false or true

    which is shown as 1 == num3
    or
    which is shown as 0 == num3
    therefore false

    */
    if (num1 == num2 && num2 == num3){
        printf("** Jackpot!! **\n");
    } else if ( num1 == num2 || num1 == num3 || num2 == num3){
        printf("** 2 of a kind **\n");
    } else {
        printf("** Try again! **\n");
    }
    /*
        becareful of the syntax just because its running doesnt mean it is correct
    */
    
}
