#include <stdio.h>

int main(void){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++){

        for (int j = 1 ; j <= n ; j++){
            printf("%d",j);
        }
        printf("\n12345\n");
    }
    return 0;
}
