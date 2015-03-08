#include <stdio.h>
#include <stdlib.h>

#define M 6

typedef struct node
{
    int keynum;
    struct node *parent;
    int key[M];    //key[0] not used
    struct node *nptr[M];
} NodeType;

typedef struct
{
    int tag;
    int i;
    struct node *p;
} Result;

int Search(NodeType *p, int kx)
{
    int i = 1;
    while (kx >= p->key[i])
	i++;
    return i - 1;
}

Result SearchNode(NodeType *t, int kx)
{
    Result rs;
    int i, finished = 0;
    NodeType *p = t, q;
    while (p && !finished)
    {
	i = Search(p, kx);
	if (i > 0 && p->key[i] == kx)
	    finished = 1;
	else
	{
	    q = p;
	    p = p->nptr[i];
	}
    }
    
    if (!p)
	p = q;
    rs.tag = finished;
    rs.i = i;
    rs.p = p;
    
    return rs;
}

int InsertNode(NodeType *p, int i, int kx)
{
    int j;
    for (j = p->keynum; j >= i; j--)
    {
	p->key[j + 1] = p->key[j];
	//p->nptr[j + 1] = p->nptr[j];
    }
    p->key[j + 1] = kx;
    p->keynum++;
    if (!p->nptr[0])
	for (j = 0; j <= p->keynum; j++)
	    p->nptr[j] = NULL;
    return 1;
}

NodeType *split(NodeType *p, int s)
{
    int i;
    NodeType *q;
    q = (NodeType *)malloc(sizeof(NodeType));
    q->keynum = s;
    p->keynum = M - s - 1;
    q->nptr[0] = p->nptr[0];
    for (i = 1; i <= q->keynum; i++)
    {
	q->key[i] = p->key[i];
	q->nptr[i] = q->nptr[i];
    }
    p->nptr[0] = p->nptr[s + 2];
    for (i = s + 2; i <= M; i++)
    {
	p->key[i - s]
    }
}

NodeType *NewRoot(NodeType *p, NodeType *q, int kx)
{
    NodeType *s;
    s = (NodeType *)malloc(sizeof(NodeType));
    s->parent = NULL;
    s->keynum = 1;
    s->key[1] = kx;
    s->nptr[0] = p;
    s->nptr[1] = q;
    p->parent = s;
    q->parent = s;
    return s;
}

int InsertNode(NodeType **t, int x)
{
    Result rs;
    NodeType stptr;
    int i, s;
    int kx = x;
    int finished = 0;
    rs = SearchNode(*t, kx);
    if (!rs.tag)
    {
	while (!p && !finished)
	{	    
	    Insert(rs.p, rs.i, kx);
	    if (rs.p->keynum <= M)
		finished = 1;
	    else (rs.p->keynum > M)
	    {
		s = (M + 1) / 2;
		kx = rs.p->key[s+1];
		stptr = split(rs.p, s);
		rs.p = rs.p->parent;
	    }
	}
    }
    if (!finished)
    {
	*t = NewRoot(rs.pt, stptr, kx);
	finished = 1;
    }
    return finished;
}
