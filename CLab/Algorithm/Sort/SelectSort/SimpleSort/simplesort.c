#include <stdio.h>
#include <stdlib.h>

#include "simplesort.h"

void Simple_Sort(datatype *arr, int n)
{
    int i, j, k;
    datatype min, temp;;
    for (i = 0; i < n - 1; i++)
    {
	min = arr[i];
	k = i;
	j = i + 1;
	while (j < n && arr[j] <= min)
	{
	    min = arr[j];
	    k = j;
	    j++;
	}
	if (k != i)
	{
	    temp = arr[i];
	    arr[i] = arr[k];
	    arr[k] = temp;
	}
    }
}

void Print(datatype *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
   	printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    datatype arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    datatype arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("----------------before sorted-------------------\n");
    Print(arr1, 10);
    Simple_Sort(arr1, 10);
    printf("----------------after sorted--------------------\n");
    Print(arr1, 10);
    return 0;
}
