#include <stdio.h>
#include <stdlib.h>

#include "olgraph.h"

void CreateOLGraph(OLGraph *G)
{
  int i, j, k;
  char v1, v2;
  ArcBox *s;
  printf("Please input the vexnum and arcnum(format is (i,j)):\n");
  scanf("%d,%d", &(G->vexnum), &(G->arcnum));
  printf("Please input the vertex:\n");
  for (i = 0; i < G->vexnum; i++)
  {
    scanf("%c", &(G->xlixt[i].vertex));
    xlist[i].firstin = NULL;
    xlist[i].firstout = NULL;
  }
  for (k = 0; k < G->arcnum; k++)
  {
    printf("Please input the vertex(format is <vi,vj>):\n");
    scanf("%c,%c", &v1,&v2);
    i = locate(G, v1);
    j = locate(G, v2);
    s = (ArcBox *)malloc(sizeof(ArcBox));
    s->tailvex = i;
    s->headvex = j;
    s->info = 0;   //all is 0 temprary
    s->hlink = G->xlist[j].firstin;
    s->tlink = G->xlist[i].firstout;
    G->xlist[i].firstin = s;
    G->xlist[j].firstout = s;
  }
}
