#include <stdio.h>

// c program that take non-negative integer from user and show whether it is even or odd

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    // check if the number is negative
    if (a < 0)
    {
        printf("The number is negative\n");
    }
    else if (a == 0)
    {
        printf("The number is 0\n");
    }
    else if (a % 2 == 0)
    {
        printf("Your number is %d and %d is an even number\n", a, a);
    }
    else
    {
        printf("Your number is %d and %d is an odd number\n", a, a);
    }
    return 0;
}