#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

void Distribute(NodeType *R, int i, Queue q)
{
    int j, p;
    for (j = 0; j < RADIX; j++)
	q[j].f = q[j].e = 0;
    for (p = R[0].next; p; p = R[p].next)    //R[0] restores the head pointer
    {
	j = R[p].keys[i] % 10;       // map to [0, RADIX - 1]
	if (!q[j].f)
	    q[j].f = p;
	else
	    R[q[j].e].next = p;
	q[j].e = p;
    }
}

void Collect(NodeType *R, int i, Queue q)
{
    int j;
    for (j = 0; !q[j].f; j = succ(j));
    R[0].next = q[j].f;
    t = q[i].e;
    while (j < RADIX)
    {
	for (j = succ(j); j < RADIX - 1 && !q[j].f; j = succ(j));
	if (q[j].f)
	{
	    R[t].next = q[j].f;
	    t = q[j].e;
	}
	R[t].next = 0;
    }
}

void RadixSort(NodeType *R, int n)
{
    int i;
    Queue q;
    for (i = 0; i < n; i++)
	R[i].next = i + 1;
    R[i].next = 0;
    for (i = 0; i < KEY_NUM; i++)
    {
	Distribute(R, i, q);
	Collect(R, i, q);
    }
}

int main()
{
    return 0;
}
