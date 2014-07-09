#include <stdio.h>
#include <stdlib.h>

#include "algraph.h"

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
