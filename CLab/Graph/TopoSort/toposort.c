#include <stdio.h>
#include <stdlib.h>

#include "toposort.h"

void toposort(ALGraph *G)
{
  int m = G->n;
  int n = 0;
  int i, j, k;
  EdgeNode *ptr;
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
    top = G->adjlist[top].indegree;
    printf("%c", G->adjlist[i].vertex);
    n++;
    ptr = G->adjlist[i].firstedge;
    while (ptr != NULL)
    {
      k = ptr->next;
      G->adjlist[k].indegree--;
      if (G->adjlist[k].indegree == 0)
      {
	G->adjlist[k].indegree = top;
	top = k;
      }
      ptr = ptr->next;
    }
  }
  if (m < n)
  {
    printf("The network has a cycle");
    return 0;
  }
  else
    return 1;
}
