#include<stdio.h>

// Write a C program to check whether a given number is even or odd.

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}