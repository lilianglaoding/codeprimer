#include <stdio.h>
#include <stdlib.h>

#include "linkstack.h"

LinkStack *Init_Stack()
{
  return NULL;
}

int Empty_Stack(LinkStack *top)
{
  if (top == NULL)
    return 1;
  else
    return 0;
}

LinkStack *Pop_Stack(LinkStack *top)
{
  if (Empty_Stack(top))
    return NULL;
  LinkStack q = top;
  top = top->next;
  free(q);
  return top;
}

LinkStack *Push_Stack(LinkStack *top, datatype x)
{
  LinkStack *s;
  s = (LinkStack *)malloc(sizeof(LinkStack));
  if (s == NULL)
    return top;
  s->data = x;
  s->next = top;
  top = s;
  return top;
}

void Destroy_Stack(LinkStack *top)
{
  LinkStack *p;
  while (p)
  {
    p = top;
    top = top->next;
    free(p);
  }
}

void Print_Stack(LinkStack *top)
{
  if (top == NULL)
    return;
  LinkStack *p = top;
  while (p)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

