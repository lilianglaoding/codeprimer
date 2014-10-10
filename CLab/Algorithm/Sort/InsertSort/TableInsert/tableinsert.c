#include <stdio.h>
#include <stdlib.h>

#include "tableinsert.h"

#define MAXSIZE 10

//arr[0] is used as head pointer

void Print(SeqNodeType *arr);

void Seq_InsertSort(SeqNodeType *arr, int n)
{
    int i, j;
    int minloc = 0, maxloc = 0;
    arr[0].next = 1;
    arr[1].next = 0;
    for (i = 2; i < n; i = i + 1)
    {
	j = 0;
	while (arr[j].next != 0 && arr[arr[j].next].data < arr[i].data)
	    j = arr[j].next;
	arr[i].next = arr[j].next;
	arr[j].next = i;
    }
}

ListNodeType *Create_List()
{
    int x = 0;
    ListNodeType *s;
    ListNodeType *head = (ListNodeType *)malloc(sizeof(ListNodeType));
    head->next = NULL;
    while (x != 9)
    {
	s = (ListNodeType *)malloc(sizeof(ListNodeType));
	s->data = x;
	s->next = head->next;
	head->next = s;
	x = x + 1;
    }
    return head;
}

void List_InsertSort(ListNodeType *head)
{
    ListNodeType *p = head;
    ListNodeType *q = p->next->next;
    ListNodeType *tmpptr;
    p->next->next = NULL;
    while (q != NULL)
    {
	tmpptr = q->next;
	p = head;
	while (p->next != NULL && p->next->data < q->data)
	    p = p->next;
	q->next = p->next;
	p->next = q;
	q = tmpptr;
    }
}

void Seq_Print(SeqNodeType *arr)
{
    int i;
    for (i = 0; arr[i].next != 0; i = arr[i].next)
	printf("%d ", arr[arr[i].next].data);
    printf("\n");
}

void List_Print(ListNodeType *head)
{
    ListNodeType *p = head->next;
    while (p != NULL)
    {
	printf("%d ", p->data);
	p = p->next;
    }
    printf("\n");
}

int main()
{
    int i;
    SeqNodeType seqarr[MAXSIZE];
    ListNodeType *head;
    for (i = 0; i < MAXSIZE; i++)
    {
	seqarr[i].data = MAXSIZE - i - 1;
	seqarr[i].next = i + 1;
    }
    seqarr[MAXSIZE - 1].next = 0;
    head = Create_List();
    printf("---------------array before sorted-------------------\n");
    Seq_Print(seqarr);
    printf("---------------array after sorted--------------------\n");
    Seq_InsertSort(seqarr, MAXSIZE);
    Seq_Print(seqarr);
    printf("---------------list before sorted--------------------\n");
    List_Print(head);
    List_InsertSort(head);
    printf("---------------list after sorted---------------------\n");
    List_Print(head);
    return 0;
}
