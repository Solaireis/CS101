#include <stdio.h>

int main (void){

    int m;
    printf("Enter a month as a number:");
    scanf("%d", &m);
    switch (m){
        case 2:
            printf("There are 28 days in this month\n");
            break;

        /*
            months with 31 days
        */
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("There are 31 days in this month\n");
            break;

        /*
            Months with 30 days
        */
        case 4:
        case 6:
        case 9:
        case 11:
            printf("There are 30 days in this month");
            break;
        default:
            printf("Enter a number between 1 and 12 only.\n");
            break;
        /* 
            It doesnt matter where the case/default would be placed, however as long as theres no break it will continue printing
        */
    }
    /*
        Switch statements cannot write if and else 
    */



    /*
    
    switch (m){
        case 2:
            printf("There are 28 days in this month\n");


            months with 31 days

        case 1:
            printf("There are 31 days in this month\n");
            break;
        case 3:
            printf("There are 31 days in this month\n");
            break;
        case 5:
            printf("There are 31 days in this month\n");
            break;
        case 7:
            printf("There are 31 days in this month\n");
            break;
        case 8:
            printf("There are 31 days in this month\n");
            break;
        case 10:
            printf("There are 31 days in this month\n");
            break;
        case 12:
            printf("There are 31 days in this month\n");
            break;


            Months with 30 days

        case 4:
            printf("There are 30 days in this month");
            break;
        case 6:
            printf("There are 30 days in this month");
            break;
        case 9:
            printf("There are 30 days in this month");
            break;
        case 11:
            printf("There are 30 days in this month");
            break;
        default:
            printf("Enter a number between 1 and 12 only.\n");
            break;

            It doesnt matter where the case/default would be placed, however as long as theres no break it will continue printing

    }
    
    
    */
    
    return 0;
}