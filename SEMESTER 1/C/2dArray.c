#include <stdio.h>
int main()
{
	int n, m, arr[50][50], i, j;
	printf("Enter number of rows: ");
	scanf("%d", &n);
	
	printf("Enter number of columns: ");
	scanf("%d", &m);
	
	for(i=0; i<n; i++)
	{
		printf("\nEnter elements for Row %d: ", i+1);
		for(j=0; j<m; j++)
		{	
			printf("\n\tEnter elements for Column %d: ", j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{	
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
