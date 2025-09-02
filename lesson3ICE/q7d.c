#include <stdio.h>

int main(void) { 

    int n;
    printf("Enter n:");
    scanf("%d", &n);

    for (int r = 1; r <= n ; r++){ // dont change this line
        for (int c = 1; c <= n ; c++){ // dont change this line
            if (c == n + 1 - r) { 

                
                printf("%c", 'A' + c - 1);
            } else {
                printf(" "); 
            }
            
        }
        printf("\n");
    }
    

}
