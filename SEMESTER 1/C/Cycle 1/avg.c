#include <stdio.h>
int main()
{
	int marks[50], i, n, sum=0;
	float avg;
	printf("Enter number of subjects: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter marks for subject %d: ", i+1);
		scanf("%d", &marks[i]);
	}
	
	printf("\nEntered Marks:\n");
	for(i=0; i<n; i++)
	{
		printf("Subject %d: %d\n", i+1, marks[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + marks[i];
	}
	
	printf("Sum of %d marks: %d\n", n, sum);
	
	avg = sum/n;
	printf("Average of %d marks: %f\n", n, avg);
	return 0;
}
