#include<stdio.h>
// Write a program in C to read any Month Number in integer and display the number of days for this month.

int main()
{
    int month;
    printf("Enter 1 for January\n");
    printf("Enter 2 for February\n");
    printf("Enter 3 for March\n");
    printf("Enter 4 for April\n");
    printf("Enter 5 for May\n");
    printf("Enter 6 for June\n");
    printf("Enter 7 for July\n");
    printf("Enter 8 for August\n");
    printf("Enter 9 for September\n");
    printf("Enter 10 for October\n");
    printf("Enter 11 for November\n");
    printf("Enter 12 for December\n");
    printf("Enter the month number: ");
    scanf("%d", &month);
    if (month == 1)
    {
        printf("January has 31 days\n");
    }
    else if (month == 2)
    {
        printf("February has 28 days\n");
    }
    else if (month == 3)
    {
        printf("March has 31 days\n");
    }
    else if (month == 4)
    {
        printf("April has 30 days\n");
    }
    else if (month == 5)
    {
        printf("May has 31 days\n");
    }
    else if (month == 6)
    {
        printf("June has 30 days\n");
    }
    else if (month == 7)
    {
        printf("July has 31 days\n");
    }
    else if (month == 8)
    {
        printf("August has 31 days\n");
    }
    else if (month == 9)
    {
        printf("September has 30 days\n");
    }
    else if (month == 10)
    {
        printf("October has 31 days\n");
    }
    else if (month == 11)
    {
        printf("November has 30 days\n");
    }
    else if (month == 12)
    {
        printf("December has 31 days\n");
    }
    else
    {
        printf("Invalid month number\n");
    }
    return 0;
}