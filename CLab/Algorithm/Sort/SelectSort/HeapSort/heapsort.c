#include <stdio.h>
#include <stdlib.h>

#include "heapsort.h"

/**************************************
 k[i] <= {k[2i], k[2i+1]} 
 or
 k[i] >= {k[2i], k[2i+1]}
**************************************/

void Print(datatype *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
}

void Heap_Adjust(datatype *arr, int s, int t)
{
    int i, j, k;
    datatype temp;
    i = s;
    temp = arr[s];
    k = t;
    for (j = 2 * i + 1; j <= t; j = 2 * j + 1)
    {
	if (j < k && arr[j + 1] > arr[j])
	    j = j + 1;
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
    for (i = (n - 1) / 2; i >= 0; i--)
	Heap_Adjust(arr, i, n - 1);

    //sort for small to big, find the biggest and put it in arr[i]
    for (i = n - 1; i >= 0; i--)
    {
	temp = arr[0];
	arr[0] = arr[i];
	arr[i] = temp;
	Heap_Adjust(arr, 0, i - 1);
    }	
}

int main()
{
    datatype arr[8] = {16, 24, 53, 47, 36, 85, 30, 91};
    datatype arr1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    printf("-----------------before sorted---------------\n");
    Print(arr, 8);
    printf("-----------------after sorted----------------\n");
    Heap_Sort(arr, 8);
    Print(arr, 8);
    return 0;
}
