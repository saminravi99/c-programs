#include <stdio.h>

// write a c program to take three numbers from user and show whose is greater and if both are equal then show that both are equal. If Two numbers are equal then say that two numbers are greater than the third number

int main()
{
    int a, b, c;
    printf("Enter 1st number a = ");
    scanf("%d", &a);
    printf("Enter 2nd number b = ");
    scanf("%d", &b);
    printf("Enter 3rd number c = ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is greater than b and c\n");
        printf("a = %d, b = %d, c = %d\n", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("b is greater than a and c\n");
        printf("a = %d, b = %d, c = %d\n", a, b, c);
    }
    else if (c > a && c > b)
    {
        printf("c is greater than a and b\n");
        printf("a = %d, b = %d, c = %d \n", a, b, c);
    }
    else if (a == b && a > c)
    {
        printf("a and b are equal and greater than c\n");
        printf("a = %d, b = %d, c = %d \n", a, b, c);
    }
    else if (a == c && a > b)
    {
        printf("a and c are equal and greater than b\n");
        printf("a = %d, c = %d, b = %d \n", a, c, b);
    }
    else if (b == c && b > a)
    {
        printf("b and c are equal and greater than a\n");
        printf("b = %d, c = %d, a = %d \n", b, c, a);
    }
    else
    {
        printf("All are equal\n");
        printf("a = %d, b = %d, c = %d \n", a, b, c);
    }
    return 0;
}