#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num < 0)
		printf("Negative number!\n");
	else if(num > 0)
		printf("Positive number!\n");
	else
		printf("Number is zero!\n");
	return 0;
}
