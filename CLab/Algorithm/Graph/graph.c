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
	if (!visited[i])
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

void BFSM(MGraph *G, int k);

void BFSTraverseM(MGraph *G)
{
    int visited[G->n];
    int i;
    for (i = 0; i < G->n; i++)
	visit[i] = 0;
    for (i = 0; i < G->n; i++)
	if (!visited[i])
	    BFSM(G, i);
}

void BFSM(MGraph *G, int k)
{
    
}

int main()
{
    return 0;
}
