#include <stdio.h>
#include <stdlib.h>

#include "shortestpat.h"

#define INFINITY 65535

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
    
  }
}
