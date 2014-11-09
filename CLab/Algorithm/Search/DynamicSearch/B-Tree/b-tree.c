#include <stdio.h>
#include <stdlib.h>

#include "b-tree.h"

int Search(NodeType *p, datatype kx)
{
    int i = 1;   // key[1] to key[m - 1]
    while (i <= p->keynum && kx >= p->key[i])
	i++;
    return i - 1;
}

Result SearchBTree(NodeType *t, datatype kx)
{
    Result rs;
    NodeType *p = t, *q = NULL;
    int i, found = 0;
    while (!p && !found)
    {
	i = Search(p, kx);
	if (i > 0 && p->key[i] == kx)
	    found = 1;
	else
	{
	    q = p;
	    p = p->nptr[i];
	}
    }
    rs.tag = found;
    rs.i = i;
    rs.pt = p;
    return rs;
}

void NewRoot(NodeType *t, NodeType *stptr, datatype kx, datatype *xelem)
{
    NodeType *p;
    p = (NodeType *)malloc(sizeof(NodeType));
    p->keynum = 1;
    p->parent = NULL;
    p->key[1] = kx;
    p->eptr[0] = xelem;
    p->nptr[0] = t;
    p->nptr[1] = stptr;
    p->parent = NULL;
    t->parent = p;
    stptr->parent = p;
    return p;
}

int InsertBTree(NodeType **t, ElemType *xelem)
{
    int i;
}

NodeType *split(NodeType *p, int s)
{
    int j;
    NodeType *q;
    q = (NodeType *)malloc(sizeof(NodeType));
    q->keynum = m - s;
    q->parent = p->parent;
    q->nptr[0] = p->nptr[s];
    for (j = s + 1; j < m; j++)
    {
	q->key[j - s] = p->key[j];
	q->eptr[j - s] = p->eptr[j];
	q->nptr[j - s] = p->nptr[j];
    }
    
    p->keynum = s - 1;
    if (q->nptr[0])
	for (j = 0; j < q->keynum; j++)
	    q->nptr[j]->parent = q;
    return q;
}
