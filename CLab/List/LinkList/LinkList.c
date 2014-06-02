#include <stdio.h>
#include <stdlib.h>

#include "LinkList.h"

#define FLAG 65535

//notice: this program count from 1, not 0

LinkList Creat_LinkList_front()
{
  int x;
  LinkList p = NULL;
  LinkList ptemp = NULL;
  scanf("%d", &x);
  while (x != FLAG)
  {
    ptemp = (LNode *)malloc(sizeof(LNode));
    ptemp->data = x;
    ptemp->next = p;
    p = ptemp;
    scanf("%d", &x);
  }

  printf("-----front input finished-----\n");

  return p;
}

LinkList Creat_LinkList_rear()
{
  int x;
  LinkList p = NULL;
  LinkList rear = NULL;
  LinkList ptemp = NULL;
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

  printf("-----rear input finished-----\n");

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

//get by location, count from 1
LinkList Get_LinkList_Location(LinkList L, int loc)
{
  int i = 1;
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

//insert after the loc
int Insert_LinkList(LinkList L, int loc, int i)
{
  LinkList ptr;
  LinkList ptemp;
  ptemp = (LNode *)malloc(sizeof(LNode));
  ptemp->data = i;
  ptemp->next = NULL;
  if (L == NULL)
  {
    L = ptemp;
    return 1;
  }
  ptr = Get_LinkList_Location(L, loc);
  if (ptr == NULL)
  {
    free(ptemp);
    return 0;
  }
  ptemp->next = ptr->next;
  ptr->next = ptemp;
  return 1;
}

//delete by value
int Delete_LinkList_Value(LinkList *L, int x)
{
  LinkList ptemp = *L;
  LinkList ptr = NULL;
  if (ptemp == NULL)
    return 0;
  if (ptemp->data == x)
  {
    *L = ptemp->next;
    free(ptemp);
    return 1;
  }
  while (ptemp->next != NULL && ptemp->next->data != x)
  {
    ptemp = ptemp->next;
  }
  if (ptemp->next == NULL)
    return 0;
  else
  {
    ptr = ptemp->next;
    ptemp->next = ptemp->next->next;
    free(ptr);
    return 1;
  }
}


//delete by location, count from 1
int Delete_LinkList_Location(LinkList *L, int loc)
{
  LinkList ptemp = *L;
  LinkList ptr = NULL;
  int i = 0;
  if (!ptemp)
    return 0;
  if (loc == 1)
  { 
    *L = ptemp->next;
    free(ptemp);
    return 1;
  }
  i = 1;
  while (ptemp->next != NULL && i < loc - 1)
  {
    ptemp = ptemp->next;
    ++i;
  }
  if (ptemp->next == NULL)
    return 0;
  else
  {
    ptr = ptemp->next;
    ptemp->next = ptr->next;
    free(ptr);
    return 1;
  }
}

//can't delete head, deleting head will cause core dump
/*int Delete_LinkList_Location(LinkList L, int loc)
{
  LinkList ptemp = NULL;
  LinkList ptr = NULL;
  ptemp = Get_LinkList_Location(L, loc - 1);
  ptr = ptemp->next;
  ptemp->next = ptr->next;
  free(ptr);
  return 1;
  }*/

void Output_LinkList(LinkList L)
{
  LinkList ptemp;
  ptemp = L;
  while (ptemp != NULL)
  {
    printf("data:%d\t", ptemp->data);
    ptemp = ptemp->next;
  }
  printf("\n");
}

int main()
{
  LinkList L1, L2, ptr;
  L1 = Creat_LinkList_front();
  Output_LinkList(L1);
  //L2 = Creat_LinkList_rear();
  //Output_LinkList(L2);
  int ret = 0;
  ret = Insert_LinkList(L1, 10, 11);
  Output_LinkList(L1);
  if (ret == 0)
    printf("insert fail\n");
  else
    printf("insert success\n");
  ret = Delete_LinkList_Value(&L1, 1);
  Output_LinkList(L1);
  if (ret == 0)
    printf("delete fail\n");
  else
    printf("delete success\n");
  ret = Delete_LinkList_Location(&L1, 1);
  Output_LinkList(L1);
  if (ret == 0)
    printf("delete fail\n");
  else
    printf("delete success\n");
  ptr = Get_LinkList_Value(L1, 2);
  if (ptr)
    printf("%d\n", ptr->data);
  else
    printf("didn't find the value\n");
  ptr = Get_LinkList_Location(L1, 3);
  printf("%d\n", ptr->data);
  return 0;
}
