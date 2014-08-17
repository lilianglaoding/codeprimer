#include <stdio.h>
#include <stdlib.h>

#include "heap_sort.h"

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
