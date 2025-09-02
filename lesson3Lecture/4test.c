#include <stdio.h>

int main(void){

    // loops
    for (int i = 0 ; i < 3 ; i++){
        printf("%d\n",i);
    }
    //Infinite Zero case 1 (Standard Compiler)
    for (int i = 0 ; i <3;){
        printf("%d\n",i);
    }
    //Infinite Zero case 2 (VSC Compiled ver)
    for (int i = 0 ; i < 3;){
        printf("%d\n",i);
        i++;
        i--;
    }
    //Infinite Zero case 3 (VSC Compiled ver)
    for (int i = 0 ; i < 3;){
        i++;
        i--;
    }
    // Debugging skills, if your program freezed, make sure to control c / ^ C
    


    return 0;
}
