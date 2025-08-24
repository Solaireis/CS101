#include <stdio.h>

int main(void){
    int score;
    printf("Enter score:");
    scanf("%d", &score);

    char status;
    if (score >= 50 ){
        status = 'P';
    }  else {
        status = 'F';
    }
    printf("%c\n",status);
    char status2;
    status2 = score >= 50 ? 'P' : 'F' ;  
    /*

    Basically it does the above, so ? indicates its a ternary operator
    and p & f dictates the if and else

    */

    printf("%c\n", status2);

    printf("%c\n",score >= 50 ? 'P' : 'F' );
    return 0;
}