#include <stdio.h>

int main(void) {
    int c;
    int v;
    int w;
    printf("Enter capacity(mAh):");
    scanf("%d", &c);
    printf("Enter voltage(V):");
    scanf("%d", &v);
    /*
        float power = c/1000.0 * v
    */
    printf("rated power: %.1lf Wh\n", (double) c/1000 * v);
    return 0;
}
