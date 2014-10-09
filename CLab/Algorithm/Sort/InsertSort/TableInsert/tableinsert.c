#include <stdio.h>
#include <stdlib.h>

#include "tableinsert.h"

#define MAXSIZE 10



void Seq_InsertSort(SeqNodeType *arr)
{
    int i, j;
    int minloc = 0, maxloc = 0;
    arr[0].next = 0;
    for (i = 1; i < n; i = arr[i].next)
    {
	j = minloc;
	while (arr[j].next != 0 && arr[j].data < arr[i].data)
	    j = arr[j].next;
	arr[i].next = arr[j].next;
	arr[j].next = i;
    }
}

void List_InsertSort(ListNodeType *arr)
{
    
}

void Print(SeqNodeType *arr)
{
    int i;
    for (i = )
}

int main()
{
    int i;
    SeqNodeType seqarr[MAXSIZE];
    for (i = 0; i < MAXSIZE; i++)
    {
	seqarr[i].data = MAXSIZE - i - 1;
	seqarr[i].next = i + 1;
    }
    seqarr[MAXSIZE - 1].next = 0;
    return 0;
}
