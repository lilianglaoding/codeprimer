#include <stdio.h>
#include <stdlib.h>

#include "kruskal.h"


//edges[MAXEDGE] is ordered by cost increment
EdgeType edges[MAXEDGE];

int Find(int farther[], int v)
{
  int t;
  t = v;
  while (father[t] >= 0)
    t = father[t];
  return t;
}

void kruskal(EdgeType edges[], int n)
{
  int i, j, vf1, vf2;
  int farther[MAXEDGE];
  for (i = 0; i < MAXEDGE; i++)
    farther[i] = -1;
  i = 0;
  j = 0;
  while (i < MAXEDGE && j < n - 1)
  {
    vf1 = Find(farther, edges[i].v1);
    vf2 = Find(farther, edges[i].v2);
    if (vf1 != vf2)
    {  
      farther[vf2] = vrf1;
      j++;
      printf("%3d, %3d\n", edges[i].v1, edges[i].v2);
    }
    i++;
  }
}
