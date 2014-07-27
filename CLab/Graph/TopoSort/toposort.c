#include <stdio.h>
#include <stdlib.h>

#include "toposort.h"

void toposort(ALGraph *G)
{
  int top = -1;
  for (i = 0; i < G->n; i++)
  {
    if (G->adjlist[i].indegree == 0)
    {
      G->adjlist[i].indegree = top;
      top = i;
    }
  }
  while (top != -1)
  {
    j = top;
  }
}
