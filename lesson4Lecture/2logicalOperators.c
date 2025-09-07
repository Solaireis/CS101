#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x;
    printf("enter x:");
    scanf("%d",&x);
    if (1<= x && x<= 6){
        printf("dice value\n");
    }
    if (1< x || x > 6){
        printf("not dice value\n");
    }
    if (!(x%2==1)){
        printf("value is even\n");
    }
    if ((x%2==1)){
        printf("value is odd\n");
    }
    bool is_happy = true;
    for (int i=0 ; i < 2 ; i++){
        if (is_happy){
            printf("i am happy\n");
            is_happy = 0;
        } else {
            printf("i am sad");
        }

    }
    
}
