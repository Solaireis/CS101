#include <stdio.h>

int main(void){
    char ch;
    printf("Enter letter:");
    scanf("%c",&ch);

    while ((ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')){
        if ( ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ||
            ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'  )
        printf("Enter letter:");
        scanf(" %c",&ch); // reason why you need a space is because the enter key would be read in the char scanf
    }
    printf("bye bye");
    return 0;
}