#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

int Initiate(BiTree *bt)
{
  *bt = (BiTNode *)malloc(sizeof(BiTNode));
  if (*bt == NULL)
    return 0;
  (*bt)->lchild = NULL;
  (*bt)->rchild = NULL;
  return 1;
}

BiTree Create(int x, BiTree lbt, BiTree rbt)
{
  BiTree p;
  p = (BiTNode *)malloc(sizeof(BiTNode));
  if (p == NULL)
    return NULL;
  p->data = x;
  p->lchild = lbt;
  p->rchild = rbt;
  return p;
}

BiTree InsertL(BiTree bt, int x, BiTree parent)
{
  if (parent == NULL)
    return NULL;
  BiTree p;
  if((p = (BiTNode *)malloc(sizeof(BiTNode))) == NULL)
    return NULL;
  if (parent->lchild == NULL)
    parent->lchild = p;
  else
  {
    p->lchild = parent->lchild;
    parent->lchild = p;
  }
  return bt;
}

void Destroy(BiTree bt)
{
  if (bt == NULL)
    return ;
  Destroy(bt->lchild);
  Destroy(bt->rchild);
  //Destroy(bt);
  free(bt);
}

BiTree DeleteL(BiTree bt, BiTree parent)
{
  if (parent == NULL || parent->lchild == NULL)
    return NULL;
  BiTree p;
  p = parent->lchild;
  parent->lchild = NULL;
  Destroy(p);
  return bt;
}

void Visit(int x)
{
  printf("%d\t", x);
  //printf("\n");
}

void PreOrder(BiTree bt)
{
  if (bt == NULL)
    return ;
  Visit(bt->data);
  PreOrder(bt->lchild);
  PreOrder(bt->rchild);
}

void InOrder(BiTree bt)
{
  if (bt == NULL)
    return ;
  InOrder(bt->lchild);
  Visit(bt->data);
  InOrder(bt->rchild);  
}

void PostOrder(BiTree bt)
{
  if (bt == NULL)
    return ;
  PostOrder(bt->lchild);
  PostOrder(bt->rchild);
  Visit(bt->data);
}

int main()
{
  BiTree bt;
  Initiate(&bt);
  return 0;
}
