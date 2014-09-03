#include <stdio.h>
#include <stdlib.h>

#include "mgraph.h"

#define MAXCOST 65535

void prim(int gm[][MAXNODE], int n, int closevertex[])
{
  int i, j, k;
  int lowcost[MAXNODE], mincost;
  for (i = 1; i < n; i++)
  {
    lowcost[i] = gm[0][i];
    closevertex[i] = 0;
  }
  lowcost[0] = 0;
  closevertex[0] = 0;
  for (i = 1; i < n; i++)
  {
    mincost = MAXCOST;
    j = 1;
    k = 0;
    while (j < n)
    {
      if (lowcost[j] != 0 && lowcost[j] < mincost)
      {
	mincost = lowcost[j];
	k = j;
      }
      j++;
    }
    lowcost[k] = 0;
    for (j = 1; j < n; j++)
      if (lowcost[j] != 0 && gm[k][j] < lowcost[j])
      {
	lowcost[j] = gm[k][j];
	closevertex[j] = k;
      }
  }
}
