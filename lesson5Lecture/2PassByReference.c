#include <stdio.h>
// pass by reference vs pass by value
// always have function here first before 
void do_x(int x){
    x = 4; //another container containing X
   // pass by value , so why is the value different here
}
void do_y(int y[]){
    y[0] = 9; //another container containing X
    
    // why it changed because it refer to the address of the value, so this is a pass by reference
}
void read_y (const int y[]){
    printf("\n%d\n", y[0]);
}

int main(void){
    int x = 3;
    do_x(x);

    printf("%d\n", x);
    // my prediction is 3 bc no return call was done
    // passby value means copy over the value to the other side 
    int y[3]={3,4,5};
    do_y(y);
    for (int i= 0; i < 3 ; i++){
        printf("%d ", y[i]);
    }
    read_y(y);
    return 0;
}