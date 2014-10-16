#include <stdio.h>
#include <stdlib.h>

#include "bimergesort.h"

void Print(datatype *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
}

//src[m, s] src[s+1, t]
void BiMergeSort(datatype *src, datatype *dst, int m, int s, int t)
{
    int i, j, k;
    i = m, j = s + 1, k = 0;

    while (i <= s && j <= t)
    {
	if (src[i] < src[j])
	    dst[k++] = src[i++];
	else
	    dst[k++] = src[j++];
    }
    while (i < s)
	dst[k++] = src[i++];
    while (j < t)
	dst[k++] = src[j++];
}
