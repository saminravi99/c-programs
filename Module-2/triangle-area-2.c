
#include<stdio.h>
#include<math.h>

int main()
{
	//area of triangle given 3 sides of a triangle
	float a,b,c,s, area;

	printf("Enter Value for a:");
	scanf("%f", &a);
	printf("Enter Value for b:");
	scanf("%f", &b);
	printf("Enter Value for c:");
	scanf("%f", &c);

	s = (a+b+c)/3;

	area = sqrt(s * (s-a) * (s-b) * (s-c));
	printf("Area of triangle: %f \n", area);
	return 0;
}
