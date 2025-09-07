#include <stdio.h>

int main(void){
    for (int i= 0; i< 5 ; i++){
        printf("hello\n");
    }
    int i = 0;
    while ( i < 5){
        printf("hello\n");
        i++;
    }
    int x = 5;
    // x --> 5,6,7,8,9 incremental change
    while (x<10){
        printf("small\n");
        x++;
    }
    // any forloop can become a while loop

}