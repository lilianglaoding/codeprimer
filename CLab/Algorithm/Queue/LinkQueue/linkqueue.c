#include <stdio.h>
#include <stdlib.h>

#include "linkqueue.h"

LQueue *Init_Queue()
{
  LQueue *q;
  QNode *p;
  q = (LQueue *)malloc(sizeof(LQueue));
  p = (QNode *)malloc(sizeof(QNode));
  q->front = q->rear = p;
  p->next = NULL;
  return q;
}

int Empty_Queue(LQueue *q)
{
  if (q->front == q->rear)
    return 1;
  else
    return 0;
}

int Push_Queue(LQueue *q, datatype x)
{
  QNode *s;
  s = (QNode *)malloc(sizeof(QNode));
  if (s == NULL)
    return 0;
  s->data = x;
  s->next = NULL;
  q->rear->next = s;
  q->rear = s;
  return 1;
}

datatype Top_Queue(LQueue *q)
{
  if (Empty_Queue(q))
    return 0;
  return q->front->next->data;
}

int Pop_Queue(LQueue *q)
{
  if (Empty_Queue(q))
    return 0;
  QNode *p;
  p = q->front->next;
  q->front->next = p->next;
  if (p == q->rear)
    q->rear = q->front;
  free(p);
  return 1;
}

void Print_Queue(LQueue *q)
{
  QNode *p = q->front->next;
  while (p)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

void Destroy_Queue(LQueue *q)
{
  QNode *p, *s;
  p = q->front;
  while (p)
  {
    s = p;
    p = p->next;
    free(s);
  }
  free(q);
}

int main()
{
  LQueue *q = Init_Queue();
  if (q == NULL)
    return 1;
  for (int i = 0; i < 6; i++)
    Push_Queue(q, i);
  Print_Queue(q);
  Pop_Queue(q);
  Print_Queue(q);
  Destroy_Queue(q);
  return 0;
}
