#include <stdio.h>

// take a non-negative integer from user and show grade according to the following table
// 80-100 A+
// 70-79 A
// 60-69 A-
// 50-59 B
// 40-49 C
// 33-39 D
// 0-32 F

int main()
{
    int a;
    printf("Enter Your Marks: ");
    scanf("%d", &a);
    if (a > 100 || a < 0)
    {
        printf("Invalid number\n");
    }
    else if (a >= 80 && a <=100)
    {
        printf("Your marks is %d and your grade is A+\n", a);
    }
    else if (a >= 70 && a <= 79)
    {
        printf("Your marks is %d and your grade is A\n", a);
    }
    else if (a >= 60 && a <= 69)
    {
        printf("Your marks is %d and your grade is A-\n", a);
    }
    else if (a >= 50 && a <= 59)
    {
        printf("Your marks is %d and your grade is B\n", a);
    }
    else if (a >= 40 && a <= 49)
    {
        printf("Your marks is %d and your grade is C\n", a);
    }
    else if (a >= 33 && a <=39)
    {
        printf("Your marks is %d and your grade is D\n", a);
    }
    else
    {
        printf("Your marks is %d and your grade is F\n", a);
    }
    return 0;
}