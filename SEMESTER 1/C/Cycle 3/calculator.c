#include <stdio.h>

int addition(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int subtraction(int a, int b)
{
	int c;
	c = a - b;
	return c;
}

int multiplication(int a, int b)
{
	int c;
	c = a * b;
	return c;
}

float division(int a, int b)
{
	float c;
	c = a / b;
	return c;
}

int main()
{
	int n, a, b;
	int sum=0, difference=0, product=0, result=0;
	float div=0;
	
	printf("SIMPLE CALCULATOR\n\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	
	printf("\nEnter the choice: ");
	scanf("%d", &n);
	
	switch(n)
	{
		case 1: printf("Enter 2 numbers: ");
			scanf("%d %d", &a, &b);
			sum = addition(a, b);
			printf("Result: %d\n", sum);
			break;
			
		case 2: printf("Enter 2 numbers: ");
			scanf("%d %d", &a, &b);
			difference = subtraction(a, b);
			printf("Result: %d\n", difference);
			break;
			
		case 3: printf("Enter 2 numbers: ");
			scanf("%d %d", &a, &b);
			product = multiplication(a, b);
			printf("Result: %d\n", product);
			break;
			
		case 4: printf("Enter 2 numbers: ");
			scanf("%d %d", &a, &b);
			div = division(a, b);
			printf("Result: %f\n", div);
			break;
	}
	
	
	
	
	
	return 0;
}
