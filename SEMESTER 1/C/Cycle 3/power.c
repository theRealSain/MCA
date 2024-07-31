#include <stdio.h>
#include <math.h>
int main()
{
	int n, p;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter power: ");
	scanf("%d", &p);
	double m;
	m = pow(n,p);
	printf("Power of %d is %.2lf\n", n, m); 
}
