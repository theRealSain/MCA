#include <stdio.h>
int main()
{
	float r, area, perimeter, pi = 3.1415;
	printf("Enter radius of circle: ");
	scanf("%f", &r);
	area = pi * r * r;
	perimeter = 2 * pi * r;
	printf("Area: %f\nPerimeter: %f\n", area, perimeter);
	return 0;
}
