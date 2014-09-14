#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

#define FLAG 10000

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

void Create_BiTree(BiTree *bt)
{
  datatype x;
  scanf("%d", &x);
  if (x == FLAG)
    *bt = NULL;
  else
  {
    *bt = (BiTNode *)malloc(sizeof(BiTNode));
    if (*bt == NULL)
      return ;
    (*bt)->data = x;
    Create_BiTree(&((*bt)->lchild));
    Create_BiTree(&((*bt)->rchild));
  }
  return ;
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

BiTree Search_BiTree(BiTree bt, datatype x)
{
  BiTree p;
  if (bt == NULL)
    return NULL;
  else if (bt->data == x)
  {  
    Search_BiTree(bt->lchild);
    Search_BiTree(bt->rchild);
  } 
}

int main()
{
  BiTree bt = NULL;
  Create_BiTree(&bt);
  printf("----------------Visit Bitree:------------\n");
  PreOrder_BiTree(bt);
  printf("\n");
  Destroy_BiTree(bt);
  return 0;
}
