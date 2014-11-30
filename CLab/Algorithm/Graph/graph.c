#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

void DFSAL(ALGraph *G, int i);

void DFSTraverseAL(ALGraph *G)
{
    int visited[G->n];
    int i;
    for (i = 0; i < G->n; i++)
	visited[i] = 0;
    for (i = 0; i < G->n; i++)
	DFSAL(G, i);
}

void DFSAL(ALGraph *G, int i)
{
    EdgeNode *p;
    printf("visit vertex: V%c\n", G->adjlist[i].vertex);
    visited[i] = 1;
    p = G->adjlist[i].firstedge;
    while (p)
    {
	if (!visited[p->adjvex])
	    DFSAL(G, p->adjvex);
	p = p->next;
    }
}

int main()
{
    return 0;
}
