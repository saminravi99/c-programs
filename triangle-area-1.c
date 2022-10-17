

#include<stdio.h>
#include<math.h>

int main()
{
	//area of triangle given 3 sides of a triangle
	float base,height, area;

	printf("Enter Value for base of triangle:");
	scanf("%f", &base);
	printf("Enter Value for height of triangle:");
	scanf("%f", &height);


	const float c = (1.0/2.0);
	area = c * base * height;
	printf("Area of triangle: %f \n", area);
	return 0;
}
