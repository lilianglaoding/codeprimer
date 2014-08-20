#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

int ord(int x)
{
  return x;
}

void Distribute(NodeType R[], int i, Queue q)
{
  int j;
  int p;
  for (j = 0; j < RADIX; j++)
    q[j].f = q[j].e = 0;
  for (p = R[0]; p; p = R[p].next)
  {
    j = ord(R[p].keys[i]);
    if (!q[j].f)
      q[j].f = p;
    else
      R[q[j].e].next = p;
    q[j].e = p;
  }
}

void collect(NodeType R[], int i, Queue q)
{
  int j;
  int t;
  for (j = 0; !q[j].f; j = succ(j));
  R[0].next = q[j].f;
  t = q[j].e;
  while (j < RADIX)
  {
    for (j = succ(j); j < RADIX - 1 && !q[j].f; j = succ(j));
    if (!q[j].f)
    {
      R[t].next = q[j].f;
      t = q[j].e;
    }
  }
  R[t].next = 0;
}

