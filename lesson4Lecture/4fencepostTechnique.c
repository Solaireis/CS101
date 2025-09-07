#include <stdio.h>

int main(void){
    int n = 1;
    int sum=0;
    while (n>0){
        printf("enter n");
        scanf("%d",&n);
        printf("enter -1 to end on next step");
        if (n>0){
            sum += n;
        }
    }
    while (n>0){
        sum += n;
        printf("enter n");
        scanf("%d",&n);
        printf("enter -1 to end on next step");

    }
}