#include <stdio.h>

int main(void){
    char code;
    printf("Enter code:");
    scanf("%c", &code);

    switch (code){
        case 'R':
            printf("Red\n");
            break;
        case 'G':
            printf("Green\n");
            break; 
        case 'B':
            printf("Blue\n");
            break; // you need to break else it would go all cases and print everything
        default:
            printf("invalide code\n");
    }
    switch (code){
        case 'R':
            printf("Red\n");
            //break;
        case 'G':
            printf("Green\n");
            //break; 
        case 'B':
            printf("Blue\n");
            //break; // you need to break else it would go all cases and print everything, also, it will only run all cases if it hits a true
        default:
            printf("invalide code\n");
    }
    return 0;
}