#include <stdio.h>
#include <stdlib.h>

#define FLAG 65535

typedef struct node
{
    int data;
    struct node *pre;
    struct node *next;
} NodeType;

void destroy(NodeType *head)
{
    NodeType *p = head;
    while (p)
    {
	head = p->next;
	free(p);
	p = head;
    }
}

void create(NodeType **head)
{
    int x;
    NodeType *s;
    scanf("%d", &x);
    *head = (NodeType *)malloc(sizeof(NodeType));
    (*head)->data = x;
    (*head)->pre = NULL;
    (*head)->next = NULL;
    scanf("%d", &x);
    while (x != FLAG)
    {
	s = (NodeType *)malloc(sizeof(NodeType));
	s->data = x;
	s->next = *head;
	s->pre = NULL;
	(*head)->pre = s;
	*head = s;
	scanf("%d", &x);
    }
}

void print(NodeType *head)
{
    while (head)
    {
	printf("%d ", head->data);
	head = head->next;
    }
    printf("\n");
}

void insert(NodeType **head, int x)
{
    NodeType **curr = head;
    NodeType *s, *entry = NULL;
    while (*curr != NULL && (*curr)->data <= x)
    {
	entry = *curr;
	curr = &(entry->next);
    }
    s = (NodeType *)malloc(sizeof(NodeType));
    s->data = x;
    if (*curr)
    {
	(*curr)->pre->next = s;
	(*curr)->pre = s;
    }
    s->pre = entry;
    s->next = *curr;
    *curr = s;
}

int main()
{
    NodeType *head;
    create(&head);
    print(head);
    insert(&head, 3);
    print(head);
    destroy(head);
    return 0;
}
