#include <stdio.h>
int main()
{
	int i, n;
	long fact=1;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Permission denied!");
	}
	else
	{
		for(i=1; i<=n; i++)
		{
			fact*=i;
		}
		printf("Factorial of %d is %ld\n", n, fact);
	}
}
