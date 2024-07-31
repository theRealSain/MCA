#include <stdio.h>
#include <math.h>
int main()
{
	float p, r, ci;
	int n;
	
	printf("Enter principle amount: ");
	scanf("%f", &p);
	
	printf("Enter rate of interest: ");
	scanf("%f", &r);
	
	printf("Enter number of years: ");
	scanf("%d", &n);
	
	ci = p * pow((1 + r/100),n);
	
	printf("Compount Interest: %.2f\n", ci);
}
