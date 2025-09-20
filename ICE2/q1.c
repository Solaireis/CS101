#include <stdio.h>

int main(void){
    int n1;
    printf("Enter n1:");
    scanf("%d" , &n1);
    //printf("%d\n",n1); test if correct

    int n2;
    printf("Enter n2:");
    scanf("%d" , &n2);
    //printf("%d\n",n2);  test if correct

    printf(n1 == 0 || n2 % n1 == 0  ? "%d is a factor of %d\n" : "%d is not a factor of %d\n" , n1 , n2);
    return 0;

    /*
    This fails because the order of the OR statemnt matters, since mathetimatically you cannot divide a integer w 0.
    
    printf( n2 % n1 == 0 || n1 == 0 ? "%d is a factor of %d\n" : "%d is not a factor of %d\n" , n1 , n2);
    return 0;
    
    */
    
    /*
    if ( n2 % n1 == 0) {
        printf("%d is a factor of %d\n" , n1 , n2));
    } else {
        printf("%d is not a factor of %d\n, n1 , n2)");
    }
    return 0;
    */
}
