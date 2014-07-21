#include <stdio.h>
#include <stdlib.h>

#include "shortestpat.h"

#define INFINITY 65535

// Dijkstra algroithm
void ShortestPath_1(MGraph G, int v0, PathMatrix *P, ShortPathTable *D)
{
  int i, w, v;
  int min;
  bool final[MAXNUM];
  for (v = 0; v < G.n; v++)
  {
    final[v] = false;
    D[v] = G.edges[v0][v];
    P[v0] = -1;
    if (G.edges[v0][v] < INFINITY && v != v0)
      P[v] = v0;
    if (D[v] == INFINITY)
      P[v] = -2;
  }
  
  D[v0] = 0;
  final[v0] = true;

  for (i = 1; i < G.n; i++)
  {
    min = INFINITY;
    for (w = 0; w < G.n; w++)
      if (!final[w])
	if (D[w] < min)
	{
	  v = w;
	  min = D[w];
	}
    final[v] = true;

    for (w = 0; w < G.n; w++)
      if (!final[w] && min + edges[v][w] < D[w])
      {
	D[w] = min + edges[v][w];
	P[w] = v;
      }
  }

  for (i = 1; i < G.n; i++)
  {
    if (P[i] == -2)
      printf("max %d\n", i);
    else
    {
      printf("%d %d", D[i], i);
      pre = P[i];
      while (pre > 0)
      {
	printf("<-%d", pre);
	pre = P[pre];
      }
      printf("<-0\n");
    }
  }
}

// Floyd algorithm
void ShortestPath_2(MGraph G, PathMatrix *P[], DistanceMatrix *D)
{
  
}
