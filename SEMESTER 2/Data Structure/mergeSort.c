#include <stdio.h>

void merge(int arr[], int l, int m, int r) 
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int arr1[n1], arr2[n2];

    for (i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        arr2[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) 
	{
        if (arr1[i] <= arr2[j]) 
		{
            arr[k] = arr1[i];
            i++;
        } 
		else 
		{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
	{
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) 
	{
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r) 
{
    if (l < r) 
	{
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
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

    mergeSort(arr, 0, n - 1);

    printf("sorted array: ");
    printArray(arr, n);

    return 0;
}