#include<stdio.h>

// Write a program in C to accept a grade and declare the equivalent description
/*
Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F
*/

int main()
{
    char grade;
    //print possible grades
    printf("Possible grades are E, V, G, A, F\n");
    printf("Enter the grade: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'E':
        printf("Excellent\n");
        break;
    case 'V':
        printf("Very Good\n");
        break;
    case 'G':
        printf("Good\n");
        break;
    case 'A':
        printf("Average\n");
        break;
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }
    return 0;
}