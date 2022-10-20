#include<stdio.h>

// Write a C program to check whether an alphabet is a vowel or consonant.

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The alphabet is a vowel\n");
    }
    else
    {
        printf("The alphabet is a consonant\n");
    }
    return 0;
}