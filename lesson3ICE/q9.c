#include <stdio.h>
#include <math.h>
int main (void){
    int n1;
    printf("Enter count of ascending sequence:");
    scanf("%d", &n1);

    int n2;
    printf("Enter count of ascending sequence:");
    scanf("%d", &n2);


    int sum = 0; // mistake here was not initialising any value to the variable

    for ( int i = n2 ; i <= n1 ; i++){
        sum = sum * 10 + i;
        n2++;
        printf("%d ", sum);
    }



    return 0;
}
    
