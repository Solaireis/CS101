#include <stdio.h>
#include <stdbool.h>

#define SIZE 3 // dont repeat yourself in programming 

int main(void){
    // VLA, Array to be initialised , Gotcha
    int x; // container to store in value // never do int x; and int x=3 in the following line
    x = 3; //Important to always initialise a value
    int y[SIZE]; // initialises an array with 3 spaces

    for (int i=0; i < SIZE; i++){
        y[i]=i;
        printf("%d\n",y[i]);
    }

    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int w[n]; //initialises a variable length array with W having N length
    for (int i=0; i < n; i++){
        w[i]=i;
        printf("%d\n",w[i]);
    } 

    // variable length array you cannot do int x[n] = {0} , at run time you need a loop to do so 
    int a[3]={1,2,3};
    int b[3]={1,2,3};
    bool is_same = true; 
    for (int i = 0 ; i< 3; i++){
        if(a[i] != b[i]){
            is_same = false;
        }
    }
    if (is_same){
        printf("Same values\n");
    }

    // lets compare an array which arent the same and see whats the output
    int c[3]={1,2,4};

    is_same = true; 
    for (int i = 0 ; i< 3; i++){
        if(a[i] != c[i]){
            is_same = false;
        }
    }
    if (is_same){
        printf("Same values\n");
    } else {
        printf("Not values\n");
    }
    return 0;
}