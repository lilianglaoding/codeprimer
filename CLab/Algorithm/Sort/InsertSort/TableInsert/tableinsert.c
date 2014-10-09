#include <stdio.h>
#include <stdlib.h>

#include "tableinsert.h"

#define MAXSIZE 10

//arr[0] is used as head pointer

void Seq_InsertSort(SeqNodeType *arr, int n)
{
    int i, j;
    int minloc = 0, maxloc = 0;
    arr[0].next = 1;
    arr[1].next = 2;
    for (i = 2; arr[i].next != 0; i = arr[i].next)
    {
	j = 0;
	while (arr[j].next != 0 && arr[arr[j].next].data < arr[i].data)
	    j = arr[j].next;
	arr[i].next = arr[j].next;
	arr[j].next = i;
	printf("aaaa");
    }
}

void List_InsertSort(ListNodeType *arr)
{
    
}

void Print(SeqNodeType *arr)
{
    int i;
    for (i = 0; arr[i].next != 0; i = arr[i].next)
	printf("%d ", arr[arr[i].next].data);
    printf("\n");
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
    //Seq_InsertSort(seqarr, MAXSIZE);
    Print(seqarr);
    return 0;
}
