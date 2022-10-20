#include<stdio.h>

// Write a C program to check whether a given number is positive or negative.

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a > 0)
        printf("Positive\n");
    else
        printf("Negative\n");
    return 0;
}