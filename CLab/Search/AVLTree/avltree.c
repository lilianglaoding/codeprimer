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
  NodeType *lp;
  NodeType *rd;
  lp = (*p)->lchild;
  switch ((*p)->bf)
  {
  case LH:
    (*p)->bf = lp->bf = EH;
    L_Rotate(p);
    break;
  case EH:
    (*p)->bf = LH;
    *paller = true;
    break;
  case RH:
    rd = lp->rchild;
    switch (rd->bf)
    {
    case LH:
      (*p)->bf = RH;
      lp->bf = EH;
      break;
    case EH:
      (*p)->bf = lp->bf = EH;
      break;
    case RH:
      (*p)->bf = EH;
      lp->bf = LH;
      break;
    }
    rd->bf = EH;
    L_Rotate(&((*p)->lchild));
    R_Rotate(p);
  }
}

