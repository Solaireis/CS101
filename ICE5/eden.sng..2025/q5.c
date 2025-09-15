#include <stdio.h>
char get_grade (int grade){
    if (grade > 100){
        return 'I';
    }
    if (grade >= 90 && grade <= 100){
        return 'A';
    } else if (grade >= 80 ){
        return 'B';
    } else if (grade >= 70 ){
        return 'C';
    } else if (grade >= 50 ){
        return 'D';
    } else if (grade >= 0 && grade < 50) {
        return 'F';
    } else {
        return 'I';
    }
}

int main(void){
    {
        printf("Test 1\n");
        char result = get_grade(95);
        printf("Expected:A\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 2\n");
        char result = get_grade(80);
        printf("Expected:B\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 3\n");
        char result = get_grade(71);
        printf("Expected:C\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 4\n");
        char result = get_grade(67);
        printf("Expected:D\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 5\n");
        char result = get_grade(57);
        printf("Expected:D\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 6\n");
        char result = get_grade(47);
        printf("Expected:F\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 7: Check for invalid values\n");
        char result = get_grade(101);
        printf("Expected:I\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 8: Check for invalid values\n");
        char result = get_grade(-11);
        printf("Expected:I\n");
        printf("Actual  :%c\n\n", result);
    }
}