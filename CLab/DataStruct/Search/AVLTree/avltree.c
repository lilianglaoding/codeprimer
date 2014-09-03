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
    R_Rotate(p);
    break;
  case EH:
    (*p)->bf = LH;
    *taller = true;
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

int InsertAVL(NodeType **t, datatype e, bool *taller)
{
  if (!(*t))
  {
    (*t) = (NodeType *)malloc(sizeof(NodeType));
    (*t)->data = e;
    (*t)->lchild = NULL;
    (*t)->rchild = NULL;
    (*t)->bf = EH;
    *taller = true;
  }
  else
  {
    if (e.key == (*t)->data.key)
    {
      *taller = false;
      return 0;
    }
    if (e.key < (*t)->data.key)
    {
      if (!InsertAVL(&((*t)->lchild), e, &taller))
	return 0;
      if (*taller)
	switch ((*t)->bf)
	{
	case LH:
	  LeftBalance(t);
	  *taller = false;
	  break;
	case EH:
	  (*t)->bf = LH;
	  *taller = true;
	  break;
	case RH:
	  (*t)->bf = EH;
	  *taller = false;
	  break;
	}
    }
    else
    {
      if (!InsertAVL(&((*t)->rchild), e, &taller))
	return 0;
      if (*taller)
	switch ((*t)->bf)
	{
	case LH:
	  (*t)->bf = EH;
	  *taller = false;
	  break;
	case EH:
	  (*t)->bf = RH;
	  *taller = true;
	  break;
	case RH:
	  RightBalance(t);
	  *taller = false;
	  break;
	}
    }
  }
  return 1;
}
