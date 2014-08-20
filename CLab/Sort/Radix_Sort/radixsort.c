#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

void Distribute(NodeType R[], int i, Queue q)
{
  int j;
  int p;
  for (j = 0; j < RADIX; j++)
    q[j].f = q[j].e = 0;
  for (p = R[0].next; p; p = R[p].next)
  {
    j = ord(R[p].keys[i]);
    if (!q[i].f)
      q[i].f = p;
    else
      R[q[j].next] = p;
    q[j].e = p;
  }
}
