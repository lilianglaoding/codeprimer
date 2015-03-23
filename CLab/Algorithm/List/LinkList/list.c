#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NodeType;

void CreateList(NodeType **p, int x)
{
    (*p) = (NodeType *)malloc(sizeof(NodeType));
    (*p)->data = x;
    (*p)->next = NULL;
}

void InsertNode(NodeType **p, int i, int x)
{
    if (i < 0 || !(*p))
	return ;
    int j = 0;
    NodeType **curr, *entry, *s;
    curr = p;
    while (j < i && *curr)
    {
	entry = *curr;
	curr = &entry->next;
	j++;
    }
    if (*curr)
    {
	s = (NodeType *)malloc(sizeof(NodeType));
	s->data = x;
	s->next = *curr;
	*curr = s;
    }
}

void PrintList(NodeType *p)
{
    while (p)
    {
	printf("%d ", p->data);
	p = p->next;
    }
    printf("\n");
}

void DestroyList(NodeType *p)
{
    NodeType *q;
    q = p;
    while (q)
    {
	p = q->next;
	free(q);
	q = p;
    }
}

void ReverseList(NodeType **p)
{
    NodeType **curr, *entry, *q;
    entry = (*p)->next;
    (*p)->next = NULL;
    while (entry)
    {
	q = entry->next;
	entry->next = *p;
	(*p) = entry;
	entry = q;
    }
}

void SortUpList(NodeType **p)
{
    NodeType **curr, *entry, *ptr, *ptemp;
    curr = p;
    entry = (*curr)->next;
    (*p)->next = NULL;
    while (entry)
    {
	ptr = entry->next;
	while ((*curr) && (*curr)->data < entry->data)
	{
	    ptemp = *curr;
	    curr = &ptemp->next;
	}
	entry->next = *curr;
	*curr = entry;
	entry = ptr;
	curr = p;
    }
}

int main()
{
    int i;
    NodeType *p;
    CreateList(&p, 10);
    for (i = 0; i < 10; i++)
	InsertNode(&p, i, i);
    PrintList(p);
    ReverseList(&p);
    PrintList(p);
    SortUpList(&p);
    PrintList(p);
    DestroyList(p);
    return 0;
}
