#include <stdio.h>
#include <stdlib.h>

#include "avltree.h"

#define LH -1
#define EH 0
#define RH 1

void R_Rotate(NodeType **p)
{
  NodeType *q;
  q = (*p)->lchild;
  (*p)->lchild = q->rchild;
  q->rchild = *p;
  *p = q;
}

void L_Rotate(NodeType **p)
{
  NodeType *q;
  q = (*p)->rchild;
  *p->rchild = q->lchild;
  q->lchild = *p;
  *p = q;
}

void LeftBalance(NodeType **p)
{
  NodeType *q;
  int i, j, k;
}
