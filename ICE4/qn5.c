#include <stdio.h>

int main(void){
    char ch;
    printf("Enter letter:");
    scanf("%c",&ch);

    while ((ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')){
        switch (ch){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e': 
            case 'i':
            case 'o':
            case 'u':
                printf("vowel\n");
                break;
            default:
                printf("consonant\n");
                break;
        }
        printf("Enter letter:");
        scanf(" %c",&ch); // reason why you need a space is because the enter key would be read in the char scanf
    }
    printf("bye bye");
    return 0;
}