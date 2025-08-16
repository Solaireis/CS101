#include <stdio.h>


int main (void){
    int a = 0 ;
    while (a == 0){
        int x;
        int y;
        int z;

        printf("gimmie 3 unique numbers \n");
        
        scanf(" %d %d %d", &x, &y ,&z);

        if (x == y || x == z || z == y){
            printf(" Give me a unique value! \n");
        } else {
            printf("Sum of unique numbers: %d \n", (x + y + z) );
            a = 1;
        }
        
    }
    return 0;
}