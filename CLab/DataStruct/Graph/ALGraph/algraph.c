#include <stdio.h>
#include <stdlib.h>

#include "algraph.h"

//visited[] is used to mark whether the vertex is visited of not
int visited[MAXVERTEXNUM];

void CreateALGraph(ALGraph *G)
{
  int i, j, k;
  EdgeNode *s;
  printf("Please input the number of vertex and edge(format is:vertex,edge):\n");
  scanf("%d,%d", &(G->n),&(G->e));
  printf("Please input the vertex(format is:vertex<CR>):\n");
  for (i = 0; i < G->n; i++)
  {
    scanf("%c", &(G->adjlist[i].vertex));
    adjlist[i].firstedge = NULL;
  }
  printf("Please input the info of edge(format is:i,j):\n");
  for (k = 0; k < G->e; k++)
  {
    scanf("%d,%d", i,j);
    s = (EdgeNode *)malloc(sizeof(EdgeNode));
    s->adjvex = j;
    s->next = G->adjlist[i].firstedge;
    G->adjlist[i].next = s;
  }
}

/******************************************************************
void DFS(Graph G, int v)
{
  //visited[] is used to mark whether the vertex is visited or not
  visited[v] = 1;
  VisitFunc(v);
  for (w = FirstAdjVex(G, v); w; w = NextAdjVex(G, v, w))
    if (!visited[w])
      DFS(G, w);
}
******************************************************************/

void DFSTraverseAL(ALGraph *G)
{
  int i;
  for (i = 0; i < G->n; i++)
    visited[i] = 0;
  for (i = 0; i < G->e; i++)
    if (!visited[i])
      DFSAL(G, i);
}

void DFSAL(ALGraph *G, int i)
{
  ENode *p;
  printf("visit vertex:V%c\n", G->adjlist[i].vertex);
  visited[i] = 1;
  p = G->adjlist[i].firstedge;
  while (p)
  {
    if (!visited[p->adjvex])
      DFSAL(G, p->adjvex);
    p = p->next;
  }
}

