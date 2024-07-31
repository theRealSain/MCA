#include <stdio.h>
int swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("First number: %d\nSecond number: %d", a, b);
}

int main()
{
	int x, y;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);
	//function call
	swap(x,y);
	return 0;
}
