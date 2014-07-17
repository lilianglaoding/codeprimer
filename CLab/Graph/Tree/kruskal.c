#include <stdio.h>
#include <stdlib.h>

#include "kruskal.h"


//edges[MAXEDGE] is ordered by cost increment
EdgeType edges[MAXEDGE];

void kruskal(EdgeType edges[], int n)
{
  int i, j, vf1, vf2;
  int farther[MAXEDGE];
  for (i = 0; i < MAXEDGE; i++)
    farther[i] = -1;
  
}
