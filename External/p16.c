#include<stdio.h>

// Write a C program to check whether a character is an alphabet, digit or special character.

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("The character is an alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit\n");
    }
    else
    {
        printf("The character is a special character\n");
    }
    return 0;
}