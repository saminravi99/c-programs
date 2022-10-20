#include<stdio.h>

// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

int main()
{
    int side1, side2, side3;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &side3);
    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is equilateral\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The triangle is isosceles\n");
    }
    else
    {
        printf("The triangle is scalene\n");
    }
    return 0;
}