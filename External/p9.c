#include<stdio.h>

// Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

int main()
{
    int x, y;
    printf("Enter the coordinates of the point: ");
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0)
        printf("The point lies in the first quadrant\n");
    else if(x < 0 && y > 0)
        printf("The point lies in the second quadrant\n");
    else if(x < 0 && y < 0)
        printf("The point lies in the third quadrant\n");
    else
        printf("The point lies in the fourth quadrant\n");
    return 0;
}