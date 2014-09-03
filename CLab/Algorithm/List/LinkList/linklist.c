#include <stdio.h>
#include <stdlib.h>

#include "linklist.h"

#define FLAG 65535

// list has head node
LinkList Init_LinkList()
{
  LinkList L;
  if (!(L = (LNode *)malloc(sizeof(LNode))))
    return NULL;
  L->next = NULL;
  return L;
}

int Create_LinkList(LinkList L)
{
  if (L == NULL)
    return 0;
  LinkList head, p;
  head = L;
  datatype x;
  scanf("%d", &x);
  while (x != FLAG)
  {
    p = (LNode *)malloc(sizeof(LNode));
    if (p == NULL)
      return 0;
    p->data = x;
    p->next = head->next;
    head->next = p;
    scanf("%d", &x);
  }
  return 1;
}

int Create_LinkList1(LinkList L)
{
  if (L == NULL)
    return 0;
  LinkList head, rear, p;
  head = L;
  rear = L;
  int x;
  scanf("%d", &x);
  while (x != FLAG)
  {
    p = (LNode *)malloc(sizeof(LNode));
    if (p == NULL)
      return 0;
    p->data = x;
    p->next = NULL;
    rear->next = p;
    rear = p;
    scanf("%d", &x);
  }
  return 1;
}

int Length_LinkList(LinkList L)
{
  if (L == NULL)
    return 0;
  int len = 0;
  LinkList p = L->next;
  while (p)
  {
    len++;
    p = p->next;
  }
  return len;
}

LinkList Get_LinkList(LinkList L, datatype x)
{
  if (L == NULL)
    return NULL;
  LinkList p;
  p = L->next;
  while (p != NULL && p->data != x)
    p = p->next;
  return p;
}

LinkList Locate_LinkList(LinkList L, int i)
{
  if (L == NULL)
    return NULL;
  int j = 1;
  LinkList p = L->next;
  while (j < i && p != NULL)
  {
    p = p->next;
    j++;
  }
  if (j < i)
    return NULL;
  else
    return p;
}

LinkList Insert_LinkList(LinkList L, int loc, datatype x)
{
  if (L == NULL)
    return NULL;
  int j = 1;
  
}
