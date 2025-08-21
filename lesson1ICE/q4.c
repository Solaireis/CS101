#include <stdio.h>

int main(void) {
    // initialise variables
    int a; //input
    int h; //hour
    int m; //minute
    int s; //second

    //get input
    printf("Enter time in seconds:");
    scanf("%d",&a);

    const int SECS_PER_MIN = 60;
    const int MINS_PER_HR = 60;
    const int SECONDS_PER_HR = SECS_PER_MIN * MINS_PER_HR;

    //get the values of the needed variables
    h = a/SECONDS_PER_HR;
    m = (a - h * SECONDS_PER_HR) / SECS_PER_MIN;
    s = (a - h * SECONDS_PER_HR) - (m * MINS_PER_HR);

    //Solve the problem
    printf("%d seconds is %.2d:%.2d:%.2d\n", a,h,m,s);
}