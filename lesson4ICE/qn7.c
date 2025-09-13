#include <stdio.h>
#include <stdbool.h>

int main (void){
    int start;
    printf("Enter start:");
    scanf("%d",&start);

    int end;
    printf("Enter end:");
    scanf("%d",&end);
    
    while (start <= end){

        bool is_prime = true;
        // check if number is a prime number
        int i = 2;
        while (i < start){
            if ( start % i == 0){
                is_prime = false;
                break;
            }
            i++;
        }
        if (is_prime){
            printf("%d ",start);
        }
        
        //counter
        start++;
    }
    printf("\n");
}