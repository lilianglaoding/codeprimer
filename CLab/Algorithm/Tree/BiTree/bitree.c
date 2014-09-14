#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

BiTree Init_BiTree()
{
  BiTree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->lchild = NULL;
  p->rchild = NULL;
  return p;
}

BiTree Create_BiTree(datatype x, BiTree lbt, BiTree rbt)
{
  BiTree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->lchild = lbt;
  p->rchild = rbt;
  p->data = x;
  return p;
}

BiTree InsertL_BiTree(BiTree bt, datatype x, BiTree parent)
{
  if (bt == NULL || parent == NULL)
    return NULL;
  BiTree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->data = x;
  p->lchild = parent->lchild;
  p->rchild = NULL;
  parent->lchild = p;
  return p;
}

BiTree InsertR_BiTree(BiTree bt,datatype x, BiTree parent)
{
  if (bt == NULL || parent == NULL)
    return NULL;
  BiTree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->data = x;
  p->rchild = parent->rchild;
  p->lchild = NULL;
  parent->rchild = p;
  return p;
}

void Destroy_BiTree(BiTree bt)
{
  if (bt == NULL)
    return ;
  Destroy_BiTree(bt->lchild);
  Destroy_BiTree(bt->rchild);
  free(bt);
}

BiTree DeleteL_BiTree(BiTree bt, BiTree parent)
{
  if (bt == NULL || parent == NULL || parent->lchild == NULL)
    return NULL;
  Destroy_BiTree(parent->lchild);
  parent->lchild = NULL;
  return  bt;
}

BiTree DeleteR_BiTree(BiTree bt, BiTree parent)
{
  if (bt == NULL || parent == NULL || parent->rchild == NULL)
    return NULL;
  Destroy_BiTree(parent->rchild);
  parent->rchild = NULL;
  return bt;
}

void Visit_BiTree(BiTree p)
{
  printf("%d ", p->data);
}

void PreOrder_BiTree(BiTree bt)
{
  if (bt == NULL)
    return ;
  Visit_BiTree(bt);
  PreOrder_BiTree(bt->lchild);
  PreOrder_BiTree(bt->rchild);
}

void InOrder_BiTree(BiTree bt)
{
  if (bt == NULL)
    return ;
  InOrder_BiTree(bt->lchild);
  Visit_BiTree(bt);
  InOrder_BiTree(bt->rchild);
}

void PostOrder_BiTree(BiTree bt)
{
  if (bt == NULL)
    return ;
  PostOrder_BiTree(bt->lchild);
  PostOrder_BiTree(bt->rchild);
  Visit_BiTree(bt);
}

int main()
{
  return 0;
}
