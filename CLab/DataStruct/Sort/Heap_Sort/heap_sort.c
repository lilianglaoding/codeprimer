#include <stdio.h>
#include <stdlib.h>

#include "heap_sort.h"

// algorithm:
// Create Heap and then sort
// sort is adjust

void HeapAdjust(int R[], int s, int t)
{
  int rs = R[s];
  int i = s, j;
  int m = t - 1;
  for (j = s; j < t; j = j * 2)
  {
    if (j < m && R[j] < R[j + 1])
      j = j + 1;
    if (rs > R[j])
      break;
    R[i] = R[j];
    i = j;
  }
  R[i] = rs;
}

void HeapSort(int R[], int n)
{
  int i;
  // create table R[1]..R[n]
  for (i = n / 2; i > 0; i--)
    HeapAdjust(R, i, n);
  // swap the top and the bottom
  for (i = n; i > 1; i--)
  {
    R[0] = R[1];
    R[1] = R[i];
    R[i] = R[0];
    HeapAdjust(R, 1, i - 1);
  }
}
