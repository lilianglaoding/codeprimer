#include <stdio.h>
#include <stdlib.h>

int visited[MAXVERTEXNUM]

void DFSForest(Graph G, CSTree *T)
{
  int i, j;
  CSTree p, q;
  *T = NULL;
  for (i = 0; i < G.vexnum; i++)
    visited[i] = 0;
  for (i = 0; i < G.vexnum; i++)
    if (!visited[i])
    {
      p = (CSTree *)malloc(sizeof(CSNode));
      p->data = GetVex(G, v);
      p->lchild = NULL;
      p->nextsibling = NULL;
      if (!(*T))
	(*T) = p;
      else
	q->nextsibling = p;    //here may cause coredump
      q = p;
      DFSTree(G, v, &p);
    }
}

void DFSTree(Graph G, int v, CSTree *T)
{
  int first, w;
  CSTree p, q;
  visited[v] = 1;
  
}
