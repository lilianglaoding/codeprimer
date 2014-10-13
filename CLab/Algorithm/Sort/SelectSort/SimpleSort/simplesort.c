#include <stdio.h>
#include <stdlib.h>

#include "simplesort.h"

void Simple_Sort(datatype *arr, int n)
{
    int i, j, k;
    datatype min;
    for (i = 0; i < n - 1; i++)
    {
	min = arr[i];
	j = i + 1;
	while (j < n && arr[j] > min)
	    j++;
	arr[i] = arr[j];
	arr[j] = min;
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
    printf("----------------before sorted-------------------\n");
    Print(arr, 10);
    Simple_Sort(arr, 10);
    printf("----------------after sorted--------------------\n");
    Print(arr, 10);
    return 0;
}
