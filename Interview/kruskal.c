#inlcude <stdio.h>
#include <stdlib.h>

#define MAXEDGE 255

struct node
{
    int v1, v2;
    int cost;
} EdgeNode;

// edges is ordered by cost
EdgeNode edges[MAXEDGE];

