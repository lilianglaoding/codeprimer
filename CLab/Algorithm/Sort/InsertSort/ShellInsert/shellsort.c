#include <stdio.h>
#include <stdlib.h>

#include "shellsort.h"

void Print(datatype *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
}

void ShellInsert(datatype *arr, int n, int dk)
{
    int i, j;
    datatype temp;
    for (i = dk; i < n; i = i + dk)
    {
	temp = arr[i];
	if (arr[i] < arr[i - dk])
	{
	    for (j = i - dk; j >= 0 && temp < arr[j]; j = j - dk)
		arr[j + dk] = arr[j];
	    arr[j + dk] = temp;
	}
    }
}

void ShellSort(datatype * arr, int n)
{
    int d;
    for (d = 5; d > 0; d--)
    ShellInsert(arr, n, d);
}

int main()
{
    int arr[14] = {39, 80, 76, 41, 13, 29, 50, 78, 30, 11, 100, 7, 41, 86};
    int arr1[14] = {14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("----------------------before sorted----------------------\n");
    Print(arr1, 14);
    ShellSort(arr1, 14);
    printf("----------------------after sorted-----------------------\n");
    Print(arr1, 14);
    return 0;
}
