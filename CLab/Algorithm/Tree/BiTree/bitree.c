#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

#define MAXSIZE 255
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

void LevelOrder_BiTree(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  BiTree Queue[MAXSIZE];
  int front = -1, rear = 0;
  Queue[rear] = bt;
  while (front != rear)
  {
    p = Queue[++front];
    Visit_BiTree(p);
    if (p->lchild)
      Queue[++rear] = p->lchild;
    if (p->rchild)
      Queue[++rear] = p->rchild;
  }
}

void NRPreOrder_BiTree(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree Stack[MAXSIZE];
  int top = -1;
  BiTree p;
  Stack[++top] = bt;
  while (top != -1)
  {
    p = Stack[top--];
    Visit_BiTree(p);
    while (p)
    {
      if (p->lchild != NULL)
      {
	Visit_BiTree(p->lchild);
	Stack[++top] = p->lchild;
	p = p->lchild;
      }
      else
      {
	p = Stack[top--];
	p = p->rchild;
	//Visit_BiTree(p);
      }
    }
  }
}

BiTree Search_BiTree(BiTree bt, datatype x)
{
  BiTree p;
  if (bt)
  {
    if (bt->data == x)
      return bt;
    else
    {
      if (bt->lchild)
      {
	p = Search_BiTree(bt->lchild, x);
	if (p)
	  return p;
      }
      if (bt->rchild)
      {
	p = Search_BiTree(bt->rchild, x);
	if(p)
	  return p;
      }
    }
  }
  return NULL;
}

BiTree Search1_BiTree(BiTree bt, datatype x)
{
  BiTree p;
  if (bt == NULL)
    return NULL;
  else
  {
    if (bt->data == x)
      return bt;
    else
    {
      p = Search1_BiTree(bt->lchild, x);
      if (p)
	return p;
      p = Search1_BiTree(bt->rchild, x);
      if (p)
	return p;
    }
  }
  return NULL;
}

int CountLeaf1_BiTree(BiTree bt)
{
  int count = 0;
  if (bt == NULL)
    return 0;
  if (bt->lchild == NULL && bt->rchild == NULL)
    return 1;
  return (CountLeaf1_BiTree(bt->lchild) + CountLeaf1_BiTree(bt->rchild));
}

int main()
{
  BiTree bt = NULL;
  BiTree p;
  Create_BiTree(&bt);
  printf("----------------Visit Bitree:------------\n");
  PreOrder_BiTree(bt);
  printf("\n");
  LevelOrder_BiTree(bt);
  printf("\n");
  NRPreOrder_BiTree(bt);
  printf("\n");
  int count = CountLeaf1_BiTree(bt);
  printf("%d leaf int the tree.\n", count);
  p = Search1_BiTree(bt, 7);
  if (p)
    printf("data found: %d\n", p->data);
  Destroy_BiTree(bt);
  return 0;
}
