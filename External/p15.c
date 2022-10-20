#include<stdio.h>

// Write a C program to check whether a triangle can be formed by the given value for the angles.

int main()
{
    int angle1, angle2, angle3;
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);
    if (angle1 + angle2 + angle3 == 180)
    {
        printf("The triangle can be formed\n");
    }
    else
    {
        printf("The triangle cannot be formed\n");
    }
    return 0;
}