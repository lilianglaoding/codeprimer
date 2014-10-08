#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

void D_InsertSort(datatype *arr, int n)
{
    int i = 0, j = 0;
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
