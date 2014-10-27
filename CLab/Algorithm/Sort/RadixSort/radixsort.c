#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

void Distribute(NodeType *R, int i, Queue q)
{
    int i, p;
    for (i = 0; i < RADIX; i++)
	q[i].f = q[i].e = 0;
    for (p = R[0].next; p; p = R[p].next)
    {
	i = R[p].keys[i];
	if (!q[j].f)
	    q[j].f = p;
	else
	    R[q[j].e].next = p;
	q[j].e = p;
    }
}

void Collect(NodeType *R, int i, Queue q)
{
    
}

void RadixSort(NodeType *R, int n)
{
    
}

int main()
{
    return 0;
}
