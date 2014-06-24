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
  int front, sign;
  front = 0;
  p = bt;
  while (!(p == NULL && top == 0))
  {
    while (p != NULL)
    {
      if (top <= MAXSIZE - 1)
      {
	stack[top].link = p;
	stack[top].flag = 1;
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
      p = stack[top].link;
      sign = stack[top].flag;
      if (sign == 1)
      {
	top++;
	stack[top].link = p;
	stack[top].flag = 2;
	p = p->rchild;
      }
      else
      {
	visit(p->data);
	p = NULL;
      }
    }
  }
}

void NRPostVisit(BiTree bt)
{
  stacktype stack[MAXSIZE];
  BiTree p;
  int top, sign;
  if (bt == NULL)
    return ;
  top = -1;
  p = bt;
  while (!(p == NULL) && top == -1)
  {
    if (p != NULL)
    {
      top++;
      stack[top].link = p;
      stack[top].flag = 1;
      p = p->lchild;
    }
    else
    {
      p = stack[top].link;
      sign = stack[top].flag;
      top--;
      if (sign == 1)
      {
	top++;
	stack[top].link = p;
	stack[top].flag = 2;
	p = p->rchild;
      }
      else
      {
	visit(p->data);
	p = NULL;
      }
    }
  }
}
