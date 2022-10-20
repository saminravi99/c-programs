#include <stdio.h>

// You have got X marks in a test. The teacher can give you Y marks extra. Write a program to find the maximum marks you can get and check if the bonus marks makes your mark 100

int main()
{
    int x, y;
    printf("Enter your marks: ");
    scanf("%d", &x);
    printf("Ask your teacher to give bonus marks: ");
    scanf("%d", &y);
    if (x > 100 || x < 0)
    {
        printf("Invalid number\n");
    }
    else if (x + y < 100)
    {
        printf("Sorry, you can't get 100 marks\n");
        printf("Your marks: %d\n", x);
        printf("Bonus marks: %d\n", y);
        printf("Total marks: %d\n", x + y);
    }
    else if (x + y == 100)
    {
        printf("Congratulations, you got 100 marks\n");
        printf("Your marks: %d\n", x);
        printf("Bonus marks: %d\n", y);
        printf("Total marks: %d\n", x + y);
    }
    else
    {
        if (x + y > 100)
        {
            printf("Congratulations! you have got more than 100 marks\n");
            printf("Your marks: %d\n", x);
            printf("Bonus marks: %d\n", y);
            printf("Total marks: %d\n", x + y);
        }
    }

    return 0;
}