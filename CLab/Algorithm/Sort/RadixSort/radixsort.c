#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

void Print(NodeType *R, int n)
{
    int i, j;
    j = 0;
    int sum = 0;
    for (i = 0; R[i].next != 0; i = R[i].next)
    {
	while (j < KEYNUM)
	    sum = sum * 10 + R[R[i].next].keys[j];
	printf("%d ", sum);
    }
    printf("\n");
}

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

int succ(Queue q, int i)
{
    int j = i;
    while (!q[j + 1].f)
	j++;
    return j;
}

void Collect(NodeType *R, int i, Queue q)
{
    int j, t;
    for (j = 0; !q[j].f; j = succ(q, j));
    R[0].next = q[j].f;
    t = q[i].e;
    while (j < RADIX)
    {
	for (j = succ(q, j); j < RADIX - 1 && !q[j].f; j = succ(q, j));
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
    for (i = 0; i < KEYNUM; i++)
    {
	Distribute(R, i, q);
	Collect(R, i, q);
    }
}

int main()
{
    int i;
    NodeType R[10] = {0, 278, 109, 63, 930, 589, 184, 505, 269, 8, 83};
    for (i = 0; i < 9; i++)
	R[i].next = i + 1;
    R[i].next = 0;
    printf("------------------before sorted--------------------------\n");
    Print(R, 10);
    printf("------------------after sorted---------------------------\n");
    RadixSort(R, 10);
    return 0;
}
