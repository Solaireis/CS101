#include <stdio.h>

int main(void) {

    int num1 = 2;
    int num2 = 5;
    int num3 = 8;
    // is there a way to have one container to compartmentise all the values
    // int array[3] ;
    int array[3] = {2,5,8};
    printf("%d",array);
    /*
        Cannot initialise array as this
        int array[3];
        array = {2,5,8};
        It wouldnt work

        or
        int array[3];
        array[] = {2,5,8};

        reason is bc its looking for an compartment
        The only way to add values to an array is to do a for loop, assignment like that can only be done in python.
    */
    int array2[3] = {2,5,8,4}; //will create an error
}