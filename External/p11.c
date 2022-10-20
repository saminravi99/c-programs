#include <stdio.h>
#include <math.h>

// Write a C program to calculate the root of a Quadratic Equation.

int main()
{
    float a, b, c, root1, root2, discriminant;
    printf("Enter the first coefficient of the quadratic equation: ");
    scanf("%f", &a);
    printf("Enter the second coefficient of the quadratic equation: ");
    scanf("%f", &b);
    printf("Enter the third coefficient of the quadratic equation: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are root1 = %.2f and root2 = %.2f\n", root1, root2);

        // %.2f is used to print the value of a float variable upto 2 decimal places.
        // diff between %f and %lf is that %f is used for float and %lf is used for double.
        // diff between %f and %.2f is that %f is used to print the value of a float variable upto 6 decimal places and %.2f is used to print the value of a float variable upto 2 decimal places.
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("The roots are equal and the value of the root is %.2f\n", root1);
    }
    else
    // this means the discriminant is less than 0. So, the two roots are imaginary.
    {
        root1 = root2 = -b / (2 * a);
        float imaginary = sqrt(-discriminant) / (2 * a);
        printf("The quadratic equation has two imaginary roots: root1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n", root1, imaginary, root2, imaginary);
    }
    return 0;
}