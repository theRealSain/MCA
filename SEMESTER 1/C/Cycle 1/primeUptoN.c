#include <stdio.h>
int main()
{
	int i, n, factor, j;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Prime numbers upto %d: ", n);
	for(i=1; i<=n; i++)
	{
		factor = 0;
		for(j=1; j<=n; j++)
		{
			if(i%j == 0)
			factor++;
		}
		if(factor == 2)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
