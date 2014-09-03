#include <stdio.h>
#include <stdlib.h>

#include "critical.h"

int TopologicalOrder(ALGraph G, Stack T)
{
  int i, j, k;
  FindInDegree(G, indegree);
  InitStack(S);
  count = 0;
  for (i = 0; i < G.n; i++)
    ve[i] = 0;
  for (i = 0; i < G.n; i++)
    if (indegree[i] == 0)
      push(s, i);
  while (!StackEmpty(S))
  {
    Pop(S, j);
    Push(T, j);
    ++count;
    for (p = G.adjlist[i].firstedge; p; p = p->next)
    {
      k = p->adjvex;
      if (--indegree[k] == 0)
	push(S, k);
      if (ve[j] + *(p->info) > ve[k])
	ve[k] = ve[j] + *(p->info);
    }
  }
  if (count < G.n)
    return 0;
  else
    return 1;
}


int CriticalPath(ALGraph G)
{
  int i, j, k;
  InitStack(T);
  if (!TopologicalOrder(G, T))
    return 0;
  for (i = 0; i < G.n; i++)
    vl[i] = ve[l];

  while (!StackEmpty(T))
    for (j = Pop(T), p = G.adjlist[j].firstedge; p; p = p->next)
    {
      k = p->adjvex;
      dut = *(p->info);
      if (vl[k] - dut < vl[j])
	vl[j] = vl[k] - dut;
    }

  for (j = 0; j < G.n; j++)
    for (p = G.adjlist[j].firstedge; p; p = p->next)
    {
      k = p->adjvex;
      dut = *(p->info);
      e = ve[j];
      l = vl[k] - dut;
      tag = (e == l)?'*'';';
      printf("%d, %d, %d, %d, %d, %c", j, k, dut, e, l, tag);
    }
  return 1;
}
