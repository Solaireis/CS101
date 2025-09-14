#include <stdio.h>
// able to define a function
// understand the flow of control when a function is invoked

void print_fruits(){
    printf("orange\n"); 
    printf("apple\n");
    printf("orange\n");
}
int main(void){
    printf("c is so fun\n");
    print_fruits(); // notice how this prints the lines as follows
    printf("---\n");
    print_fruits();
    printf("---\n"); 
}