#include <stdio.h>

int main (void){
    char gender;
    printf("Enter your gender (M or F) :");
    scanf("%c",&gender);
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    switch (gender){
        case 'f':
        case 'F':
            if (age < 25){
                printf("Your premium is $30.60\n");
            } else if ( age < 30){
                printf("Your premium is $50.70\n");
            } else if (age < 65) {
                printf("Your premium is $99.80\n");
            } else {
                printf("Your premium is $120.30\n");
            }
            break;
        case 'm':
        case 'M':
            if (age < 25){
                printf("Your premium is $20.50\n");
            } else if ( age < 30){
                printf("Your premium is $30.40\n");
            } else if (age < 65) {
                printf("Your premium is $60.70\n");
            } else {
                printf("Your premium is $70.70\n");
            }
            break;
        default:
            printf("Enter an valid option");
            break;
    }
    return 0;
}

/*
Try running these to understand whats the output
if ( 1 < x < 10)
if (1 < x && x < 10)
if (x > 1 && x < 10)
*/