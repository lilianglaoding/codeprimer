#include <stdio.h>
#include <stdlib.h>

#include "radixsort.h"

void Print(NodeType *R, int n)
{
    int i, j;
    int sum;
    for (i = 0; R[i].next != 0; i = R[i].next)
    {
	j = KEYNUM - 1;
	sum = 0;
	while (j >= 0)
	{
	    sum = sum * 10 + R[R[i].next].keys[j];
	    j--;
	}
	printf("%d ", sum);
    }
    printf("\n");
}

void Distribute(NodeType *R, int i, Queue q)
{
    int j, p;
    for (j = 0; j < RADIX; j++)
	q[j].f = q[j].e = 0;
    printf("Distribute\n");
    for (p = R[0].next; p != 0; p = R[p].next)
    {
	printf("a ");
	printf("%d", p);
	j = R[p].keys[i] % 10;
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
    t = q[j].e;
    printf("Collect\n");
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
    printf("radixsort\n");
    for (i = 0; i < KEYNUM; i++)
    {
	Distribute(R, i, q);
	Collect(R, i, q);
    }
}

int power(int x, int num)
{
    if (num == 0)
	return 1;

    int i = num;
    int sum = 1;
    while (i != 0)
    {
	sum = sum * x;
	i--;
    }
    return sum;
}

int main()
{
    int i, j;
    KeyType x;
    NodeType R[10] = {};
    NodeType R1[10] = {0, 278, 109, 63, 930, 589, 184, 505, 269, 8, 83};
    for (i = 0; i < 10; i++)
    {
	scanf("%d", &x);
	for (j = 0; j < KEYNUM; j++)
	    R[i].keys[j] = (x / power(10, j)) % 10;
    }
    for (i = 0; i < 9; i++)
	R[i].next = i + 1;
    R[i].next = 0;
    printf("------------------before sorted--------------------------\n");
    Print(R, 10);
    printf("------------------after sorted---------------------------\n");
    RadixSort(R, 10);
    return 0;
}
