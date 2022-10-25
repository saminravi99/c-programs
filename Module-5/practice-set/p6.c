#include<stdio.h>

/**
 * Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours
format). You need to print from N to M, if you need to start from beginning again, you can do that. See the
sample input output for more clarification.
Sample Input: Sample Output:
5 12 -> 5 6 7 8 9 10 11 12
21 7 -> 21 22 23 0 1 2 3 4 5 6 7
*/

int main()
{
    int n, m;
    printf("Enter 1st number: ");
    scanf("%d", &n);
    printf("Enter 2nd number: ");
    scanf("%d", &m);
    for (int i = n; i != m; i++)
    {
        if (i == 24)
        {
            i = 0;
        }
        printf("%d ", i);
    }
    printf("%d ", m);
    printf("\n");
    return 0;
}