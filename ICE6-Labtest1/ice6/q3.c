#include <stdio.h>
void display_ordinal_number (int n){
    if (n == 0){
        printf("0th");
    }
    if (n<0){
        printf("%d",n);
    }
    // check if ordinal has a 11th, 12th 13th inside
    if (n>10){
        int temp_tenth = 0;
        temp_tenth = n % 100; 
        switch(temp_tenth){
            case 11:
            case 12:
            case 13:
                printf("%dth",n);
                return; // if it matches with any end the function and return
            default: 
                break;
        }
    }
    //check if the ordinal is 1st 2nd or 3third
    if (n>0){
        int temp = 0;
        temp = n % 10;
        //printf("%d",temp);
        if (temp == 1){
            printf("%dst",n);
        } else if (temp == 2){
            printf("%dnd",n);
        } else if (temp == 3){
            printf("%drd",n);
        } else {
            printf("%dth",n);
        }
        
    }
}

int main(void) {
    printf("Test 1\n");
    printf("Expected:0th\n");
    printf("Actual  :");
    display_ordinal_number(0);
    printf("\n");

    printf("Test 2\n");
    printf("Expected:1st\n");
    printf("Actual  :");
    display_ordinal_number(1);
    printf("\n");

    printf("Test 3\n");
    printf("Expected:2nd\n");
    printf("Actual  :");
    display_ordinal_number(2);
    printf("\n");

    printf("Test 4\n");
    printf("Expected:3rd\n");
    printf("Actual  :");
    display_ordinal_number(3);
    printf("\n");

    printf("Test 5\n");
    printf("Expected:4th\n");
    printf("Actual  :");
    display_ordinal_number(4);
    printf("\n");

    printf("Test 6\n");
    printf("Expected:11th\n");
    printf("Actual  :");
    display_ordinal_number(11);
    printf("\n");

    printf("Test 7\n");
    printf("Expected:12th\n");
    printf("Actual  :");
    display_ordinal_number(12);
    printf("\n");

    printf("Test 8\n");
    printf("Expected:13th\n");
    printf("Actual  :");
    display_ordinal_number(13);
    printf("\n");

    printf("Test 9\n");
    printf("Expected:21st\n");
    printf("Actual  :");
    display_ordinal_number(21);
    printf("\n");

    printf("Test 10\n");
    printf("Expected:111th\n");
    printf("Actual  :");
    display_ordinal_number(111);
    printf("\n");

    printf("Test 11\n");
    printf("Expected:121st\n");
    printf("Actual  :");
    display_ordinal_number(121);
    printf("\n");

    printf("Test 12\n");
    printf("Expected:-1\n");
    printf("Actual  :");
    display_ordinal_number(-1);
    printf("\n");


// print('Test 13')
// print('Expected:-1')
// print('Actual  :' + get_ordinal_number(-1))
// print()
    
}
