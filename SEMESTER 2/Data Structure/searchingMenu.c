#include <stdio.h>
#define MAX 5
int arr[50], key;

int linearSearch(int arr[], int key)
{
	int index = -1;	
	for(int i=0; i<MAX; i++)
	{
		if(arr[i] == key)
		{
			index = i;
		}
	}
	return index;
}

int bubbleSort(int arr[])
{
	for(int i=0; i<MAX-1; i++)
	{
		for(int j=0; j<MAX-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;		
			}
		}
	}
}

int binarySearch(int arr[], int key)
{
	int min = 0;
	int max = MAX - 1;
	int mid;
	
	while(min <= max)
	{
		mid = (min + max) / 2;
		
		if(arr[mid] == key)
		{
			return mid;
		}
		else if(arr[mid] < key)
		{
			min = mid + 1;
		}
		else
		{
			max = mid -1;
		}
	}
}

int main()
{
	printf("Enter array elements(SIZE: 5): ");
	for(int i=0; i<MAX; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nThe complete array: ");
	for(int i=0; i<MAX; i++)
	{
		printf("%d ", arr[i]);
	}		
	
	printf("\n\nEnter the item to search: ");
	scanf("%d", &key);
	
	printf("\n\nSelect a choice:\n");
	printf("1. Linear Search\n");
	printf("2. Binary Search\n");
	
	int ch, index;
	printf("Enter a choice: ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:
		{
			printf("\nAlgorithm: Linear Search\n");
			index = linearSearch(arr, key);
			if(index == -1)
			{
				printf("\nElement %d is not found in the array!", key);		
			}
			else
			{
				printf("Element %d is found at index %d!\n", key, index);
			}			
			break;
		}
		
		case 2:
		{
			bubbleSort(arr);
			printf("\nAlgorithm: Binary Search\n");
			index = binarySearch(arr, key);
			printf("Element %d is found at index %d!\n", key, index);
			break;
		}
	}
	return 0;
}