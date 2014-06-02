#include <stdio.h>
#include <stdlib.h>

#include "LQueue.h"

LQueue *Init_Queue()
{
  QNode *p = (QNode *)malloc(sizeof(QNode));
  LQueue *q = (LQueue *)malloc(sizeof(LQueue));
  p->next = NULL;
  q->front = q->rear = p;
  return q;
}

int Empty_Queue(LQueue *q)
{
  return (q->front == q->rear);
}

int In_Queue(LQueue *q, int x)
{
  QNode *p = (QNode *)malloc(sizeof(QNode));
  if (p == NULL)
    return 0;
  p->data = x;
  p->next = NULL;
  q->rear->next = p;
  q->rear = p;
  return 1;
}

int Out_Queue(LQueue *q, int *x)
{
  if (Empty_Queue(q))
    return 0;
  QNode *p = q->front->next;
  *x = p->data;
  q->front->next = p->next;
  free(p);
  if (q->front->next == NULL)
    q->rear = q->front;
  return 1;
}

void Destroy_Queue(LQueue *q)
{
  QNode *p = q->front;
  QNode *ptr = NULL;
  while (!p)
  {
    ptr = p;
    p = p->next;
    free(p);
  }
  free(q);
}

int main()
{
  LQueue *q = Init_Queue();
  int x = 0;
  int is_empty = Empty_Queue(q);
  if (is_empty)
    printf("the queue is empty\n");
  else
    printf("the queue is not empty\n");
  for (int i = 0; i < 10; ++i)
  {
    In_Queue(q, i);
  }
  Out_Queue(q, &x);
  printf("the out data is: %d\n", x);
  Out_Queue(q, &x);
  printf("the out data is: %d\n", x);
  Destroy_Queue(q);
  return 0;
}
