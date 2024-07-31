#include <stdio.h>
int main()
{
	int limit, i, sum=0;
	printf("Enter a limit: ");
	scanf("%d", &limit);
	for(i=1; i<=limit; i++)
	{
		sum = sum + i;
	}
	printf("Sum upto %d is %d\n", limit, sum);
	return 0;
}
