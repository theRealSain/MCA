#include <stdio.h>
int main()
{
	float c, f;
	printf("Enter Temperature in Farenheit: ");
	scanf("%f", &f);
	c=(f-32)*5/9;
 	printf("Temperature in Celsius: %.2f\n",c);
	return 0;
}
