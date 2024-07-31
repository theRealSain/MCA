#include <stdio.h>
int main()
{
	int n, temp, m, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	temp = n;
	while(n>0)
	{
		m = n % 10;
		sum = sum + m;
		n=n/10;
	}
	printf("Sum: %d\n",sum);
}
