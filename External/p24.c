#include<stdio.h>
// Write a program in C to read any Month Number in integer and display the number of days for this month.

int main()
{
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    if (month == 1)
    {
        printf("January has 31 days");
    }
    else if (month == 2)
    {
        printf("February has 28 days");
    }
    else if (month == 3)
    {
        printf("March has 31 days");
    }
    else if (month == 4)
    {
        printf("April has 30 days");
    }
    else if (month == 5)
    {
        printf("May has 31 days");
    }
    else if (month == 6)
    {
        printf("June has 30 days");
    }
    else if (month == 7)
    {
        printf("July has 31 days");
    }
    else if (month == 8)
    {
        printf("August has 31 days");
    }
    else if (month == 9)
    {
        printf("September has 30 days");
    }
    else if (month == 10)
    {
        printf("October has 31 days");
    }
    else if (month == 11)
    {
        printf("November has 30 days");
    }
    else if (month == 12)
    {
        printf("December has 31 days");
    }
    else
    {
        printf("Invalid month number");
    }
    return 0;
}