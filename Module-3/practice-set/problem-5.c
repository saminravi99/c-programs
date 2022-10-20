#include<stdio.h>

// write a c program to take 3 non-negative integers from users and show if it forms a valid triangle or not

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            printf("It forms a valid triangle\n");
            printf("The sides are a = %d, b = %d, c = %d\n", a, b, c);
        }
        else
        {
            printf("It does not form a valid triangle\n");
        }
    }
    else
    {
        printf("Invalid number\n");
    }
    return 0;
}