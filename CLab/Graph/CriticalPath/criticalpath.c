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
  InitStack(T);
  
}
