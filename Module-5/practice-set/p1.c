#include<stdio.h>

/**
 * Write a C program to take one positive integer N as input and print from 1 to N.

Sample Input: Sample Output:
5 -> 1 2 3 4 5
1 -> 1
*/

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}