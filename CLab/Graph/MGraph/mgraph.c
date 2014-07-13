#include <stdio.h>
#include <stdlib.h>

#include "mgraph.h"

void CreateMGraph(MGraph *G)
{
  int i, j, k, w;
  char ch;
  printf("Please input the number of vertex and edge(format is vertex,edge):\n");
  scanf("%d,%d", &(G->n), &(G->e));
  printf("Please input the info of vertex(format is <CR>):\n");
  for (i = 0; i < G->n; i++)
    scanf("%c", &(G->vexs[i]));
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      g->edges[i][j] = 0;
  printf("Please input the two vertexes's order of each edge(format is i,j):\n");
  for (k = 0; k < G->e; k++)
  {
    scanf("%d,%d", &i, &j);
    G->edges[i][j] = 1;
  }
}

void BFSTtraverse(Graph G)
{
  
}
