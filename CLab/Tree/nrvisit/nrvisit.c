#include <stdio.h>
#include <stdlib.h>

#include "nrvisit.h"

#define MAXSIZE 2048

typedef struct
{
  BiTree link;
  int flag;
} stacktype;

void NRPreOrder(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  BiTree stack[MAXSIZE];
  p = bt;
  int top;
  top = 0;
  while (top != 0)
  {
    while (p != NULL)
    {
      visit(p->data);
      if (top <= MAXSIZE - 1)
      {
	stack[top] = p;
	top++;
	p = p->lchild;
      }
      else
      {
	printf("stack is full\n");
	return ;
      }
    }
    if (top <= 0)
      return ;
    else
    {
      top--;
      p = stack[top];
      p = p->rchild;
    }
  }
}

void NRInOrder(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  BiTree stack[MAXSIZE];
  int front = 0;
  p = bt;
  
  while (!(p == NULL && top == 0))
  {
    while (p != NULL)
    {
      if (top <= MAXSIZE - 1)
      {
	stack[top] = p;
	top++;
	p = p->lchild;
      }
      else
      {
	printf("stack is full\n");
	return ;
      }
    }
    if (top <= 0)
      return ;
    else
    {
      top--;
      p = stack[top];
      visit(p->data);
      p = p->rchild;
    }
  }
}

void NRPostVisit(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  stacktype stack[MAXSIZE];
  int front;
  front = 0;
  while (!(p == NULL && top == 0))
  {
    
  }
}
