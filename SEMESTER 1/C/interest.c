#include <stdio.h>
int main()
{
	float p, r, si;
	int n;
	printf("Enter P: ");
	scanf("%f", &p);
	
	printf("Enter N: ");
	scanf("%d", &n);
	
	printf("Enter R: ");
	scanf("%f", &r);
	
	si = (p*n*r)/100.0;
	
	printf("Simple Interest: %f", si);
}
