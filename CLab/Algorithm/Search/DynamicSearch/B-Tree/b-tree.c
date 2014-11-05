#include <stdio.h>
#include <stdlib.h>

#include "b-tree.h"

int Search(NodeType *p, datatype kx)
{
    int i = 1;
    while (i <= p->keynum && kx > p->key[i])
	i++;
    if (i < p->keynum)
	return i;
    else
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

