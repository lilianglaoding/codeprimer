#include <stdio.h>
#include <stdlib.h>

#include "sequeue.h"

SeQueue *Init_Queue()
{
  SeQueue *q = (SeQueue *)malloc(sizeof(SeQueue));
  if (q == NULL)
    return NULL;
  q->num = 0;
  q->front = q->rear = -1;
  return q;
}

int Empty_Queue(SeQueue *q)
{
  return (q->num == 0);
}

int Push_Queue(SeQueue *q, datatype x)
{
  if (q->num == MAXSIZE - 1)
    return 0;
  q->num++;
  q->rear = (q->rear + 1) % MAXSIZE;
  q->data[q->rear] = x;
  return 1;
}

int Pop_Queue(SeQueue *q)
{
  if (Empty_Queue(q))
    return 0;
  q->num--;
  q->front = (q->front + 1) % MAXSIZE;
  return 1;
}

datatype Top_Queue(SeQueue *q)
{
  if (Empty_Queue(q))
    return 0;
  return q->data[q->front];
}

void Destroy_Queue(SeQueue *q)
{
  if (q == NULL)
    return ;
  free(q);
  int *p = NULL;
  free(p);
}

void Print_Queue(SeQueue *q)
{
  int temp = ++q->front;
  while (temp != q->rear)
    printf("%d ", q->data[temp++]);
  printf("\n");
}

int main()
{
  SeQueue *q;
  q = Init_Queue();
  for (int i = 0; i < 6; i++)
    Push_Queue(q, i);
  Print_Queue(q);
  Destroy_Queue(q);
}
