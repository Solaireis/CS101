#include <stdio.h>

int main(void) {
    /*
        initilize value
    */
    int m;
    int f;
    /*
        Obtain value from user
    */
    printf("Enter num males:");
    scanf("%d",&m);
    printf("Enter num females:");
    scanf("%d",&f);

    /*
        Calculate the final percentage value of females in the cohort 
    */
    printf("Percentage(Females)= %.1lf%%\n", (double)  f / (f + m) * 100);
    return 0;
}
