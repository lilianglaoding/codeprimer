#include <stdio.h>
#include <stdlib.h>

#include "heapsort.h"

/**************************************
 k[i] <= {k[2i], k[2i+1]} 
 or
 k[i] >= {k[2i], k[2i+1]}
**************************************/

void Heap_Adjust(datatype *arr, int s, int t)
{
    int i, j, k;
    datatype temp;
    i = s;
    temp = arr[s];
    for (j = 2 * i + 1; j <= t; j = 2 * j)
    {
	if (arr[j + 1] > arr[j])
	    arr[i] = arr[j + 1];
	if (temp >= arr[j])
	    break;
	arr[i] = arr[j];
	i = j;
    }
    arr[i] = temp;
}

void Heap_Sort(datatype *arr, int n)
{
    int i;
    datatype temp;
    for (i = n / 2; i > 0; i--)
	Heap_Adjust(arr, i, n);
    for (i = n; i > 1; i--)
    {
	temp = arr[1];
	arr[1] = arr[i];
	arr[i] = temp;
	Heap_Adjust(arr, 1, i - 1);
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
    datatype arr[8] = {16, 24, 53, 47, 36, 85, 30, 91};
    printf("-----------------after sorted----------------\n");
    Heap_Sort(arr, 8);
    Print(arr, 8);
    return 0;
}
