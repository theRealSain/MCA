#include <stdio.h>
int main()
{
	int n;
	float p, r, si;
	printf("Enter principle amount: ");
	scanf("%f", &p);
	
	printf("Enter number of years: ");
	scanf("%d", &n);
	
	printf("Enter rate of interest: ");
	scanf("%f", &r);
	
	si = (p * n * r)/100;
	
	printf("Simple interest: %.2f\n", si);	
}
