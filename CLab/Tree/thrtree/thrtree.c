#include <stdio.h>
#include <stdlib.h>

#include "thrtree.h"

BiThrTree pre;

// create head pointer

int InOrderThr(BiThrTree *head, BiThrTree T)
{
  if (!((*head) = (BiThrNode *)malloc(sizeof(BiThrNode))))
    return 0;
  (*head)->ltag = 0;
  (*head)->rtag = 1;
  (*head)->rchild = *head;
  if (!T)
    (*head)->lchild = *head;
  else
  {
    (*head)->lchild = T;
    pre = *head;
    InThreading(T);
    pre->rchild = *head;
    pre->rtag = 1;
    (*head)->rchild = pre;
  }
  return 1;
}

// inthreading inorder tree

void InOrderThreading(BiThrTree T)
{
  if (T)
  {
    InOrderThreading(T->lchild);
    if (!T->lchild)
    {
      T->lchild = pre;
      T->ltag = 1;
    }
    if (!pre->rchild)
    {
      pre->rchild = T;
      pre->rtag = 1;
    }
    pre = T;
    InOrder(T->rchild);
  }
}

BiThrTree InPreNode(BiThrTree p)
{
  BiThrTree pre;
  pre = p->lchild;
  if (p->ltag != 1)
  {
    while (pre->rtag != 1)
      pre = pre->rchild;
  }
  return pre;
}

BiThrTree InPostNode(BiThrTree p)
{
  BiThrTree post;
  post = p->rchild;
  if (p->rtag != 1)
  {
    while (post->ltag != 1)
      post = post->lchild;
  }
  return post;
}

BiThrTree IPrePostNode(BiThrTree head, BiThrTree p)
{
  BiThrTree post;
  if (p->ltag == 0)
    post = p->lchild;
  else
  {
    post = p;
    while (post->rtag != 1 && post->rchild != head)
      post = post->rchild;
    post = post->rchild;
  }
  return post;
}

BiThrTree IPostPreNode(BiThrTree head, BiThrTree p)
{
  BiThrTree pre;
  if (p->rtag == 0)
    pre = p->rchild;
  else
  {
    pre = p;
    while (pre->ltag != 0 && pre->lchild != head)
      pre = pre->lchild;
    pre = pre->lchild;
  }
  return pre;
}

BiThrTree Search(BiThrTree head, datatype x)
{
  BiThrTree p;
  p = head->lchild;
  while (p->ltag == 0 && p->lchild != head)
    p = p->lchild;
  while (p->rchild != head && p->data != x)
    p = InPostNode(p);
  if (p == head)
    return NULL;
  else
    return p;
}

void InsertThrRight(BiThrTree s, BiThrTree p)
{
  BiThrTree w;
  p->rchild = s->rchild;
  p->rtag = s->rtag;
  p->lchild = s;
  p->lchild = 1;
  s->rchild = p;
  s->rtag = 0;
  if (p->rtag == 0)
  {
    w = InPostNode(p);
    w->lchild = p;
  }
}
