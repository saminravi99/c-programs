#include<stdio.h>

// Write a C program to accept two integers and check whether they are equal or not.

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a == b)
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}