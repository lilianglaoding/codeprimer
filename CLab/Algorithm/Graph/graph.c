#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

void DFSAL(ALGraph *G, int i);

void DFSTraverseAL(ALGraph *G)
{
    int i;
    int count = 0;
    for (i = 0; i < G->n; i++)
	G->visited[i] = 0;
    for (i = 0; i < G->n; i++)
	if (!G->visited[i])
	{
	    DFSAL(G, i);
	    count++;  // to test if the graph is all connected
	}
}

void DFSAL(ALGraph *G, int i)
{
    EdgeNode *p;
    printf("visit vertex: V%c\n", G->adjlist[i].vertex);
    G->visited[i] = 1;
    p = G->adjlist[i].firstedge;
    while (p)
    {
	if (!G->visited[p->adjvex])
	    DFSAL(G, p->adjvex);
	p = p->next;
    }
}

void BFSM(MGraph *G, int k);

void BFSTraverseM(MGraph *G)
{
    int i;
    int count = 0;
    for (i = 0; i < G->n; i++)
	G->visit[i] = 0;
    for (i = 0; i < G->n; i++)
	if (!G->visited[i])
	{
	    BFSM(G, i);
	    count++;        // to test if the graph is all connected
	}
}

void BFSM(MGraph *G, int k)
{
    int i, j;
    int CirQueue[G->n];
    InitQueue(CirQueue);
    EnQueue(CirQueue, k);
    while (!EmptyQueue(CirQueue))
    {
	i = DeQueue(CirQueue);
	for (j = 0; j < G->n; j++)
	    if (G->edges[i][j] == 1 && !G->visited[j])
	    {
		printf("Visit Vertex: V%c", G->vexs[j]);
		G->visited[j] = p;
		EnQueue(CirQueue, j);
	    }
    }
}



int main()
{
    return 0;
}
