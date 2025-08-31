#include <stdio.h>

int main(void){
    
    for (int i = 0 ; i < 3 ; i++){
        printf("Hello\n");
    }
    // {} Represents scope, when the variable would live or exist. 
    // Moment the variable reaches the } end of the brace it would be evaluatd

    // If you want the loop to be evaluated
    int b; 
    for (int b = 0 ; b < 3 ; b++){
        printf("Hello\n");
    } 
    // always declare variable in smallest scope possible to ensure that you dont use an old variable
    
    // The I Value must move closer and closer to the evaluation to be false. 
   // Theres a way to do a infinite loop

    /*
    
    Infinite Loops because the condition would never be fulfilled
    for (int i = 0 ; i < 3 ; i--){
            printf("Hello\n");
        }
    
    
    */
    
    /*
    
    i++ and ++i are the same for loops increments
    or you can do i+=1 to increment by 1 or
    i += 2 to increment by 2 
    i += 99 to increment by 99



    for (int i = 0 ; i >= 0 ; i--){
            printf("Hello\n");
        }
    Once the evaluation is false it would trigger the loop
    */
    
    
    

}