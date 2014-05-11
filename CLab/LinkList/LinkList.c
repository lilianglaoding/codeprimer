#include <stdio.h>
#include <stdlib.h>

#include "LinkList.h"

#define FLAG 65535


LinkList Creat_LinkList_front()
{
  int x;
  LinkList *p = NULL;
  LinkList *ptemp = NULL;
  scanf("%d", &x);
  while (x != FLAG)
  {
    ptemp = (LNode *)malloc(sizeof(LNode));
    ptemp->data = x;
    ptemp->next = p;
    p = ptemp;
    scanf("%d", &x);
  }

  printf("front input finished");

  return L;
}

LinkList Creat_LinkList_rear()
{
  int x;
  LinkList p = NULL;
  LinkList rear = NULL;
  LinkList *ptemp = NULL;
  scanf("%d", &x);
  while (x != FLAG)
  {
    ptemp = (LNode *)malloc(sizeof(LNode));
    ptemp->data = x;
    if (p == NULL)
      p = ptemp;
    else
    {
      rear->next = ptemp;
    }
    rear = ptemp;
    scanf("%d", &x);
  }
  if (rear)
    rear->next = NULL;

  printf("rear input finished");

  return p;
}

int Length_LinkList(LinkList L)
{
  int length = 0;
  LinkList p = L;
  while (p)
  {
    ++length;
    p = p->next;
  }

  return length;
}

//get by location
LinkList Get_LinkList_Location(LinkList L, int loc)
{
  int i = 0;
  LinkList ptemp = L;

  while (ptemp != NULL && i < loc)
  {
    ptemp = ptemp->next;
    ++i;
  }

  return ptemp;
}

//get by value
LinkList Get_LinkList_Value(LinkList L, int x)
{
  LinkList ptemp = L;

  while (ptemp != NULL && x != ptemp->data)
  {
    ptemp = ptemp->next;
  }

  return ptemp;
}

int Delete_LinkList_value(LinkList L, int x)
{
  LinkList ptemp = L;
  if (ptemp == NULL)
    return 0;
  while (ptemp->next != NULL && ptemp->next->data != x)
  {
    ptemp->next = next;
  }
  if (ptemp->next == NULL)
    return 0;
  else
    return 1;
}

void Delete_LinkList_location(LinkList L, int loc)
{
  
}
