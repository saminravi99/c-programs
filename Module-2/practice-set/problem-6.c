#include <stdio.h>
#include <string.h>

int main()
{
	// take input of a integer number with percentage sign at the end. The number should be of maximum 10 digits.
	char str[100];
	printf("Enter a integer number with percentage \n(The number should not be more than 10 digits): ");
	scanf("%s", str);

	// check if the string has started with a number and ends with a percentage sign at the end.

	if (str[0] >= '0' && str[0] <= '9' && str[strlen(str) - 1] == '%')
	{
		// check if the string has any alphabets or special characters in it. If it has then print "Invalid input" and return 0 otherwise print "Valid input" and return 0
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '_' || str[i] == '+' || str[i] == '=' || str[i] == '{' || str[i] == '}' || str[i] == '[' || str[i] == ']' || str[i] == ':' || str[i] == ';' || str[i] == '"' || str[i] == '\'' || str[i] == '<' || str[i] == '>' || str[i] == ',' || str[i] == '.' || str[i] == '?' || str[i] == '/')
			{
				printf("Invalid input. You have entered alphabets or special characters in the input or you might have entered decimal numbers. Please enter only digits and percentage sign at the end.\n");
				return 0;
			}
		}

		int i = 0;
		int number;
		while (str[i] != '%')
		{
			number = number * 10 + (str[i] - '0');
			/**
			 * The thing happening here is that we are converting the character to integer.
			 * For example, if the character is '5', then the integer value of '5' is 53.
			 * So, if we subtract '0' from '5', then we get 53 - 48 = 5.
			 * So, we are converting the character to integer.
			 */
			i++;
		}
		printf("\n");
		printf("The Percentage Value is: %s\n", str);
		printf("The number is: %d\n", number);
		return 0;
	}
	else
	{
		printf("Invalid Input. You have started the input with alphabets or special characters or you have not entered percentage sign at the end. Please enter only digits and percentage sign at the end.\n");
		return 0;
	}
}
