#include <stdio.h>

int main(void){
    int x = 2;
    printf("|%d|\n",x); 
    printf("|%5d|\n",x); //%5d Less than 5 character then padded from the left
    printf("|%-5d|\n",x); // less than 5 character than it is padded from the right
    printf("|%.5d|\n",x); // this prints integer if less than 5 digits then extra 0s will be added on the left 
    printf("|%-.5d|\n",x); // it doesnt matter if its negative or positive

    double y = 3.1415;
    printf("|%5.2lf|\n",y); // 5 character rounded to 2 dp padded on the left 
    printf("|%-5.2lf|\n",y); // 5 character rounded to 2dp padded on the right

    return 0;
}