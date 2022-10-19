#include <stdio.h>

// write a c program to take two numbers from user and show whose is greater and if both are equal then show that both are equal

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is greater than %d\n", b, a);
    }
    else
    {
        printf("Both are equal\n");
    }
    return 0;
}