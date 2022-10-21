#include <stdio.h>
/**
 * There are three cards on the desk, each with a positive integer written on it. The integers on the cards are A, B, and C.You have chosen two cards and picked them up.Find the maximum possible sum of the integers written on the picked cards.

The range of the  A,B,C -> 1-100

>> Sample input -

3 4 5

6 6 6

99 99 98


>> Sample output -

9

12

198

*/

int main()
{
    int A, B, C;
    printf("Enter the number on 1st card: ");
    scanf("%d", &A);
    printf("Enter the number on 2nd card: ");
    scanf("%d", &B);
    printf("Enter the number on 3rd card: ");
    scanf("%d", &C);
    if (A > B && A > C)
    {
        if (B > C)
        {
            printf("The maximum possible sum of the integers written on the picked cards: %d\n", A + B);
        }
        else
        {
            printf("The maximum possible sum of the integers written on the picked cards: %d\n", A + C);
        }
    }
    else if (B > A && B > C)
    {
        if (A > C)
        {
            printf("The maximum possible sum of the integers written on the picked cards: %d\n", B + A);
        }
        else
        {
            printf("The maximum possible sum of the integers written on the picked cards: %d\n", B + C);
        }
    }
    else if (C > A && C > B)
    {
        if (A > B)
        {
            printf("The maximum possible sum of the integers written on the picked cards: %d\n", C + A);
        }
        else
        {
            printf("The maximum possible sum of the integers written on the picked cards: %d\n", C + B);
        }
    }
    else if (A == B && A > C)
    {
        printf("The maximum possible sum of the integers written on the picked cards: %d\n", A + B);
    }
    else if (A == C && A > B)
    {
        printf("The maximum possible sum of the integers written on the picked cards: %d\n", A + C);
    }
    else if (B == C && B > A)
    {
        printf("The maximum possible sum of the integers written on the picked cards: %d\n", B + C);
    }
    else if (A == B == C)
    {
        printf("The maximum possible sum of the integers written on the picked cards: %d\n", A + B);
    }
    return 0;
}