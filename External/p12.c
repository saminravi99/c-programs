#include <stdio.h>

// Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division

int main()
{
    int roll_no;
    char name[20];
    float marks1, marks2, marks3, total, percentage;
    printf("Enter the roll number: ");
    scanf("%d", &roll_no);
    printf("Enter the name: ");
    scanf("%s", name);
    printf("Enter the marks of the first subject: ");
    scanf("%f", &marks1);
    printf("Enter the marks of the second subject: ");
    scanf("%f", &marks2);
    printf("Enter the marks of the third subject: ");
    scanf("%f", &marks3);
    total = marks1 + marks2 + marks3;
    percentage = total / 3;
    printf("Student Name: %s\n", name);
    printf("Roll No: %d\n", roll_no);
    printf("Marks in Subject 1: %.2f\n", marks1);
    printf("Marks in Subject 2: %.2f\n", marks2);
    printf("Marks in Subject 3: %.2f\n", marks3);
    printf("The total marks is %.2f and the percentage is %.2f%%", total, percentage);
    // check if the given marks are greater than 100 or less than 0
    if (marks1 > 100 || marks2 > 100 || marks3 > 100 || marks1 < 0 || marks2 < 0 || marks3 < 0)
    {
        printf("The marks cannot be greater than 100 or less than 0\n");
    }
    else if (percentage >= 60 && percentage <= 100)
    {
        printf(" and %s has secured first division\n", name);
    }
    else if (percentage >= 50 && percentage <= 59)
    {
        printf(" and %s has secured second division\n", name);
    }
    else if (percentage >= 33 && percentage <= 49)
    {
        printf(" and %s has secured third division\n", name);
    }
    else
    {
        printf(" and %s has failed\n", name);
    }

    return 0;
}