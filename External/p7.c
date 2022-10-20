#include<stdio.h>

// Write a C program to accept the height of a person in centimeter and categorize the person according to their height.

int main()
{
    int height;
    printf("Enter your height in centimeters: ");
    scanf("%d", &height);
    if(height > 200)
        printf("Giant\n");
    else if(height > 150)
        printf("Average\n");
    else
        printf("Dwarf\n");
    return 0;
}