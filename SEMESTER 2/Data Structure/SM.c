#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key)
{
	int min = 0, max = n - 1;
	
	while(min <= max)
	{
		int mid = min + (max - min) / 2;
		
		if(arr[mid] == key)
		{
			return mid;
		}
		if(key < arr[mid])
		{
			max = mid - 1;
		}
		else
		{
			min = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int n, arr[100], key;
	printf("Enter size of array: ");
	scanf("%d", &n);
	printf("Enter array elements: ");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	bubbleSort(arr, n);
	printf("Sorted array elements: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\nEnter element to search: ");
	scanf("%d", &key);
	
	int index = binarySearch(arr, n, key);
	
	if(index == -1)
	{
		printf("\nNot found\n");
	}
	else
	{
		printf("\nFound at %d\n", index);
	}
}















