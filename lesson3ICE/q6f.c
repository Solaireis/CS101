#include <stdio.h>
#include <math.h>

int main(void) { 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int sum = 0;
    int multiplier = 0;
    for (int i = 1; i <= n ; i++){
        multiplier = i * pow ( 10 , i-1);
        sum += multiplier;
        printf("%d\n", sum );
        

    }
    return 0;
}
/*
    Error is pow( 10, i);
    
*/