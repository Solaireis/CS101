#include <stdio.h>

int main(void){
    int n;
    printf("Enter integer:");
    scanf("%d",&n);

    while ( n > 0){
        
        int original = n;
        int reverse = 0;
        int temp_reverse = 0;
        int temp_n = 0;
        temp_n = n;
        while ( temp_n > 0) {
            temp_reverse = n % 10;
            if (reverse > 0){
                reverse *= 10;
            }
            reverse += temp_reverse;
            temp_n = n / 10;
        }
        if (original == reverse){
            printf("palindrome");
        } else {
            printf("not palindrome");
        }
        printf("Enter integer:");
        scanf("%d",&n); 



    }

    return 0;
}