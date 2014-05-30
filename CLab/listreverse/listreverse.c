#include <stdio.h>
#include <stdlib.h>

#include "listreverse.h"

LinkList Init_LinkList()
{
  LinkList head;
  head = (LNode *)malloc(sizeof(LNode));
  if (head == NULL)
    return NULL;
  head->next = NULL;
      
  return head;
}

void Insert_LinkList(LinkList head, int x)
{
  LinkList p;
  p = (LNode *)malloc(sizeof(LNode));
  p->data = x;
  p->next = head->next;
  head->next = p;
}

void Destroy(LinkList head)
{
  LinkList p, q;
  p = head;
  while (p)
  {
    q = p;
    free(q);
    p = p->next;
  }
}

void Reverse_LinkList(LinkList head)
{
  LinkList p = head->next;
  LinkList q = p->next;
  while (q != NULL)
  {
    p->next = q->next;
    q->next = head->next;
    head->next = q;
    q = p->next;
  }
}

void Print_LinkList(LinkList head)
{
  LinkList p = head->next;
  while (p)
  {
    printf("%d\t", p->data);
    p = p->next;
  }
}

int main()
{
  LinkList head;
  head = Init_LinkList();
  for (int i = 0; i < 10; ++i)
    Insert_LinkList(head, i);
  printf("\n-----before reverse-----\n");
  Print_LinkList(head);
  Reverse_LinkList(head);
  printf("\n-----after reverse-----\n");
  Print_LinkList(head);
  printf("\n");
  Destroy(head);

  return 0;
}