#include <stdio.h>

int main(void){
    
    int n;
    printf("Enter integer:");
    scanf("%d",&n);
    while (n != -1 ){
        int original = n;
        int reverse = 0;

        // does reversal 
        while ( n > 0){
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;
            printf("%d\n", reverse);
        }

        //checks if palindrome
        if (original == reverse){
            printf("palindrome\n");
        } else {
            printf("not palindrome\n");
        }


        //prompt for input
        printf("Enter integer:");
        scanf("%d",&n); 

    }
    
    return 0;
}