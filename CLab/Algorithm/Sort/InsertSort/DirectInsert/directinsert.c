#include <stdio.h>
#include <stdlib.h>

#include "directinsert.h"

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
    int i, j;
    datatype tmp;
    for (i = 1; i < n; i++)
    {
	if (arr[i] < arr[i - 1])
	{
	    tmp = arr[i];
	    j = i;
	    while (j >= 0 && arr[j - 1] > tmp)
	    {
		arr[j] = arr[j - 1];
		j--;
	    }
	    arr[j] = tmp;
	}
    }
}

void D_InsertSort2(datatype *arr, int n)
{
    int i, j;
    int tmp;
    for (i = 1; i < n; i++)
    {
	if (arr[i] < arr[i - 1])
	{
	    tmp = arr[i];
	    j = i - 1;
	    while (j >= 0 && arr[j] > tmp)
	    {
		arr[j + 1] = arr[j];
		j--;
	    }
	    arr[j + 1] = tmp;
	}
    }
}

void Bi_InsertSort(datatype *arr, int n)
{
    int i, j;
    int low, high, mid;
    datatype tmp;
    for (i = 1; i < n; i++)
    {
	if (arr[i] < arr[i - 1])
	{
	    tmp = arr[i];
	    low = 0, high = i - 1;
	    while (low <= high)
	    {
		mid = (low + high) / 2;
		if (arr[mid] < arr[i])
		    low = mid + 1;
		else
		    high = mid - 1;
	    }
	    for (j = i - 1; j >= high + 1; j--)
		arr[j + 1] = arr[j];
	    arr[j + 1] = tmp;
	}
    }
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
    Bi_InsertSort(arr, 8);
    printf("\n---------after sorted----------\n");
    Arr_Print(arr, 8);
    return 0;
}
