#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // code needed to generate different random numbers
    char ch = 'y';
    do {
        srand (time(0));
        int num1 = rand() % 100 + 1;
        int n;


        //num1 = 49;
        printf("Enter your guess(1 to 100)");
        scanf("%d", &n);
        int count = 1;

        while ( n != num1 ){
            if (n < num1){
                printf("Low! Try again\n");
            }
            if (n > num1){
                printf("High! Try again\n");
            }
            
            printf("Enter your guess(1 to 100)");
            scanf("%d", &n); // increment
            count++; // counter

        }
        printf("Congrats\n");
        printf("You guessed in %d attempts\n", count);

        printf("Do you want to play again (Y/y/N/n)?");
        scanf(" %c", &ch);
        if (ch == 'N' || ch == 'n'){
            printf("bye\n");
        } else if (ch == 'Y' || ch == 'y') {

        } else {
            printf("Invalid\n");
        }
    } while(ch == 'Y' || ch == 'y');


    return 0;
    
}
