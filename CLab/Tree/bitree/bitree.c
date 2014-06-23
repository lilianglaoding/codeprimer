#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

#define MAXSIZE 2048

int Initiate(BiTree *bt)
{
  *bt = (BiTNode *)malloc(sizeof(BiTNode));
  if (*bt == NULL)
    return 0;
  (*bt)->data = 65535;
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
  //after malloc, p->data = 0, lchild and rchild is NULL
  if((p = (BiTNode *)malloc(sizeof(BiTNode))) == NULL)
    return NULL;
  p->data = x;
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
  printf("\n");
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

void Is_Success(int flag)
{
  if (flag)
    printf("operator success!\n");
  else
    printf("operator failuer!\n");
}

void levelvisit(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree Queue[MAXSIZE];
  int front, rear;
  front = -1;
  rear = 0;
  Queue[rear] = bt;
  while (front != rear)
  {
    ++front;
    visit(bt);
    if (Queue[front]->lchild != NULL)
    {
      rear++;
      Queue[rear] = Queue[front]->lchild;
    }
    if (Queue[front]->rchild != NULL)
    {
      rear++;
      Queue[rear] = Queue[front]->rchild
    }
  }
}

int main()
{
  BiTree bt;
  //BiTree pt;
  Initiate(&bt);
  for (int i = 0; i < 10; ++i)
  {
    InsertL(bt, i, bt);
  }
  PreOrder(bt);
  Destroy(bt);
  return 0;
}
