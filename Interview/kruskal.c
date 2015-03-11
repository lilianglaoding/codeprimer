#inlcude <stdio.h>
#include <stdlib.h>

#define MAXEDGE 255

struct node
{
    int v1;
    int v2;
    int cost;
} EdgeNode;

// edges is ordered by cost
EdgeNode edges[MAXEDGE];

int Find(int farther[], int i)
{
    int v = i;
    while (v >= 0)
	v = farther[v];
    return v;
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
	    farther[vf2] = vf1;
	    j++;
	    printf("%d, %d", edges[i].v1, edges[i].v2);
	}
	i++;
    }
}
