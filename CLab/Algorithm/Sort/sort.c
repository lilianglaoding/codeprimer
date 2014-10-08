#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

void D_InsertSort(datatype *arr, int n)
{
    int i = 0, j = 0, k = 0;
    datatype tmp;
    for (i = 1; i < n; i++)
    {
	if (arr[i] < arr[i - 1])
	{
	    tmp = arr[i];
	    j = 0;
	    while (j < i && arr[i] > arr[j])
		j++;
	    for (k = i; k > j; k--)
		arr[k] = arr[k - 1];
	    arr[k] = tmp;
	}
    }
}

void D_InsertSort1(datatype *arr, int n)
{
    
}

void Arr_Print(datatype *arr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    datatype arr[8] = {7, 6, 5, 4, 3, 2, 1, 0};
    printf("\n---------before sorted---------\n");
    Arr_Print(arr, 8);
    D_InsertSort(arr, 8);
    printf("\n---------after sorted----------\n");
    Arr_Print(arr, 8);
    return 0;
}
