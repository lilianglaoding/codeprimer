#include <stdio.h>
#include <stdlib.h>

#include "bubblesort.h"

void Bubble_Sort(datatype *arr, int n)
{
    int i, j;
    int flag = 0;
    datatype temp;
    for (i = 0; i < n; i++)
    {
	for (j = 1; j < n -i; j++)
	{
	    if (arr[j] < arr[j - 1])
	    {
		temp = arr[j];
		arr[j] = arr[j - 1];
		arr[j - 1] = temp;
	    }
	}
    }
}

void Print(datatype *arr, int n)
{
    int i = 0;
    while (i < n)
    {
	printf("%d ", arr[i]);
	++i;
    }
    printf("\n");
}

int main()
{
    datatype arr[9] = {8, 7, 6, 5, 4, 3, 2, 1, 0};
    Bubble_Sort(arr, 9);
    Print(arr, 9);
    return 0;
}
