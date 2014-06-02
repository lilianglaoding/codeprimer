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

LinkList Merge_LinkList(LinkList head1, LinkList head2)
{
  LinkList p1 = head1->next;
  LinkList p2 = head2->next;
  LinkList ptemp, rear;
  free(head2);
  head1->next = NULL;
  rear = head1;
  while (p1!= NULL && p2 != NULL)
  {
    if (p1->data < p2->data)
    {
      ptmep = p1;
      p1->next = ptemp->next;
      head1->next = ptemp;
      ptemp->next = head1->next;
    }
    else
    {
      ptemp = p2;
      p2->next = ptemp->next;
      head1->next = ptemp;
      ptemp->next = head1->next;
    }
  }
  return head1;
}

int main()
{
  LinkList head;
  LinkList head2;
  head = Init_LinkList();
  head2 = Init_LinkList();
  for (int i = 0; i < 4; ++i)
  {
    Insert_LinkList(head, i);
    Insert_LinkList(head, i);
    Insert_LinkList(head2, i);
    Insert_LinkList(head2, i);
  }
  printf("\n----------before reverse----------\n");
  Print_LinkList(head);
  printf("\n");
  Print_LinkList(head2);
  Reverse_LinkList(head);
  Reverse_LinkList(head2);
  printf("\n-----after reverse-----\n");
  Print_LinkList(head);
  printf("\n");
  Print_LinkList(head2);
  //Reverse_LinkList1(head);
  //printf("\n--------after anoter reverse------\n");
  //Print_LinkList(head);
  //if (head->next == NULL)
  //  printf("head->next == NULL\n");
  Delete_Repeat(head);
  Delete_Repeat(head2);
  printf("\n--------ater delete repeat--------\n");
  Print_LinkList(head);
  printf("\n");
  Print_LinkList(head2);
  printf("\n");
  head = Merge_LinkList(head, head2);
  printf("\n---------after merge--------------\n");
  Print_LinkList(head);
  Destroy_LinkList(head);

  return 0;
}
