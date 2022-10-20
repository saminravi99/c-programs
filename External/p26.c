#include<stdio.h>

// Write a program in C which is a Menu-Driven Program to perform a simple calculation. Add, Subtract, Multiply, Divide, Modulus.

int main()
{
    int choice;
    printf("Enter 1 to add two numbers\n");
    printf("Enter 2 to subtract two numbers\n");
    printf("Enter 3 to multiply two numbers\n");
    printf("Enter 4 to divide two numbers\n");
    printf("Enter 5 to find the modulus of two numbers\n");
    printf("Enter the choice of the operation you want to perform: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        float num1, num2;
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("The sum of the two numbers is %.2f\n", num1 + num2);
    }
    else if (choice == 2)
    {
        float num1, num2;
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("The difference of the two numbers is %.2f\n", num1 - num2);
    }
    else if (choice == 3)
    {
        float num1, num2;
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("The product of the two numbers is %.2f\n", num1 * num2);
    }
    else if (choice == 4)
    {
        float num1, num2;
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("The quotient of the two numbers is %.2f\n", num1 / num2);
    }
    else if (choice == 5)
    {
        int num1, num2;
        printf("The numbers must be 2 non-negative integers\n");
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        printf("The modulus/remainder of the two numbers is %d\n", num1 % num2);
    }
    else
    {
        printf("Invalid choice");
    }
    return 0;
}