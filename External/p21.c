#include<stdio.h>

// Write a program in C to read any day number in integer and display day name in the word.

int main()
{
    int day;
    //print possible days numbers
    printf("Possible days numbers are:\n");
    printf("Enter 1 for Monday\n");
    printf("Enter 2 for Tuesday\n");
    printf("Enter 3 for Wednesday\n");
    printf("Enter 4 for Thursday\n");
    printf("Enter 5 for Friday\n");
    printf("Enter 6 for Saturday\n");
    printf("Enter 7 for Sunday\n");
    printf("Enter the day number: ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("Monday\n");
    }
    else if (day == 2)
    {
        printf("Tuesday\n");
    }
    else if (day == 3)
    {
        printf("Wednesday\n");
    }
    else if (day == 4)
    {
        printf("Thursday\n");
    }
    else if (day == 5)
    {
        printf("Friday\n");
    }
    else if (day == 6)
    {
        printf("Saturday\n");
    }
    else if (day == 7)
    {
        printf("Sunday\n");
    }
    else
    {
        printf("Invalid day number\n");
    }
    return 0;
}