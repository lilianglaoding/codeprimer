#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"

int Partion(datatype *arr, int low, int high)
{
    datatype temp;
    temp = arr[low];
    while (low < high)
    {
	while (low < high && temp < arr[high])
	    high--;
	if (low < high)
	{
	    arr[low] = arr[high];
	    low++;
	}
	while (low < high && temp > arr[low])
	    low++;
	if (low < high)
	{
	    arr[high] = arr[low];
	    high--;
	}
    }
    arr[low] = temp;
    return low;
}

void Quick_Sort(datatype *arr, int s, int t)
{
    
}

int main()
{
    return 0;
}
