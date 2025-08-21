#include <stdio.h>

int main(void) {
    int m;
    int f;

    printf("Enter num males:");
    scanf("%d",&m);
    printf("Enter num females:");
    scanf("%d",&f);

    printf("Percentage(Females)= %.1lf%%\n", (double)  f / (f + m) * 100);
    return 0;
}
