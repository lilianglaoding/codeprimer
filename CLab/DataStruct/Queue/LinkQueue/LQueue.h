#ifndef LQUEUE_H
#define LQUEUE_H

typedef struct node
{
  int data;
  struct node *next;
} QNode;

//we didn't define front and rear in QNode, because every node need not have a front and a rear
typedef struct
{
  QNode *front, *rear;
} LQueue;

#endif
