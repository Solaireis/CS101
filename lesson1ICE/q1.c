#include <stdio.h>

int main(void) {
    int a; // Initialises the variable A which is used for when n1 is referenced in scanf
    int b; // initialises the variable B which is used for when n2 is referenced in scanf
    int c; // initialises the variable c which is used for when n3 is referenced in scanf

    //part n1
    printf("Enter n1:"); // print statement to ask for a number
    scanf("%d", &a); // captures the pointer value after it has been entered by the user 

    //Part n2
    printf("Enter n2:"); //like wise the same,
    scanf("%d", &b);
    
    //part n3 
    printf("Enter n3:"); //likewise the same
    scanf("%d", &c); // note how &c is used, & symbol would allow the variable to access the pointer by scanf and takes that value as C

    printf("%d + %d + %d = %d\n", a,b,c,a+b+c); // it has to be in order before the submission, with a summation done to complete it

    return 0; //  i used return 0; for best practice it means exit code without any errors.
}
