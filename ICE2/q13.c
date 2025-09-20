#include <stdio.h>

int main(void){
    double income;
    printf("Enter personal income:");
    scanf("%lf", &income); 

    // dont put \n in the scanning it will create an error, do ctrl C to kill the program
    const double THOUSAND = 1000;
    double income_tax_payables = -1;
    double gross_tax_payables = -1;
    double net_tax_payables = -1;
    const double TWO_HUNDRED_INCOME_BRACKET = 200 * THOUSAND;
    const double HUNDRED_SIXTY_INCOME_BRACKET = 160 * THOUSAND;
    const double HUNDRED_TWENTY_INCOME_BRACKET = 120 * THOUSAND;
    const double EIGHTY_INCOME_BRACKET = 80 * THOUSAND;
    const double FOURTY_INCOME_BRACKET = 40 * THOUSAND;
    const double THIRTY_INCOME_BRACKET = 30 * THOUSAND;
    const double TWENTY_INCOME_BRACKET = 20 * THOUSAND;
    const double BELOW_TWENTY_INCOME_BRACKET = 0 * THOUSAND;

    if ( income > (TWO_HUNDRED_INCOME_BRACKET)) {
        income_tax_payables = income - TWO_HUNDRED_INCOME_BRACKET;
        income_tax_payables *= 0.20;
        gross_tax_payables = 21150;
    
    }   else if ( income > (HUNDRED_SIXTY_INCOME_BRACKET)) {

        income_tax_payables = income - HUNDRED_SIXTY_INCOME_BRACKET;
        income_tax_payables *= 0.18;
        gross_tax_payables = 13950;
    
    } else if ( income > (HUNDRED_TWENTY_INCOME_BRACKET)) {

        income_tax_payables = income - HUNDRED_TWENTY_INCOME_BRACKET;
        income_tax_payables *= 0.15;
        gross_tax_payables = 7950;
    
    } else if ( income > (EIGHTY_INCOME_BRACKET)) {

        income_tax_payables = income - EIGHTY_INCOME_BRACKET;
        income_tax_payables *= 0.115;
        gross_tax_payables = 3350;
    
    } else if ( income > (FOURTY_INCOME_BRACKET)) {

        income_tax_payables = income - FOURTY_INCOME_BRACKET;
        income_tax_payables *= 0.07;
        gross_tax_payables = 550;
    
    } else if ( income > (THIRTY_INCOME_BRACKET)) {

        income_tax_payables = income - THIRTY_INCOME_BRACKET;
        income_tax_payables *= 0.035;
        gross_tax_payables = 200;
    
    } else if ( income > (TWENTY_INCOME_BRACKET)) {

        income_tax_payables = income - TWENTY_INCOME_BRACKET;
        income_tax_payables *= 0.02;
        gross_tax_payables = 0;
    
    } else {
        income_tax_payables = income - BELOW_TWENTY_INCOME_BRACKET;
        income_tax_payables *= 0;
        gross_tax_payables = 0;
    }


    net_tax_payables = gross_tax_payables + income_tax_payables;
    printf("Tax payable: %.2lf\n",net_tax_payables);
    return 0;
}