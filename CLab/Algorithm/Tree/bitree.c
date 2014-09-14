#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

BiTee Init_BiTree()
{
  BiTree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->lchild = NULL;
  p->rchild = NULL;
  return p
}

BiTree Create_BiTree(datatype x, BiTree lbt, BiTree rbt)
{
  Biree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->lchild = lbt;
  p->rchild = rbt;
  p->data = x;
  return p;
}

