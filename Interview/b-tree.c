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

int InsertNode(NodeType *t, int kx)
{
    
}

NodeType *split(NodeType *p, int s)
{
    
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
	while (!p)
	{	    
	    Insert(rs.p, rs.i);
	    if (rs.p->keynum <= M)
		finished = 1;
	    else (rs.p->keynum > M)
	    {
		s = (M + 1) / 2;
		stptr = split(rs.p, s);
		
	    }
	}
    }
}
