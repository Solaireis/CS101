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

    const int SECS_PER_MIN = 60; // Variables are made to ensure that it is not tempered with and allows for easier scalability
    const int MINS_PER_HR = 60;
    const int SECONDS_PER_HR = SECS_PER_MIN * MINS_PER_HR; 

    //get the values of the needed variables h,m,s
    h = a/SECONDS_PER_HR; 
    m = (a % SECONDS_PER_HR) / SECS_PER_MIN; ; 
    s = (a % SECONDS_PER_HR) - (m * MINS_PER_HR); 
    /*
        old solution
        very inefficient way of obtaining minutes personnelly 
        it could be obtimized cleaner which is just a % seconds_per_hour
        // this gets us the number of hours from the division 

        h = a/SECONDS_PER_HR;  
        m = (a - h * SECONDS_PER_HR) / SECS_PER_MIN; 
        s = (a - h * SECONDS_PER_HR) - (m * MINS_PER_HR);
    */

    //Solve the problem
    printf("%d seconds is %.2d:%.2d:%.2d\n", a,h,m,s);
    return 0;
}