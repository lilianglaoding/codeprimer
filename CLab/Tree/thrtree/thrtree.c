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
