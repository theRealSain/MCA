#include <stdio.h>

void insertionSort(int arr[], int n) 
{
    for (int j = 1; j < n; j++) 
	{
        int x = arr[j];
        int index = j - 1;

        while (index >= 0 && arr[index] > x) 
		{
            arr[index + 1] = arr[index];
            index -= 1;
        }
        arr[index + 1] = x;
    }
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    insertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}