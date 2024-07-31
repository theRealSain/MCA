#include <stdio.h>
int main()
{
	int num1, num2, temp;
	printf("Enter Num1: ");
	scanf("%d", &num1);
	printf("Enter Num2: ");
	scanf("%d", &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Num1 = %d\n", num1);
	printf("Num2 = %d\n", num2);
	return 0;
}
