
#include<stdio.h>

int main()
{
	//Input for float, int, char
	// char takes a single character
	float a;
	int b;
	char c;
	printf("Enter character for c");
	scanf("%c", &c);
	printf("Enter float for a:");
	scanf("%f", &a);
	printf("Enter integer for b:");
	scanf("%d", &b);
	printf("a=%f \n", a);
	printf("b=%d \n", b);
	printf("c=%c \n", c);
	return 0;
}
