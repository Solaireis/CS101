
#include <stdio.h>

int main(void){
    int n1=0;
    printf("Enter n1:");
    scanf("%d",&n1);

    int n2=0;
    printf("Enter n2:");
    scanf("%d",&n2);
    while((n1+n2)%3 != 0){
        printf("invalid!\n\n");
        printf("Enter n1:");
        scanf("%d",&n1);

        printf("Enter n2:");
        scanf("%d",&n2); 
    }
    if (n1 > n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    int i =n1;
    while (i <=n2) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}