#include <stdio.h>
#include <stdlib.h>

#include "table_sort.h"

void B_InsertSort(datatype R[], int n)
{
  int i, j;
  int p;
  j = R[0].next = 1;
  R[1].next = 0;
  for (i = 2; i < n; i++)
  {
    for (j = 0; j < i; j++)
    {
      if (R[i] < R[j + 1])
      {
	p = R[i].next;
	R[j].next = R[i].next;
	R[i].next = j;
      }
    }
  }
}
