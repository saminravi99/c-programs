#include<stdio.h>

/**
 * Write a C program to take one integer N as input and print from 1 to N.

Sample Input: Sample Output:
5  -> 1 2 3 4 5
-5  -> 1 0 -1 -2 -3 -4 -5
*/

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //check if n is positive or negative 
    // if n is positive then start from 1 and increment by 1
    // if n is negative then start from 1 and decrement by 1
    if(n > 0)
    {
        for(int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(int i = 1; i >= n; i--)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}