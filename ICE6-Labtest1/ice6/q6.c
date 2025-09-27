#include <stdio.h>
void print_pascal(int n) {

    int previous_array [10000] = {1}; // store the previous array
    int current_array[10000] ={0}; // store the current array
    //printf("1\n");
    for(int r=1; r<n+1; r++){ // builds the row
            for (int i = 1 ; i<n; i++){
                previous_array[i-1] = current_array [i-1];
                //printf("%d",previous_array[i-1]);
            }   

            // add the current array to the previous array
            for (int c=1; c<n+1; c++){ // builds the columns

                // do the new current array
                if (c == 1 || c == r){ // careful of using c=1 instead of c==1
                    //printf("1") //check positioning
                    current_array[c-1] = 1;
                
                } else if (  c < r) {
                    //printf("0 "); // check positioning
                    // add the values of the previous array to the current array 
                    //take the first two numbers of the array and add them together
                    current_array[c-1] = previous_array [c-2] + previous_array[c-1];

                }
                if (current_array[c-1]>0){
                    printf("%d ",current_array[c-1]);
                }
        
            }
        printf("\n");
        // add the current array to the previous array 
        
    }
}
int main(void) {
    printf("Test 1\n");
    printf("Expected:\n");
    printf("1 \n");
    printf("1 1\n"); 
    printf("1 2 1\n");
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("Actual:\n");
    print_pascal(5);
    printf("\n");
    
    printf("Test 2\n");
    printf("Expected:\n");
    printf("1\n");
    printf("1 1\n"); 
    printf("1 2 1\n"); 
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("1 5 10 10 5 1\n");
    printf("1 6 15 20 15 6 1\n");
    printf("1 7 21 35 35 21 7 1\n");
    printf("1 8 28 56 70 56 28 8 1\n");
    printf("1 9 36 84 126 126 84 36 9 1\n");
    printf("Actual:\n");
    print_pascal(10);
}
