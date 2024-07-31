#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int start, int end) 
{
    int low = start - 1;
    int pivot = arr[end];
    for (int i = start; i <= end - 1; i++) 
    {
        if (arr[i] <= pivot) 
        {
            low++;
            swap(&arr[low], &arr[i]);
        }
    }
    swap(&arr[low + 1], &arr[end]);
    return (low + 1);
}


void quickSort(int arr[], int start, int end)
{
    if (start < end)
	{
	    int pi = partition(arr, start, end);
	    quickSort(arr, start, pi - 1);
	    quickSort(arr, pi + 1, end);
	}
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[100];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}