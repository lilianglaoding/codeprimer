#include <stdio.h>
#include <stdlib.h>

#include "mgraph.h"
#include "Queue.c"

int visited[MAXVERTEXNUM];

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

void visit(datatype x)
{
  printf("%d ", x);
}

/****************************************************************
void BFSTtraverse(Graph G)
{
  for (v = 0; v <G->n; v++)
    visited[i] = 0;
  C_SeQueue Q;
  Q = InitQueue();
  if (!visited[v])
    In_Queue(Q, v);
  while (!QueueEmpty(Q))
  {
    Out_Queue(Q, u);
    visited[u] = 1;
    visit(u);
    for (w = FirstAdjvex(G, u); w; w = NextAdjVex(G, u, w))
      if (!visited[w])
	In_Queue(Q, w);
  }
}
*****************************************************************/

void BFSTraverseM(MGraph *G)
{
  int i, j;
  for (i = 0; i < G->n; i++)
    visited[i] = 0;
  for (i = 0; i < G->n; i++)
  {
    if (!visited[i])
      BFSM(G, i);
  }
}

void BFSM(MGraph *G, int i)
{
  int j = i + 1, k;
  C_SeQueue Q;
  Q = Init_Queue();
  In_Queue(Q, i);
  while (!Empty_Queue(Q))
  {
    Out_Queue(Q, *i);
    visit(G->vexs[i]);
    visited[i] = 1;

    for (j = 0; j < G->n; j++)
    {
      if (!visited[j] && G->edges[i][j] == 1)
      {
	In_Queue(Q, j);
      }
    }
  }
  Destroy_Queue(Q);
}

int main()
{
  MGraph G;
  CreateMGraph(&G);
  BFSTraverseM(&G);
  return 0;
}
