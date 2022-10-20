#include<stdio.h>

// Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.

int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    if(a >= 18)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");
    return 0;
}