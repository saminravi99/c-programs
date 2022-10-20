#include<stdio.h>

// Write a C program to find whether a given year is a leap year or not.

int main()
{
    int a;
    printf("Enter a year: ");
    scanf("%d", &a);
    if(a % 4 == 0)
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
    return 0;
}