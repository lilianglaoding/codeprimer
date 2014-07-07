#include <stdio.h>
#include <stdlib.h>

#include "union.h"

void Union(TreeType a[], int i, int j)
{
  if (a[i].parent != -1 && a[j].parent != -1)
    return;
  a[j].parent = i;
}

int Find(TreeType a[], datatype x)
{
  int i, j;
  while (i < MAXNODE && a[i].data != x)
    i++;
  if (i >= MAXNODE)
    return -1;
  j = i;
  while (a[j].parent != -1)
    j = a[j].parent;
  return j;
}
