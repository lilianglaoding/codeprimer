#include <stdio.h>
#include <stdlib.h>

#include "olgraph.h"

void CreateOLGraph(OLGraph *G)
{
  int i, j, k;
  char v1, v2;
  VexNode *s;
  printf("Please input the vexnum and arcnum(format is (i,j)):\n");
  scanf("%d,%d", &(G->vexnum), &(G->arcnum));
  printf("Please input the vertex:\n");
  for (i = 0; i < G->vexnum; i++)
  {
    scanf("%c", &(G->xlixt[i].vertex));
    xlist[i].firstin = NULL;
    xlist[i].firstout = NULL;
  }
  printf("Please input the vertex(format is <vi,vj>):\n");
  i = locate(G, vi);
  j = locate(G, vj);
  
}
