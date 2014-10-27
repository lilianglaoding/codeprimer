#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

void Distribute(NodeType *R, int i, Queue q)
{
    int i, p;
    for (i = 0; i < RADIX; i++)
	q[i].f = q[i].e = 0;
    for (p = R[0].next; p; p = R[p].next)    //R[0] restores the head pointer
    {
	i = R[p].keys[i];
	if (!q[i].f)
	    q[i].f = p;
	else
	    R[q[i].e].next = p;
	q[i].e = p;
    }
}

void Collect(NodeType *R, int i, Queue q)
{
    int i;
    for (i = 0; !q[i].f; i = succ(i))
	R[0].next = q[i].f;
    t = q[i].e;
    
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
