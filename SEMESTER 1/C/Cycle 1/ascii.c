#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	int ascii = (int)ch;
	printf("ASCII Value: %d\n", ascii);
	return 0;
}
