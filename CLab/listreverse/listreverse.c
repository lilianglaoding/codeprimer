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

void Destroy_LinkList(LinkList head)
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

void Reverse_LinkList1(LinkList head)
{
  LinkList p, q;
  p = head->next;
  head->next = NULL;
  while (p)
  {
    q = p;
    p = p->next;
    q->next = head->next;
    head->next = q;
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

void Delete_Repeat(LinkList head)
{
  LinkList p, q;
  LinkList ptemp;
  p = head->next;
  if (p == NULL)
    return ;

  while (p)
  {
    q = p;
    while (q->next)
    {
      //printf("p->data:%d,q->data:%d\n", p->data, q->next->data);
      if (p->data == q->next->data)
      {
	ptemp = q->next;
	q->next = ptemp->next;
	free(ptemp);
      }
      else
	q = q->next;
    }
    p = p->next;
    //if (!p)
    //break;
  }
}

int main()
{
  LinkList head;
  head = Init_LinkList();
  for (int i = 0; i < 4; ++i)
  {
    Insert_LinkList(head, i);
    Insert_LinkList(head, i);
  }
  printf("\n----------before reverse----------\n");
  Print_LinkList(head);
  Reverse_LinkList(head);
  printf("\n-----after reverse-----\n");
  Print_LinkList(head);
  Reverse_LinkList1(head);
  printf("\n--------after anoter reverse------\n");
  Print_LinkList(head);
  if (head->next == NULL)
    printf("head->next == NULL\n");
  Delete_Repeat(head);
  printf("\n--------ater delete repeat--------\n");
  Print_LinkList(head);
  printf("\n");
  Destroy_LinkList(head);

  return 0;
}
