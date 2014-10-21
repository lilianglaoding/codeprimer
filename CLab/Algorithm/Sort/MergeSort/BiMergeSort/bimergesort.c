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
void Merge(datatype *src, datatype *dst, int m, int s, int t)
{
    int i, j, k;
    i = m, j = s + 1, k = m;

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

void MergePass(datatype *src, datatype *dst, int s, int t, int len)
{
    int i;
    for (i = s; i + 2 * len - 1 <= t; i = i + 2 * len)
    {
	Merge(src, dst, i, i + len - 1, i + 2 * len - 1);
    }
    if (i + len <= t)
	dst[i++] = src[i++];
    else
	Merge(src, dst, i, i + len - 1, t);
}

void MergeSort(datatype *src, datatype *dst, int s, int t)
{
    int len;
    for (len = 1; len <= t - s + 1; len = len * 2 )
    {
	MergePass(src, dst, s, t, len);
	len = len * 2;
	MergePass(dst, src, s, t, len);
    }
}

void MSort(datatype *src, datatype *dst, int s, int t)
{
    if (s == t)
	dst[s] = src[s];
    else
    {
	int m;
	m = (s + t) / 2;
	printf("\ns:%d, m:%d, t:%d\n", s, m, t);
	MSort(src, dst, s, m);
	MSort(src, dst, m + 1, t);
	Merge(dst, src, s, m, t);
	Merge(src, dst, s, m, t);
    }
    printf("dst:\n");
    Print(dst, 8);
    printf("src:\n");
    Print(src, 8);
}

int main()
{
    datatype src[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    datatype dst[8] = {0};
    printf("---------------before sorted-----------------\n");
    Print(src, 8);
    MSort(src, dst, 0, 7);
    printf("---------------after sorted------------------\n");
    Print(src, 8);
    return 0;
}
