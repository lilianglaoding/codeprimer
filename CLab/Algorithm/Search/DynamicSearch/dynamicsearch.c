// Binary Sort Tree

#include <stdio.h>
#include <stdlib.h>

#include "dynamicsearch.h"

// *p points to the parent node, *q points to the found node
int BiTree_Search(NodeType *t, NodeType **p, NodeType **q, datatype kx)
{
  int flag = 0;
  *q = t;
  while ((*q) != NULL)
  {
    if ((*q)->data < kx)
    {
      *p = *q;
      *q = (*q)->rchild;
    }
    else if ((*q)->data > kx)
    {
      *p = *q;
      *q = (*q)->lchild;
    }
    else
    {
      flag = 1;
      break;
    }
  }
  return flag;
}

void Pre_Order(NodeType *t)
{
  if (t == NULL)
    return ;
  printf("%d ", t->data);
  Pre_Order(t->lchild);
  Pre_Order(t->rchild);
}

void In_Order(NodeType *t)
{
  if (t == NULL)
    return ;
  In_Order(t->lchild);
  printf("%d ", t->data);
  In_Order(t->rchild);
}

int BiTree_Search1(NodeType *t, NodeType **p, NodeType **q, datatype kx)
{
  *q = t;
  while ((*q) != NULL && (*q)->data != kx)
  {
    if ((*q)->data < kx)
    {
      *p = *q;
      *q = (*q)->rchild;
    }
    else
    {
      *p = *q;
      *q = (*q)->lchild;
    }
  }
  if ((*q)->data == kx)
    return 1;
  else
    return 0;
}

int Insert_Node(NodeType **t, datatype kx)
{
  NodeType *s, *p, *q;
  p = *t;
  int flag = 0;
  if (!BiTree_Search(*t, &p, &q, kx))
  {
    s = (NodeType *)malloc(sizeof(NodeType));
    s->data = kx;
    s->lchild = NULL;
    s->rchild = NULL;
    flag = 1;
    if (!p)
      *t = s;
    else
    {
      if (kx < p->data)
	p->lchild = s;
      else
	p->rchild = s;
    }
  }
  return flag;
}

void Destroy_BiTree(NodeType *t)
{
  if (t == NULL)
    return ;
  Destroy_BiTree(t->lchild);
  Destroy_BiTree(t->rchild);
  free(t);
  return ;
}

int Delete_Node(NodeType *t, datatype kx)
{
  NodeType *p, *q, *ptemp;
  int flag;
  if (!BiTree_Search(t, &p, &q, kx))
    return 0;
  if (p->lchild == q)
    flag = 0;
  else
    flag = 1;
  if (q->lchild == NULL && q->rchild == NULL)
  {
    if (flag == 0)
      p->lchild = NULL;
    else
      p->rchild = NULL;
    free(q);
  }
  else if (q->lchild == NULL && q->rchild != NULL)
  {
    if (flag == 0)
      p->lchild = q->rchild;
    else
      p->rchild = q->rchild;
    free(q);
  }
  else if (q->lchild != NULL && q->rchild == NULL)
  {
    if (flag == 0)
      p->lchild = q->lchild;
    else
      p->rchild = q->lchild;
    free(q);
  }
  else
  {
    ptemp = q->rchild;
    while (ptemp->lchild != NULL)
      ptemp = ptemp->lchild;
    ptemp->lchild = q->lchild;
    if (flag == 0)
      p->lchild = q->rchild;
    else
      p->rchild = q->rchild;
  }
  return 1;
}

int Delete_Node1(NodeType **t, datatype kx)
{
  int flag = 0;
  NodeType *p = *t, *q, **temp, *s;
  if (BiTree_Search(*t, &p, &q, kx))
  {
    flag = 1;
    if (p == q)
      temp = t;
    else
    {
      temp = &(p->lchild);
      if (p->rchild == q)  
	temp = &(p->rchild);
    }
    if (q->lchild == NULL && q->rchild == NULL)
      *temp = NULL;
    else if (q->lchild == NULL && q->rchild != NULL)
      *temp = q->rchild;
    else if (q->lchild != NULL && q->rchild == NULL)
      *temp = q->lchild;
    else
    {
      s = q->rchild;
      while (s->lchild)
	s = s->lchild;
      s->lchild = q->lchild;
      *temp = q->rchild;
    }
  }
  return flag;
}

int main()
{
  NodeType *t = NULL;
  NodeType *p, *q;
  datatype kx;
  //Insert_Node(&t, 63);
  for (int i = 0; i < 11; i++)
  {
    scanf("%d", &kx);
    Insert_Node(&t, kx);
  }
  Pre_Order(t);
  printf("\n");
  In_Order(t);
  printf("\n");
  BiTree_Search(t, &p, &q, 64);
  if (q != NULL)
    printf("data %d found!\n", q->data);
  else
    printf("data not found!\n");
  printf("%d\n", Delete_Node1(&t, 64));
  In_Order(t);
  printf("\n");
  Destroy_BiTree(t);
  return 0;
}
