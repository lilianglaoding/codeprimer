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
	arr[i] = arr[j];
	i = j;
	if (arr[j + 1] > arr[j])
	{
	    arr[i] = arr[j + 1];
	    i = j + 1;
	}
	if (temp >= arr[i])
	    break;
    }
    arr[i] = temp;
}

void Heap_Sort(datatype *data, int n)
{
    int i;
    for ()
}

int main()
{
    
    return 0;
}
