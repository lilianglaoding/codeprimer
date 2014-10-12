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
    if (s < t)
    {
	int m = Partion(arr, s, t);
	Quick_Sort(arr, s, m - 1);
	Quick_Sort(arr, m + 1, t);
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
    Print(arr, 10);
    Quick_Sort(arr, 0, 9);
    Print(arr, 10);
    return 0;
}
