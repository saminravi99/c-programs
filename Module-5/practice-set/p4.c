#include <stdio.h>

/**
 * Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible
by M.

Sample Input: Sample Output:
10 3-> 3 6 9
15 4->  4 8 12
*/

int main()
{
    int n, m;
    printf("Enter 1st number: ");
    scanf("%d", &n);
    printf("Enter 2nd number: ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}