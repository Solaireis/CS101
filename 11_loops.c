#include <stdio.h>
void hundredCount(void) {
    for (int n = 0; n < 101; n += 2){
        printf("%d", n);
    }
}


int main(void){
    hundredCount();
    return 0;
}