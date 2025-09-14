#include <stdio.h>
void do_y(int x){
    x += 1; 
    printf("%d\n",x);
}
//Must define do Y first else it will flag an error

void do_x(int x){
    //seperate pool of memory set aside for x
    x += 1;
    printf("%d\n",x);
    do_y(x); // it will generate an error
    printf("%d\n",x);
    
}

int main(void){ //invocation starts from main method
    int x = 3;
    do_x(x);
    printf("%d\n",x); 
    //reason why its three its because you didnt return anything back . 
    // It only does a value reference.



    return 0;
}