#include <stdio.h>
int main()
{
	int d1, d2, d3;
	printf("Enter degree of first polynomial: ");
	scanf("%d", &d1);
	printf("Enter degree of second polynomial: ");
	scanf("%d", &d2);
	
	int poly1[d1+1], poly2[d2+1];
	
	printf("\nEnter coefficients for polynomial 1:\n");
	for(int i=0; i<d1+1; i++)
	{
		printf("Enter coefficient for X^%d: ", i);
		scanf("%d", &poly1[i]);
	}
	
	printf("\nEnter coefficients for polynomial 2:\n");
	for(int i=0; i<d2+1; i++)
	{
		printf("Enter coefficient for X^%d: ", i);
		scanf("%d", &poly2[i]);
	}
	
	printf("\nPolynomial 1: ");
	for(int i=d1; i>0; i--)
	{
		printf("%dx^%d + ", poly1[i], i);
	}
	printf("%d", poly1[0]);
	
	printf("\nPolynomial 2: ");
	for(int i=d2; i>0; i--)
	{
		printf("%dx^%d + ", poly2[i], i);
	}
	printf("%d", poly2[0]);
	
	int cd;
	if(d1 > d2)
	{
		d3 = d1;
		cd = d2;
	}
	else if(d2 == d1)
	{
		d3 = d1;
		cd = d1;
	}
	else
	{
		d3 = d2;
		cd = d1;
	}
	
	int result[d3];
	
	int i;
	for(i=0; i<cd+1; i++)
	{
		result[i] = poly1[i] + poly2[i];
	}
	
	int j;
	if(d3 == d1)
	{
		for(j=i; j<d3+1; j++)
		{
			result[j] = poly1[j];
		}
	}
	else
	{
		for(j=i; j<d3+1; j++)
		{
			result[j] = poly2[j];
		}
	}
	
	printf("\nPolynomial n: ");
	for(int i=d3; i>0; i--)
	{
		printf("%dx^%d + ", result[i], i);
	}
	printf("%d", result[0]);
	
	
		
	printf("\n");
	return 0;
}
