#include <stdio.h>
int main(void){
    char response = 'N';
    // do while 1 or more
    // while loop 0 or more
    // for loop is always definite 
    
    do {
        printf("Do you love me? Y/N\n");
        scanf(" %c", &response); // blank space is intentional
    } while (response != 'Y');
    printf("thank you!\n");
}
