#include <stdio.h>
#include <stdbool.h>

int main (void) {
    bool x = true;
    bool y= false;
    printf("%d\n",x);
    printf("%d\n",y); 
    
    int w = 3;
    printf("%d\n", w > 3);
    printf("%d\n", w < 3);
    printf("%d\n", w >= 3); // >= and not => it will create error
    printf("%d\n", w <= 3);
    printf("%d\n", w == 3); // = is for assignment while == is for whether are both the same in comparison
    printf("%d\n",w != 3); // compares if there equal or not

    int a = 3;
    bool b = a > 0;
    printf("%d\n", b);

    return 0;
}