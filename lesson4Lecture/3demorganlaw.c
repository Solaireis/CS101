#include <stdio.h>

int main(void){

    // keep prompting the user until user enters a negative value
    int x=1;
    while (x>0){
        printf("enter n:");
        scanf("%d", &x);
    }
    printf("bye bye\n");
    return 0;
}