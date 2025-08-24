#include <stdio.h>

int main (void){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if (n % 3 == 0 && n % 4 == 0){
        printf("%d is a multiple of 3 & 4\n",n);
    }  else if ( n % 4 == 0 ){
        printf("%d is a multiple of 4\n",n);
    }  else if (n % 3 == 0) {
        printf("%d is a multiple of 3\n",n); 
    }
    else {
        printf("%d is not multiple of 3\n",n);
    }
        
    return 0;
}