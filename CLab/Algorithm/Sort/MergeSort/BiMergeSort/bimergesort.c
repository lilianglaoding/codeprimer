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
    while (i <= s)
	dst[k++] = src[i++];
    while (j <= t)
	dst[k++] = src[j++];
}

int main()
{
    datatype src[8] = {1, 2, 3, 4, 2, 3, 4, 5};
    datatype dst[8] = {0};
    printf("---------------before sorted-----------------\n");
    Print(src, 8);
    BiMergeSort(src, dst, 0, 3, 7);
    printf("---------------after sorted------------------\n");
    Print(dst, 8);
    return 0;
}
