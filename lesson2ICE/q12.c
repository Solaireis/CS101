#include <stdio.h>

int main (void){
    double amount_dollars;
    printf("enter amount:");
    scanf("%lf",&amount_dollars);
    const double HALF_CENTS =  0.005;
    amount_dollars += HALF_CENTS;
    /*
        This ensures that decimal places numbers will not give cases of 5.1 cents as 5.09 cents
    
    */
    const int CENTS = 100;
    int amount_cents;
    amount_cents = amount_dollars * CENTS;

    const int DOLLAR = 100;
    const int FIFTYCENTS = 50;

    int number_1_dollar = amount_cents / 100;
    amount_cents = amount_cents % 100;
    
    int number_50_cents = amount_cents / 50;
    amount_cents = amount_cents % 50;

    int number_20_cents = amount_cents / 20;
    amount_cents = amount_cents % 20;

    int number_10_cents = amount_cents / 10;
    amount_cents = amount_cents % 10;

    int number_5_cents = amount_cents / 5;
    amount_cents = amount_cents % 5;

    int number_1_cents = amount_cents / 1;
    amount_cents = amount_cents % 1;

    if ( number_1_dollar > 0){
        printf("number of 1$: %d\n", number_1_dollar);
    }

    if ( number_50_cents > 0){
        printf("number of 50c: %d\n", number_50_cents);
    }

    if ( number_20_cents > 0){
        printf("number of 20c: %d\n", number_20_cents);
    }

    if ( number_10_cents > 0){
        printf("number of 10c: %d\n", number_10_cents);
    }

    if ( number_5_cents > 0){
        printf("number of 5c: %d\n", number_5_cents);
    }
    if ( number_1_cents > 0){
        printf("number of 1c: %d\n", number_1_cents);
    }
    return 0;
}