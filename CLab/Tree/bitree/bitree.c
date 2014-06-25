#include <stdio.h>
#include <stdlib.h>

#include "bitree.h"

#define MAXSIZE 2048

typedef struct
{
  BiTree link;
  int flag;
} stacktype;

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

BiTree InsertR(BiTree bt, int x, BiTree parent)
{
  if (parent == NULL)
    return NULL;
  BiTree p;
  if ((p = (BiTree)malloc(sizeof(BiTNode))) == NULL)
    return NULL;
  p->data = x;
  if (parent->rchild == NULL)
    parent->rchild = p;
  else
  {
    p->rchild = parent->rchild;
    parent->rchild = p;
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
  printf("%d ", x);
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
    Visit(Queue[front]->data);
    if (Queue[front]->lchild != NULL)
    {
      rear++;
      Queue[rear] = Queue[front]->lchild;
    }
    if (Queue[front]->rchild != NULL)
    {
      rear++;
      Queue[rear] = Queue[front]->rchild;
    }
  }
}

void NRPreOrder(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  BiTree stack[MAXSIZE];
  p = bt;
  int top;
  top = 0;
  while (!(p == NULL && top == 0))
  {
    while (p != NULL)
    {
      Visit(p->data);
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

void NRPreOrder1(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  BiTree stack[MAXSIZE];
  p = bt;
  int top;
  top = 0;
  while (!(p == NULL && top == 0))
  {
    if (p != NULL)
    {
      Visit(p->data);
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
    else
    {
      top--;
      p = stack[top];
      p = p->rchild;
    }
  }
}

void NRPostVisit(BiTree bt)
{
  if (bt == NULL)
    return ;
  BiTree p;
  stacktype stack[MAXSIZE];
  int top, sign;
  top = 0;
  p = bt;
  while (!(p == NULL && top == 0))
  {
    //if (p == NULL)
      //printf("aaaaa");
    while (p != NULL)
    {
      if (top <= MAXSIZE - 1)
      {
	stack[top].link = p;
	stack[top].flag = 1;
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
      p = stack[top].link;
      sign = stack[top].flag;
      if (sign == 1)
      {
	stack[top].link = p;
	stack[top].flag = 2;
	top++;
	p = p->rchild;
      }
      else
      {
	Visit(p->data);
	p = NULL;
      }
    }
  }
}

void NRPostVisit1(BiTree bt)
{
  stacktype stack[MAXSIZE];
  BiTree p;
  int top, sign;
  if (bt == NULL)
    return ;
  top = -1;
  p = bt;
  while (!(p == NULL && top == -1))
  {
    if (p != NULL)
    {
      top++;
      stack[top].link = p;
      stack[top].flag = 1;
      p = p->lchild;
    }
    else
    {
      p = stack[top].link;
      sign = stack[top].flag;
      top--;
      if (sign == 1)
      {
	top++;
	stack[top].link = p;
	stack[top].flag = 2;
	p = p->rchild;
      }
      else
      {
	Visit(p->data);
	p = NULL;
      }
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
    InsertR(bt, i, bt);
  }
  printf("\n=====================preorder======================\n");
  PreOrder(bt);
  //printf("\n=====================levelorder====================\n");
  //levelvisit(bt);
  printf("\n=====================NRPreOrder====================\n");
  NRPreOrder1(bt);
  printf("\n=====================PostOrder=====================\n");
  PostOrder(bt);
  printf("\n=====================NRPostorder===================\n");
  NRPostVisit(bt);
  printf("\n=====================NRPostOrder1===================\n");
  NRPostVisit1(bt);
  printf("\n=======================End=========================\n");
  Destroy(bt);
  return 0;
}
