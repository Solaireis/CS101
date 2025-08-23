#include <stdio.h>

int main(void) {
    /*
        initialise the values
    */
    int c;
    int v;
    int w;
    /*
        Obtain the values of Capacity and voltage
    */
    printf("Enter capacity(mAh):");
    scanf("%d", &c);
    printf("Enter voltage(V):");
    scanf("%d", &v);

    /*
        Solve the equation
        float power = c/1000.0 * v
    */
    w = (double) c/1000 * v; 

    /*
        print statement
    */
    printf("rated power: %.1lf Wh\n", w );
    return 0;
}
