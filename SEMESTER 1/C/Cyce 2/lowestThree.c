#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a < b && a < c)
		printf("%d is lower!\n", a);
	else if(b < a && b < c)
		printf("%d is lower!\n", b);
	else
		printf("%d is lower!\n", c);
	return 0;
}
