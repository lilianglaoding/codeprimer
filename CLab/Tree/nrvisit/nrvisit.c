#include <stdio.h>
#include <stdlib.h>

#include "nrvisit.h"

#define MAXSIZE 2048

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


