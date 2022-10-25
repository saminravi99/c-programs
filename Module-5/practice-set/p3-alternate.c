#include <stdio.h>

/**
 * Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

Sample Input: Sample Output:
10 -> 2 4 6 8 10
7 ->  2 4 6
*/

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}