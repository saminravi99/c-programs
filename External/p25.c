#include<stdio.h>

// Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.

int main()
{
    int choice;
    printf("Enter 1 to compute the area of a rectangle\n");
    printf("Enter 2 to compute the area of a square\n");
    printf("Enter 3 to compute the area of a triangle\n");
    printf("Enter 4 to compute the area of a circle\n");
    printf("Enter the choice of the shape whose area you want to calculate: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        float length, breadth;
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the breadth of the rectangle: ");
        scanf("%f", &breadth);
        printf("The area of the rectangle is %.2f\n", length * breadth);
    }
    else if (choice == 2)
    {
        float side;
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        printf("The area of the square is %.2f\n", side * side);
    }
    else if (choice == 3)
    {
        float base, height;
        printf("Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("Enter the height of the triangle: ");
        scanf("%f", &height);
        printf("The area of the triangle is %.2f\n", 0.5 * base * height);
    }
    else if (choice == 4)
    {
        float radius;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        printf("The area of the circle is %.2f\n", 3.14 * radius * radius);
    }
    else
    {
        printf("Invalid choice");
    }
    return 0;
}